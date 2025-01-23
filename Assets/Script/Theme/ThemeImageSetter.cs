using UnityEngine;
using UnityEngine.UI;
using UnityEditor;

[ExecuteAlways]
public class ThemeImageSetter : MonoBehaviour
{
    public int themeToApply; // Wartoœæ Theme, przy której skrypt bêdzie dzia³aæ

    // Obrazy dla ró¿nych motywów
    public Sprite themeImage; // Obraz do ustawienia dla danego motywu

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
            // Obs³uga komponentu Image
            Image image = GetComponent<Image>();
            if (image != null)
            {
                image.sprite = themeImage;
            }
        }
    }
}

#if UNITY_EDITOR
[CustomEditor(typeof(ThemeImageSetter))]
public class ThemeImageSetterEditor : Editor
{
    public override void OnInspectorGUI()
    {
        ThemeImageSetter script = (ThemeImageSetter)target;

        // Pole wyboru Theme
        script.themeToApply = EditorGUILayout.IntField("Theme to Apply", script.themeToApply);

        // Obraz dla danego motywu
        script.themeImage = (Sprite)EditorGUILayout.ObjectField("Theme Image", script.themeImage, typeof(Sprite), allowSceneObjects: false);
    }
}
#endif
