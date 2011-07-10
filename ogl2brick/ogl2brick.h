/* ===========================================================================
Copyright (C) 2002-2005  3Dlabs Inc. Ltd.
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

    Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.

    Redistributions in binary form must reproduce the above
    copyright notice, this list of conditions and the following
    disclaimer in the documentation and/or other materials provided
    with the distribution.

    Neither the name of 3Dlabs Inc. Ltd. nor the names of its
    contributors may be used to endorse or promote products derived
    from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.
=========================================================================== */

#ifndef __ogl2_brick_h__
#define __ogl2_brick_h__

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

#ifdef WIN32 /*[*/
#include <io.h>
#endif /*]*/

#define GLEW_STATIC 1
#include <GL/glew.h>
#include <GL/glu.h>
#include <GL/glut.h>

////////////////
// Structures //
////////////////

//
// Shader types
//
typedef enum {
    EVertexShader,
    EFragmentShader,
} EShaderType;


//
// Which models to render
//
typedef enum {
    EModelFirst  = 0,
    EModelCube   = 0,
    EModelTeapot = 1,
    EModelSphere = 2,
    EModelTorus  = 3,
    EModelLast   = 3,
} EModelType;

//////////////////////
// Global variables //
//////////////////////

extern EModelType gleModel;

////////////////
// Prototypes //
////////////////

// draw.c
void drawCube(void);

// shader.c
int readShaderSource(char *fileName, GLchar **vertexShader, GLchar **fragmentShader);
int installBrickShaders(const GLchar *brickVertex, const GLchar *brickFragment);

// ogl2brick.c
int printOglError(char *file, int line);

#define printOpenGLError() printOglError(__FILE__, __LINE__)

#endif // __ogl2_demo_h__
