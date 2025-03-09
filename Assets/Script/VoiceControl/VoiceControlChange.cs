using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Unity.VisualScripting;

public class VoiceControlChange : MonoBehaviour
{
    public Sprite not_selectedDarkMode;
    public Sprite not_selectedLightMode;
    public Sprite selected;
    public Image option1;
    public Image option2;
    public Button btn1;
    public Button btn2;

    void Start()
    {
        // Przypisanie funkcji do przycisków
        btn1.onClick.AddListener(On);
        btn2.onClick.AddListener(Off);

        // Ustawienie odpowiedniego motywu na podstawie zapisanych preferencji
        int voice = PlayerPrefs.GetInt("Voice", 1); // Domyœlnie dŸwiêk na 1
        if (voice == 0)
        {
            option1.sprite = selected;
            option2.sprite = not_selectedDarkMode;
        }
        else if (voice == 1)
        {
            option1.sprite = not_selectedLightMode;
            option2.sprite = selected;
        }

    }

    public void On()
    {
        PlayerPrefs.SetInt("Voice", 0);
        option1.sprite = selected;
        option2.sprite = not_selectedDarkMode;
    }

    public void Off()
    {
        PlayerPrefs.SetInt("Voice", 1);
        option1.sprite = not_selectedLightMode;
        option2.sprite = selected;
    }

}