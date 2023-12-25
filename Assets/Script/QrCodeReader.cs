using System;
using System.Globalization;
using System.IO;
using UnityEngine;
using NativeGalleryNamespace;
using ZXing;

public class QrCodeReader : MonoBehaviour
{
    public void PickImageAndScanQRCode()
    {
        NativeGallery.Permission permission = NativeGallery.GetImageFromGallery((path) =>
        {
            Debug.Log("Wybrany obraz: " + path);

            if (path != null)
            {
                // Za³aduj wybrane zdjêcie jako Texture2D
                Texture2D texture = NativeGallery.LoadImageAtPath(path, 1024, false);
                if (texture == null)
                {
                    Debug.Log("Nie uda³o siê za³adowaæ obrazu");
                    return;
                }

                // Skanowanie kodu QR
                ScanQRCode(texture);
            }
        }, "Wybierz obraz", "image/*");
    }

    private void ScanQRCode(Texture2D image)
    {
        try
        {
            IBarcodeReader barcodeReader = new BarcodeReader();
            // Dekoduj obraz
            var result = barcodeReader.Decode(image.GetPixels32(), image.width, image.height);
            if (result != null)
            {
                Debug.Log("Zdekodowany tekst z QR: " + result.Text);
            }
            else
            {
                Debug.Log("Nie znaleziono kodu QR");
            }
        }
        catch (Exception ex)
        {
            Debug.LogError("B³¹d podczas skanowania kodu QR: " + ex.Message);
        }
    }

}
