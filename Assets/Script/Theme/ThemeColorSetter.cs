using UnityEngine;
using UnityEngine.UI;
using UnityEditor;

[ExecuteAlways]
public class ThemeColorSetter : MonoBehaviour
{
    public int themeToApply; // Wartoœæ Theme, przy której skrypt bêdzie dzia³aæ

    // Kolory dla ró¿nych obiektów
    public Color normalColor = Color.white;
    public Color highlightedColor = Color.gray;
    public Color pressedColor = Color.black;
    public Color selectedColor = Color.blue;
    public Color disabledColor = Color.red;
    public Color cameraBackgroundColor = Color.cyan;
    public Color imageColor = Color.white;
    public Color textColor = Color.black;

    void Start()
    {
        if (Application.isPlaying)
        {
            ApplyTheme();
        }
    }

    public void ApplyTheme()
    {
        if (PlayerPrefs.GetInt("Theme") == themeToApply)
        {
            // Obs³uga komponentu kamery
            Camera camera = GetComponent<Camera>();
            if (camera != null)
            {
                camera.backgroundColor = cameraBackgroundColor;
            }

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

            // Obs³uga komponentu Image
            Image image = GetComponent<Image>();
            if (image != null)
            {
                image.color = imageColor;
            }

            // Obs³uga komponentu Text
            Text text = GetComponent<Text>();
            if (text != null)
            {
                text.color = textColor;
            }

            // Obs³uga komponentu TextMeshPro (jeœli dodasz TextMeshPro)
#if TMP_PRESENT
            TMPro.TextMeshProUGUI tmpText = GetComponent<TMPro.TextMeshProUGUI>();
            if (tmpText != null)
            {
                tmpText.color = textColor;
            }
#endif
        }
    }
}

#if UNITY_EDITOR
[CustomEditor(typeof(ThemeColorSetter))]
public class ThemeColorSetterEditor : Editor
{
    public override void OnInspectorGUI()
    {
        ThemeColorSetter script = (ThemeColorSetter)target;

        // Pole wyboru Theme
        script.themeToApply = EditorGUILayout.IntField("Theme to Apply", script.themeToApply);

        // Kolory dla ró¿nych stanów
        script.normalColor = EditorGUILayout.ColorField("Normal Color", script.normalColor);
        script.highlightedColor = EditorGUILayout.ColorField("Highlighted Color", script.highlightedColor);
        script.pressedColor = EditorGUILayout.ColorField("Pressed Color", script.pressedColor);
        script.selectedColor = EditorGUILayout.ColorField("Selected Color", script.selectedColor);
        script.disabledColor = EditorGUILayout.ColorField("Disabled Color", script.disabledColor);
        script.cameraBackgroundColor = EditorGUILayout.ColorField("Camera Background Color", script.cameraBackgroundColor);
        script.imageColor = EditorGUILayout.ColorField("Image Color", script.imageColor);
        script.textColor = EditorGUILayout.ColorField("Text Color", script.textColor);

        // Przyciski
        if (GUILayout.Button("Apply Theme"))
        {
            script.ApplyTheme();
        }

        // Usuñ DrawDefaultInspector, aby zapobiec zdublowaniu pól
    }
}
#endif
