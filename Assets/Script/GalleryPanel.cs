using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

public class GalleryPanel : MonoBehaviour
{
    public GameObject imagePrefab; // Prefabrykat obiektu Image
    public Transform imagesParent; // Rodzic dla nowo tworzonych obiektów Image
    public ScrollRect scrollRect; // Referencja do komponentu ScrollRect

    public void CreateImages(List<Sprite> imagesList)
    {
        imagesList.Clear();
        foreach (Sprite imageSprite in imagesList)
        {
            GameObject newImageObject = Instantiate(imagePrefab, imagesParent); // Tworzenie nowego obiektu Image

            // Ustawienie Sprite'a dla nowego obiektu Image
            Image newImageComponent = newImageObject.GetComponent<Image>();
            newImageComponent.sprite = imageSprite;

            // Zmiana nazwy obiektu Image na nazwę Sprite'a
            newImageObject.name = imageSprite.name; // Przypisanie nazwy Sprite'a do obiektu Image
        }
    }

    public void ScrollImages(float scrollValue)
    {
        scrollRect.verticalNormalizedPosition += scrollValue;
    }
}
