using UnityEngine;
using UnityEngine.UI; // Dodaj przestrzeñ nazw do obs³ugi komponentu Image

public class ToggleMapByRectTransform : MonoBehaviour
{
    public RectTransform person;  // Obiekt osoby z RectTransform (obiekt UI w 2D)
    public RectTransform pole;    // Obiekt pola (obszar) z RectTransform (UI w 2D)
    public RectTransform napis;   // Obiekt napisu
    public GameObject swiatloidzwiek; // Obiekt do sprawdzenia, czy jest w³¹czony (mo¿e byæ null)
    public float napisYPositionWhenOn = 477f;  // Pozycja Y napisu, gdy swiatloidzwiek jest w³¹czony
    public float napisYPositionWhenOff = 722f; // Pozycja Y napisu, gdy swiatloidzwiek jest wy³¹czony lub nie istnieje
    private Image personImage;    // Referencja do komponentu Image dla person

    void Start()
    {
        // Pobierz komponent Image z obiektu person
        personImage = person.GetComponent<Image>();

        // SprawdŸ, czy obiekt person ma komponent Image
        if (personImage == null)
        {
            Debug.LogError("Person object does not have an Image component.");
        }
    }

    void Update()
    {
        // SprawdŸ, czy obiekt swiatloidzwiek istnieje i jest w³¹czony
        Vector2 currentPosition = napis.anchoredPosition;
        if (swiatloidzwiek != null && swiatloidzwiek.activeSelf)
        {
            // Jeœli obiekt swiatloidzwiek istnieje i jest w³¹czony, ustaw pozycjê Y napisu
            napis.anchoredPosition = new Vector2(currentPosition.x, napisYPositionWhenOn);
        }
        else
        {
            // Jeœli obiekt swiatloidzwiek nie istnieje lub jest wy³¹czony, ustaw pozycjê Y napisu
            napis.anchoredPosition = new Vector2(currentPosition.x, napisYPositionWhenOff);
        }

        // SprawdŸ, czy RectTransform person znajduje siê w RectTransform pole
        if (IsRectTransformOverlapping(person, pole))
        {
            // Jeœli nak³adaj¹ siê, ukryj napis i poka¿ person
            napis.gameObject.SetActive(false);
            SetPersonVisible(true);
        }
        else
        {
            // Jeœli siê nie nak³adaj¹, poka¿ napis i ukryj person
            napis.gameObject.SetActive(true);
            SetPersonVisible(false);
        }
    }

    // Funkcja sprawdzaj¹ca, czy dwa RectTransformy nachodz¹ na siebie w 2D
    private bool IsRectTransformOverlapping(RectTransform rect1, RectTransform rect2)
    {
        // Pobranie naro¿ników jako Vector3
        Vector3[] corners1 = new Vector3[4];
        Vector3[] corners2 = new Vector3[4];

        rect1.GetWorldCorners(corners1);
        rect2.GetWorldCorners(corners2);

        // Przekszta³cenie wspó³rzêdnych do Vector2 (pomijamy Z)
        Vector2 rect1Min = new Vector2(corners1[0].x, corners1[0].y); // Lewy dolny róg rect1
        Vector2 rect1Max = new Vector2(corners1[2].x, corners1[2].y); // Prawy górny róg rect1

        Vector2 rect2Min = new Vector2(corners2[0].x, corners2[0].y); // Lewy dolny róg rect2
        Vector2 rect2Max = new Vector2(corners2[2].x, corners2[2].y); // Prawy górny róg rect2

        // Sprawdzenie, czy zakresy X i Y nachodz¹ na siebie
        bool overlapX = rect1Min.x < rect2Max.x && rect1Max.x > rect2Min.x;
        bool overlapY = rect1Min.y < rect2Max.y && rect1Max.y > rect2Min.y;

        // Zwracamy true, jeœli obiekty nachodz¹ siê zarówno na osi X, jak i Y
        return overlapX && overlapY;
    }

    // Funkcja ustawiaj¹ca widocznoœæ person poprzez zmianê koloru Image w 2D
    private void SetPersonVisible(bool visible)
    {
        if (personImage != null)
        {
            if (visible)
            {
                // Ustaw pe³n¹ widocznoœæ (alpha = 1)
                Color tempColor = personImage.color;
                tempColor.a = 1f;
                personImage.color = tempColor;
            }
            else
            {
                // Ustaw niewidocznoœæ (alpha = 0)
                Color tempColor = personImage.color;
                tempColor.a = 0f;
                personImage.color = tempColor;
            }
        }
    }
}
