/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class es_usc_citius_lab_joctomap_octree_JOctree */

#ifndef _Included_es_usc_citius_lab_joctomap_octree_JOctree
#define _Included_es_usc_citius_lab_joctomap_octree_JOctree
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    coordToKey
 * Signature: (FFF)Les/usc/citius/lab/joctomap/octree/JOctreeKey;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_coordToKey__FFF
  (JNIEnv *, jobject, jfloat, jfloat, jfloat);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    coordToKey
 * Signature: (FFFI)Les/usc/citius/lab/joctomap/octree/JOctreeKey;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_coordToKey__FFFI
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jint);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    adjustKeyAtDepth
 * Signature: (Les/usc/citius/lab/joctomap/octree/JOctreeKey;I)Les/usc/citius/lab/joctomap/octree/JOctreeKey;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_adjustKeyAtDepth
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    coordToKey
 * Signature: (Les/usc/citius/lab/motionplanner/core/Point3D;)Les/usc/citius/lab/joctomap/octree/JOctreeKey;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_coordToKey__Les_usc_citius_lab_motionplanner_core_Point3D_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    coordToKey
 * Signature: (Les/usc/citius/lab/motionplanner/core/Point3D;I)Les/usc/citius/lab/joctomap/octree/JOctreeKey;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_coordToKey__Les_usc_citius_lab_motionplanner_core_Point3D_2I
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    keyToCoord
 * Signature: (Les/usc/citius/lab/joctomap/octree/JOctreeKey;)Les/usc/citius/lab/motionplanner/core/Point3D;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_keyToCoord__Les_usc_citius_lab_joctomap_octree_JOctreeKey_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    keyToCoord
 * Signature: (Les/usc/citius/lab/joctomap/octree/JOctreeKey;I)Les/usc/citius/lab/motionplanner/core/Point3D;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_keyToCoord__Les_usc_citius_lab_joctomap_octree_JOctreeKey_2I
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    search
 * Signature: (Les/usc/citius/lab/joctomap/octree/JOctreeKey;I)Les/usc/citius/lab/joctomap/octree/JOctreeNode;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_search__Les_usc_citius_lab_joctomap_octree_JOctreeKey_2I
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    search
 * Signature: (DDDI)Les/usc/citius/lab/joctomap/octree/JOctreeNode;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_search__DDDI
  (JNIEnv *, jobject, jdouble, jdouble, jdouble, jint);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    isNodeOccupied
 * Signature: (Les/usc/citius/lab/joctomap/octree/JOctreeNode;)Z
 */
JNIEXPORT jboolean JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_isNodeOccupied
  (JNIEnv *, jobject, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    updateNode
 * Signature: (DDDZ)Les/usc/citius/lab/joctomap/octree/JOctreeNode;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_updateNode
  (JNIEnv *, jobject, jdouble, jdouble, jdouble, jboolean);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    useBBXLimit
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_useBBXLimit
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    setBBX
 * Signature: (Les/usc/citius/lab/motionplanner/core/Point3D;Les/usc/citius/lab/motionplanner/core/Point3D;)V
 */
JNIEXPORT void JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_setBBX
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    setBBXMin
 * Signature: (Les/usc/citius/lab/motionplanner/core/Point3D;)V
 */
JNIEXPORT void JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_setBBXMin
  (JNIEnv *, jobject, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    setBBXMax
 * Signature: (Les/usc/citius/lab/motionplanner/core/Point3D;)V
 */
JNIEXPORT void JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_setBBXMax
  (JNIEnv *, jobject, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    getTreeDepth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_getTreeDepth
  (JNIEnv *, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    getResolution
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_getResolution
  (JNIEnv *, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    getNodeSize
 * Signature: (I)D
 */
JNIEXPORT jdouble JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_getNodeSize
  (JNIEnv *, jobject, jint);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    getBBXCenter
 * Signature: ()Les/usc/citius/lab/motionplanner/core/Point3D;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_getBBXCenter
  (JNIEnv *, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    getBBXMin
 * Signature: ()Les/usc/citius/lab/motionplanner/core/Point3D;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_getBBXMin
  (JNIEnv *, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    getBBXMax
 * Signature: ()Les/usc/citius/lab/motionplanner/core/Point3D;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_getBBXMax
  (JNIEnv *, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    getMetricMin
 * Signature: ()Les/usc/citius/lab/motionplanner/core/Point3D;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_getMetricMin
  (JNIEnv *, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    getMetricMax
 * Signature: ()Les/usc/citius/lab/motionplanner/core/Point3D;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_getMetricMax
  (JNIEnv *, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    getMetricSize
 * Signature: ()[D
 */
JNIEXPORT jdoubleArray JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_getMetricSize
  (JNIEnv *, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    isBBXSet
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_isBBXSet
  (JNIEnv *, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    isBBXApplied
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_isBBXApplied
  (JNIEnv *, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    leafBBXIterator
 * Signature: (Les/usc/citius/lab/motionplanner/core/Point3D;Les/usc/citius/lab/motionplanner/core/Point3D;I)Les/usc/citius/lab/joctomap/iterators/OctreeIterator;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_leafBBXIterator__Les_usc_citius_lab_motionplanner_core_Point3D_2Les_usc_citius_lab_motionplanner_core_Point3D_2I
  (JNIEnv *, jobject, jobject, jobject, jint);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    leafBBXIterator
 * Signature: (Les/usc/citius/lab/joctomap/octree/JOctreeKey;Les/usc/citius/lab/joctomap/octree/JOctreeKey;I)Les/usc/citius/lab/joctomap/iterators/OctreeIterator;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_leafBBXIterator__Les_usc_citius_lab_joctomap_octree_JOctreeKey_2Les_usc_citius_lab_joctomap_octree_JOctreeKey_2I
  (JNIEnv *, jobject, jobject, jobject, jint);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    write
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_write
  (JNIEnv *, jobject, jstring);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    read
 * Signature: (Ljava/lang/String;)Les/usc/citius/lab/joctomap/octree/JOctree;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_read
  (JNIEnv *, jclass, jstring);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctree
 * Method:    create
 * Signature: (D)Les/usc/citius/lab/joctomap/octree/JOctree;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctree_create
  (JNIEnv *, jclass, jdouble);

#ifdef __cplusplus
}
#endif
#endif
