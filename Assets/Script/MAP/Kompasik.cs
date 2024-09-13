using System.Collections;
using UnityEngine;

public class Kompasik : MonoBehaviour
{
    public GameObject Ikonka; // Persona na mapie
    private bool gyroEnabled;
    private Gyroscope gyro;
    private float compassUpdateInterval = 3.5f; // Czas miêdzy aktualizacjami kompasu
    private float lerpSpeed = 5f; // Szybkoœæ p³ynnego obracania
    private float mapRotationOffset = -32.1f; // Offset obrotu mapy

    // Start is called before the first frame update
    void Start()
    {
        // Sprawdzenie i w³¹czenie ¿yroskopu
        if (SystemInfo.supportsGyroscope)
        {
            gyro = Input.gyro;
            gyro.enabled = true;
            gyroEnabled = true;
        }
        else
        {
            gyroEnabled = false;
        }

        // Sprawdzenie i w³¹czenie kompasu
        if (Input.compass.enabled)
        {
            Input.compass.enabled = true;
            StartCoroutine(UpdateCompass());
        }
        else
        {
            Debug.LogWarning("Kompas nie jest dostêpny.");
        }
    }

    // Korutyna do aktualizacji kompasu
    private IEnumerator UpdateCompass()
    {
        while (true)
        {
            if (Input.compass.enabled)
            {
                // U¿yj kompasu do obliczenia kierunku
                float compassHeading = Input.compass.trueHeading;

                // Oblicz rotacjê opart¹ na gyroskopie i kompasie
                Quaternion targetRotation = Quaternion.Euler(0, 0, -(compassHeading + mapRotationOffset)); // Ujêcie rotacji mapy

                if (gyroEnabled)
                {
                    Quaternion gyroAttitude = gyro.attitude;
                    float gyroYaw = gyroAttitude.eulerAngles.z;
                    targetRotation *= Quaternion.Euler(0, 0, gyroYaw); // Dodaj rotacjê z gyroskopu
                }

                // P³ynne obracanie za pomoc¹ Lerp
                Ikonka.transform.rotation = Quaternion.Lerp(Ikonka.transform.rotation, targetRotation, Time.deltaTime * lerpSpeed);
            }

            yield return new WaitForSeconds(compassUpdateInterval); // Czekaj przed kolejn¹ aktualizacj¹
        }
    }
}
