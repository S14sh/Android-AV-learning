#include "native-ffmpeg-lib.h"

const char *getFFmpegVer() {
    return av_version_info();
}

extern "C"
jstring Java_util_FfmpegUtil_getFfmpegVersion(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF(getFFmpegVer());
}