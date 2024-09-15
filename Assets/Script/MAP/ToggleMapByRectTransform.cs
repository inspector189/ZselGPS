using UnityEngine;
using UnityEngine.UI;

public class ToggleMapByRectTransform : MonoBehaviour
{
    public RectTransform person;
    public RectTransform pole;
    public RectTransform napis;
    public GameObject swiatloidzwiek;
    public GameObject wysrodkujPerson;
    public float napisYPositionWhenOn = 477f;
    public float napisYPositionWhenOff = 722f;

    private Image personImage;

    void Start()
    {
        personImage = person.GetComponent<Image>();
        if (personImage == null)
        {
            Debug.LogError("Person object does not have an Image component.");
        }
    }

    void Update()
    {
        Vector2 currentPosition = napis.anchoredPosition;
        napis.anchoredPosition = new Vector2(currentPosition.x, (swiatloidzwiek != null && swiatloidzwiek.activeSelf) ? napisYPositionWhenOn : napisYPositionWhenOff);

        // Sprawdzenie, czy RectTransform person znajduje si� w RectTransform pole
        bool isOverlapping = IsRectTransformOverlapping(person, pole);
        napis.gameObject.SetActive(!isOverlapping);
        wysrodkujPerson.gameObject.SetActive(isOverlapping);
        SetPersonVisible(isOverlapping);
    }

    // Funkcja sprawdzaj�ca, czy dwa RectTransformy nachodz� na siebie w 2D, uwzgl�dniaj�c rotacj�
    private bool IsRectTransformOverlapping(RectTransform rect1, RectTransform rect2)
    {
        // Przekszta�cenie naro�nik�w prostok�ta rect1 do przestrzeni ekranu
        Vector3[] corners1 = new Vector3[4];
        rect1.GetWorldCorners(corners1);

        // Przekszta�cenie naro�nik�w prostok�ta rect2 do przestrzeni ekranu
        Vector3[] corners2 = new Vector3[4];
        rect2.GetWorldCorners(corners2);

        // Sprawdzenie, czy prostok�ty nachodz� na siebie
        return RectTransformUtility.RectangleContainsScreenPoint(rect2, corners1[0]) ||
               RectTransformUtility.RectangleContainsScreenPoint(rect2, corners1[1]) ||
               RectTransformUtility.RectangleContainsScreenPoint(rect2, corners1[2]) ||
               RectTransformUtility.RectangleContainsScreenPoint(rect2, corners1[3]);
    }

    private void SetPersonVisible(bool visible)
    {
        if (personImage != null)
        {
            Color tempColor = personImage.color;
            tempColor.a = visible ? 1f : 0f;
            personImage.color = tempColor;
        }
    }
}
