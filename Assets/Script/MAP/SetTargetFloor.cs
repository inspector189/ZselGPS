using UnityEngine;
using UnityEngine.UI;

public class SetTargetFloor : MonoBehaviour
{
    public int targetFloor;

    private void Awake()
    {
        Button targetButton = GetComponentInParent<Button>();

        if (targetButton != null)
        {
            Debug.Log("Ustawiono Listener");
            targetButton.onClick.AddListener(OnClick);
        }
        else
        {
            Debug.LogError("Nie znaleziono komponentu Button na obiekcie!");
        }
    }
    public void OnClick()
    {
        PlayerPrefs.SetInt("pietroPomieszczenia", targetFloor);
        Debug.Log($"Piętro ustawione na: {targetFloor}");
    }

}
