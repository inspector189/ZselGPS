using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PlusAndMinus : MonoBehaviour
{
    public Button Plus;
    public TextMeshProUGUI text;
    public void Start()
    {  
        text.text = GPSMap2.GetCurrentFloorLvl().ToString();
    }
    public void AddOneToText()
    {
        int liczba = GPSMap2.GetCurrentFloorLvl();
        if (liczba < 2)
        {
            liczba += 1;
            GPSMap2.SetCurrentFloorLvl(liczba);       
            text.text = liczba.ToString();
        }
    }

    public void MinusOneToText()
    {
        int liczba = GPSMap2.GetCurrentFloorLvl();
        if (liczba > 0) // Ograniczenie odjęcia do wartości większych od 0
        {
            liczba -= 1;
            GPSMap2.SetCurrentFloorLvl(liczba);
            text.text = liczba.ToString();
        }
    }
}