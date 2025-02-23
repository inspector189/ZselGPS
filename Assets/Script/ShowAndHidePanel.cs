using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class ShowAndHidePanel : MonoBehaviour
{
    [SerializeField]
    private GameObject panel;
    public CanvasGroup panelCG;
    [SerializeField]
    private GameObject panel2;
    public CanvasGroup panelCG2;

    public void ShowPanel()
    {
        if (PlayerPrefs.GetInt("WybranaScena") == 0)
        {
            panel.SetActive(true);
            panelCG.alpha = 1f;
            panelCG.interactable = true;
            panelCG.blocksRaycasts = true;
        }
        if (PlayerPrefs.GetInt("WybranaScena") == 1)
        {
            panel2.SetActive(true);
            panelCG2.alpha = 1f;
            panelCG2.interactable = true;
            panelCG2.blocksRaycasts = true;
        }


    }
    public void HidePanel()
    {
        if (PlayerPrefs.GetInt("WybranaScena") == 0)
        {
            panel.SetActive(false);
            panelCG.alpha = 0f;
            panelCG.interactable = true;
            panelCG.blocksRaycasts = false;
        }
        if (PlayerPrefs.GetInt("WybranaScena") == 1)
        {
            panel2.SetActive(false);
            panelCG2.alpha = 0f;
            panelCG2.interactable = true;
            panelCG2.blocksRaycasts = false;
        }

    }
}
