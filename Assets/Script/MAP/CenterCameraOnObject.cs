using UnityEngine;

public class CenterCameraOnObject : MonoBehaviour
{
    public Camera cameraToMove;
    public GameObject objectToCenter;
    public GameObject object2;

    public void CenterCamera()
    {
        if (cameraToMove != null && objectToCenter != null && object2 != null)
        {
            RectTransform rectTransformToCenter = objectToCenter.GetComponent<RectTransform>();
            RectTransform rectTransform2 = object2.GetComponent<RectTransform>();

            // Konwersja pozycji obiektu do punktu na ekranie
            Vector2 screenPoint = RectTransformUtility.WorldToScreenPoint(cameraToMove, rectTransformToCenter.position);

            // Sprawdzenie, czy punkt znajduje siê w granicach RectTransform object2
            if (RectTransformUtility.RectangleContainsScreenPoint(rectTransform2, screenPoint, cameraToMove))
            {
                // Ustaw pozycjê kamery na pozycjê obiektu z zachowaniem odleg³oœci Z
                cameraToMove.transform.position = new Vector3(rectTransformToCenter.position.x, rectTransformToCenter.position.y, cameraToMove.transform.position.z);
            }
        }
    }
}
