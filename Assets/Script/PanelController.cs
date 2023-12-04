using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PanelController : MonoBehaviour
{
    public void ClosePanel()
    {
        Debug.Log("Test");
        PlayerPrefs.SetInt("panelStatus", 1);
        PlayerPrefs.SetInt("panelCzynnosc", 0);
    }
   
}
