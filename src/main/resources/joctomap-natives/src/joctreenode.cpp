#include <iostream>
#include <jni.h>
#include <octomap/OcTreeNode.h>
#include "nativeobject.h"
#include "joctreenode.h"

using namespace std;
using namespace octomap;

/**
 * Retrieves the occupancy probability of the node.
 */
JNIEXPORT jdouble JNICALL Java_es_usc_citius_lab_joctomap_JOctreeNode_getOccupancy
  (JNIEnv * env, jobject jnode){
	//retrieve native pointer
	OcTreeNode *node = (OcTreeNode*) getPointer(env, jnode);
	//return occupancy probability
	return node->getOccupancy();
}

/**
 * Retrieves the value stored in the node.
 */
JNIEXPORT jfloat JNICALL Java_es_usc_citius_lab_joctomap_JOctreeNode_getValue
  (JNIEnv *env, jobject jnode){
	//retrieve native pointer
	OcTreeNode *node = (OcTreeNode*) getPointer(env, jnode);
	//return occupancy probability
	return node->getValue();
}

/**
 * Retrieves the list of children of the node. Not implemented yet.
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_JOctreeNode_getChildren
  (JNIEnv *env, jobject jnode){
	//retrieve native pointer
	OcTreeNode *node = (OcTreeNode*) getPointer(env, jnode);
	//retrieve ArrayList class
	jclass arrayListClass = env->FindClass("Ljava/util/ArrayList;");
	//retrieve ArrayList constructor
	jmethodID arrayListConstructor = env->GetMethodID(arrayListClass, "<init>", "()V");
	//retrieve ArrayList add method
	jmethodID addArrayList = env->GetMethodID(arrayListClass, "add", "(Ljava/lang/Object;)Z");
	//retrieve JOctreeNode class
	jclass nodeClass = env->FindClass("es/usc/citius/lab/joctomap/JOctreeNode");
	//retrieve JOctreeNode constructor
	jmethodID nodeConstructor = env->GetMethodID(nodeClass, "<init>", "(J)V");
	//new arraylist()
	jobject arrayListObject = env->NewObject(arrayListClass, arrayListConstructor);
	int i = 0;
	while(true){
		//break when the i-th child does not exist, and return the i-th
		if(!node->childExists(i)){
			break;
		}
		//increase counter
		i++;
		//instantiate current child
		jobject currentChild = env->NewObject(nodeClass, nodeConstructor, node->getChild(i));
		//add object to the ArrayList
		env->CallBooleanMethod(arrayListObject, addArrayList, currentChild);
	}
	//return arraylist object
	return arrayListObject;
}

/**
 * Retrieves the number of children of this node. Not implemented yet.
 */
JNIEXPORT jint JNICALL Java_es_usc_citius_lab_joctomap_JOctreeNode_getNumChildren
  (JNIEnv *env, jobject jnode){
	//retrieve native pointer
	OcTreeNode *node = (OcTreeNode*) getPointer(env, jnode);
	int childs = 0;
	while(true){
		//break when the i-th child does not exist, and return the i-th
		if(!node->childExists(childs)){
			break;
		}
		//increase counter
		childs++;
	}
	//return number of childs
	return childs;
}

/**
 * Retrieves the i-th child of the current node, if exists. NULL otherwise.
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_JOctreeNode_getChild
  (JNIEnv *env, jobject jnode, jint i){
	//retrieve native pointer
	OcTreeNode *node = (OcTreeNode*) getPointer(env, jnode);
	//check if the i-th node exist, return it if exist
	if(node->childExists(i)){
		OcTreeNode *child = node->getChild(i);
			//find class and constructor to instantiate joctreenode
			jclass cls = env->FindClass("es/usc/citius/lab/joctomap/JOctreeNode");
			jmethodID constructor = env->GetMethodID(cls, "<init>", "(J)V");
			//return new instance
			return env->NewObject(cls, constructor, child);
	}
	//return null if the child does not exist
	else{
		return NULL;
	}
}

/**
 * Retrieves if the i-th child of this node exists.
 */
JNIEXPORT jboolean JNICALL Java_es_usc_citius_lab_joctomap_JOctreeNode_childExists
  (JNIEnv *env, jobject jnode, jint i){
	//retrieve native pointer
	OcTreeNode *node = (OcTreeNode*) getPointer(env, jnode);
	//return result
	return node->childExists(i);
}

/**
 * Queries if the node has children.
 */
JNIEXPORT jboolean JNICALL Java_es_usc_citius_lab_joctomap_JOctreeNode_hasChildren
  (JNIEnv *env, jobject jnode){
	//retrieve native pointer
	OcTreeNode *node = (OcTreeNode*) getPointer(env, jnode);
	//return result
	return node->hasChildren();
}

/**
 * Queries if this node is collapsible.
 */
JNIEXPORT jboolean JNICALL Java_es_usc_citius_lab_joctomap_JOctreeNode_collapsible
  (JNIEnv *env, jobject jnode){
	//retrieve native pointer
	OcTreeNode *node = (OcTreeNode*) getPointer(env, jnode);
	//return result
	return node->collapsible();
}