using System;
using System.Globalization;
using System.IO;
using UnityEngine;
using ZXing;
using Vulcanova;
using System.Security.Cryptography;
using System.Text;
using TMPro;

public class QrCodeReader : MonoBehaviour
{
    [SerializeField] private TMP_InputField tokentxt;
    [SerializeField] private TMP_InputField pintxt;
    private const string QrKey = "tDVS4ykCBBAeN33h";

    public void PickImageAndScanQRCode()
    {
        NativeGallery.Permission permission = NativeGallery.GetImageFromGallery((path) =>
        {
            Debug.Log("Wybrany obraz: " + path);

            if (!string.IsNullOrEmpty(path))
            {
                Texture2D texture = NativeGallery.LoadImageAtPath(path, 1024, false);
                if (texture == null)
                {
                    Debug.Log("Nie udało się załadować obrazu");
                    return;
                }

                IBarcodeReader barcodeReader = new BarcodeReader();
                var result = barcodeReader.Decode(texture.GetPixels32(), texture.width, texture.height);
                if (result != null)
                {
                    Debug.Log("Zdekodowany tekst z QR: " + result.Text);
                    try
                    {
                        
                        string decodedText = DecodeQrCode(result.Text);
                        Debug.Log("Zdekodowany tekst z QR po AES: " + decodedText);
                        ExtractValues(decodedText, out string token, out string miejscowosc);
                        Debug.Log(token);
                        Debug.Log(miejscowosc);
                        if(miejscowosc == "wloclawek" && token.Length == 7)
                        {
                            tokentxt.text = token;
                            tokentxt.Select();
                            pintxt.Select();
                        }
                    }
                    catch (Exception ex)
                    {
                        Debug.LogError("Błąd podczas dekodowania kodu QR: " + ex.Message);
                    }
                }
                else
                {
                    Debug.Log("Nie znaleziono kodu QR");
                }
            }
        }, "Wybierz obraz", "image/*");
    }

    private static string DecodeQrCode(string qrCode)
    {
        using var aes = Aes.Create();
        aes.Key = Encoding.UTF8.GetBytes(QrKey);
        aes.Mode = CipherMode.ECB;
        aes.Padding = PaddingMode.PKCS7;

        using var dec = aes.CreateDecryptor(aes.Key, aes.IV);

        using var memoryStream = new MemoryStream(Convert.FromBase64String(qrCode));
        using var cryptoStream = new CryptoStream(memoryStream, dec, CryptoStreamMode.Read);
        using var reader = new StreamReader(cryptoStream);

        return reader.ReadToEnd();
    }
    public void ExtractValues(string text, out string token, out string miejscowosc)
    {
        string[] parts = text.Split('#');

        string urlPart = parts[1];

        string[] urlParts = urlPart.Split('/');

        miejscowosc = urlParts[urlParts.Length - 2];

        token = parts[2];
    }
}
