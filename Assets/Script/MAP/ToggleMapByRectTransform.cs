using UnityEngine;
using UnityEngine.UI; // Dodaj przestrze� nazw do obs�ugi komponentu Image

public class ToggleMapByRectTransform : MonoBehaviour
{
    public RectTransform person;  // Obiekt osoby z RectTransform (obiekt UI w 2D)
    public RectTransform pole;    // Obiekt pola (obszar) z RectTransform (UI w 2D)
    public RectTransform napis;   // Obiekt napisu
    public GameObject swiatloidzwiek; // Obiekt do sprawdzenia, czy jest w��czony (mo�e by� null)
    public float napisYPositionWhenOn = 477f;  // Pozycja Y napisu, gdy swiatloidzwiek jest w��czony
    public float napisYPositionWhenOff = 722f; // Pozycja Y napisu, gdy swiatloidzwiek jest wy��czony lub nie istnieje
    private Image personImage;    // Referencja do komponentu Image dla person

    void Start()
    {
        // Pobierz komponent Image z obiektu person
        personImage = person.GetComponent<Image>();

        // Sprawd�, czy obiekt person ma komponent Image
        if (personImage == null)
        {
            Debug.LogError("Person object does not have an Image component.");
        }
    }

    void Update()
    {
        // Sprawd�, czy obiekt swiatloidzwiek istnieje i jest w��czony
        Vector2 currentPosition = napis.anchoredPosition;
        if (swiatloidzwiek != null && swiatloidzwiek.activeSelf)
        {
            // Je�li obiekt swiatloidzwiek istnieje i jest w��czony, ustaw pozycj� Y napisu
            napis.anchoredPosition = new Vector2(currentPosition.x, napisYPositionWhenOn);
        }
        else
        {
            // Je�li obiekt swiatloidzwiek nie istnieje lub jest wy��czony, ustaw pozycj� Y napisu
            napis.anchoredPosition = new Vector2(currentPosition.x, napisYPositionWhenOff);
        }

        // Sprawd�, czy RectTransform person znajduje si� w RectTransform pole
        if (IsRectTransformOverlapping(person, pole))
        {
            // Je�li nak�adaj� si�, ukryj napis i poka� person
            napis.gameObject.SetActive(false);
            SetPersonVisible(true);
        }
        else
        {
            // Je�li si� nie nak�adaj�, poka� napis i ukryj person
            napis.gameObject.SetActive(true);
            SetPersonVisible(false);
        }
    }

    // Funkcja sprawdzaj�ca, czy dwa RectTransformy nachodz� na siebie w 2D
    private bool IsRectTransformOverlapping(RectTransform rect1, RectTransform rect2)
    {
        // Pobranie naro�nik�w jako Vector3
        Vector3[] corners1 = new Vector3[4];
        Vector3[] corners2 = new Vector3[4];

        rect1.GetWorldCorners(corners1);
        rect2.GetWorldCorners(corners2);

        // Przekszta�cenie wsp�rz�dnych do Vector2 (pomijamy Z)
        Vector2 rect1Min = new Vector2(corners1[0].x, corners1[0].y); // Lewy dolny r�g rect1
        Vector2 rect1Max = new Vector2(corners1[2].x, corners1[2].y); // Prawy g�rny r�g rect1

        Vector2 rect2Min = new Vector2(corners2[0].x, corners2[0].y); // Lewy dolny r�g rect2
        Vector2 rect2Max = new Vector2(corners2[2].x, corners2[2].y); // Prawy g�rny r�g rect2

        // Sprawdzenie, czy zakresy X i Y nachodz� na siebie
        bool overlapX = rect1Min.x < rect2Max.x && rect1Max.x > rect2Min.x;
        bool overlapY = rect1Min.y < rect2Max.y && rect1Max.y > rect2Min.y;

        // Zwracamy true, je�li obiekty nachodz� si� zar�wno na osi X, jak i Y
        return overlapX && overlapY;
    }

    // Funkcja ustawiaj�ca widoczno�� person poprzez zmian� koloru Image w 2D
    private void SetPersonVisible(bool visible)
    {
        if (personImage != null)
        {
            if (visible)
            {
                // Ustaw pe�n� widoczno�� (alpha = 1)
                Color tempColor = personImage.color;
                tempColor.a = 1f;
                personImage.color = tempColor;
            }
            else
            {
                // Ustaw niewidoczno�� (alpha = 0)
                Color tempColor = personImage.color;
                tempColor.a = 0f;
                personImage.color = tempColor;
            }
        }
    }
}
