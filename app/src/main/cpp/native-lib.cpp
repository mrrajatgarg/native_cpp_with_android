#include <jni.h>
#include <string>

#include "core.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_demonativeapp4_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    const char *textFromOppCore = concatenateMyStringWithCppString();
    return env->NewStringUTF(textFromOppCore);
}
