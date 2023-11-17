using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

public class LoadingScene : MonoBehaviour
{
    public string SceneName;
    public TextMeshProUGUI PercentLoading;
    void Start()
    {
        PercentLoading.text = "0%";
    }
    void Update()
    {
        if(PercentLoading.text == "100%")
        {
            SceneManager.LoadScene(SceneName);
        }
    }
}
