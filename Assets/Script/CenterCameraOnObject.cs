using UnityEngine;

public class CenterCameraOnObject : MonoBehaviour
{
    public Camera cameraToMove;
    public GameObject objectToCenter;

    // Funkcja do wywo³ania z przycisku
    public void CenterCamera()
    {
        if (cameraToMove != null && objectToCenter != null)
        {
            // Ustaw pozycjê kamery na pozycjê obiektu z zachowaniem odleg³oœci Z
            cameraToMove.transform.position = new Vector3(objectToCenter.transform.position.x, objectToCenter.transform.position.y, cameraToMove.transform.position.z);
        }
    }
}