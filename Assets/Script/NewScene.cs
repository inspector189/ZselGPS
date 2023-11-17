using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

public class NewScene : MonoBehaviour
{
    public string SceneName;
   
    public void LoadNewScene()
    {
        SceneManager.LoadScene(SceneName);
    }
   
}
