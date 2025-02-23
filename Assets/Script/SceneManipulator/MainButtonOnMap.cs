using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class MainButtonOnMap : MonoBehaviour
{
    public GameObject btn1;
    public GameObject btn3;
    // Start is called before the first frame update
    void Start()
    {
        int wybor = PlayerPrefs.GetInt("WybranaScena");
        if (wybor == 0)
        {
            btn1.SetActive(true);
            btn3.SetActive(false);
        }
        else if (wybor == 1)
        {
            btn1.SetActive(true);
            btn3.SetActive(false);
        }
        else
        {
            btn1.SetActive(false);
            btn3.SetActive(true);
        }
    }

}
