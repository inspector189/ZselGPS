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
            // Je�li lokalizacja jest wy��czona, wy�wietl toast message
            AndroidToast.ShowToast("Us�ugi lokalizacyjne s� wy��czone. Prosz� je w��czy�.");
            Permission.RequestUserPermission(Permission.FineLocation);
        }
        else
        {
            // Je�li lokalizacja jest w��czona, przejd� do innej sceny
            SceneManager.LoadScene(scena);
        }
    }
}
