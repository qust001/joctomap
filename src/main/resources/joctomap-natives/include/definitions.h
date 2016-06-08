/**
 * Copyright (C) 2014-2016 Adrián González Sieira (adrian.gonzalez@usc.es)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   definitions.h
 * Author: adrian.gonzalez
 *
 * Created on 31 de mayo de 2016, 18:38
 */

#ifndef DEFINITIONS_H
#define DEFINITIONS_H

//Classes
#define CLS_STRING "Ljava/lang/String;"
#define CLS_LEAFBBXITERATOR "es/usc/citius/lab/joctomap/iterators/LeafBBXIterator"
#define CLS_POINT3D "es/usc/citius/lab/motionplanner/core/spatial/Point3D"
#define CLS_JOCTREENODE "es/usc/citius/lab/joctomap/octree/JOctreeNode"
#define CLS_JOCTREEKEY "es/usc/citius/lab/joctomap/octree/JOctreeKey"
#define CLS_JOCTREE "es/usc/citius/lab/joctomap/octree/JOctree"
#define CLS_HASHMAP "Ljava/util/HashMap;"
#define CLS_PAIR "es/usc/citius/lab/motionplanner/core/util/Pair"
#define CLS_FLOAT "Ljava/lang/Float;"
#define CLS_ARRAYLIST "Ljava/util/ArrayList;"

//Fields
#define FIELD_PATH "path"
#define FIELD_X "x"
#define FIELD_Y "y"
#define FIELD_Z "z"
#define FIELD_ADJACENCYMAP_OCTREE "octree"
#define FIELD_ADJACENCYMAP_NODESINFO "nodesInfo"
#define FIELD_ADJACENCYMAP_ADJACENCIES "adjacencies"

//Methods
#define METHOD_CONSTRUCTOR "<init>"

//Signatures
#define SIGNATURE_FLOAT "F"
#define SIGNATURE_INT "I"

#endif /* DEFINITIONS_H */

