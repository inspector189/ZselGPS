using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;

public class ImagesControler : MonoBehaviour
{
    public string nazwa;
    public List<Sprite> Images;
    public Image obrazek;
    public Button Prawo;
    private int currentIndex = 0;
    public Button Lewo;
    // Start is called before the first frame update
     void Start()
    {
        // Dodaj listenerów do przycisków
        Prawo.onClick.AddListener(OnPrawoButtonClick);
        Lewo.onClick.AddListener(OnLewoButtonClick);
    }

    void Update()
    {
        if (nazwa == PlayerPrefs.GetString("NumerSali"))
        {
            // Ustaw obrazek na podstawie aktualnego indeksu
            obrazek.sprite = Images[currentIndex];
        }
    }

    // Obsługa kliknięcia przycisku "Prawo"
    void OnPrawoButtonClick()
    {
        // Inkrementuj indeks (przechodzenie do następnego obrazka)
        currentIndex++;

        if (currentIndex >= Images.Count)
        {
            currentIndex = 0; // Jeśli przekracza, wróć do pierwszego obrazka
        }

        // Wywołaj funkcję dla aktualnego indeksu
        BatonySomPyszniutkie(currentIndex);
    }

    // Obsługa kliknięcia przycisku "Lewo"
    void OnLewoButtonClick()
    {
        // Dekrementuj indeks (przechodzenie do poprzedniego obrazka)
        currentIndex--;

        // Sprawdź, czy indeks jest mniejszy niż 0
        if (currentIndex < 0)
        {
            currentIndex = Images.Count - 1; // Jeśli jest, wróć do ostatniego obrazka
        }

        // Wywołaj funkcję dla aktualnego indeksu
        BatonySomPyszniutkie(currentIndex);
    }

    // Metoda wywoływana dla określonego indeksu obrazka
    void BatonySomPyszniutkie(int index)
    {
        // Wykonaj akcje związane z wybranym indeksem
        Debug.Log("Wybrany obrazek: " + index);
    }
}
