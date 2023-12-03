using UnityEngine;
using UnityEngine.UI;

public class ButtonController : MonoBehaviour
{
    public Button targetButton;
    public RectTransform buttonRectTransform;

    public void HandleClick(Vector2 clickPosition)
    {
        
        if (RectTransformUtility.RectangleContainsScreenPoint(buttonRectTransform, clickPosition, null))
        {
            Debug.Log("KLIK");
            targetButton.onClick.Invoke();
        }
    }
}
