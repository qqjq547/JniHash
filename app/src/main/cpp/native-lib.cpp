#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_betbtc_app_tools_JniUtil_getSign(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "*2f4961%8*5B588463bee04BetA2019";
    return env->NewStringUTF(hello.c_str());
}
