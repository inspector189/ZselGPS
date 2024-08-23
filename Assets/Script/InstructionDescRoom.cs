using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InstructionDescRoom : MonoBehaviour
{
    [SerializeField]
    private GameObject descSecond;
    [SerializeField]
    private GameObject descThird;
    [SerializeField]
    private GameObject descFour;
    [SerializeField]
    private GameObject btnArrowD;
    [SerializeField]
    private GameObject btnArrowU;

    private void Start()
    {
        descSecond.SetActive(true);
        descThird.SetActive(false);
        descFour.SetActive(false);
        btnArrowD.SetActive(true);
        btnArrowU.SetActive(false);
    }
    public void DownDirectionClick()
    {
        descSecond.SetActive(false);
        descThird.SetActive(true);
        descFour.SetActive(true);
        btnArrowD.SetActive(false);
        btnArrowU.SetActive(true);
    }
    public void UpDirectionClick()
    {
        descSecond.SetActive(true);
        descThird.SetActive(false);
        descFour.SetActive(false);
        btnArrowD.SetActive(true);
        btnArrowU.SetActive(false);
    }

}
