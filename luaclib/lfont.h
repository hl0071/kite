#ifndef LFONT_H
#define LFONT_H

#include "common.h"

#define FT_FACE_SIZE 24
#define FT_FACE_FSIZE 24.f


typedef struct
{
    GLuint texture;
    float width;
    float height;
    float offsetx;
    float offsety;
    GLuint advancex;
} Character;


int
lib_font(lua_State *L);



#endif