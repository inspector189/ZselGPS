using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PlusAndMinus : MonoBehaviour
{
    public Button Plus;
    public TextMeshProUGUI text;
    private int liczba;

    public void Start()
    {  
        text.text = liczba.ToString();
    }
    public void Update()
    {
        liczba = PlayerPrefs.GetInt("liczba");
    }
    public void AddOneToText()
    {
        if (liczba < 2)
        {
            liczba += 1;
            PlayerPrefs.SetInt("liczba", liczba);
            
            text.text = liczba.ToString();
        }
    }

    public void MinusOneToText()
    {
        if (liczba > 0) // Ograniczenie odjęcia do wartości większych od 0
        {
            liczba -= 1;
            PlayerPrefs.SetInt("liczba", liczba);
            text.text = liczba.ToString();
        }
    }
}