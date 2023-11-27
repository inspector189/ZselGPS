using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class TouchManipulator : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    public RectTransform canvasRectTransform;
    public RectTransform selectedRectTransform;
    public Transform person;
    private Vector2 initialTouchPosition;
    private Vector3 offsetToImageCenter;
    private float originalDistance;
    private Vector3 originalScale;
    private Vector3 lastScale;

    public RectTransform mapRectTransform;
    public GPSMap2 gpsMap2Script;

    // Oryginalna skala mapy
    private Vector3 originalMapScale;

    private void Awake()
    {
        originalMapScale = mapRectTransform.localScale;
    }

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
        lastScale = selectedRectTransform.localScale;
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
                PlayerPrefs.SetFloat("LastScale", selectedRectTransform.localScale.x);
            }
        }
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        selectedRectTransform = null;
    }
}