using UnityEngine;

public class test : MonoBehaviour
{
    public GameObject renderMap;  // Przypisz obiekt RenderMap w inspektorze

    void Start()
    {
        int wybor = PlayerPrefs.GetInt("WybranaScena");
        if(wybor == 1 || wybor == 2)
        {
            RawImageHandler[] handlers = renderMap.GetComponents<RawImageHandler>();
            foreach (var handler in handlers)
            {
                Destroy(handler);
            }
        }
        
    }
}