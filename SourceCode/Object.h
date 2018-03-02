/******************************************************************************/
/*!
@file   Object.h
@author Chen Shu
@par    email: shuchenjp@gmail.com
@date   3/3/2018
@brief  Object class.
*/
/******************************************************************************/


#ifndef SSS_OBJECT_H
#define SSS_OBJECT_H
#include "Affine.h"
#include <GL/glut.h>

class Object
{
  public:
  Object(int& index, GLuint& TID);
  Point& GetTranslation(void);
  void WriteTranslation(float x, float y, float z);
  Point& GetRotation(void);
  void WriteRotation(float x, float y, float z);
  GLuint& GetTextureID(void);
  void WriteTextureID(int input);
  void WriteScale(float x, float y, float z);
  Vector GetScale(void);
  int GetObjectID(void);
  void WriteAngle(float i);
  float GetAngle(void);
  
  void ObjectDraw(GLfloat* CMatrix);
  private:
  Vector axis;
  float angle;
  Point Translation;
  Vector scale;
  Point Rotation;
  GLuint TextureID;
  int ObjectID;
};

#endif