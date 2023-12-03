using UnityEngine;
using UnityEngine.EventSystems;

public class RawImageHandler : MonoBehaviour, IPointerClickHandler
{
    public Camera targetCamera;    // Kamera renderuj¹ca scenê z przyciskiem
    public RectTransform buttonRectTransform; // RectTransform przycisku w scenie kamery

    public void OnPointerClick(PointerEventData eventData)
    {
        RectTransform rawImageRect = GetComponent<RectTransform>();

        // Przekszta³æ pozycjê klikniêcia na lokaln¹ pozycjê w RawImage
        Vector2 localClickPosition;
        if (RectTransformUtility.ScreenPointToLocalPointInRectangle(rawImageRect, eventData.position, eventData.pressEventCamera, out localClickPosition))
        {
            // Normalizuj pozycjê do wymiarów RawImage
            Vector2 normalizedPosition = Rect.PointToNormalized(rawImageRect.rect, localClickPosition);

            // Przelicz pozycjê do koordynatów kamery
            Vector2 cameraPoint = new Vector2(normalizedPosition.x * targetCamera.pixelWidth, normalizedPosition.y * targetCamera.pixelHeight);

            // SprawdŸ, czy klikniêcie wpad³o na obszar przycisku w przestrzeni kamery
            if (RectTransformUtility.RectangleContainsScreenPoint(buttonRectTransform, cameraPoint, targetCamera))
            {
                // Wykonaj akcjê przycisku (symulacja klikniêcia)
                Debug.Log("Klikniêto przycisk w scenie kamery.");
                // Tutaj umieœæ logikê, która ma byæ wykonana po klikniêciu na przycisk
            }
        }
    }
}
