using System.Collections;
using System;
using System.Collections.Generic;
using UnityEngine;
using Unity.VisualScripting;
using UnityEngine.Android;
using UnityEngine.UI;

public class Floor : MonoBehaviour
{
    public List<GameObject> floorGOs;
    public List<Sprite> floorSprites;
    public List<RectTransform> supportArea = new List<RectTransform>();
    public Image mapa;
    public List<RectTransform> parterList = new List<RectTransform>();
    public List<RectTransform> pietro1List = new List<RectTransform>(); // Lista obiektów do sprawdzenia
    public List<RectTransform> pietro2List = new List<RectTransform>(); // Lista obiektów do sprawdzenia
    public Func<Vector2> calcPositionFunc;

    public Floor(List<GameObject> floorGOs, List<Sprite> floorSprites, List<RectTransform> supportArea, Image mapa, List<RectTransform> parterList, List<RectTransform> pietro1List, List<RectTransform> pietro2List, Func<Vector2> calcPosition)
    {
        this.floorGOs = floorGOs;
        this.floorSprites = floorSprites;
        this.mapa = mapa;
        this.parterList = parterList;
        this.pietro1List = pietro1List;
        this.pietro2List = pietro2List;
        this.supportArea = supportArea;
        calcPositionFunc = calcPosition;
    }

    public void SetFloor(int floorIndex)
    {
        for (int i = 0; i < floorGOs.Count; i++)
        {
            floorGOs[i].SetActive(i == floorIndex);
        }
        PlayerPrefs.SetInt("pietro", floorIndex);
        mapa.sprite = floorSprites[floorIndex];
    }
    public bool IsColliding(RectTransform rect1, RectTransform rect2)
    {
        Rect rect1Bounds = GetWorldSpaceRect(rect1);
        Rect rect2Bounds = GetWorldSpaceRect(rect2);

        return rect1Bounds.Overlaps(rect2Bounds);
    }
    public void UpdatePosition(RectTransform personRect2, RectTransform personRect)
    {
        bool isInSupportArea = (PlayerPrefs.GetInt("pietro") == 2 && IsColliding(personRect2, supportArea[1])) ||
                               (PlayerPrefs.GetInt("pietro") <= 1 && IsColliding(personRect2, supportArea[0]));
        bool isOnParter = parterList.Contains(personRect2);

        if (isInSupportArea && !isOnParter)
        {
            Vector2 newPosition = FindClosestEdgePosition(personRect2);
            if (newPosition != Vector2.zero)
            {
                personRect.position = new Vector3(newPosition.x, newPosition.y, personRect.position.z);
            }
        }
        else
        {
            Vector2 calcPosition = calcPositionFunc();
            personRect.position = new Vector3(calcPosition.x, calcPosition.y, personRect.position.z);
        }
    }
    public Vector2 FindClosestEdgePosition(RectTransform personRect2)
    {
        Vector2 closestPosition = Vector2.zero;
        float minDistance = float.MaxValue;

        List<RectTransform> currentList = null;
        if (PlayerPrefs.GetInt("pietro") == 0)
            currentList = parterList;
        else if (PlayerPrefs.GetInt("pietro") == 1)
            currentList = pietro1List;
        else if (PlayerPrefs.GetInt("pietro") == 2)
            currentList = pietro2List;

        if (currentList != null)
        {
            foreach (var obj in currentList)
            {
                Vector2 closestPoint = ClosestPointOnRect(obj, personRect2.position);
                float distance = Vector2.Distance(personRect2.position, closestPoint);
                if (distance < minDistance)
                {
                    minDistance = distance;
                    closestPosition = closestPoint;
                }
            }
        }
        return closestPosition;
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
    
}
