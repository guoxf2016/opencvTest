#include <jni.h>
#include <string>

#include <opencv/cv.h>
#include <opencv2/opencv.hpp>

using namespace cv;

extern "C" JNIEXPORT jstring

JNICALL
Java_com_example_guoxiaofei_opencvtest_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    Mat m = imread("bike.jpg");
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
