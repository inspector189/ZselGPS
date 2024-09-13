using System.Collections;
using UnityEngine;

public class Kompasik : MonoBehaviour
{
    public GameObject Ikonka; // Persona na mapie
    private bool gyroEnabled;
    private Gyroscope gyro;
    private float compassUpdateInterval = 3.5f; // Czas mi�dzy aktualizacjami kompasu
    private float lerpSpeed = 5f; // Szybko�� p�ynnego obracania
    private float mapRotationOffset = -32.1f; // Offset obrotu mapy

    // Start is called before the first frame update
    void Start()
    {
        // Sprawdzenie i w��czenie �yroskopu
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

        // Sprawdzenie i w��czenie kompasu
        if (Input.compass.enabled)
        {
            Input.compass.enabled = true;
            StartCoroutine(UpdateCompass());
        }
        else
        {
            Debug.LogWarning("Kompas nie jest dost�pny.");
        }
    }

    // Korutyna do aktualizacji kompasu
    private IEnumerator UpdateCompass()
    {
        while (true)
        {
            if (Input.compass.enabled)
            {
                // U�yj kompasu do obliczenia kierunku
                float compassHeading = Input.compass.trueHeading;

                // Oblicz rotacj� opart� na gyroskopie i kompasie
                Quaternion targetRotation = Quaternion.Euler(0, 0, -(compassHeading + mapRotationOffset)); // Uj�cie rotacji mapy

                if (gyroEnabled)
                {
                    Quaternion gyroAttitude = gyro.attitude;
                    float gyroYaw = gyroAttitude.eulerAngles.z;
                    targetRotation *= Quaternion.Euler(0, 0, gyroYaw); // Dodaj rotacj� z gyroskopu
                }

                // P�ynne obracanie za pomoc� Lerp
                Ikonka.transform.rotation = Quaternion.Lerp(Ikonka.transform.rotation, targetRotation, Time.deltaTime * lerpSpeed);
            }

            yield return new WaitForSeconds(compassUpdateInterval); // Czekaj przed kolejn� aktualizacj�
        }
    }
}
