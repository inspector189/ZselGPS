using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FirstThemeSet : MonoBehaviour
{
    // Klucz do PlayerPrefs
    private const string ThemeKey = "Theme";

    void Start()
    {
        // Sprawdzenie czy klucz "Theme" istnieje
        if (!PlayerPrefs.HasKey(ThemeKey))
        {
            // Ustawienie domy�lnej warto�ci na 0
            PlayerPrefs.SetInt(ThemeKey, 0);
            PlayerPrefs.Save(); // Zapisanie zmian
            Debug.Log("Brak klucza 'Theme'. Ustawiono domy�ln� warto��: 0");
        }
        else
        {
            Debug.Log("Klucz 'Theme' istnieje. Aktualna warto��: " + PlayerPrefs.GetInt(ThemeKey));
        }
    }
}
