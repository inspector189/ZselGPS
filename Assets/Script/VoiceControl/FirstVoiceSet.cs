using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FirstVoiceSet : MonoBehaviour
{
    // Klucz do PlayerPrefs
    private const string VoiceKey = "Voice";

    void Start()
    {
        // Sprawdzenie czy klucz "Theme" istnieje
        if (!PlayerPrefs.HasKey(VoiceKey))
        {
            // Ustawienie domyœlnej wartoœci na 0
            PlayerPrefs.SetInt(VoiceKey, 0);
            PlayerPrefs.Save(); // Zapisanie zmian
            Debug.Log("Brak klucza 'Voice'. Ustawiono domyœln¹ wartoœæ: 0");
        }
        else
        {
            Debug.Log("Klucz 'Voice' istnieje. Aktualna wartoœæ: " + PlayerPrefs.GetInt(VoiceKey));
        }
    }
}
