using UnityEngine;

public class test : MonoBehaviour
{
    public GameObject renderMap;  // Przypisz obiekt RenderMap w inspektorze

    void Start()
    {
        RawImageHandler[] handlers = renderMap.GetComponents<RawImageHandler>();
        foreach (var handler in handlers)
        {
            Destroy(handler);
        }
    }
}