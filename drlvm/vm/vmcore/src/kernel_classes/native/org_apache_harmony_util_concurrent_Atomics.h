/*
 *  Licensed to the Apache Software Foundation (ASF) under one or more
 *  contributor license agreements.  See the NOTICE file distributed with
 *  this work for additional information regarding copyright ownership.
 *  The ASF licenses this file to You under the Apache License, Version 2.0
 *  (the "License"); you may not use this file except in compliance with
 *  the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

/** 
 * @author Andrey Chernyshev
 */  

/*
 * THE FILE HAS BEEN AUTOGENERATED BY INTEL IJH TOOL.
 * Please be aware that all changes made to this file manually
 * will be overwritten by the tool if it runs again.
 */

#include <jni.h>


/* Header for class org.apache.harmony.util.concurrent.Atomics */

#ifndef _ORG_APACHE_HARMONY_UTIL_CONCURRENT_ATOMICS_H
#define _ORG_APACHE_HARMONY_UTIL_CONCURRENT_ATOMICS_H

#ifdef __cplusplus
extern "C" {
#endif


/* Native methods */

/*
 * Method: org.apache.harmony.util.concurrent.Atomics.arrayBaseOffset(Ljava/lang/Class;)I
 */
JNIEXPORT jint JNICALL Java_org_apache_harmony_util_concurrent_Atomics_arrayBaseOffset
  (JNIEnv *, jclass, jclass);

/*
 * Method: org.apache.harmony.util.concurrent.Atomics.arrayIndexScale(Ljava/lang/Class;)I
 */
JNIEXPORT jint JNICALL Java_org_apache_harmony_util_concurrent_Atomics_arrayIndexScale
  (JNIEnv *, jclass, jclass);

/*
 * Method: org.apache.harmony.util.concurrent.Atomics.setIntVolatile(Ljava/lang/Object;JI)V
 */
JNIEXPORT void JNICALL 
Java_org_apache_harmony_util_concurrent_Atomics_setIntVolatile__Ljava_lang_Object_2JI(JNIEnv *, jclass, 
    jobject, jlong, jint);


/*
 * Method: org.apache.harmony.util.concurrent.Atomics.getIntVolatile(Ljava/lang/Object;J)I
 */
JNIEXPORT jint JNICALL 
Java_org_apache_harmony_util_concurrent_Atomics_getIntVolatile__Ljava_lang_Object_2J(JNIEnv *, jclass, 
    jobject, jlong);

/*
 * Method: org.apache.harmony.util.concurrent.Atomics.setLongVolatile(Ljava/lang/Object;JJ)V
 */
JNIEXPORT void JNICALL 
Java_org_apache_harmony_util_concurrent_Atomics_setLongVolatile__Ljava_lang_Object_2JJ(JNIEnv *, jclass, 
    jobject, jlong, jlong);


/*
 * Method: org.apache.harmony.util.concurrent.Atomics.getLongVolatile(Ljava/lang/Object;J)J
 */
JNIEXPORT jlong JNICALL 
Java_org_apache_harmony_util_concurrent_Atomics_getLongVolatile__Ljava_lang_Object_2J(JNIEnv *, jclass, 
    jobject, jlong);

/*
 * Method: org.apache.harmony.util.concurrent.Atomics.setObjectVolatile(Ljava/lang/Object;JLjava/lang/Object;)V
 */
JNIEXPORT void JNICALL 
Java_org_apache_harmony_util_concurrent_Atomics_setObjectVolatile__Ljava_lang_Object_2JLjava_lang_Object_2(JNIEnv *, jclass, 
    jobject, jlong, jobject);


/*
 * Method: org.apache.harmony.util.concurrent.Atomics.getObjectVolatile(Ljava/lang/Object;J)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL 
Java_org_apache_harmony_util_concurrent_Atomics_getObjectVolatile__Ljava_lang_Object_2J(JNIEnv *, jclass, 
    jobject, jlong);

/*
 * Method: org.apache.harmony.util.concurrent.Atomics.getFieldOffset(Ljava/lang/reflect/Field;)J
 */
JNIEXPORT jlong JNICALL
Java_org_apache_harmony_util_concurrent_Atomics_getFieldOffset(JNIEnv *, jclass, jobject);

/*
 * Method: org.apache.harmony.util.concurrent.Atomics.compareAndSetInt(Ljava/lang/Object;JII)Z
 */
JNIEXPORT jboolean JNICALL
Java_org_apache_harmony_util_concurrent_Atomics_compareAndSetInt__Ljava_lang_Object_2JII(JNIEnv *, jclass, 
    jobject, jlong, jint, jint);

/*
 * Method: org.apache.harmony.util.concurrent.Atomics.compareAndSetBoolean(Ljava/lang/Object;JZZ)Z
 */
JNIEXPORT jboolean JNICALL
Java_org_apache_harmony_util_concurrent_Atomics_compareAndSetBoolean__Ljava_lang_Object_2JZZ(JNIEnv *, jclass, 
    jobject, jlong, jboolean, jboolean);

/*
 * Method: org.apache.harmony.util.concurrent.Atomics.compareAndSetLong(Ljava/lang/Object;JJJ)Z
 */
JNIEXPORT jboolean JNICALL
Java_org_apache_harmony_util_concurrent_Atomics_compareAndSetLong__Ljava_lang_Object_2JJJ(JNIEnv *, jclass, 
    jobject, jlong, jlong, jlong);

/*
 * Method: org.apache.harmony.util.concurrent.Atomics.compareAndSetObject(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z
 */
JNIEXPORT jboolean JNICALL
Java_org_apache_harmony_util_concurrent_Atomics_compareAndSetObject__Ljava_lang_Object_2JLjava_lang_Object_2Ljava_lang_Object_2(JNIEnv *, jclass, 
    jobject, jlong, jobject, jobject);

/*
 * Method: org.apache.harmony.util.concurrent.Atomics.compareAndSetInt([IIII)Z
 */
JNIEXPORT jboolean JNICALL Java_org_apache_harmony_util_concurrent_Atomics_compareAndSetInt___3IIII
    (JNIEnv *, jobject, jintArray, jint, jint, jint);

/*
 * Method: org.apache.harmony.util.concurrent.Atomics.compareAndSetBoolean([ZIZZ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_apache_harmony_util_concurrent_Atomics_compareAndSetBoolean___3ZIZZ
    (JNIEnv *, jobject, jbooleanArray, jint, jboolean, jboolean);

/*
 * Method: org.apache.harmony.util.concurrent.Atomics.compareAndSetLong([JIJJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_apache_harmony_util_concurrent_Atomics_compareAndSetLong___3JIJJ
    (JNIEnv *, jobject, jlongArray, jint, jlong, jlong);

/*
 * Method: org.apache.harmony.util.concurrent.Atomics.compareAndSetObject([Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/Object;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_apache_harmony_util_concurrent_Atomics_compareAndSetObject___3Ljava_lang_Object_2ILjava_lang_Object_2Ljava_lang_Object_2
    (JNIEnv *, jobject, jobjectArray, jint, jobject, jobject);

/*
 * Method:    java.util.concurrent.atomic.AtomicLong.VMSupportsCS8()Z
 */
JNIEXPORT jboolean JNICALL Java_java_util_concurrent_atomic_AtomicLong_VMSupportsCS8
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif

#endif /* _ORG_APACHE_HARMONY_UTIL_CONCURRENT_ATOMICS_H */

