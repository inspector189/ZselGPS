package com.example.ttsplugin;

import android.app.Activity;
import android.speech.tts.TextToSpeech;
import android.util.Log;

import java.util.Locale;

public class TextToSpeechPlugin {
    private static TextToSpeech tts;
    private static boolean isInitialized = false;

    public static void Initialize(final Activity activity) {
        tts = new TextToSpeech(activity, new TextToSpeech.OnInitListener() {
            @Override
            public void onInit(int status) {
                if (status == TextToSpeech.SUCCESS) {
                    tts.setLanguage(Locale.getDefault());
                    isInitialized = true;
                    Log.d("TTS", "Text-to-Speech initialized successfully.");
                } else {
                    Log.e("TTS", "Text-to-Speech initialization failed.");
                }
            }
        });
    }
    public static void Speak(String text)
    {
        if(isInitialized && tts != null)
        {
            tts.speak(text, TextToSpeech.QUEUE_FLUSH, null, null);
            Log.d("TTS", "Speaking: " + text);
        }
        else {
            Log.e("TTS", "TTS is not initialized yet.");
        }
    }
}