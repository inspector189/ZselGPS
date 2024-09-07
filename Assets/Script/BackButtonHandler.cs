using UnityEngine;
using UnityEngine.SceneManagement;

public class BackButtonHandler : MonoBehaviour
{
    public string sceneToLoad = "MainMenu"; // Scena, do kt�rej wraca po naci�ni�ciu "Back"
    private bool isBackPressedOnce = false; // Flaga oznaczaj�ca, czy przycisk "Back" zosta� naci�ni�ty raz
    private float backPressedTime; // Czas, kiedy przycisk zosta� naci�ni�ty
    public float timeBetweenBackPresses = 2.0f; // Czas (w sekundach), w kt�rym musi zosta� naci�ni�ty drugi raz, aby zamkn�� aplikacj�

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (SceneManager.GetActiveScene().name == sceneToLoad) // Sprawd�, czy u�ytkownik znajduje si� w menu
            {
                if (isBackPressedOnce)
                {
                    // Je�li przycisk zosta� ju� naci�ni�ty wcze�niej i min�� odpowiedni czas, zamknij aplikacj�
                    if (Time.time - backPressedTime < timeBetweenBackPresses)
                    {
                        Application.Quit(); // Zamkni�cie aplikacji
                    }
                    else
                    {
                        // Je�li min�o wi�cej ni� timeBetweenBackPresses sekund, resetujemy flag�
                        isBackPressedOnce = false;
                    }
                }
                else
                {
                    // Poka� toast i ustaw flag�
                    AndroidToast.ShowToast("Prosz� klikn�� jeszcze raz, aby wyj��.");
                    isBackPressedOnce = true;
                    backPressedTime = Time.time;
                }
            }
            else
            {
                // Je�li u�ytkownik nie jest w menu, powr�t do menu
                SceneManager.LoadScene(sceneToLoad);
            }
        }
    }
}
