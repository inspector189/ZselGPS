using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using TMPro;

public class Floor : MonoBehaviour
{
    [SerializeField] private GameObject floorGOs;
    [SerializeField] private GameObject roomButton;
    [SerializeField] private Sprite floorSprites;
    [SerializeField] private RectTransform supportArea;
    [SerializeField] private Image map;
    [SerializeField] private List<RectTransform> classRoomButtons = new List<RectTransform>();
    private Vector2 originGeoCoordinates;
    private Vector2 geoCoordinates;
    private float mapScale = 50f;

   // const double origin_lati = 52.668395f;  //współrzędne środka obszaru szkoły (tak +/- nie są dokładne)
   // const double origin_longi = 19.042718f;  // -||-
    const double r = 6371.0f; //średni promień równika - 6371 km / tu w metrach

    void Start()
    {
        AddToTheButtonsList();
    }
    public void SetFloor(int floorIndex, RectTransform personInterpolated, AveragePosition avg, Vector2 velocity, Vector2 geoCoordinates)
    {
        floorGOs.SetActive(true);
        PlayerPrefs.SetInt("pietro", floorIndex);
        map.sprite = floorSprites;
        CalcPosition(personInterpolated, avg, velocity, geoCoordinates);
    }
    public bool IsColliding(RectTransform rect1, RectTransform rect2)
    {
        Rect rect1Bounds = GetWorldSpaceRect(rect1);
        Rect rect2Bounds = GetWorldSpaceRect(rect2);

        return rect1Bounds.Overlaps(rect2Bounds);
    }
    public void UpdatePosition(RectTransform personInterpolated, RectTransform personReal, AveragePosition avg, Vector2 velocity)
    {
        personReal.position = CalcPosition(personInterpolated, avg, velocity, geoCoordinates);
        if (IsColliding(personInterpolated, supportArea))
        {
            Debug.Log("Sprawdziliśmy właśnie kolizje!");
                Vector2 newPosition = FindClosestEdgePosition(personInterpolated);
                Debug.Log("Tutaj ustalamy nową pozycję dla tej interpoalted" + newPosition);
                if (newPosition != Vector2.zero)
                {
                    personReal.position = new Vector3(newPosition.x, newPosition.y, personReal.position.z);
                    Debug.Log("Pozycja personki to:" + personInterpolated.position);
                }
        }
    }

    public Vector2 CalcPosition(RectTransform personInterpolated, AveragePosition avg, Vector2 velocity, Vector2 geoCoordinates)
    {
        double latitude = 52.668395;
        double longitude = 19.042718;

        // Oblicz odległość w metrach od punktu zerowego na mapie
        float xMap = (float)((longitude - Input.location.lastData.longitude) * r * Math.Cos(Input.location.lastData.latitude * Math.PI / 180));
        float yMap = (float)((latitude - Input.location.lastData.latitude) * r);
        Vector3 screenPosition = new Vector3(xMap / mapScale, yMap / mapScale, 0f);
        /*   Vector2 act = avg.GetAveragePosition();
        act.x = Pozycja_X_na_mapie;
        act.y = Pozycja_Y_na_mapie; 
        pozycja_na_mapie = new Vector2(act.x, act.y); */
        if (PlayerPrefs.GetInt("sum10Accuracy") == 0)
        {
            return screenPosition; //geoOffset - przesunięcie geograficzne w skrócie
        }
        else
        {
            Vector2 currentPosition = new Vector2(personInterpolated.transform.position.x, personInterpolated.transform.position.y) + velocity;
            Vector2 targetPosition = screenPosition / 50f;

            float interpolationFactor = 1f;
            Vector2 newPosition = Vector2.Lerp(currentPosition, targetPosition, interpolationFactor);
            return newPosition;
        }
    }
    
    public Vector2 FindClosestEdgePosition(RectTransform personInterpolated)
    {
        Vector2 closestPosition = Vector2.zero;
        float minDistance = float.MaxValue;
        foreach (var obj in classRoomButtons)
        {
            Vector2 closestPoint = ClosestPointOnRect(obj, personInterpolated.position);
            float distance = Vector2.Distance(personInterpolated.position, closestPoint);
            if (distance < minDistance) // min z predykatem - następny mentoring!
            {
                minDistance = distance;
                closestPosition = closestPoint;
            }
  //          Debug.Log("Najbliży button to: " + obj + " a jego pozycja to: " + obj.position);
        }
        return closestPosition;
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
