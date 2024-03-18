using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GPSController : MonoBehaviour
{
    public Camera mainCamera;
    public RectTransform personRectTransform;
    public float mapScale = 300.0f; // Skala mapy w Unity w stosunku do rzeczywistego œwiata

    private Vector2 gpsOrigin = new Vector2(52.668395f, 19.042718f);
    private Vector2 originInUnity = new Vector2(0f, 0f);

    public void UpdatePersonPosition(Vector2 currentGPS)
    {
        // Przelicz ró¿nicê miêdzy bie¿¹cymi wspó³rzêdnymi GPS a punktem odniesienia
        Vector2 gpsOffset = currentGPS - gpsOrigin;

        // Przeskaluj tê ró¿nicê do skali mapy w Unity
        Vector2 positionInUnity = originInUnity + gpsOffset * mapScale;

        // Ustaw pozycjê `Person` w World Space
        personRectTransform.position = mainCamera.ScreenToWorldPoint(new Vector3(positionInUnity.x, positionInUnity.y, mainCamera.nearClipPlane));
    }
}
