using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class TouchManipulator : MonoBehaviour, IDragHandler, IPointerDownHandler, IPointerUpHandler
{
    public RectTransform canvasRectTransform;
    public RectTransform selectedRectTransform;
    private Vector2 initialTouchPosition;
    private Vector3 offsetToImageCenter;
    private float originalDistance;
    private Vector3 originalScale;

    void Start()
    {
        if (canvasRectTransform == null)
        {
            Canvas canvas = GetComponentInParent<Canvas>();
            if (canvas != null)
            {
                canvasRectTransform = canvas.transform as RectTransform;
            }
        }
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if (RectTransformUtility.ScreenPointToLocalPointInRectangle(canvasRectTransform, eventData.position, eventData.pressEventCamera, out Vector2 localPointerPosition))
        {
            if (eventData.pointerCurrentRaycast.gameObject != null)
            {
                Image selectedImage = eventData.pointerCurrentRaycast.gameObject.GetComponent<Image>();
                if (selectedImage != null)
                {
                    selectedRectTransform = selectedImage.rectTransform;
                    selectedRectTransform.SetAsLastSibling();
                    initialTouchPosition = localPointerPosition;
                    offsetToImageCenter = selectedRectTransform.localPosition - new Vector3(initialTouchPosition.x, initialTouchPosition.y, selectedRectTransform.localPosition.z);
                }
            }
        }

        if (Input.touchCount == 2 && selectedRectTransform != null)
        {
            Touch touchZero = Input.GetTouch(0);
            Touch touchOne = Input.GetTouch(1);
            originalDistance = Vector2.Distance(touchZero.position, touchOne.position);
            originalScale = selectedRectTransform.localScale;
        }
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (selectedRectTransform == null) return;

        if (RectTransformUtility.ScreenPointToLocalPointInRectangle(canvasRectTransform, eventData.position, eventData.pressEventCamera, out Vector2 localPointerPosition))
        {
            Vector3 newPosition = new Vector3(localPointerPosition.x, localPointerPosition.y, selectedRectTransform.localPosition.z) + offsetToImageCenter;
            newPosition.x = Mathf.Clamp(newPosition.x, -canvasRectTransform.rect.width / 2, canvasRectTransform.rect.width / 2);
            newPosition.y = Mathf.Clamp(newPosition.y, -canvasRectTransform.rect.height / 2, canvasRectTransform.rect.height / 2);
            selectedRectTransform.localPosition = newPosition;
        }
    }

    void Update()
    {
        if (Input.touchCount == 2 && selectedRectTransform != null)
        {
            Touch touchZero = Input.GetTouch(0);
            Touch touchOne = Input.GetTouch(1);
            float currentDistance = Vector2.Distance(touchZero.position, touchOne.position);

            if (originalDistance != 0)
            {
                float scaleFactor = currentDistance / originalDistance;
                selectedRectTransform.localScale = new Vector3(originalScale.x * scaleFactor, originalScale.y * scaleFactor, originalScale.z);
            }
        }
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        selectedRectTransform = null;
    }
}