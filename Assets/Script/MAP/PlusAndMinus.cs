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

    public GameObject p0;
    public GameObject p1;
    public GameObject p2;
    public void Start()
    {
        int pietroZapisane = PlayerPrefs.GetInt("personPietro");
        if (pietroZapisane == 0)
        {
            p0.SetActive(true);
            p1.SetActive(false);
            p2.SetActive(false);
        }
        if (pietroZapisane == 1)
        {
            p0.SetActive(false);
            p1.SetActive(true);
            p2.SetActive(false);
        }
        if (pietroZapisane == 2)
        {
            p0.SetActive(false);
            p1.SetActive(false);
            p2.SetActive(true);
        }
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

            if (liczba == 0)
            {
                p0.SetActive(true);
                p1.SetActive(false);
                p2.SetActive(false);
            }
            if (liczba == 1)
            {
                p0.SetActive(false);
                p1.SetActive(true);
                p2.SetActive(false);
            }
            if (liczba == 2)
            {
                p0.SetActive(false);
                p1.SetActive(false);
                p2.SetActive(true);
            }

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
            if (liczba == 0)
            {
                p0.SetActive(true);
                p1.SetActive(false);
                p2.SetActive(false);
            }
            if (liczba == 1)
            {
                p0.SetActive(false);
                p1.SetActive(true);
                p2.SetActive(false);
            }
            if (liczba == 2)
            {
                p0.SetActive(false);
                p1.SetActive(false);
                p2.SetActive(true);
            }
        }
    }
}