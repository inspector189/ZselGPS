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
        if (panel != null)
        {
            // Zmienia stan widoczności panelu na przeciwny do aktualnego stanu
            panel.SetActive(!panel.activeSelf);
            Debug.Log("Klik");
        }
        
    }
    public void WylaczeniePanelu()
    {
        panel.SetActive(false);
    }
}
