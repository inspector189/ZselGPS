using UnityEngine;
using UnityEngine.EventSystems;
using System.Collections;
using UnityEngine.UI;
using TMPro;
using System.Collections.Generic;

public class RawImageHandler : MonoBehaviour, IPointerClickHandler, IPointerDownHandler
{
    public string pietro;
    public Camera CameraToMove;
    public string NazwaSali;
    public string OpisSali;
    public RectTransform buttonRectTransform; // RectTransform przycisku w scenie kamery
    public float targetOrthographicSize = 0.45f;
    public RectTransform DrzwiSali;
    private GameObject DrzwiCel;
    private float timeOfLastClick = 0f;
    private const float maxClickDuration = 0.15f; // Maksymalny czas trwania pojedynczego kliknięcia
    public List<Sprite> images;

    public void OnPointerDown(PointerEventData eventData)
    {
        timeOfLastClick = Time.time; // Zapisz czas początku kliknięcia
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        TextMeshProUGUI TytulSaliText = GameObject.Find("TitleRoom").GetComponent<TextMeshProUGUI>();
        TextMeshProUGUI OpisSaliText = GameObject.Find("DescRoom").GetComponent<TextMeshProUGUI>();
        Image obszarZdjecia = GameObject.Find("ImageRoom1").GetComponent<Image>();
        
        RectTransform rawImageRect = GetComponent<RectTransform>();
        // Przekształć pozycję kliknięcia na lokalną pozycję w RawImage
        Vector2 localClickPosition;
        if (RectTransformUtility.ScreenPointToLocalPointInRectangle(rawImageRect, eventData.position, eventData.pressEventCamera, out localClickPosition))
        {
            // Normalizuj pozycję do wymiarów RawImage
            Vector2 normalizedPosition = Rect.PointToNormalized(rawImageRect.rect, localClickPosition);

            // Przelicz pozycję do koordynatów kamery
            Vector2 cameraPoint = new Vector2(normalizedPosition.x * CameraToMove.pixelWidth, normalizedPosition.y * CameraToMove.pixelHeight);

            // Sprawdź, czy kliknięcie wpadło na obszar przycisku w przestrzeni kamery
            if (RectTransformUtility.RectangleContainsScreenPoint(buttonRectTransform, cameraPoint, CameraToMove))
            {
                if (PlayerPrefs.GetInt("pietro") == int.Parse(pietro))
                {
                    if (Time.time - timeOfLastClick <= maxClickDuration)
                    {
                        string salaNameOrg = buttonRectTransform.gameObject.name;
                        PlayerPrefs.SetString("NumerSali", salaNameOrg);
                        TytulSaliText.text = NazwaSali;
                        if (images != null && images.Count > 0)
                        {
                            obszarZdjecia.sprite = images[0];
                        }
                        OpisSaliText.text = OpisSali;
                        Vector3 targetPosition = new Vector3(buttonRectTransform.position.x, buttonRectTransform.position.y, CameraToMove.transform.position.z);
                        StartCoroutine(MoveCamera(targetPosition, targetOrthographicSize, 1f)); // 1 sekunda trwania animacji
                        PlayerPrefs.SetInt("pietroPomieszczenia", int.Parse(pietro));
                        PlayerPrefs.SetInt("panelStatus", 1);
                        PlayerPrefs.SetInt("panelCzynnosc", 1);
                    }
                }
            }
        }
    }

    IEnumerator MoveCamera(Vector3 targetPosition, float targetSize, float duration)
    {
        float time = 0;
        Vector3 startPosition = CameraToMove.transform.position;
        float startSize = CameraToMove.orthographicSize;

        while (time < duration)
        {
            CameraToMove.transform.position = Vector3.Lerp(startPosition, targetPosition, time / duration);
            CameraToMove.orthographicSize = Mathf.Lerp(startSize, targetSize, time / duration);
            time += Time.deltaTime;
            yield return null;
        }

        CameraToMove.transform.position = targetPosition;
        CameraToMove.orthographicSize = targetSize;
    }
}