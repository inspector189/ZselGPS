using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ScaleScreen : MonoBehaviour
{
    public RectTransform progressBar;
    public RectTransform progressBarText;
    private Canvas canvas;
    public Vector2 targetResolution = new Vector2(1080, 2160);

    void Awake()
    {
        canvas = GetComponent<Canvas>();
        ScaleCanvasToScreen();
         CenterUI();
    }

    void ScaleCanvasToScreen()
    {
        float targetAspect = targetResolution.x / targetResolution.y;
        float currentAspect = (float)Screen.width / Screen.height;

        float scaleHeight = currentAspect/targetAspect;
        if(scaleHeight < 1.0f)
        {
            canvas.scaleFactor = scaleHeight;
        }
        else 
        {
            canvas.scaleFactor = 1.0f;
        }
    }
 void CenterUI()
    {
        Vector2 canvasSize = canvas.GetComponent<RectTransform>().sizeDelta;
        Vector2 screenSize = new Vector2(Screen.width, Screen.height);

        // Oblicz różnicę w skali pomiędzy ekranem a kanwą
        float scaleX = screenSize.x / canvasSize.x;
        float scaleY = screenSize.y / canvasSize.y;

        float scaleFactor = canvas.scaleFactor;

        // Oblicz odległość od środka Canvasa do przesunięcia elementów w dół
        float distanceFromCenterY = (canvasSize.y * scaleFactor) / 2f;

        // Przesunięcie elementów UI w dół (o 50px poniżej środka Canvasa)
        float yOffset = -50.0f * scaleY; // 50px w dół, zależne od proporcji ekranu

        // Przesunięcie ProgressBar w poziomie (o 20px w prawo)
       

        // Przesunięcie względem środka Canvasa
        progressBar.anchoredPosition += new Vector2(0, -distanceFromCenterY + yOffset);
    }
}
