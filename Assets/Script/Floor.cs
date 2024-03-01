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
    const double origin_lati = 52.668395f;  //współrzędne środka obszaru szkoły (tak +/- nie są dokładne)
    const double origin_longi = 19.042718f;  // -||-
    const double r = 6371000.0f; //średni promień równika - 6371 km / tu w metrach

    void Start()
    {
        AddToTheButtonsList();
    }
    public void SetFloor(int floorIndex)
    {
        floorGOs.SetActive(true);
        PlayerPrefs.SetInt("pietro", floorIndex);
        map.sprite = floorSprites;
    }
    public bool IsColliding(RectTransform rect1)
    {
        Rect rect1Bounds = GetWorldSpaceRect(rect1);
        Rect rect2Bounds = GetWorldSpaceRect(supportArea);

        return rect1Bounds.Overlaps(rect2Bounds);
    }
    public void UpdatePosition(RectTransform personInterpolated, RectTransform personReal, AveragePosition avg, Vector2 velocity)
    {
        Debug.Log("NIE DZIAŁA!");
        if (IsColliding(personInterpolated))
        {          
            Vector2 newPosition = FindClosestEdgePosition(personInterpolated);  
            if (newPosition != Vector2.zero)
            {
                personReal.position = new Vector3(newPosition.x, newPosition.y, personReal.position.z);
                Debug.Log("prpos:" + personInterpolated.position);
                Debug.Log("Calcpos:" + newPosition);
            }
        }
        else
        {
            Vector2 calcPosition = CalcPosition(personInterpolated, avg, velocity);
            personReal.position = new Vector3(calcPosition.x, calcPosition.y, personReal.position.z);
            Debug.Log("prpos:" + personReal.position);
            Debug.Log("Calcpos:" + calcPosition);
        }
    }

    public Vector2 CalcPosition(RectTransform personInterpolated, AveragePosition avg, Vector2 velocity)
    {
        Vector2 act = avg.GetAveragePosition();
        double rlong = 111200.0f; // Jeden stopień łuku południka ma długość ok. 111,2 km lub 111200 metrów.
        double ralt = Math.Cos(Mathf.Deg2Rad * act.y) * Mathf.Deg2Rad * r;
        Vector2 geoOffset = new Vector2(((float)((act.x - origin_longi) * ralt) + 700), ((float)((act.y - origin_lati) * rlong))); //wzór na przekształcenie długości/szerokości geograficznej na odległość w metrach na powierzchni Ziemi
        Debug.Log(PlayerPrefs.GetInt("sum10Accuracy"));
        if (PlayerPrefs.GetInt("sum10Accuracy") == 0)
        {
            Debug.Log("GBS");
            return geoOffset / 50f; //geoOffset - przesunięcie geograficzne w skrócie
        }
        else
        {
            Debug.Log("Interpolacja");
            Vector2 currentPosition = new Vector2(personInterpolated.transform.position.x, personInterpolated.transform.position.y) + velocity;
            Vector2 targetPosition = geoOffset / 50f;

            float interpolationFactor = 1f;
            Vector2 newPosition = Vector2.Lerp(currentPosition, targetPosition, interpolationFactor);
            return newPosition;
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
        RectTransform closestButton = classRoomButtons.OrderBy(button => Distance_Person(button)).First();
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
            RectTransform[] buttonRects = roomButton.GetComponentsInChildren<RectTransform>();
            bool buttons0Added = false;
            foreach (var buttonRect in buttonRects)
            {
                if (buttonRect.gameObject.name != roomButton.name)
                {
                    if (!buttons0Added)
                    {
                        classRoomButtons.Add(buttonRect);
                        buttons0Added = true;
                    }
                    else
                    {
                        classRoomButtons.Add(buttonRect);
                    }
                }
            }
            for (int i = 1; i < classRoomButtons.Count; i++)
            {
                classRoomButtons[i - 1] = classRoomButtons[i];
            }
        }  
    }
}
