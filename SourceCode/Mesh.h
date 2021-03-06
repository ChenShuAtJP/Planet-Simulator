/******************************************************************************/
/*!
@file   Mesh.h
@author Chen Shu
@par    email: shuchenjp@gmail.com
@date   3/3/2018
@brief  Rendering Mesh Object.
*/
/******************************************************************************/

#include "Affine.h"

#ifndef PS_MESH_H
#define PS_MESH_H


struct Mesh {

  struct Face {
    int index1, index2, index3;
    Face(int i, int j, int k)
      : index1(i), index2(j), index3(k) {}
  };

  struct Edge {
    int index1, index2;
    Edge(int i, int j)
      : index1(i), index2(j) {}
  };


  virtual ~Mesh(void) {}
  virtual int VertexCount(void) = 0;
  virtual Point GetVertex(int i) = 0;
  virtual Vector Dimensions(void) = 0;
  virtual Point Center(void) = 0;
  virtual int FaceCount(void) = 0;
  virtual Face GetFace(int i) = 0;
  virtual int EdgeCount(void) = 0;
  virtual Edge GetEdge(int i) = 0;

};
#endif
