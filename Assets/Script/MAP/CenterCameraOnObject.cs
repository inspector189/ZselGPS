using UnityEngine;
using System.Collections;

public class CenterCameraOnObject : MonoBehaviour
{
    public Camera cameraToMove;
    public GameObject objectToCenter;
    public GameObject object2;
    public float moveSpeed = 2f; // Podstawowa szybko�� ruchu kamery
    public float smoothFactor = 0.1f; // Wsp�czynnik wyg�adzenia ruchu

    private bool isAnimating = false; // Flaga, kt�ra okre�la, czy animacja jest w trakcie

    public void CenterCamera()
    {
        if (!isAnimating && cameraToMove != null && objectToCenter != null && object2 != null)
        {
            StartCoroutine(AnimateCamera());
        }
    }

    private IEnumerator AnimateCamera()
    {
        isAnimating = true;

        RectTransform rectTransformToCenter = objectToCenter.GetComponent<RectTransform>();
        RectTransform rectTransform2 = object2.GetComponent<RectTransform>();

        // Konwersja pozycji obiektu do punktu na ekranie
        Vector2 screenPoint = RectTransformUtility.WorldToScreenPoint(cameraToMove, rectTransformToCenter.position);

        // Sprawdzenie, czy punkt znajduje si� w granicach RectTransform object2
        if (RectTransformUtility.RectangleContainsScreenPoint(rectTransform2, screenPoint, cameraToMove))
        {
            // Obecna pozycja kamery
            Vector3 currentCameraPosition = cameraToMove.transform.position;

            // Docelowa pozycja kamery (z zachowaniem odleg�o�ci Z)
            Vector3 targetPosition = new Vector3(rectTransformToCenter.position.x, rectTransformToCenter.position.y, currentCameraPosition.z);

            // Oblicz odleg�o�� pomi�dzy aktualn� a docelow� pozycj�
            float distance = Vector3.Distance(currentCameraPosition, targetPosition);

            float lerpTime = 0f;

            // P�tla animacji trwaj�ca przez ca�y czas Lerp
            while (lerpTime < 1f)
            {
                lerpTime += Time.deltaTime * moveSpeed / distance;

                // U�ycie SmoothStep, aby uzyska� efekt szybszego pocz�tku i wolniejszego ko�ca
                float t = Mathf.SmoothStep(0f, 1f, lerpTime);

                // P�ynne przesuni�cie kamery za pomoc� interpolacji
                cameraToMove.transform.position = Vector3.Lerp(currentCameraPosition, targetPosition, t);

                yield return null; // Czeka do nast�pnej klatki
            }
        }

        // Resetowanie flagi po zako�czeniu animacji
        isAnimating = false;
    }
}
