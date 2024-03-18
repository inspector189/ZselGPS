using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class SateliteIconController : MonoBehaviour
{
    public Image image;
    
    private Coroutine blinkingCoroutine = null;

    private void Update()
    {
        float value = PlayerPrefs.GetFloat("accuracy");
        if (value < 5)
        {
            SetColor(new Color(0, 1, 0, 1)); // Zielony, nieprzezroczysty
        }
        else if (value >= 5 && value < 45)
        {
            SetColor(new Color(1, 0, 0, 1)); // Czerwony, nieprzezroczysty
        }
        else if (value >= 45)
        {
            if (blinkingCoroutine == null)
            {
                blinkingCoroutine = StartCoroutine(BlinkingEffect());
            }
        }
        else
        {
            if (blinkingCoroutine != null)
            {
                StopCoroutine(blinkingCoroutine);
                blinkingCoroutine = null;
            }
        }
    }

    private void SetColor(Color color)
    {
        if (blinkingCoroutine != null)
        {
            StopCoroutine(blinkingCoroutine);
            blinkingCoroutine = null;
        }
        image.color = color;
    }

    private IEnumerator BlinkingEffect()
    {
        while (true)
        {
            float alpha = Mathf.PingPong(Time.time, 0.9f);
            image.color = new Color(1, 0, 0, alpha); // Czerwony z p³ynnie zmieniaj¹cym siê alfa
            yield return null;
        }
    }
}