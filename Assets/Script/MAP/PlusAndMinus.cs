using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PlusAndMinus : MonoBehaviour
{
    public Button Plus;
    public TextMeshProUGUI text;
    [SerializeField] private GPSMap2 gpsMap2;
    public void Start()
    {  
        text.text = GPSMap2.GetCurrentFloorLvl().ToString();
        gpsMap2.SetCurrentFloorLvl(GPSMap2.GetCurrentFloorLvl());
        PlayerPrefs.SetInt("personPietro", GPSMap2.GetCurrentFloorLvl());
    }
    public void AddOneToText()
    {
        int liczba = GPSMap2.GetCurrentFloorLvl();
        if (liczba < 2)
        {
            liczba += 1;
            gpsMap2.SetCurrentFloorLvl(liczba);       
            text.text = liczba.ToString();
            PlayerPrefs.SetInt("personPietro", liczba);
        }
    }

    public void MinusOneToText()
    {
        int liczba = GPSMap2.GetCurrentFloorLvl();
        if (liczba > 0) // Ograniczenie odjęcia do wartości większych od 0
        {
            liczba -= 1;
            gpsMap2.SetCurrentFloorLvl(liczba);
            text.text = liczba.ToString();
            PlayerPrefs.SetInt("personPietro", liczba);
        }
    }
}