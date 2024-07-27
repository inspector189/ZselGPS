using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using TMPro;
using static Unity.Burst.Intrinsics.X86;
using Unity.VisualScripting;

public class Floor : MonoBehaviour
{
    [SerializeField] private GameObject floorGOs;
    [SerializeField] private GameObject roomButton;
    [SerializeField] private GameObject corridorsButton;
    [SerializeField] private List<RectTransform> corridors = new List<RectTransform>();
    [SerializeField] private Sprite floorSprites;
    [SerializeField] private RectTransform supportArea;
    [SerializeField] private Image map;
    public float speed = 1.0f;
    [SerializeField] private List<RectTransform> classRoomButtons = new List<RectTransform>();
    private float lon;
    private float lat;
    public float initialVelocity = 0f;
    private float velocityA = 0f;
    private float distance = 0f;
    private float timeInterval = 1f;
    private float elapsedTime = 0f;
    private Vector3 accelerometerValue;
    [SerializeField]
    private GameObject personInterpolated;
    // const double origin_lati = 52.668395f;  //współrzędne środka obszaru szkoły (tak +/- nie są dokładne)
    // const double origin_longi = 19.042718f;  // -||-
    const double r = 6371.0f; //średni promień równika - 6371 km / tu w metrach

    void Start()
    {
        AddToTheButtonsList();
        AddToTheCorridorsList();
    }
    public void SetFloor(int floorIndex, RectTransform personInterpolated, AveragePosition avg, Vector2 velocity, Vector2 geoCoordinates, Vector2 lastPosition)
    {
        floorGOs.SetActive(true);
        PlayerPrefs.SetInt("pietro", floorIndex);
        map.sprite = floorSprites;
       // CalcPosition(personInterpolated, velocity, lastPosition);
    }
    public bool IsColliding(RectTransform rect1, RectTransform rect2)
    {
        Rect rect1Bounds = GetWorldSpaceRect(rect1);
        Rect rect2Bounds = GetWorldSpaceRect(rect2);

        return rect1Bounds.Overlaps(rect2Bounds);
    }
    
    public void UpdatePosition(RectTransform personInterpolated, RectTransform personReal, Vector2 velocity, Vector2 lastPosition)
    {
        //personReal.position = CalcPosition(personInterpolated, velocity, lastPosition);
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
    private void Update()
    {
        lat = Input.location.lastData.latitude;
        lon = Input.location.lastData.longitude;
    }
    public Vector2 CalcPosition(RectTransform personInterpolated, Vector2 velocity, Vector2 lastPosition)
    {
        LocationInfo currentLocation = Input.location.lastData;

        // Przykładowo zmień pozycję obiektu w Unity na podstawie szerokości geograficznej i długości geograficznej
        // Możesz dostosować to mapowanie do potrzeb twojej aplikacji
        Vector3 newPosition2 = new Vector3(currentLocation.latitude, currentLocation.longitude, 0);
        // Zwróć nową pozycję jako Vector2 (ignorując składową Z, ponieważ używamy Vector2)
        personInterpolated.anchoredPosition = Vector3.Lerp(transform.position, newPosition2, Time.deltaTime * speed);

        if (PlayerPrefs.GetInt("sum10Accuracy") == 0)
        {
            double x2 = 19.04371892765748;
            double x1 = 19.041285353040706;
            double y2 = 52.66901856963243;
            double y1 = 52.6685644858482;
            double yp1 = 59;
            double yp2 = 331;
            double xp1 = 2572;
            double xp2 = 3367;
            float x3 = lon;
            float y3 = lat;
            double SkalaX = (x2 - x1) / (xp2 - xp1) * 335500;  // 0,00018/432 = 4,166666666666667e-7
            double xp3 = xp1 + (x3 - x1) / (x2 - x1) * SkalaX * (xp2 - xp1);
            double SkalaY = (y2 - y1) / (yp2 - yp1) * 450000;
            double yp3 = yp1 + (y3 - y1) / (y2 - y1) * SkalaY * (yp2 - yp1);
            personInterpolated.anchoredPosition = Vector2.zero;
            personInterpolated.anchoredPosition = new Vector3((float)xp3, (float)yp3, 0);
            return personInterpolated.anchoredPosition; //geoOffset - przesunięcie geograficzne w skrócie
        }
        else
        {
            accelerometerValue = Input.acceleration;
            float averageAcceleration = Mathf.Sqrt(accelerometerValue.x * accelerometerValue.x + accelerometerValue.y * accelerometerValue.y);
            Debug.Log("X: " + accelerometerValue.x);
            Debug.Log("Y: " + accelerometerValue.y);
            Debug.Log("average Acceleration: " + averageAcceleration);
            velocityA = initialVelocity + averageAcceleration * elapsedTime;
            Debug.Log("Velocity:" + velocity);
            float deltaDistance = initialVelocity * elapsedTime + 0.5f * averageAcceleration * elapsedTime * elapsedTime;
            if (accelerometerValue.x > 0)
            {
                distance += deltaDistance;
            }
            else if (accelerometerValue.x < 0)
            {
                distance -= deltaDistance;
            }
            else
            {
                distance = deltaDistance;
            }
            Debug.Log("distance: " + distance);
            elapsedTime += Time.deltaTime;

            if (elapsedTime >= timeInterval)
            {
                elapsedTime = 0f;

                //initialVelocity = velocity;

            }
            personInterpolated.anchoredPosition = new Vector3(distance / 10f, 0f, 0f);
            return personInterpolated.anchoredPosition;

        }
    }
    
    public Vector2 FindClosestEdgePosition(RectTransform personInterpolated)
    {
        float Distance_Person(RectTransform button)
        {
            Vector2 closestPoint = ClosestPointOnRect(button, personInterpolated.position);
            float distance = Vector2.Distance(personInterpolated.position, closestPoint);
            return distance;
        }
        RectTransform closestButton = corridors.OrderBy(button => Distance_Person(button)).First();
        return closestButton.position;
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
    private void AddToTheCorridorsList()
    {
        if(corridorsButton != null)
        {
            corridors = corridorsButton.GetComponentsInChildren<RectTransform>().Skip(1).ToList();
        }
    }
}
