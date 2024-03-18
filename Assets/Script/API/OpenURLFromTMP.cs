using UnityEngine;

public class OpenURLFromTMP : MonoBehaviour
{
    private void OnMouseDown()
    {
        Application.OpenURL("https://www.youtube.com/watch?v=64pMbkmB4Es");
    }
}