using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections.Generic;

public class ScreenManipulation : MonoBehaviour
{
    public float zoomSpeed = 0.035f; // Zwiększona prędkość zoomu
    public float rotateSpeed = 0.45f; // Zmniejszona prędkość obrotu
    public float panSpeed = 0.65f; // Podstawowa szybkość przesuwania kamery
    public Camera cameraToZoom;
    public GameObject mapObject; // Obiekt mapy do obracania
    public GameObject rawImageGameObject; // Obiekt RawImage do wykrywania dotknięć

    private const float maxCameraSize = 4f; // Maksymalna wielkość kamery
    private const float minCameraSize = 0.1f; // Zmniejszona minimalna wielkość kamery
    private const float maxX = 19f; // Maksymalny zakres na osi X
    private const float minX = 8f; // Minimalny zakres na osi X
    private const float maxY = 4f; // Maksymalny zakres na osi Y
    private const float minY = -4f; // Minimalny zakres na osi Y
    private Vector2 lastPanPosition;

    void Update()
    {
        int touchCount = Input.touchCount;

        if (touchCount == 1 || touchCount == 2)
        {
            Touch touch = Input.GetTouch(0);

            if (IsTouchingRawImage())
            {
                if (touch.phase == TouchPhase.Began)
                {
                    lastPanPosition = touch.position;
                }
                else if (touch.phase == TouchPhase.Moved)
                {
                    if (touchCount == 1)
                    {
                        PanCamera(touch.position);
                    }
                    else if (touchCount == 2)
                    {
                        Touch touchTwo = Input.GetTouch(1);

                        // Zoom
                        Vector2 touchZeroPrevPos = touch.position - touch.deltaPosition;
                        Vector2 touchOnePrevPos = touchTwo.position - touchTwo.deltaPosition;

                        float prevMagnitude = (touchZeroPrevPos - touchOnePrevPos).magnitude;
                        float currentMagnitude = (touch.position - touchTwo.position).magnitude;

                        float difference = currentMagnitude - prevMagnitude;
                        ZoomCamera(difference * zoomSpeed);

                        // Obrót
                        Vector2 prevDir = touchZeroPrevPos - touchOnePrevPos;
                        Vector2 currentDir = touch.position - touchTwo.position;

                        float angle = Vector2.SignedAngle(prevDir, currentDir);
                        RotateMap(angle * rotateSpeed);
                    }
                }
            }
        }
    }

    private void PanCamera(Vector2 newPanPosition)
    {
        float adjustedPanSpeed = panSpeed * (cameraToZoom.orthographicSize / maxCameraSize);

        Vector2 offset = cameraToZoom.ScreenToViewportPoint(lastPanPosition - newPanPosition);
        Vector3 move = new Vector3(offset.x * adjustedPanSpeed, offset.y * adjustedPanSpeed, 0);

        move = cameraToZoom.transform.rotation * move;

        Vector3 newPosition = cameraToZoom.transform.position + move;
        newPosition.x = Mathf.Clamp(newPosition.x, minX, maxX);
        newPosition.y = Mathf.Clamp(newPosition.y, minY, maxY);

        cameraToZoom.transform.position = newPosition;
        lastPanPosition = newPanPosition;
    }

    private void ZoomCamera(float increment)
    {
        if (cameraToZoom.orthographic)
        {
            float currentSize = cameraToZoom.orthographicSize;
            cameraToZoom.orthographicSize = Mathf.Clamp(currentSize - increment / 30, minCameraSize, maxCameraSize);
            AdjustZoomAndRotationSpeeds(currentSize);
        }
    }

    private void RotateMap(float angle)
    {
        mapObject.transform.Rotate(-Vector3.forward * 20, angle);
    }

    private bool IsTouchingRawImage()
    {
        foreach (Touch touch in Input.touches)
        {
            PointerEventData pointer = new PointerEventData(EventSystem.current);
            pointer.position = touch.position;

            List<RaycastResult> raycastResults = new List<RaycastResult>();
            EventSystem.current.RaycastAll(pointer, raycastResults);

            if (raycastResults.Count > 0 && raycastResults[0].gameObject == rawImageGameObject)
            {
                return true;
            }
        }

        return false;
    }

    private void AdjustZoomAndRotationSpeeds(float currentSize)
    {
        // Dynamiczne dostosowanie prędkości zoomu i obrotu w zależności od rozmiaru kamery
        zoomSpeed = Mathf.Lerp(0.05f, 0.1f, (currentSize - minCameraSize) / (maxCameraSize - minCameraSize));
        rotateSpeed = Mathf.Lerp(0.2f, 2f, (currentSize - minCameraSize) / (maxCameraSize - minCameraSize));
    }
}
