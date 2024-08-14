using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class ShowAndHidePanel : MonoBehaviour
{
    [SerializeField]
    private GameObject panel;
    public CanvasGroup panelCG;
    void Start()
    {
        panel.SetActive(false);
    }
    public void ShowPanel()
    {
        panel.SetActive(true);
        panelCG.alpha = 1f;
        panelCG.interactable = true;
        panelCG.blocksRaycasts = true;

    }
    public void HidePanel()
    {
        panelCG.alpha = 0f;
        panelCG.interactable = true;
        panelCG.blocksRaycasts = false;
    }
}
