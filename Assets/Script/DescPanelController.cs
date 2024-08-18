using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class DescPanelController : MonoBehaviour
{
    [SerializeField]
    private GameObject panelDefault;
    [SerializeField]
    private GameObject panelDesc;
    [SerializeField]
    private GameObject btnBack;

    private void Start()
    {
        // Ustawiamy funkcję przycisku na scenę MainMenu przy starcie
        SetBackButtonToMainMenu();
    }

    public void ChangePanel()
    {
        panelDefault.SetActive(false);
        panelDesc.SetActive(true);

        // Gdy zmieniamy na panelDesc, zmieniamy funkcję przycisku
        SetBackButtonToDefaultPanel();
    }

    public void BackToDefaultPanel()
    {
        panelDefault.SetActive(true);
        panelDesc.SetActive(false);

        // Gdy wracamy do panelDefault, zmieniamy funkcję przycisku na powrót do MainMenu
        SetBackButtonToMainMenu();
    }

    private void SetBackButtonToMainMenu()
    {
        // Najpierw usuwamy wszystkie poprzednie listenery, aby uniknąć podwójnych wywołań
        btnBack.GetComponent<UnityEngine.UI.Button>().onClick.RemoveAllListeners();
        // Następnie dodajemy listener do przejścia do MainMenu
        btnBack.GetComponent<UnityEngine.UI.Button>().onClick.AddListener(() =>
        {
            SceneManager.LoadScene("MainMenu");
        });
    }

    private void SetBackButtonToDefaultPanel()
    {
        // Najpierw usuwamy wszystkie poprzednie listenery
        btnBack.GetComponent<UnityEngine.UI.Button>().onClick.RemoveAllListeners();
        // Następnie dodajemy listener do powrotu do panelDefault
        btnBack.GetComponent<UnityEngine.UI.Button>().onClick.AddListener(() =>
        {
            BackToDefaultPanel();
        });
    }
}