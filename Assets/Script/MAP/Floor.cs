using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using TMPro;
using static Unity.Burst.Intrinsics.X86;

public class Floor : MonoBehaviour
{
    [SerializeField] private GameObject floorGOs;
    [SerializeField] private GameObject roomButton;
    [SerializeField] private Sprite floorSprites;
    [SerializeField] private RectTransform supportArea;
    [SerializeField] private Image map;
    public float speed = 1.0f;
    [SerializeField] private List<RectTransform> classRoomButtons = new List<RectTransform>();
    private Vector3 centerPointGeoCoordinates = new Vector3(52.668395f, 19.042718f, 0f);
    private float mapScale = 25f;

   // const double origin_lati = 52.668395f;  //współrzędne środka obszaru szkoły (tak +/- nie są dokładne)
   // const double origin_longi = 19.042718f;  // -||-
    const double r = 6371.0f; //średni promień równika - 6371 km / tu w metrach

    void Start()
    {
        AddToTheButtonsList();
    }
    public void SetFloor(int floorIndex, RectTransform personInterpolated, AveragePosition avg, Vector2 velocity, Vector2 geoCoordinates, Vector2 lastPosition)
    {
        floorGOs.SetActive(true);
        PlayerPrefs.SetInt("pietro", floorIndex);
        map.sprite = floorSprites;
        CalcPosition(personInterpolated, avg, velocity, geoCoordinates, lastPosition);
    }
    public bool IsColliding(RectTransform rect1, RectTransform rect2)
    {
        Rect rect1Bounds = GetWorldSpaceRect(rect1);
        Rect rect2Bounds = GetWorldSpaceRect(rect2);

        return rect1Bounds.Overlaps(rect2Bounds);
    }
    public void UpdatePosition(RectTransform personInterpolated, RectTransform personReal, AveragePosition avg, Vector2 velocity, Vector2 lastPosition)
    {
        personReal.position = CalcPosition(personInterpolated, avg, velocity, centerPointGeoCoordinates, lastPosition);
        if (IsColliding(personInterpolated, supportArea))
        {
           foreach (RectTransform roomButton in classRoomButtons)
            {
                if(!IsColliding(personInterpolated, roomButton))
                {
                    Vector2 newPosition = FindClosestEdgePosition(personInterpolated);
                    if (newPosition != Vector2.zero)
                    {
                        personInterpolated.position = new Vector3(newPosition.x, newPosition.y, personReal.position.z);
                    }
                    break; // Przerwij pętlę, gdy zostanie znaleziona kolizja z jednym z pokojów
                }
            } 
        }
    }

    public Vector2 CalcPosition(RectTransform personInterpolated, AveragePosition avg, Vector2 velocity, Vector3 geoCoordinates, Vector2 lastPosition)
    {
        LocationInfo currentLocation = Input.location.lastData;

        // Przykładowo zmień pozycję obiektu w Unity na podstawie szerokości geograficznej i długości geograficznej
        // Możesz dostosować to mapowanie do potrzeb twojej aplikacji
        Vector3 newPosition2 = new Vector3(currentLocation.latitude, currentLocation.longitude, 0);
        // Zwróć nową pozycję jako Vector2 (ignorując składową Z, ponieważ używamy Vector2)
        personInterpolated.position = Vector3.Lerp(transform.position, newPosition2, Time.deltaTime * speed);

        if (PlayerPrefs.GetInt("sum10Accuracy") == 0)
        {
            return personInterpolated.position; //geoOffset - przesunięcie geograficzne w skrócie
        }
        else
        {
            Vector2 currentPosition = new Vector2(personInterpolated.transform.position.x, personInterpolated.transform.position.y) + velocity;
            Vector2 targetPosition = personInterpolated.position / 50f;

            float interpolationFactor = 1f;
            Vector2 newPosition = Vector2.Lerp(currentPosition, targetPosition, interpolationFactor);
            return newPosition;
        }
    }
    
    public Vector2 FindClosestEdgePosition(RectTransform personInterpolated)
    {
        float Distance_Person(RectTransform button)
        {
            Debug.Log("Patrzymy na dystans!");
            Vector2 closestPoint = ClosestPointOnRect(button, personInterpolated.position);
            float distance = Vector2.Distance(personInterpolated.position, closestPoint);
            return distance;
        }
        RectTransform closestButton = classRoomButtons.OrderBy(button => Distance_Person(button)).First();
        Debug.Log("Najbliży button to: " + closestButton + " a jego pozycja to: " + closestButton.position);
        return closestButton.position;
        /*
        Debug.Log("Szukamy najbliższej krawędzi!");
        float Distance_Person(RectTransform button)
        {
            Debug.Log("Patrzymy na dystans!");
            Vector2 closestPoint = ClosestPointOnRect(button, personInterpolated.position);
            float distance = Vector2.Distance(personInterpolated.position, closestPoint);
            return distance;
        }
        RectTransform closestButton = classRoomButtons.OrderBy(button => Distance_Person(button)).First();
        Debug.Log("Najbliży button to: " + closestButton + " a jego pozycja to: " + closestButton.position);
        return closestButton.position; */
    }
    private Vector2 ClosestPointOnRect(RectTransform rectTransform, Vector2 point)
    {
        Rect rect = GetWorldSpaceRect(rectTransform);
        float x = Mathf.Clamp(point.x, rect.xMin, rect.xMax);
        float y = Mathf.Clamp(point.y, rect.yMin, rect.yMax);

        return new Vector2(x, y);
    }

    private Rect GetWorldSpaceRect(RectTransform rectTransform)
    {
        Vector2 sizeDelta = rectTransform.sizeDelta;
        Vector2 position = rectTransform.position;

        float width = sizeDelta.x * rectTransform.lossyScale.x;
        float height = sizeDelta.y * rectTransform.lossyScale.y;

        return new Rect(position.x - width * rectTransform.pivot.x,
                        position.y - height * rectTransform.pivot.y,
                        width, height);
    }
    private void AddToTheButtonsList()
    {
        if (roomButton != null)
        {
            classRoomButtons = roomButton.GetComponentsInChildren<RectTransform>().Skip(1).ToList();         
        }  
    }
}
