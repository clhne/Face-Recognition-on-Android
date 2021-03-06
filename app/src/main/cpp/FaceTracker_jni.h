/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class conex_facerecognition_FaceTracker */

#ifndef _Included_conex_facerecognition_FaceTracker
#define _Included_conex_facerecognition_FaceTracker
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     conex_facerecognition_FaceTracker
 * Method:    nativeCreateObject
 * Signature: (Ljava/lang/String;F)J
 */
JNIEXPORT jlong JNICALL Java_conex_facerecognition_FaceTracker_nativeCreateObject
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     conex_facerecognition_FaceTracker
 * Method:    nativeDestroyObject
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_conex_facerecognition_FaceTracker_nativeDestroyObject
  (JNIEnv *, jclass, jlong);

/*
 * Class:     conex_facerecognition_FaceTracker
 * Method:    nativeStart
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_conex_facerecognition_FaceTracker_nativeStart
  (JNIEnv *, jclass, jlong);

/*
 * Class:     conex_facerecognition_FaceTracker
 * Method:    nativeStop
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_conex_facerecognition_FaceTracker_nativeStop
  (JNIEnv *, jclass, jlong);

  /*
   * Class:     conex_facerecognition_FaceTracker
   * Method:    nativeSetFaceSize
   * Signature: (JI)V
   */
  JNIEXPORT void JNICALL Java_conex_facerecognition_FaceTracker_nativeSetFaceSize
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     conex_facerecognition_FaceTracker
 * Method:    nativeDetect
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_conex_facerecognition_FaceTracker_nativeDetect
  (JNIEnv *, jclass, jlong, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
