using UnityEngine;
using UnityEngine.EventSystems;

public class RawImageHandler : MonoBehaviour, IPointerClickHandler
{
    public Camera targetCamera;    // Kamera renderuj�ca scen� z przyciskiem
    public RectTransform buttonRectTransform; // RectTransform przycisku w scenie kamery
    public GameObject Panel;
    public void OnPointerClick(PointerEventData eventData)
    {
        RectTransform rawImageRect = GetComponent<RectTransform>();

        // Przekszta�� pozycj� klikni�cia na lokaln� pozycj� w RawImage
        Vector2 localClickPosition;
        if (RectTransformUtility.ScreenPointToLocalPointInRectangle(rawImageRect, eventData.position, eventData.pressEventCamera, out localClickPosition))
        {
            // Normalizuj pozycj� do wymiar�w RawImage
            Vector2 normalizedPosition = Rect.PointToNormalized(rawImageRect.rect, localClickPosition);

            // Przelicz pozycj� do koordynat�w kamery
            Vector2 cameraPoint = new Vector2(normalizedPosition.x * targetCamera.pixelWidth, normalizedPosition.y * targetCamera.pixelHeight);

            // Sprawd�, czy klikni�cie wpad�o na obszar przycisku w przestrzeni kamery
            if (RectTransformUtility.RectangleContainsScreenPoint(buttonRectTransform, cameraPoint, targetCamera))
            {
                // Wykonaj akcj� przycisku (symulacja klikni�cia)
                Debug.Log("Kliknieto przycisk w scenie kamery.");
                PlayerPrefs.SetInt("panelStatus", 1);
                PlayerPrefs.SetInt("panelCzynnosc", 1);
            }
        }
    }
}
