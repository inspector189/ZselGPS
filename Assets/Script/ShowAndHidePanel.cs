using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class ShowAndHidePanel : MonoBehaviour
{
    [SerializeField]
    private GameObject panel;
    void Start()
    {
        panel.SetActive(false);
    }
    public void ShowPanel()
    {
        panel.SetActive(true);
    }
    public void HidePanel()
    {
        panel.SetActive(false);
    }
}
