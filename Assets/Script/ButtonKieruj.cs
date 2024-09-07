using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Michsky.MUIP;  // Importowanie przestrzeni nazw Michsky.MUIP do obs³ugi ButtonManager

public class ButtonKieruj : MonoBehaviour
{
    public LineCreator lineCreator;  // Odwo³anie do innego skryptu
    public RectTransform aktualnaSala;  // Sala, do której ma byæ tworzona linia
    public ButtonManager kierujButtonManager;  // Przycisk z Modern UI Pack

    void Start()
    {
        // Ustawienie listenera dla przycisku z Modern UI Pack
        if (kierujButtonManager != null)
        {
            kierujButtonManager.onClick.AddListener(OnButtonClicked);  // Dodaj listener do zdarzenia onClick
        }

        // Ustawienie pozycji RectTransform na podstawie wartoœci zapisanych w PlayerPrefs
        
    }

    public void OnButtonClicked()
    {
        // SprawdŸ, czy linia istnieje, i usuñ j¹, jeœli tak
        if (lineCreator.CheckIfLineExist())
        {
            lineCreator.ClearLine();
        }
        // Ustaw nowy cel
        lineCreator.target = aktualnaSala;
    }

}
