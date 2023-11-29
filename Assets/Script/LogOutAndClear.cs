using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LogOutAndClear : MonoBehaviour
{
    public string SceneName;

    public void LogOut()
    {
        PlayerPrefs.DeleteKey("ZapisanyToken");
        PlayerPrefs.DeleteKey("ZapisanyPin");
        PlayerPrefs.DeleteKey("SavedUsers");
        PlayerPrefs.Save();

        Debug.Log("Usuniêto zapisane dane u¿ytkownika.");

        // Dostêp do danych z PolecenieApiVulcan
        PolecenieApiVulcan polecenieApiVulcan = FindObjectOfType<PolecenieApiVulcan>();
        if (polecenieApiVulcan != null)
        {
            polecenieApiVulcan.ClearUserList();
        }
        else
        {
            Debug.LogWarning("Nie znaleziono skryptu PolecenieApiVulcan.");
        }

        SceneManager.LoadScene(SceneName);
    }
}