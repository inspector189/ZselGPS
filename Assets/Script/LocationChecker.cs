using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Android;

public class LocationChecker : MonoBehaviour
{
    public string scena;
    public void CheckLocationServices()
    {
        if (!Input.location.isEnabledByUser)
        {
            // Jeœli lokalizacja jest wy³¹czona, wyœwietl toast message
            AndroidToast.ShowToast("Us³ugi lokalizacyjne s¹ wy³¹czone. Proszê je w³¹czyæ.");
            Permission.RequestUserPermission(Permission.FineLocation);
        }
        else
        {
            // Jeœli lokalizacja jest w³¹czona, przejdŸ do innej sceny
            SceneManager.LoadScene(scena);
        }
    }
}
