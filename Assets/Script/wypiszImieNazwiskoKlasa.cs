using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class wypiszImieNazwiskoKlasa : MonoBehaviour
{
    public TextMeshProUGUI wszystko;
    void Start()
    {
        string imie = PlayerPrefs.GetString("imie");
        string nazwisko = PlayerPrefs.GetString("nazwisko");
        string klasa = PlayerPrefs.GetString("klasa");

        wszystko.text = "Witaj, " + imie + " " + nazwisko + "\n Klasa: " + klasa;
    }
}
