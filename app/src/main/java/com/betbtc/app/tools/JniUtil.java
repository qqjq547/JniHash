package com.betbtc.app.tools;

public class JniUtil {
    static {
        System.loadLibrary("JniUtil");
    }
    public static native String getSign();

}
