using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResetColors : MonoBehaviour
{
    private int lastTheme;

    void Start()
    {
        // Pobierz aktualny motyw z PlayerPrefs
        lastTheme = PlayerPrefs.GetInt("Theme", 0);
    }

    void Update()
    {
        // SprawdŸ, czy motyw uleg³ zmianie
        int currentTheme = PlayerPrefs.GetInt("Theme", 0);
        if (currentTheme != lastTheme)
        {
            // Jeœli motyw siê zmieni³, zaktualizuj wszystkie obiekty
            ResetAllThemes();
            lastTheme = currentTheme;
        }
    }

    private void ResetAllThemes()
    {
        // Pobierz wszystkie obiekty w scenie, które maj¹ przypisany ThemeColorSetter
        ThemeColorSetter[] allThemeColorSetters = Object.FindObjectsByType<ThemeColorSetter>(FindObjectsSortMode.None);
        foreach (var themeColorSetter in allThemeColorSetters)
        {
            themeColorSetter.ApplyTheme();
        }
        Debug.Log($"Zresetowano kolory dla {allThemeColorSetters.Length} obiektów ThemeColorSetter.");

        // Pobierz wszystkie obiekty w scenie, które maj¹ przypisany ThemeButtonColorSetter
        ThemeButtonColorSetter[] allThemeButtonColorSetters = Object.FindObjectsByType<ThemeButtonColorSetter>(FindObjectsSortMode.None);
        foreach (var themeButtonColorSetter in allThemeButtonColorSetters)
        {
            themeButtonColorSetter.ApplyTheme();
        }
        Debug.Log($"Zresetowano kolory dla {allThemeButtonColorSetters.Length} obiektów ThemeButtonColorSetter.");

        // Pobierz wszystkie obiekty w scenie, które maj¹ przypisany ThemeImageSetter
        ThemeImageSetter[] allThemeImageSetters = Object.FindObjectsByType<ThemeImageSetter>(FindObjectsSortMode.None);
        foreach (var themeImageSetter in allThemeImageSetters)
        {
            themeImageSetter.ApplyTheme();
        }
        Debug.Log($"Zresetowano kolory dla {allThemeImageSetters.Length} obiektów ThemeImageSetter.");
    }
}
