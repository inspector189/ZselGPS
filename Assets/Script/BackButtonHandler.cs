using UnityEngine;
using UnityEngine.SceneManagement;

public class BackButtonHandler : MonoBehaviour
{
    public string sceneToLoad = "MainMenu"; // Scena, do której wraca po naciœniêciu "Back"
    private bool isBackPressedOnce = false; // Flaga oznaczaj¹ca, czy przycisk "Back" zosta³ naciœniêty raz
    private float backPressedTime; // Czas, kiedy przycisk zosta³ naciœniêty
    public float timeBetweenBackPresses = 2.0f; // Czas (w sekundach), w którym musi zostaæ naciœniêty drugi raz, aby zamkn¹æ aplikacjê

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (SceneManager.GetActiveScene().name == sceneToLoad) // SprawdŸ, czy u¿ytkownik znajduje siê w menu
            {
                if (isBackPressedOnce)
                {
                    // Jeœli przycisk zosta³ ju¿ naciœniêty wczeœniej i min¹³ odpowiedni czas, zamknij aplikacjê
                    if (Time.time - backPressedTime < timeBetweenBackPresses)
                    {
                        Application.Quit(); // Zamkniêcie aplikacji
                    }
                    else
                    {
                        // Jeœli minê³o wiêcej ni¿ timeBetweenBackPresses sekund, resetujemy flagê
                        isBackPressedOnce = false;
                    }
                }
                else
                {
                    // Poka¿ toast i ustaw flagê
                    AndroidToast.ShowToast("Proszê klikn¹æ jeszcze raz, aby wyjœæ.");
                    isBackPressedOnce = true;
                    backPressedTime = Time.time;
                }
            }
            else
            {
                // Jeœli u¿ytkownik nie jest w menu, powrót do menu
                SceneManager.LoadScene(sceneToLoad);
            }
        }
    }
}
