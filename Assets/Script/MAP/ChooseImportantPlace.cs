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

    public RectTransform target;

    [SerializeField] private GPSMap2 gpsMap2;

    public Button btnUp;
    public Button btnDown;

    void Start()
    {
        PlayerPrefs.SetInt("pomocnicza", 0);
        if (buttons.Count != rectTransforms.Count)
        {
            Debug.LogError("Liczba przycisków i RectTransformów musi być taka sama!");
            return;
        }
        lineCreator.ClearLine();
        for (int i = 0; i < buttons.Count; i++)
        {
            int index = i; 
            Button buttonComponent = buttons[index].GetComponent<Button>();

            if (buttonComponent != null)
            {
                buttonComponent.onClick.AddListener(() => OnButtonClicked2(rectTransforms[index]));
            }
            else
            {
                Debug.LogError("GameObject " + buttons[index].name + " nie posiada komponentu Button!");
            }
        }
    }

    public void OnButtonClicked2(RectTransform targetRectTransform)
    {
        if(lineCreator.CheckIfLineExist())
        {
             lineCreator.ClearLine();
        }
        target = targetRectTransform;
        lineCreator.SetTarget(targetRectTransform);
        showAndHidePanel.HidePanel();

    }

    public RectTransform TargetReturn()
    {
        return target;
    }
}



