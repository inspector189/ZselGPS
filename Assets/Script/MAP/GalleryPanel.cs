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
        // Usuwamy istniejące obrazy przed dodaniem nowych
        foreach (Transform child in imagesParent)
        {
            Destroy(child.gameObject);
        }

        foreach (Sprite imageSprite in imagesList)
        {
            GameObject newImageObject = Instantiate(imagePrefab, imagesParent); // Tworzenie nowego obiektu Image

            // Ustawienie Sprite'a dla nowego obiektu Image
            Image newImageComponent = newImageObject.GetComponent<Image>();
            if (newImageComponent != null)
            {
                newImageComponent.sprite = imageSprite;

                // Zmiana nazwy obiektu Image na nazwę Sprite'a
                newImageObject.name = imageSprite.name; // Przypisanie nazwy Sprite'a do obiektu Image
            }
            else
            {
                Debug.LogError("Image component not found on the new image object");
            }
        }
    }

    public void ScrollImages(float scrollValue)
    {
        scrollRect.verticalNormalizedPosition += scrollValue;
    }
}
