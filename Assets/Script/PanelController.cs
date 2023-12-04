using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PanelController : MonoBehaviour
{
   
    public GameObject Panel;

    public void ClosePanel()
    {
       
            Panel.SetActive(false);
      
    }
   
}
