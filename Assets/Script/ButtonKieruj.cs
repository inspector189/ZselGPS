using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Michsky.MUIP;  // Importowanie przestrzeni nazw Michsky.MUIP do obs�ugi ButtonManager

public class ButtonKieruj : MonoBehaviour
{
    public LineCreator lineCreator;  // Odwo�anie do innego skryptu
    public RectTransform aktualnaSala;  // Sala, do kt�rej ma by� tworzona linia
    public ButtonManager kierujButtonManager;  // Przycisk z Modern UI Pack

    void Start()
    {
        // Ustawienie listenera dla przycisku z Modern UI Pack
        if (kierujButtonManager != null)
        {
            kierujButtonManager.onClick.AddListener(OnButtonClicked);  // Dodaj listener do zdarzenia onClick
        }

        // Ustawienie pozycji RectTransform na podstawie warto�ci zapisanych w PlayerPrefs
        
    }

    public void OnButtonClicked()
    {
        // Sprawd�, czy linia istnieje, i usu� j�, je�li tak
        if (lineCreator.CheckIfLineExist())
        {
            lineCreator.ClearLine();
        }
        // Ustaw nowy cel
        lineCreator.target = aktualnaSala;
    }

}
