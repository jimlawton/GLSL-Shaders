/* ===========================================================================
Copyright (C) 2002-2004  3Dlabs Inc. Ltd.
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

#include "ogl2brick.h"

/*public*/
void drawCube(void)
{
    float size = 1.0f;
    float scale = 0.2f;
    float delta = 0.1f;

    float A[3] = { size,  size,  size * scale + delta };
    float B[3] = { size,  size, -size * scale + delta };
    float C[3] = { size, -size, -size * scale };
    float D[3] = { size, -size,  size * scale };
    float E[3] = {-size,  size,  size * scale + delta };
    float F[3] = {-size,  size, -size * scale + delta };
    float G[3] = {-size, -size, -size * scale };
    float H[3] = {-size, -size,  size * scale };

    float I[3] = { 1.0f,  0.0f,  0.0f};
    float K[3] = {-1.0f,  0.0f,  0.0f};
    float L[3] = { 0.0f,  0.0f, -1.0f};
    float M[3] = { 0.0f,  0.0f,  1.0f};
    float N[3] = { 0.0f,  1.0f,  0.0f};
    float O[3] = { 0.0f, -1.0f,  0.0f};


    glBegin(GL_QUADS);

    glNormal3fv(I);

    glTexCoord2f(1,1);
    glVertex3fv(D);
    glTexCoord2f(0,1);
    glVertex3fv(C);
    glTexCoord2f(0,0);
    glVertex3fv(B);
    glTexCoord2f(1,0);
    glVertex3fv(A);

    glNormal3fv(K);

    glTexCoord2f(1,1);
    glVertex3fv(G);
    glTexCoord2f(0,1);
    glVertex3fv(H);
    glTexCoord2f(0,0);
    glVertex3fv(E);
    glTexCoord2f(1,0);
    glVertex3fv(F);

    glNormal3fv(L);

    glTexCoord2f(1,1);
    glVertex3fv(C);
    glTexCoord2f(0,1);
    glVertex3fv(G);
    glTexCoord2f(0,0);
    glVertex3fv(F);
    glTexCoord2f(1,0);
    glVertex3fv(B);

    glNormal3fv(M);

    glTexCoord2f(1,1);
    glVertex3fv(H);
    glTexCoord2f(0,1);
    glVertex3fv(D);
    glTexCoord2f(0,0);
    glVertex3fv(A);
    glTexCoord2f(1,0);
    glVertex3fv(E);

    glNormal3fv(N);

    glTexCoord2f(1,1);
    glVertex3fv(E);
    glTexCoord2f(0,1);
    glVertex3fv(A);
    glTexCoord2f(0,0);
    glVertex3fv(B);
    glTexCoord2f(1,0);
    glVertex3fv(F);

    glNormal3fv(O);
    
    glTexCoord2f(1,1);
    glVertex3fv(G);
    glTexCoord2f(0,1);
    glVertex3fv(C);
    glTexCoord2f(0,0);
    glVertex3fv(D);
    glTexCoord2f(1,0);
    glVertex3fv(H);
    
    glEnd();
}
