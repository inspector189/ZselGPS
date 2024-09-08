using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ColorChanger : MonoBehaviour
{
    public RawImage soundRawImage; 
    public RawImage lightRawImage; 


    void Update()
    {
        float soundLevel = PlayerPrefs.GetFloat("db"); ; // Poziom dŸwiêku w decybelach
        float lightLevel = PlayerPrefs.GetFloat("lightLevel"); // Wartoœæ z czujnika œwiat³a
        UpdateSoundRawImageColor(soundLevel);
        UpdateLightRawImageColor(lightLevel);
    }

    void UpdateSoundRawImageColor(float soundLevel)
    {

        float quietThreshold = 20f; // granica ciszy
        float loudThreshold = 90f; // granica g³oœnoœci

        // Normalizacja poziomu dŸwiêku do zakresu 0-1
        float normalizedLevel = Mathf.InverseLerp(quietThreshold, loudThreshold, soundLevel);

        Color targetColor = Color.Lerp(Color.green, Color.red, normalizedLevel);
        if (normalizedLevel > 0.5f)
        {
            targetColor = Color.Lerp(Color.red, new Color(0.5f, 0, 0.5f), (normalizedLevel - 0.5f) * 2);
        }

        soundRawImage.color = targetColor;
    }

    void UpdateLightRawImageColor(float lightLevel)
    {

        float darkThreshold = 0f; // granica ciemnoœci
        float brightThreshold = 1000f; // granica jasnoœci

        float normalizedLevel = Mathf.InverseLerp(darkThreshold, brightThreshold, lightLevel);

        Color targetColor = Color.Lerp(Color.black, Color.yellow, normalizedLevel);
        if (normalizedLevel > 0.5f) 
        {
            targetColor = Color.Lerp(Color.yellow, new Color(1f, 0.5f, 0), (normalizedLevel - 0.5f) * 2);
        }

        lightRawImage.color = targetColor;
    }
}

