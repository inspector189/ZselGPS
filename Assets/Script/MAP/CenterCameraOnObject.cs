using UnityEngine;
using System.Collections;

public class CenterCameraOnObject : MonoBehaviour
{
    public Camera cameraToMove;
    public GameObject objectToCenter;
    public GameObject object2;
    public float moveSpeed = 2f; // Podstawowa szybkoœæ ruchu kamery
    public float smoothFactor = 0.1f; // Wspó³czynnik wyg³adzenia ruchu

    private bool isAnimating = false; // Flaga, która okreœla, czy animacja jest w trakcie

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

        // Sprawdzenie, czy punkt znajduje siê w granicach RectTransform object2
        if (RectTransformUtility.RectangleContainsScreenPoint(rectTransform2, screenPoint, cameraToMove))
        {
            // Obecna pozycja kamery
            Vector3 currentCameraPosition = cameraToMove.transform.position;

            // Docelowa pozycja kamery (z zachowaniem odleg³oœci Z)
            Vector3 targetPosition = new Vector3(rectTransformToCenter.position.x, rectTransformToCenter.position.y, currentCameraPosition.z);

            // Oblicz odleg³oœæ pomiêdzy aktualn¹ a docelow¹ pozycj¹
            float distance = Vector3.Distance(currentCameraPosition, targetPosition);

            float lerpTime = 0f;

            // Pêtla animacji trwaj¹ca przez ca³y czas Lerp
            while (lerpTime < 1f)
            {
                lerpTime += Time.deltaTime * moveSpeed / distance;

                // U¿ycie SmoothStep, aby uzyskaæ efekt szybszego pocz¹tku i wolniejszego koñca
                float t = Mathf.SmoothStep(0f, 1f, lerpTime);

                // P³ynne przesuniêcie kamery za pomoc¹ interpolacji
                cameraToMove.transform.position = Vector3.Lerp(currentCameraPosition, targetPosition, t);

                yield return null; // Czeka do nastêpnej klatki
            }
        }

        // Resetowanie flagi po zakoñczeniu animacji
        isAnimating = false;
    }
}
