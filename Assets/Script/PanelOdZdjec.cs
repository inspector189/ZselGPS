using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
public class PanelOdZdjec : MonoBehaviour
{
    public GameObject panel;
    void Start()
    {
        panel.SetActive(false);
    }
    public void TogglePanelVisibility()
    {
        panel.SetActive(true);

    }
    public void WylaczeniePanelu()
    {
        panel.SetActive(false);
    }
}
