using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class NewScene : MonoBehaviour
{
    [SerializeField]
    private string SceneName;
    [SerializeField]
    private Button GPSButton;

    void Start()
    {
        if (GPSButton != null)
        {
            GPSButton.onClick.AddListener(OnGPSButtonClicked);
        }
    }

    private void OnGPSButtonClicked()
    {
        PlayerPrefs.SetString("PreviousScene", SceneManager.GetActiveScene().name);
        SceneManager.LoadScene(SceneName);
    }

    public void LoadPreviousScene()
    {
        string previousScene = PlayerPrefs.GetString("PreviousScene", "DefaultSceneName");
        SceneManager.LoadScene(previousScene);
    }
    public void LoadNewScene()
    {
        PlayerPrefs.SetString("PreviousScene", SceneManager.GetActiveScene().name);
        SceneManager.LoadScene(SceneName);
    }
}
