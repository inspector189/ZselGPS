using UnityEngine;

public class CenterCameraOnObject : MonoBehaviour
{
    public Camera cameraToMove;
    public GameObject objectToCenter;

    // Funkcja do wywo�ania z przycisku
    public void CenterCamera()
    {
        if (cameraToMove != null && objectToCenter != null)
        {
            // Ustaw pozycj� kamery na pozycj� obiektu z zachowaniem odleg�o�ci Z
            cameraToMove.transform.position = new Vector3(objectToCenter.transform.position.x, objectToCenter.transform.position.y, cameraToMove.transform.position.z);
        }
    }
}