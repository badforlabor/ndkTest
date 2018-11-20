#include <jni.h>
#include <string>
#include "mine.h"

extern "C" JNIEXPORT jstring

JNICALL
Java_com_example_liubo_ndktest_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++" + mine().get();
    return env->NewStringUTF(hello.c_str());
}
