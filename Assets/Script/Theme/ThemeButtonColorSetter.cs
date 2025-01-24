using UnityEngine;
using UnityEngine.UI;
using UnityEditor;

[ExecuteAlways]
public class ThemeButtonColorSetter : MonoBehaviour
{
    public int themeToApply; // Wartoœæ Theme, przy której skrypt bêdzie dzia³aæ

    // Kolory dla ró¿nych stanów przycisku
    public Color normalColor = Color.white;
    public Color highlightedColor = Color.gray;
    public Color pressedColor = Color.black;
    public Color selectedColor = Color.blue;
    public Color disabledColor = Color.red;

    void Start()
    {
        if (Application.isPlaying)
        {
            ApplyTheme();
        }
    }

    void Update()
    {
        if (!Application.isPlaying)
        {
            ApplyTheme();
        }
    }

    public void ApplyTheme()
    {
        if (PlayerPrefs.GetInt("Theme") == themeToApply)
        {
            // Obs³uga komponentu Button
            Button button = GetComponent<Button>();
            if (button != null)
            {
                ColorBlock colorBlock = button.colors;
                colorBlock.normalColor = normalColor;
                colorBlock.highlightedColor = highlightedColor;
                colorBlock.pressedColor = pressedColor;
                colorBlock.selectedColor = selectedColor;
                colorBlock.disabledColor = disabledColor;
                button.colors = colorBlock;
            }
        }
    }
}

#if UNITY_EDITOR
[CustomEditor(typeof(ThemeButtonColorSetter))]
public class ThemeButtonColorSetterEditor : Editor
{
    public override void OnInspectorGUI()
    {
        ThemeButtonColorSetter script = (ThemeButtonColorSetter)target;

        // Pole wyboru Theme
        script.themeToApply = EditorGUILayout.IntField("Theme to Apply", script.themeToApply);

        // Kolory dla ró¿nych stanów przycisku
        script.normalColor = EditorGUILayout.ColorField("Normal Color", script.normalColor);
        script.highlightedColor = EditorGUILayout.ColorField("Highlighted Color", script.highlightedColor);
        script.pressedColor = EditorGUILayout.ColorField("Pressed Color", script.pressedColor);
        script.selectedColor = EditorGUILayout.ColorField("Selected Color", script.selectedColor);
        script.disabledColor = EditorGUILayout.ColorField("Disabled Color", script.disabledColor);
    }
}
#endif
