using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class NewBehaviourScript : MonoBehaviour
{
    private const string ThemeKey = "Theme";
    public TMP_Dropdown dropdown;
    // Themes:
    // 0 - dark
    // 1 - light
    // 2 - high contrast
    void Start()
    {
        if (dropdown != null)
        {
            int theme = PlayerPrefs.GetInt("Theme", 0); // Domyœlna wartoœæ to 0

            // Ustawienie odpowiedniego wyboru w dropdownie na podstawie Theme
            switch (theme)
            {
                case 0:
                    dropdown.value = 0; // Pierwszy wybór
                    break;
                case 1:
                    dropdown.value = 1; // Drugi wybór
                    break;
                case 2:
                    dropdown.value = 2; // Drugi wybór (lub zmieñ na inny indeks, jeœli to b³¹d w opisie)
                    break;
                default:
                    Debug.LogWarning("Nieznana wartoœæ Theme: " + theme);
                    break;
            }
            dropdown.onValueChanged.AddListener(OnDropdownValueChanged);
        }
        else
        {
            Debug.LogError("Dropdown nie jest przypisany");
        }
    }

    private void OnDropdownValueChanged(int selectedIndex)
    {
        string selectedOptionText = dropdown.options[selectedIndex].text;
        int selectedOptionValue;
        if (selectedOptionText == "Ciemny")
        {
            selectedOptionValue = 0;
        }
        else if (selectedOptionText == "Jasny")
        {
            selectedOptionValue = 1;
        }
        else
        {
            selectedOptionValue = 2;
        }   
        Debug.Log($"Zaznaczony element: {selectedOptionValue}");
        PlayerPrefs.SetInt(ThemeKey, selectedOptionValue);
    }

    void OnDestroy()
    {
        if (dropdown != null)
        {
            dropdown.onValueChanged.RemoveListener(OnDropdownValueChanged);
        }
    }
}
