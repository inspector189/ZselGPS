using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisableFullScreen : MonoBehaviour
{
    public static int SDK_INT; //get value 0 if I call from another script
    public static int result; //get value 0 if I call from another script
    void Start()
    {
        disableFullScreen();
        result = getStatusHeight();
        SDK_INT = getSDKInt();
    }

    static void disableFullScreen()
    {
        using (var unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
        {
            using (var activity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity"))
            {
                using (var window = activity.Call<AndroidJavaObject>("getWindow"))
                {
                    using (var Decor = window.Call<AndroidJavaObject>("getDecorView"))
                    {
                        using (var controller = Decor.Call<AndroidJavaObject>("getWindowInsetsController"))
                        {
                            using (var type = new AndroidJavaClass("android.view.WindowInsets$Type"))
                            {
                                controller.Call("show", type.CallStatic<int>("statusBars"));
                            }
                        }
                    }
                    window.Call("setStatusBarColor", unchecked((int)0x00005700)); //for transparent status bar
                    window.Call("setFlags", 512, 512); //hide navigation bar
                }
            }
        }
    }

    static int getStatusHeight()
    {
        AndroidJavaClass up = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        AndroidJavaObject ca = up.GetStatic<AndroidJavaObject>("currentActivity");
        var windowManager = ca.Call<AndroidJavaObject>("getWindowManager");
        var wMetrics = windowManager.Call<AndroidJavaObject>("getCurrentWindowMetrics");
        var insets = wMetrics.Call<AndroidJavaObject>("getWindowInsets");

        return insets.Call<int>("getStableInsetTop");
    }

    static int getSDKInt()
    {
        using (var version = new AndroidJavaClass("android.os.Build$VERSION"))
        {
            return version.GetStatic<int>("SDK_INT");
        }
    }
}
