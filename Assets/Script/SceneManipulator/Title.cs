using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Title : MonoBehaviour
{
    public TextMeshProUGUI napis;
    // Start is called before the first frame update
    void Start()
    {
        int wybor = PlayerPrefs.GetInt("WybranaScena");
        if (wybor == 0)
        {
            napis.text = "GPS do sali";
        }
        else if (wybor == 1)
        {
            napis.text = "Wa¿ne miejsca";
        }
        else
        {
            napis.text = "Tryb swobodny";
        }
    }

}
