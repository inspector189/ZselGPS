using UnityEngine;
using UnityEngine.UI;
using UnityEditor;
using TMPro;

[ExecuteAlways]
public class ThemeColorSetter : MonoBehaviour
{
    public int themeToApply; // Warto�� Theme, przy kt�rej skrypt b�dzie dzia�a�

    // Kolory dla r�nych obiekt�w
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
            // Obs�uga komponentu kamery
            Camera camera = GetComponent<Camera>();
            if (camera != null)
            {
                camera.backgroundColor = cameraBackgroundColor;
            }

            // Obs�uga komponentu Image
            Image image = GetComponent<Image>();
            if (image != null)
            {
                image.color = imageColor;
            }

            // Obs�uga komponentu TextMeshPro
            TMPro.TextMeshProUGUI tmpText = GetComponent<TMPro.TextMeshProUGUI>();
            if (tmpText != null)
            {
                tmpText.color = textColor; // Ustawienie vertex color
            }
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

        // Kolory dla r�nych element�w
        script.cameraBackgroundColor = EditorGUILayout.ColorField("Camera Background Color", script.cameraBackgroundColor);
        script.imageColor = EditorGUILayout.ColorField("Image Color", script.imageColor);
        script.textColor = EditorGUILayout.ColorField("Text Color", script.textColor);
    }
}
#endif
