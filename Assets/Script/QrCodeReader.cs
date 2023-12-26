/*

using System;
using System.Globalization;
using System.IO;
using UnityEngine;
using NativeGalleryNamespace;
using ZXing;
using Vulcanova;
using Vulcanova.Features.Auth.ScanningQrCode;

public class QrCodeReader : MonoBehaviour
{
    public void PickImageAndScanQRCode()
    {
        NativeGallery.Permission permission = NativeGallery.GetImageFromGallery((path) =>
        {
            Debug.Log("Wybrany obraz: " + path);

            if (path != null)
            {
                // Za�aduj wybrane zdj�cie jako Texture2D
                Texture2D texture = NativeGallery.LoadImageAtPath(path, 1024, false);
                if (texture == null)
                {
                    Debug.Log("Nie uda�o si� za�adowa� obrazu");
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
                AuthenticateWithVulcan(result.Text);
            }
            else
            {
                Debug.Log("Nie znaleziono kodu QR");
            } 
        }
        catch (Exception ex)
        {
            Debug.LogError("B��d podczas skanowania kodu QR: " + ex.Message);
        }
    }
    private void AuthenticateWithVulcan(string decodedData)
    {
        // Rozdziel zdekodowane dane na odpowiednie cz�ci
        var qrCodeData = AuthQrCode.FromQrString(decodedData);

        // Logowanie do dziennika Vulkanowego
        // Mo�esz potrzebowa� dodatkowej logiki w zale�no�ci od wymaga� API
        try
        {
            // Przyk�adowo, je�li potrzebujesz PINu, musisz go tutaj przekaza�
            Debug.Log(qrCodeData.Token + "Tw�j PIN" + qrCodeData.ApiAddress);
        }
        catch (Exception ex)
        {
            Debug.LogError("B��d logowania: " + ex.Message);
        }
    }

}
*/