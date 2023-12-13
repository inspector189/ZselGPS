using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class AccountOnlyName : MonoBehaviour
{
    public TextMeshProUGUI Name;
    public TextMeshProUGUI Surname;
    public TextMeshProUGUI Class;
    void Start()
    {
        string imie = PlayerPrefs.GetString("imie");
        string nazwisko = PlayerPrefs.GetString("nazwisko");
        string klasa = PlayerPrefs.GetString("klasa");
       // string wychowawca = PlayerPrefs.GetString("wychowawca");
      //  Debug.Log(wychowawca);
        Name.text = imie;
        Surname.text = nazwisko;
        Class.text = klasa;
    }
}
