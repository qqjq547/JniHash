#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_guochuang_mimedia_tools_JniUtil_getSign(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "123445555555";
    return env->NewStringUTF(hello.c_str());
}
