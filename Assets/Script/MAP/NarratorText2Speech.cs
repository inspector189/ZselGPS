using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;
using Org.BouncyCastle.Asn1;

public class NarratorText2Speech : MonoBehaviour
{
    private AndroidJavaObject ttsPlugin;
    [SerializeField]
    private string message = "Kliknięto przycisk!! ";
    void Start()
    {
        if (Application.platform == RuntimePlatform.Android)
        {
            using (AndroidJavaClass pluginClass = new AndroidJavaClass("com.example.ttsplugin.TextToSpeechPlugin"))
            {
                using (AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
                {
                    AndroidJavaObject activity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
                    pluginClass.CallStatic("Initialize", activity);
                    ttsPlugin = pluginClass;
                }
            }
        }
    }
    public void BtnClicked()
    {
        Speak(message);
    }
    public void Speak(string text)
    {
        if (Application.platform == RuntimePlatform.Android && ttsPlugin != null)
        {
            ttsPlugin.CallStatic("Speak", text);
        }
    }
}

