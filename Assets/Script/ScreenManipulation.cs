using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections.Generic;

public class ScreenManipulation : MonoBehaviour
{
    public float zoomSpeed = 0.05f;
    public float rotateSpeed = 2f;
    public float panSpeed = 0.5f; // Szybkoœæ przesuwania kamery
    public Camera cameraToZoom;
    public GameObject mapObject; // Obiekt mapy do obracania
    public GameObject rawImageGameObject; // Obiekt RawImage do wykrywania dotkniêæ

    private const float maxCameraSize = 4f; // Maksymalna wielkoœæ kamery
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
                        // Zoom i obrót, jeœli s¹ dwa dotkniêcia
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
        Vector2 offset = cameraToZoom.ScreenToViewportPoint(lastPanPosition - newPanPosition);
        Vector3 move = new Vector3(offset.x * panSpeed, offset.y * panSpeed, 0);

        // Uwzglêdnienie rotacji kamery
        move = cameraToZoom.transform.rotation * move;

        // Ograniczenie ruchu kamery
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
            cameraToZoom.orthographicSize = Mathf.Clamp(cameraToZoom.orthographicSize - increment / 30, 0.1f, maxCameraSize);
        }
        else
        {
            cameraToZoom.fieldOfView = Mathf.Clamp(cameraToZoom.fieldOfView - increment / 30, 0.1f, CameraFOVForMaxSize(maxCameraSize));
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

    // Oblicz odpowiednie pole widzenia kamery dla maksymalnego rozmiaru
    private float CameraFOVForMaxSize(float maxSize)
    {
        return 2f * Mathf.Atan(maxSize / (2f * cameraToZoom.nearClipPlane)) * Mathf.Rad2Deg;
    }
}
