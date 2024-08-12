using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

public class NewScene : MonoBehaviour
{
    [SerializeField]
    private string SceneName; 
    [SerializeField]
    private Button GPSButton;
    private bool ButtonClicked = false;

    void Start()
    {
        if (GPSButton != null)
        {
            GPSButton.onClick.AddListener(OnGPSButtonClicked);
        }
    }

    private void OnGPSButtonClicked()
    {
        ButtonClicked = true;
        CheckScene();
    }

    public void CheckScene()
    {
        if (SceneManager.GetActiveScene().name == "MainMenu")
        {
            PlayerPrefs.SetString("SelectedScene", SceneName);
            Debug.Log("Zapisano wybraną scenę: " + SceneName);
        }

        if (SceneManager.GetActiveScene().name == "MoreSettings" && ButtonClicked)
        {
            string selectedScene = PlayerPrefs.GetString("SelectedScene", "DefaultSceneName");

            SceneManager.LoadScene(selectedScene);
        }
        else
        {
            SceneManager.LoadScene(SceneName);
        }
    }
    public void LoadNewScene()
    {
        CheckScene();
        SceneManager.LoadScene(SceneName);
    }
}
