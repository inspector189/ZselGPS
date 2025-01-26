using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Android;

public class LocationChecker : MonoBehaviour
{
    public int wyborSceny;
    public string scena;

    public void CheckLocationServices()
    {
        try
        {
            // Sprawd�, czy us�ugi lokalizacyjne s� w��czone
            if (!Input.location.isEnabledByUser)
            {
                // Je�li lokalizacja jest wy��czona, wy�wietl toast message
                AndroidToast.ShowToast("Us�ugi lokalizacyjne s� wy��czone. Prosz� je w��czy�.");

                // Sprawd�, czy aplikacja ma ju� uprawnienia
                if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
                {
                    // Popro� o uprawnienia do lokalizacji
                    Permission.RequestUserPermission(Permission.FineLocation);
                }
            }
            else
            {
                // Zainicjalizuj us�ugi lokalizacyjne
                Input.location.Start();

                // Poczekaj chwil�, a� lokalizacja zostanie w pe�ni zainicjalizowana
                if (Input.location.status == LocationServiceStatus.Running)
                {
                    Input.location.Stop();
                    PlayerPrefs.SetInt("WybranaScena", wyborSceny);
                    

                    SceneManager.LoadScene(scena);
                }
                else
                {
                    AndroidToast.ShowToast("Us�ugi lokalizacyjne s� wy��czone. Prosz� je w��czy�.");
                }
            }
        }
        catch (System.Exception ex)
        {
            // Z�ap wszelkie wyj�tki, kt�re mog� wyst�pi� i wy�wietl log b��du
            Debug.LogError("Wyst�pi� b��d podczas sprawdzania us�ug lokalizacyjnych: " + ex.Message);
            AndroidToast.ShowToast("Wyst�pi� b��d podczas sprawdzania us�ug lokalizacyjnych. \nNadaj aplikacji w ustawieniach uprawnienia do lokalizacji i mikrofonu, oraz w��cz GPS.");
        }
    }
}
