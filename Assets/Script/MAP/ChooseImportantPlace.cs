using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class ChooseImportantPlace : MonoBehaviour
{
    public List<GameObject> buttons = new List<GameObject>(26);

    public List<RectTransform> rectTransforms = new List<RectTransform>(26);

    public LineCreator lineCreator;

    public ShowAndHidePanel showAndHidePanel;
    

    void Start()
    {
        PlayerPrefs.SetInt("pomocnicza", 0);
        // Sprawdzenie, czy liczba przycisków i rectTransformów jest taka sama
        if (buttons.Count != rectTransforms.Count)
        {
            Debug.LogError("Liczba przycisków i RectTransformów musi być taka sama!");
            return;
        }
        lineCreator.ClearLine();
        // Przypisanie listenerów do przycisków
        for (int i = 0; i < buttons.Count; i++)
        {
            int index = i; // Kopia zmiennej do użycia w lambdzie
            Button buttonComponent = buttons[index].GetComponent<Button>();

            if (buttonComponent != null)
            {
                buttonComponent.onClick.AddListener(() => OnButtonClicked(rectTransforms[index]));
            }
            else
            {
                Debug.LogError("GameObject " + buttons[index].name + " nie posiada komponentu Button!");
            }
        }
    }

    // Funkcja wywoływana po kliknięciu przycisku
    public void OnButtonClicked(RectTransform targetRectTransform)
    {
/*        if(lineCreator.CheckIfLineExist())
        {
            lineCreator.ClearLine();
        }*/
        lineCreator.SetTarget(targetRectTransform);
        PlayerPrefs.SetInt("pomocnicza", 1);
        
        //showAndHidePanel.HidePanel();
    }
}

