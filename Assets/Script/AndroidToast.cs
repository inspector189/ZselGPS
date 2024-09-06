using UnityEngine;

public class AndroidToast : MonoBehaviour
{
    public static void ShowToast(string message)
    {
    #if UNITY_ANDROID && !UNITY_EDITOR
        
        // Uzyskaj kontekst aplikacji Androidowej
        AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        AndroidJavaObject currentActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");

        // Wywo³aj natywn¹ funkcjê Androida, aby wyœwietliæ toast
        AndroidJavaClass toastClass = new AndroidJavaClass("android.widget.Toast");
        currentActivity.Call("runOnUiThread", new AndroidJavaRunnable(() =>
        {
            AndroidJavaObject toastObject = toastClass.CallStatic<AndroidJavaObject>("makeText", currentActivity, message, toastClass.GetStatic<int>("LENGTH_SHORT"));
            toastObject.Call("show");
        }));
        
    #else
        Debug.Log("Toast Message: " + message); // W edytorze Unity wyœwietli komunikat w konsoli
    #endif
    }
}
