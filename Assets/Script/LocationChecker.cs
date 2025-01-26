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
            // SprawdŸ, czy us³ugi lokalizacyjne s¹ w³¹czone
            if (!Input.location.isEnabledByUser)
            {
                // Jeœli lokalizacja jest wy³¹czona, wyœwietl toast message
                AndroidToast.ShowToast("Us³ugi lokalizacyjne s¹ wy³¹czone. Proszê je w³¹czyæ.");

                // SprawdŸ, czy aplikacja ma ju¿ uprawnienia
                if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
                {
                    // Poproœ o uprawnienia do lokalizacji
                    Permission.RequestUserPermission(Permission.FineLocation);
                }
            }
            else
            {
                // Zainicjalizuj us³ugi lokalizacyjne
                Input.location.Start();

                // Poczekaj chwilê, a¿ lokalizacja zostanie w pe³ni zainicjalizowana
                if (Input.location.status == LocationServiceStatus.Running)
                {
                    Input.location.Stop();
                    PlayerPrefs.SetInt("WybranaScena", wyborSceny);
                    

                    SceneManager.LoadScene(scena);
                }
                else
                {
                    AndroidToast.ShowToast("Us³ugi lokalizacyjne s¹ wy³¹czone. Proszê je w³¹czyæ.");
                }
            }
        }
        catch (System.Exception ex)
        {
            // Z³ap wszelkie wyj¹tki, które mog¹ wyst¹piæ i wyœwietl log b³êdu
            Debug.LogError("Wyst¹pi³ b³¹d podczas sprawdzania us³ug lokalizacyjnych: " + ex.Message);
            AndroidToast.ShowToast("Wyst¹pi³ b³¹d podczas sprawdzania us³ug lokalizacyjnych. \nNadaj aplikacji w ustawieniach uprawnienia do lokalizacji i mikrofonu, oraz w³¹cz GPS.");
        }
    }
}
