using Unity.VisualScripting.Antlr3.Runtime;
using UnityEngine;

public class SlidePanel : MonoBehaviour
{
    public float speed = 1.0f; // Pr�dko�� przesuwania
    public GameObject panel; // Panel, kt�ry b�dzie przesuwany

    public bool isOpen = false; // Czy panel jest otwarty
    private float closedPositionY = -1204.901f; // Pozycja zamkni�cia
    private float openPositionY = -525.1f; // Pozycja otwarcia
    private float targetPositionY; // Docelowa pozycja Y panelu

    private float closedHeight = 214.6f; // Wysoko�� przy zamkni�tym panelu
    private float openHeight = 3736.8f; // Wysoko�� przy otwartym panelu
    private float targetHeight; // Docelowa wysoko�� panelu

    private RectTransform rectTransform; // RectTransform panelu

    void Start()
    {
        if (panel == null)
        {
            Debug.LogError("Panel not set in the inspector");
            return;
        }

        rectTransform = panel.GetComponent<RectTransform>();
        if (rectTransform == null)
        {
            Debug.LogError("Panel does not have a RectTransform component");
            return;
        }

        // Ustaw pocz�tkow� pozycj� i wysoko�� panelu
        rectTransform.anchoredPosition = new Vector2(rectTransform.anchoredPosition.x, closedPositionY);
        rectTransform.sizeDelta = new Vector2(rectTransform.sizeDelta.x, closedHeight);

        targetPositionY = closedPositionY;
        targetHeight = closedHeight;
    }

    void Update()
    {
        
        if (rectTransform != null)
        {
            // Animuj pozycj� Y panelu
            float newY = Mathf.Lerp(rectTransform.anchoredPosition.y, targetPositionY, Time.deltaTime * speed);
            rectTransform.anchoredPosition = new Vector2(rectTransform.anchoredPosition.x, newY);

            // Animuj wysoko�� panelu
            float newHeight = Mathf.Lerp(rectTransform.sizeDelta.y, targetHeight, Time.deltaTime * speed);
            rectTransform.sizeDelta = new Vector2(rectTransform.sizeDelta.x, newHeight);
        }
        TogglePanel();
    }

    public void TogglePanel()
    {
        if(PlayerPrefs.GetInt("panelStatus") == 1)
        {
            if (rectTransform == null) return;

                isOpen = !isOpen;
            targetPositionY = isOpen ? openPositionY : closedPositionY;
            targetHeight = isOpen ? openHeight : closedHeight;
            PlayerPrefs.SetInt("panelStatus", 0);
        }
        
    }
}
