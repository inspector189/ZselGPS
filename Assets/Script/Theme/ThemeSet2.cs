using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Unity.VisualScripting;

public class ThemeSet2 : MonoBehaviour
{
    public Sprite not_selectedDarkMode;
    public Sprite not_selectedLightMode;
    public Sprite selected;
    public Image option1;
    public Image option2;
    public Image option3;
    public Button btn1;
    public Button btn2;
    public Button btn3;

    void Start()
    {
        // Przypisanie funkcji do przycisków
        btn1.onClick.AddListener(DarkSelected);
        btn2.onClick.AddListener(LightSelected);
        btn3.onClick.AddListener(ContrastSelected);

        // Ustawienie odpowiedniego motywu na podstawie zapisanych preferencji
        int theme = PlayerPrefs.GetInt("Theme", 0); // Domyœlnie motyw 0
        if (theme == 0)
        {
            option1.sprite = selected;
            option2.sprite = not_selectedDarkMode;
            option3.sprite = not_selectedDarkMode;
        }
        else if (theme == 1)
        {
            option1.sprite = not_selectedLightMode;
            option2.sprite = selected;
            option3.sprite = not_selectedLightMode;
        }
        else
        {
            option1.sprite = not_selectedDarkMode;
            option2.sprite = not_selectedDarkMode;
            option3.sprite = selected;
        }
    }

    public void DarkSelected()
    {
        PlayerPrefs.SetInt("Theme", 0);
        option1.sprite = selected;
        option2.sprite = not_selectedDarkMode;
        option3.sprite = not_selectedDarkMode;
        Debug.Log("Dark mode selected");
    }

    public void LightSelected()
    {
        PlayerPrefs.SetInt("Theme", 1);
        option1.sprite = not_selectedLightMode;
        option2.sprite = selected;
        option3.sprite = not_selectedLightMode;
        Debug.Log("Light mode selected");
    }

    public void ContrastSelected()
    {
        PlayerPrefs.SetInt("Theme", 2);
        option1.sprite = not_selectedDarkMode;
        option2.sprite = not_selectedDarkMode;
        option3.sprite = selected;
        Debug.Log("High contrast mode selected");
    }
}