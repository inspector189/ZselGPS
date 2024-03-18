using System.Collections.Generic;
using UnityEngine;

public class WspieraniePerson : MonoBehaviour
{
    public RectTransform personRect; // Persona
    public RectTransform ObszarWsparcia; // Obszar wsparcia
    public List<RectTransform> parterList;

    void Update()
    {
        if (IsColliding(personRect, ObszarWsparcia))
        {
            Debug.Log("Obraz 1 jest zawarty w obrazie 2");

            if (PlayerPrefs.GetInt("pietro") == 0 && !parterList.Contains(personRect))
            {
                Vector2 newPosition = FindClosestEdgePosition();
                if (newPosition != Vector2.zero)
                {
                    Debug.Log("Najbli¿sza pozycja krawêdzi dla persony: " + newPosition);
                    personRect.position = new Vector3(newPosition.x, newPosition.y, personRect.position.z);
                }
            }
        }
        else
        {
            Debug.Log("Obraz 1 nie jest zawarty w obrazie 2");
        }
    }

    Vector2 FindClosestEdgePosition()
    {
        Vector2 closestPosition = Vector2.zero;
        float minDistance = float.MaxValue;

        foreach (var obj in parterList)
        {
            Vector2 closestPoint = ClosestPointOnRect(obj, personRect.position);
            float distance = Vector2.Distance(personRect.position, closestPoint);
            if (distance < minDistance)
            {
                minDistance = distance;
                closestPosition = closestPoint;
            }
        }

        return closestPosition;
    }

    Vector2 ClosestPointOnRect(RectTransform rectTransform, Vector2 point)
    {
        Rect rect = GetWorldSpaceRect(rectTransform);
        float x = Mathf.Clamp(point.x, rect.xMin, rect.xMax);
        float y = Mathf.Clamp(point.y, rect.yMin, rect.yMax);

        return new Vector2(x, y);
    }

    bool IsColliding(RectTransform rect1, RectTransform rect2)
    {
        Rect rect1Bounds = GetWorldSpaceRect(rect1);
        Rect rect2Bounds = GetWorldSpaceRect(rect2);

        return rect1Bounds.Overlaps(rect2Bounds);
    }

    Rect GetWorldSpaceRect(RectTransform rectTransform)
    {
        // Pobierz pozycjê i rozmiar RectTransform w globalnej przestrzeni
        Vector2 sizeDelta = rectTransform.sizeDelta;
        Vector2 position = rectTransform.position;

        float width = sizeDelta.x * rectTransform.lossyScale.x;
        float height = sizeDelta.y * rectTransform.lossyScale.y;

        return new Rect(position.x - width * rectTransform.pivot.x,
                        position.y - height * rectTransform.pivot.y,
                        width, height);
    }
}
