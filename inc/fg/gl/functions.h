#ifndef FG_GL_FUNCTIONS_H
#define FG_GL_FUNCTIONS_H

#include "fg/gl/types.h"
#include "fg/util/import.h"

#define FG_GL_FUNCTIONS \
    /* GL_VERSION_1_0 */ \
    FG_GL_FUNCTION( 0, FgGLenum, GetError, (), () ) \
    FG_GL_FUNCTION( , void, Begin, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, End, (), () ) \
    FG_GL_FUNCTION( , void, EdgeFlag, ( FgGLboolean _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, EdgeFlagv, ( const FgGLboolean * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Vertex2s, ( FgGLshort _1, FgGLshort _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Vertex2i, ( FgGLint _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Vertex2f, ( FgGLfloat _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Vertex2d, ( FgGLdouble _1, FgGLdouble _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Vertex3s, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Vertex3i, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Vertex3f, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Vertex3d, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Vertex4s, ( FgGLshort _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Vertex4i, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Vertex4f, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Vertex4d, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Vertex2sv, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Vertex2iv, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Vertex2fv, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Vertex2dv, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Vertex3sv, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Vertex3iv, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Vertex3fv, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Vertex3dv, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Vertex4sv, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Vertex4iv, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Vertex4fv, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Vertex4dv, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord1s, ( FgGLshort _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord1i, ( FgGLint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord1f, ( FgGLfloat _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord1d, ( FgGLdouble _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2s, ( FgGLshort _1, FgGLshort _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2i, ( FgGLint _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2f, ( FgGLfloat _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2d, ( FgGLdouble _1, FgGLdouble _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexCoord3s, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexCoord3i, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexCoord3f, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexCoord3d, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexCoord4s, ( FgGLshort _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, TexCoord4i, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, TexCoord4f, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, TexCoord4d, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, TexCoord1sv, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord1iv, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord1fv, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord1dv, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2sv, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2iv, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2fv, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2dv, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord3sv, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord3iv, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord3fv, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord3dv, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord4sv, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord4iv, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord4fv, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord4dv, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Normal3b, ( FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Normal3s, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Normal3i, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Normal3f, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Normal3d, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Normal3bv, ( const FgGLbyte * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Normal3sv, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Normal3iv, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Normal3fv, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Normal3dv, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Color3b, ( FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Color3s, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Color3i, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Color3f, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Color3d, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Color3ub, ( FgGLubyte _1, FgGLubyte _2, FgGLubyte _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Color3us, ( FgGLushort _1, FgGLushort _2, FgGLushort _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Color3ui, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Color4b, ( FgGLbyte _1, FgGLbyte _2, FgGLbyte _3, FgGLbyte _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Color4s, ( FgGLshort _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Color4i, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Color4f, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Color4d, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Color4ub, ( FgGLubyte _1, FgGLubyte _2, FgGLubyte _3, FgGLubyte _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Color4us, ( FgGLushort _1, FgGLushort _2, FgGLushort _3, FgGLushort _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Color4ui, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Color3bv, ( const FgGLbyte * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Color3sv, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Color3iv, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Color3fv, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Color3dv, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Color3ubv, ( const FgGLubyte * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Color3usv, ( const FgGLushort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Color3uiv, ( const FgGLuint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Color4bv, ( const FgGLbyte * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Color4sv, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Color4iv, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Color4fv, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Color4dv, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Color4ubv, ( const FgGLubyte * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Color4usv, ( const FgGLushort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Color4uiv, ( const FgGLuint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Indexs, ( FgGLshort _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Indexi, ( FgGLint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Indexf, ( FgGLfloat _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Indexd, ( FgGLdouble _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Indexsv, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Indexiv, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Indexfv, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Indexdv, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Rects, ( FgGLshort _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Recti, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Rectf, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Rectd, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Rectsv, ( const FgGLshort * _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Rectiv, ( const FgGLint * _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Rectfv, ( const FgGLfloat * _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Rectdv, ( const FgGLdouble * _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DepthRange, ( FgGLclampd _1, FgGLclampd _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Viewport, ( FgGLint _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MatrixMode, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, LoadMatrixf, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, LoadMatrixd, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, MultMatrixf, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, MultMatrixd, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, LoadIdentity, (), () ) \
    FG_GL_FUNCTION( , void, Rotatef, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Rotated, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Translatef, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Translated, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Scalef, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Scaled, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Frustum, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, Ortho, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, PushMatrix, (), () ) \
    FG_GL_FUNCTION( , void, PopMatrix, (), () ) \
    FG_GL_FUNCTION( , void, Enable, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Disable, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexGeni, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexGenf, ( FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexGend, ( FgGLenum _1, FgGLenum _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexGeniv, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexGenfv, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexGendv, ( FgGLenum _1, FgGLenum _2, const FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ClipPlane, ( FgGLenum _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, RasterPos2s, ( FgGLshort _1, FgGLshort _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, RasterPos2i, ( FgGLint _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, RasterPos2f, ( FgGLfloat _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, RasterPos2d, ( FgGLdouble _1, FgGLdouble _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, RasterPos2sv, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, RasterPos2iv, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, RasterPos2fv, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, RasterPos2dv, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, RasterPos3s, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, RasterPos3i, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, RasterPos3f, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, RasterPos3d, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, RasterPos3sv, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, RasterPos3iv, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, RasterPos3fv, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, RasterPos3dv, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, RasterPos4s, ( FgGLshort _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, RasterPos4i, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, RasterPos4f, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, RasterPos4d, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, RasterPos4sv, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, RasterPos4iv, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, RasterPos4fv, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, RasterPos4dv, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, FrontFace, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Materiali, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Materialf, ( FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Materialiv, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Materialfv, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Lighti, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Lightf, ( FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Lightiv, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Lightfv, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, LightModeli, ( FgGLenum _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, LightModelf, ( FgGLenum _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, LightModeliv, ( FgGLenum _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, LightModelfv, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, ColorMaterial, ( FgGLenum _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, ShadeModel, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, PointSize, ( FgGLfloat _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, LineWidth, ( FgGLfloat _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, LineStipple, ( FgGLint _1, FgGLushort _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, CullFace, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, PolygonStipple, ( const FgGLubyte * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, PolygonMode, ( FgGLenum _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, PixelStorei, ( FgGLenum _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, PixelStoref, ( FgGLenum _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, PixelTransferi, ( FgGLenum _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, PixelTransferf, ( FgGLenum _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, PixelMapuiv, ( FgGLenum _1, FgGLsizei _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, PixelMapusv, ( FgGLenum _1, FgGLsizei _2, const FgGLushort * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, PixelMapfv, ( FgGLenum _1, FgGLsizei _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, DrawPixels, ( FgGLsizei _1, FgGLsizei _2, FgGLenum _3, FgGLenum _4, const FgGLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, PixelZoom, ( FgGLfloat _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Bitmap, ( FgGLsizei _1, FgGLsizei _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, const FgGLubyte * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, TexImage1D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLint _5, FgGLenum _6, FgGLenum _7, const FgGLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, TexImage2D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLsizei _5, FgGLint _6, FgGLenum _7, FgGLenum _8, const FgGLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION( , void, TexParameteri, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexParameterf, ( FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexParameteriv, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexParameterfv, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexEnvi, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexEnvf, ( FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexEnviv, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexEnvfv, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Fogi, ( FgGLenum _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Fogf, ( FgGLenum _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Fogiv, ( FgGLenum _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Fogfv, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Scissor, ( FgGLint _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, AlphaFunc, ( FgGLenum _1, FgGLclampf _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, StencilFunc, ( FgGLenum _1, FgGLint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, StencilOp, ( FgGLenum _1, FgGLenum _2, FgGLenum _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, DepthFunc, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, BlendFunc, ( FgGLenum _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, LogicOp, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, DrawBuffer, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, IndexMask, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ColorMask, ( FgGLboolean _1, FgGLboolean _2, FgGLboolean _3, FgGLboolean _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, DepthMask, ( FgGLboolean _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, StencilMask, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Clear, ( FgGLbitfield _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ClearColor, ( FgGLclampf _1, FgGLclampf _2, FgGLclampf _3, FgGLclampf _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ClearIndex, ( FgGLfloat _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ClearDepth, ( FgGLclampd _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ClearStencil, ( FgGLint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ClearAccum, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Accum, ( FgGLenum _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, ReadPixels, ( FgGLint _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, FgGLvoid * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, ReadBuffer, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, CopyPixels, ( FgGLint _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4, FgGLenum _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, Map1f, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLint _4, FgGLint _5, const FgGLfloat * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, Map1d, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLint _4, FgGLint _5, const FgGLdouble * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, Map2f, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLint _4, FgGLint _5, FgGLfloat _6, FgGLfloat _7, FgGLint _8, FgGLint _9, const FgGLfloat * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION( , void, Map2d, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLint _4, FgGLint _5, FgGLdouble _6, FgGLdouble _7, FgGLint _8, FgGLint _9, const FgGLdouble * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION( , void, EvalCoord1f, ( FgGLfloat _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, EvalCoord1d, ( FgGLdouble _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, EvalCoord2f, ( FgGLfloat _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, EvalCoord2d, ( FgGLdouble _1, FgGLdouble _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, EvalCoord1fv, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, EvalCoord1dv, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, EvalCoord2fv, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, EvalCoord2dv, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, MapGrid1f, ( FgGLint _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MapGrid1d, ( FgGLint _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MapGrid2f, ( FgGLint _1, FgGLfloat _2, FgGLfloat _3, FgGLint _4, FgGLfloat _5, FgGLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, MapGrid2d, ( FgGLint _1, FgGLdouble _2, FgGLdouble _3, FgGLint _4, FgGLdouble _5, FgGLdouble _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, EvalMesh1, ( FgGLenum _1, FgGLint _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, EvalMesh2, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, EvalPoint1, ( FgGLint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, EvalPoint2, ( FgGLint _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, InitNames, (), () ) \
    FG_GL_FUNCTION( , void, PopName, (), () ) \
    FG_GL_FUNCTION( , void, PushName, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, LoadName, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLint, RenderMode, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, SelectBuffer, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, FeedbackBuffer, ( FgGLsizei _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, PassThrough, ( FgGLfloat _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, NewList, ( FgGLuint _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, EndList, (), () ) \
    FG_GL_FUNCTION( , void, CallList, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, CallLists, ( FgGLsizei _1, FgGLenum _2, const FgGLvoid * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ListBase, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, GenLists, ( FgGLsizei _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsList, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, DeleteLists, ( FgGLuint _1, FgGLsizei _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Flush, (), () ) \
    FG_GL_FUNCTION( , void, Finish, (), () ) \
    FG_GL_FUNCTION( , void, Hint, ( FgGLenum _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetBooleanv, ( FgGLenum _1, FgGLboolean * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetIntegerv, ( FgGLenum _1, FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetFloatv, ( FgGLenum _1, FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetDoublev, ( FgGLenum _1, FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsEnabled, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GetClipPlane, ( FgGLenum _1, FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetLightiv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetLightfv, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetMaterialiv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetMaterialfv, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetTexEnviv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetTexEnvfv, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetTexGeniv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetTexGenfv, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetTexParameteriv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetTexParameterfv, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetTexLevelParameteriv, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetTexLevelParameterfv, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetPixelMapuiv, ( FgGLenum _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetPixelMapusv, ( FgGLenum _1, FgGLushort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetPixelMapfv, ( FgGLenum _1, FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetMapiv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetMapfv, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetMapdv, ( FgGLenum _1, FgGLenum _2, FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetTexImage, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLenum _4, FgGLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetPolygonStipple, ( FgGLubyte * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( NULL, const FgGLubyte *, GetString, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, PushAttrib, ( FgGLbitfield _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, PopAttrib, (), () ) \
\
    /* GL_VERSION_1_1 */ \
    FG_GL_FUNCTION( , void, Indexub, ( FgGLubyte _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Indexubv, ( const FgGLubyte * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, EdgeFlagPointer, ( FgGLsizei _1, const FgGLvoid * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexCoordPointer, ( FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ColorPointer, ( FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, IndexPointer, ( FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, NormalPointer, ( FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexPointer, ( FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, EnableClientState, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, DisableClientState, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ArrayElement, ( FgGLint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, DrawArrays, ( FgGLenum _1, FgGLint _2, FgGLsizei _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, DrawElements, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, InterleavedArrays, ( FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, PolygonOffset, ( FgGLfloat _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, CopyTexImage1D, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLint _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, CopyTexImage2D, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLint _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, TexSubImage1D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, const FgGLvoid * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, TexSubImage2D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLenum _7, FgGLenum _8, const FgGLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION( , void, CopyTexSubImage1D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, CopyTexSubImage2D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, BindTexture, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DeleteTextures, ( FgGLsizei _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GenTextures, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, AreTexturesResident, ( FgGLsizei _1, const FgGLuint * _2, FgGLboolean * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, PrioritizeTextures, ( FgGLsizei _1, const FgGLuint * _2, const FgGLclampf * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsTexture, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GetPointerv, ( FgGLenum _1, FgGLvoid ** _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, PushClientAttrib, ( FgGLbitfield _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, PopClientAttrib, (), () ) \
\
    /* GL_VERSION_1_2 */ \
    FG_GL_FUNCTION( , void, DrawRangeElements, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4, FgGLenum _5, const FgGLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, TexImage3D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLenum _8, FgGLenum _9, const FgGLvoid * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION( , void, TexSubImage3D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLenum _9, FgGLenum _10, const FgGLvoid * _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG_GL_FUNCTION( , void, CopyTexSubImage3D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLsizei _8, FgGLsizei _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
\
    /* GL_VERSION_1_3 */ \
    FG_GL_FUNCTION( , void, ActiveTexture, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, SampleCoverage, ( FgGLfloat _1, FgGLboolean _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, CompressedTexImage3D, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLsizei _8, const FgGLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION( , void, CompressedTexImage2D, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLint _6, FgGLsizei _7, const FgGLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, CompressedTexImage1D, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLint _5, FgGLsizei _6, const FgGLvoid * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, CompressedTexSubImage3D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLenum _9, FgGLsizei _10, const FgGLvoid * _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG_GL_FUNCTION( , void, CompressedTexSubImage2D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLenum _7, FgGLsizei _8, const FgGLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION( , void, CompressedTexSubImage1D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLenum _5, FgGLsizei _6, const FgGLvoid * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, GetCompressedTexImage, ( FgGLenum _1, FgGLint _2, FgGLvoid * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ClientActiveTexture, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord1d, ( FgGLenum _1, FgGLdouble _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord1dv, ( FgGLenum _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord1f, ( FgGLenum _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord1fv, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord1i, ( FgGLenum _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord1iv, ( FgGLenum _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord1s, ( FgGLenum _1, FgGLshort _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord1sv, ( FgGLenum _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord2d, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord2dv, ( FgGLenum _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord2f, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord2fv, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord2i, ( FgGLenum _1, FgGLint _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord2iv, ( FgGLenum _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord2s, ( FgGLenum _1, FgGLshort _2, FgGLshort _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord2sv, ( FgGLenum _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord3d, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord3dv, ( FgGLenum _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord3f, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord3fv, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord3i, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord3iv, ( FgGLenum _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord3s, ( FgGLenum _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord3sv, ( FgGLenum _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord4d, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord4dv, ( FgGLenum _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord4f, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord4fv, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord4i, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord4iv, ( FgGLenum _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord4s, ( FgGLenum _1, FgGLshort _2, FgGLshort _3, FgGLshort _4, FgGLshort _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord4sv, ( FgGLenum _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, LoadTransposeMatrixf, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, LoadTransposeMatrixd, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, MultTransposeMatrixf, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, MultTransposeMatrixd, ( const FgGLdouble * _1 ), ( _1 ) ) \
\
    /* GL_VERSION_1_4 */ \
    FG_GL_FUNCTION( , void, BlendFuncSeparate, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiDrawArrays, ( FgGLenum _1, const FgGLint * _2, const FgGLsizei * _3, FgGLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiDrawElements, ( FgGLenum _1, const FgGLsizei * _2, FgGLenum _3, const FgGLvoid *const* _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, PointParameterf, ( FgGLenum _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, PointParameterfv, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, PointParameteri, ( FgGLenum _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, PointParameteriv, ( FgGLenum _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, FogCoordf, ( FgGLfloat _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, FogCoordfv, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, FogCoordd, ( FgGLdouble _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, FogCoorddv, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, FogCoordPointer, ( FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3b, ( FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3bv, ( const FgGLbyte * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3d, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3dv, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3f, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3fv, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3i, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3iv, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3s, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3sv, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3ub, ( FgGLubyte _1, FgGLubyte _2, FgGLubyte _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3ubv, ( const FgGLubyte * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3ui, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3uiv, ( const FgGLuint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3us, ( FgGLushort _1, FgGLushort _2, FgGLushort _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3usv, ( const FgGLushort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColorPointer, ( FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, WindowPos2d, ( FgGLdouble _1, FgGLdouble _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, WindowPos2dv, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos2f, ( FgGLfloat _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, WindowPos2fv, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos2i, ( FgGLint _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, WindowPos2iv, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos2s, ( FgGLshort _1, FgGLshort _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, WindowPos2sv, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3d, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3dv, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3f, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3fv, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3i, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3iv, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3s, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3sv, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, BlendColor, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, BlendEquation, ( FgGLenum _1 ), ( _1 ) ) \
\
    /* GL_VERSION_1_5 */ \
    FG_GL_FUNCTION( , void, GenQueries, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DeleteQueries, ( FgGLsizei _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsQuery, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, BeginQuery, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, EndQuery, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GetQueryiv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetQueryObjectiv, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetQueryObjectuiv, ( FgGLuint _1, FgGLenum _2, FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, BindBuffer, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DeleteBuffers, ( FgGLsizei _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GenBuffers, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsBuffer, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, BufferData, ( FgGLenum _1, FgGLsizeiptr _2, const FgGLvoid * _3, FgGLenum _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, BufferSubData, ( FgGLenum _1, FgGLintptr _2, FgGLsizeiptr _3, const FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetBufferSubData, ( FgGLenum _1, FgGLintptr _2, FgGLsizeiptr _3, FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( NULL, void *, MapBuffer, ( FgGLenum _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, UnmapBuffer, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GetBufferParameteriv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetBufferPointerv, ( FgGLenum _1, FgGLenum _2, FgGLvoid ** _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_VERSION_2_0 */ \
    FG_GL_FUNCTION( , void, BlendEquationSeparate, ( FgGLenum _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DrawBuffers, ( FgGLsizei _1, const FgGLenum * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, StencilOpSeparate, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, StencilFuncSeparate, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, StencilMaskSeparate, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, AttachShader, ( FgGLuint _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, BindAttribLocation, ( FgGLuint _1, FgGLuint _2, const FgGLchar * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, CompileShader, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, CreateProgram, ( ), ( ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, CreateShader, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, DeleteProgram, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, DeleteShader, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, DetachShader, ( FgGLuint _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DisableVertexAttribArray, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, EnableVertexAttribArray, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GetActiveAttrib, ( FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLint * _5, FgGLenum * _6, FgGLchar * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, GetActiveUniform, ( FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLint * _5, FgGLenum * _6, FgGLchar * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, GetAttachedShaders, ( FgGLuint _1, FgGLsizei _2, FgGLsizei * _3, FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetAttribLocation, ( FgGLuint _1, const FgGLchar * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetProgramiv, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetProgramInfoLog, ( FgGLuint _1, FgGLsizei _2, FgGLsizei * _3, FgGLchar * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetShaderiv, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetShaderInfoLog, ( FgGLuint _1, FgGLsizei _2, FgGLsizei * _3, FgGLchar * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetShaderSource, ( FgGLuint _1, FgGLsizei _2, FgGLsizei * _3, FgGLchar * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetUniformLocation, ( FgGLuint _1, const FgGLchar * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetUniformfv, ( FgGLuint _1, FgGLint _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetUniformiv, ( FgGLuint _1, FgGLint _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribdv, ( FgGLuint _1, FgGLenum _2, FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribfv, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribiv, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribPointerv, ( FgGLuint _1, FgGLenum _2, FgGLvoid ** _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsProgram, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsShader, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, LinkProgram, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ShaderSource, ( FgGLuint _1, FgGLsizei _2, const FgGLchar *const* _3, const FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, UseProgram, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Uniform1f, ( FgGLint _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Uniform2f, ( FgGLint _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform3f, ( FgGLint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Uniform4f, ( FgGLint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, Uniform1i, ( FgGLint _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Uniform2i, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform3i, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Uniform4i, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, Uniform1fv, ( FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform2fv, ( FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform3fv, ( FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform4fv, ( FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform1iv, ( FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform2iv, ( FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform3iv, ( FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform4iv, ( FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, UniformMatrix2fv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, UniformMatrix3fv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, UniformMatrix4fv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ValidateProgram, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib1d, ( FgGLuint _1, FgGLdouble _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib1dv, ( FgGLuint _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib1f, ( FgGLuint _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib1fv, ( FgGLuint _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib1s, ( FgGLuint _1, FgGLshort _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib1sv, ( FgGLuint _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib2d, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib2dv, ( FgGLuint _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib2f, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib2fv, ( FgGLuint _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib2s, ( FgGLuint _1, FgGLshort _2, FgGLshort _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib2sv, ( FgGLuint _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib3d, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib3dv, ( FgGLuint _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib3f, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib3fv, ( FgGLuint _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib3s, ( FgGLuint _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib3sv, ( FgGLuint _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4Nbv, ( FgGLuint _1, const FgGLbyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4Niv, ( FgGLuint _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4Nsv, ( FgGLuint _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4Nub, ( FgGLuint _1, FgGLubyte _2, FgGLubyte _3, FgGLubyte _4, FgGLubyte _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4Nubv, ( FgGLuint _1, const FgGLubyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4Nuiv, ( FgGLuint _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4Nusv, ( FgGLuint _1, const FgGLushort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4bv, ( FgGLuint _1, const FgGLbyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4d, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4dv, ( FgGLuint _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4f, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4fv, ( FgGLuint _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4iv, ( FgGLuint _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4s, ( FgGLuint _1, FgGLshort _2, FgGLshort _3, FgGLshort _4, FgGLshort _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4sv, ( FgGLuint _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4ubv, ( FgGLuint _1, const FgGLubyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4uiv, ( FgGLuint _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4usv, ( FgGLuint _1, const FgGLushort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribPointer, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLboolean _4, FgGLsizei _5, const FgGLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_VERSION_2_1 */ \
    FG_GL_FUNCTION( , void, UniformMatrix2x3fv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, UniformMatrix3x2fv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, UniformMatrix2x4fv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, UniformMatrix4x2fv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, UniformMatrix3x4fv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, UniformMatrix4x3fv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_VERSION_3_0 */ \
    FG_GL_FUNCTION( , void, ColorMaski, ( FgGLuint _1, FgGLboolean _2, FgGLboolean _3, FgGLboolean _4, FgGLboolean _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetBooleani_v, ( FgGLenum _1, FgGLuint _2, FgGLboolean * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetIntegeri_v, ( FgGLenum _1, FgGLuint _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Enablei, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Disablei, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsEnabledi, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, BeginTransformFeedback, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, EndTransformFeedback, ( ), ( ) ) \
    FG_GL_FUNCTION( , void, BindBufferRange, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLintptr _4, FgGLsizeiptr _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, BindBufferBase, ( FgGLenum _1, FgGLuint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TransformFeedbackVaryings, ( FgGLuint _1, FgGLsizei _2, const FgGLchar *const* _3, FgGLenum _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetTransformFeedbackVarying, ( FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLsizei * _5, FgGLenum * _6, FgGLchar * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, ClampColor, ( FgGLenum _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, BeginConditionalRender, ( FgGLuint _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, EndConditionalRender, ( ), ( ) ) \
    FG_GL_FUNCTION( , void, VertexAttribIPointer, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, const FgGLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribIiv, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribIuiv, ( FgGLuint _1, FgGLenum _2, FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI1i, ( FgGLuint _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI2i, ( FgGLuint _1, FgGLint _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI3i, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI4i, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI1ui, ( FgGLuint _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI2ui, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI3ui, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI4ui, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI1iv, ( FgGLuint _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI2iv, ( FgGLuint _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI3iv, ( FgGLuint _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI4iv, ( FgGLuint _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI1uiv, ( FgGLuint _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI2uiv, ( FgGLuint _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI3uiv, ( FgGLuint _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI4uiv, ( FgGLuint _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI4bv, ( FgGLuint _1, const FgGLbyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI4sv, ( FgGLuint _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI4ubv, ( FgGLuint _1, const FgGLubyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI4usv, ( FgGLuint _1, const FgGLushort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetUniformuiv, ( FgGLuint _1, FgGLint _2, FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, BindFragDataLocation, ( FgGLuint _1, FgGLuint _2, const FgGLchar * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetFragDataLocation, ( FgGLuint _1, const FgGLchar * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Uniform1ui, ( FgGLint _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Uniform2ui, ( FgGLint _1, FgGLuint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform3ui, ( FgGLint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Uniform4ui, ( FgGLint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, Uniform1uiv, ( FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform2uiv, ( FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform3uiv, ( FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform4uiv, ( FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexParameterIiv, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexParameterIuiv, ( FgGLenum _1, FgGLenum _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetTexParameterIiv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetTexParameterIuiv, ( FgGLenum _1, FgGLenum _2, FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ClearBufferiv, ( FgGLenum _1, FgGLint _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ClearBufferuiv, ( FgGLenum _1, FgGLint _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ClearBufferfv, ( FgGLenum _1, FgGLint _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ClearBufferfi, ( FgGLenum _1, FgGLint _2, FgGLfloat _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( NULL, const FgGLubyte *, GetStringi, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsRenderbuffer, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, BindRenderbuffer, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DeleteRenderbuffers, ( FgGLsizei _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GenRenderbuffers, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, RenderbufferStorage, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetRenderbufferParameteriv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsFramebuffer, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, BindFramebuffer, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DeleteFramebuffers, ( FgGLsizei _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GenFramebuffers, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLenum, CheckFramebufferStatus, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, FramebufferTexture1D, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, FramebufferTexture2D, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, FramebufferTexture3D, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5, FgGLint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, FramebufferRenderbuffer, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetFramebufferAttachmentParameteriv, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GenerateMipmap, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, BlitFramebuffer, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLint _8, FgGLbitfield _9, FgGLenum _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION( , void, RenderbufferStorageMultisample, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, FramebufferTextureLayer, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( NULL, void *, MapBufferRange, ( FgGLenum _1, FgGLintptr _2, FgGLsizeiptr _3, FgGLbitfield _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, FlushMappedBufferRange, ( FgGLenum _1, FgGLintptr _2, FgGLsizeiptr _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, BindVertexArray, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, DeleteVertexArrays, ( FgGLsizei _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GenVertexArrays, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsVertexArray, ( FgGLuint _1 ), ( _1 ) ) \
\
    /* GL_VERSION_3_1 */ \
    FG_GL_FUNCTION( , void, DrawArraysInstanced, ( FgGLenum _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, DrawElementsInstanced, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, TexBuffer, ( FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, PrimitiveRestartIndex, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, CopyBufferSubData, ( FgGLenum _1, FgGLenum _2, FgGLintptr _3, FgGLintptr _4, FgGLsizeiptr _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetUniformIndices, ( FgGLuint _1, FgGLsizei _2, const FgGLchar *const* _3, FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetActiveUniformsiv, ( FgGLuint _1, FgGLsizei _2, const FgGLuint * _3, FgGLenum _4, FgGLint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetActiveUniformName, ( FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLchar * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, GetUniformBlockIndex, ( FgGLuint _1, const FgGLchar * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetActiveUniformBlockiv, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetActiveUniformBlockName, ( FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLchar * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, UniformBlockBinding, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_VERSION_3_2 */ \
    FG_GL_FUNCTION( , void, DrawElementsBaseVertex, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, DrawRangeElementsBaseVertex, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4, FgGLenum _5, const FgGLvoid * _6, FgGLint _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, DrawElementsInstancedBaseVertex, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4, FgGLsizei _5, FgGLint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, MultiDrawElementsBaseVertex, ( FgGLenum _1, const FgGLsizei * _2, FgGLenum _3, const FgGLvoid *const* _4, FgGLsizei _5, const FgGLint * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ProvokingVertex, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( NULL, FgGLsync, FenceSync, ( FgGLenum _1, FgGLbitfield _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsSync, ( FgGLsync _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, DeleteSync, ( FgGLsync _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLenum, ClientWaitSync, ( FgGLsync _1, FgGLbitfield _2, FgGLuint64 _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, WaitSync, ( FgGLsync _1, FgGLbitfield _2, FgGLuint64 _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetInteger64v, ( FgGLenum _1, FgGLint64 * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetSynciv, ( FgGLsync _1, FgGLenum _2, FgGLsizei _3, FgGLsizei * _4, FgGLint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetInteger64i_v, ( FgGLenum _1, FgGLuint _2, FgGLint64 * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetBufferParameteri64v, ( FgGLenum _1, FgGLenum _2, FgGLint64 * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, FramebufferTexture, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, TexImage2DMultisample, ( FgGLenum _1, FgGLsizei _2, FgGLint _3, FgGLsizei _4, FgGLsizei _5, FgGLboolean _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, TexImage3DMultisample, ( FgGLenum _1, FgGLsizei _2, FgGLint _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLboolean _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, GetMultisamplefv, ( FgGLenum _1, FgGLuint _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SampleMaski, ( FgGLuint _1, FgGLbitfield _2 ), ( _1, _2 ) ) \
\
    /* GL_VERSION_3_3 */ \
    FG_GL_FUNCTION( , void, BindFragDataLocationIndexed, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, const FgGLchar * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetFragDataIndex, ( FgGLuint _1, const FgGLchar * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GenSamplers, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DeleteSamplers, ( FgGLsizei _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsSampler, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, BindSampler, ( FgGLuint _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, SamplerParameteri, ( FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SamplerParameteriv, ( FgGLuint _1, FgGLenum _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SamplerParameterf, ( FgGLuint _1, FgGLenum _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SamplerParameterfv, ( FgGLuint _1, FgGLenum _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SamplerParameterIiv, ( FgGLuint _1, FgGLenum _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SamplerParameterIuiv, ( FgGLuint _1, FgGLenum _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetSamplerParameteriv, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetSamplerParameterIiv, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetSamplerParameterfv, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetSamplerParameterIuiv, ( FgGLuint _1, FgGLenum _2, FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, QueryCounter, ( FgGLuint _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetQueryObjecti64v, ( FgGLuint _1, FgGLenum _2, FgGLint64 * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetQueryObjectui64v, ( FgGLuint _1, FgGLenum _2, FgGLuint64 * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribDivisor, ( FgGLuint _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribP1ui, ( FgGLuint _1, FgGLenum _2, FgGLboolean _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribP1uiv, ( FgGLuint _1, FgGLenum _2, FgGLboolean _3, const FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribP2ui, ( FgGLuint _1, FgGLenum _2, FgGLboolean _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribP2uiv, ( FgGLuint _1, FgGLenum _2, FgGLboolean _3, const FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribP3ui, ( FgGLuint _1, FgGLenum _2, FgGLboolean _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribP3uiv, ( FgGLuint _1, FgGLenum _2, FgGLboolean _3, const FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribP4ui, ( FgGLuint _1, FgGLenum _2, FgGLboolean _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribP4uiv, ( FgGLuint _1, FgGLenum _2, FgGLboolean _3, const FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexP2ui, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexP2uiv, ( FgGLenum _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexP3ui, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexP3uiv, ( FgGLenum _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexP4ui, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexP4uiv, ( FgGLenum _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexCoordP1ui, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexCoordP1uiv, ( FgGLenum _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexCoordP2ui, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexCoordP2uiv, ( FgGLenum _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexCoordP3ui, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexCoordP3uiv, ( FgGLenum _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexCoordP4ui, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexCoordP4uiv, ( FgGLenum _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoordP1ui, ( FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoordP1uiv, ( FgGLenum _1, FgGLenum _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoordP2ui, ( FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoordP2uiv, ( FgGLenum _1, FgGLenum _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoordP3ui, ( FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoordP3uiv, ( FgGLenum _1, FgGLenum _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoordP4ui, ( FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoordP4uiv, ( FgGLenum _1, FgGLenum _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, NormalP3ui, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, NormalP3uiv, ( FgGLenum _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, ColorP3ui, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, ColorP3uiv, ( FgGLenum _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, ColorP4ui, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, ColorP4uiv, ( FgGLenum _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColorP3ui, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColorP3uiv, ( FgGLenum _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
\
    /* GL_VERSION_4_0 */ \
    FG_GL_FUNCTION( , void, MinSampleShading, ( FgGLfloat _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, BlendEquationi, ( FgGLuint _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, BlendEquationSeparatei, ( FgGLuint _1, FgGLenum _2, FgGLenum _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, BlendFunci, ( FgGLuint _1, FgGLenum _2, FgGLenum _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, BlendFuncSeparatei, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLenum _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, DrawArraysIndirect, ( FgGLenum _1, const FgGLvoid * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DrawElementsIndirect, ( FgGLenum _1, FgGLenum _2, const FgGLvoid * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform1d, ( FgGLint _1, FgGLdouble _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Uniform2d, ( FgGLint _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform3d, ( FgGLint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Uniform4d, ( FgGLint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, Uniform1dv, ( FgGLint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform2dv, ( FgGLint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform3dv, ( FgGLint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform4dv, ( FgGLint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, UniformMatrix2dv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, UniformMatrix3dv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, UniformMatrix4dv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, UniformMatrix2x3dv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, UniformMatrix2x4dv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, UniformMatrix3x2dv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, UniformMatrix3x4dv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, UniformMatrix4x2dv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, UniformMatrix4x3dv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetUniformdv, ( FgGLuint _1, FgGLint _2, FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetSubroutineUniformLocation, ( FgGLuint _1, FgGLenum _2, const FgGLchar * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, GetSubroutineIndex, ( FgGLuint _1, FgGLenum _2, const FgGLchar * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetActiveSubroutineUniformiv, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLenum _4, FgGLint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetActiveSubroutineUniformName, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, FgGLsizei * _5, FgGLchar * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, GetActiveSubroutineName, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, FgGLsizei * _5, FgGLchar * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, UniformSubroutinesuiv, ( FgGLenum _1, FgGLsizei _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetUniformSubroutineuiv, ( FgGLenum _1, FgGLint _2, FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetProgramStageiv, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, PatchParameteri, ( FgGLenum _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, PatchParameterfv, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, BindTransformFeedback, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DeleteTransformFeedbacks, ( FgGLsizei _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GenTransformFeedbacks, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsTransformFeedback, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, PauseTransformFeedback, ( ), ( ) ) \
    FG_GL_FUNCTION( , void, ResumeTransformFeedback, ( ), ( ) ) \
    FG_GL_FUNCTION( , void, DrawTransformFeedback, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DrawTransformFeedbackStream, ( FgGLenum _1, FgGLuint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, BeginQueryIndexed, ( FgGLenum _1, FgGLuint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, EndQueryIndexed, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetQueryIndexediv, ( FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_VERSION_4_1 */ \
    FG_GL_FUNCTION( , void, ReleaseShaderCompiler, ( ), ( ) ) \
    FG_GL_FUNCTION( , void, ShaderBinary, ( FgGLsizei _1, const FgGLuint * _2, FgGLenum _3, const FgGLvoid * _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetShaderPrecisionFormat, ( FgGLenum _1, FgGLenum _2, FgGLint * _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, DepthRangef, ( FgGLfloat _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, ClearDepthf, ( FgGLfloat _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GetProgramBinary, ( FgGLuint _1, FgGLsizei _2, FgGLsizei * _3, FgGLenum * _4, FgGLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramBinary, ( FgGLuint _1, FgGLenum _2, const FgGLvoid * _3, FgGLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramParameteri, ( FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, UseProgramStages, ( FgGLuint _1, FgGLbitfield _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ActiveShaderProgram, ( FgGLuint _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, CreateShaderProgramv, ( FgGLenum _1, FgGLsizei _2, const FgGLchar *const* _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, BindProgramPipeline, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, DeleteProgramPipelines, ( FgGLsizei _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GenProgramPipelines, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsProgramPipeline, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GetProgramPipelineiv, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform1i, ( FgGLuint _1, FgGLint _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform1iv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform1f, ( FgGLuint _1, FgGLint _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform1fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform1d, ( FgGLuint _1, FgGLint _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform1dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform1ui, ( FgGLuint _1, FgGLint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform1uiv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform2i, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform2iv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform2f, ( FgGLuint _1, FgGLint _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform2fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform2d, ( FgGLuint _1, FgGLint _2, FgGLdouble _3, FgGLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform2dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform2ui, ( FgGLuint _1, FgGLint _2, FgGLuint _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform2uiv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform3i, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform3iv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform3f, ( FgGLuint _1, FgGLint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform3fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform3d, ( FgGLuint _1, FgGLint _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform3dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform3ui, ( FgGLuint _1, FgGLint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform3uiv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform4i, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform4iv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform4f, ( FgGLuint _1, FgGLint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform4fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform4d, ( FgGLuint _1, FgGLint _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform4dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform4ui, ( FgGLuint _1, FgGLint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform4uiv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix2fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix3fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix4fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix2dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix3dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix4dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix2x3fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix3x2fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix2x4fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix4x2fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix3x4fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix4x3fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix2x3dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix3x2dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix2x4dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix4x2dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix3x4dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix4x3dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ValidateProgramPipeline, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GetProgramPipelineInfoLog, ( FgGLuint _1, FgGLsizei _2, FgGLsizei * _3, FgGLchar * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL1d, ( FgGLuint _1, FgGLdouble _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL2d, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL3d, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL4d, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL1dv, ( FgGLuint _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL2dv, ( FgGLuint _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL3dv, ( FgGLuint _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL4dv, ( FgGLuint _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribLPointer, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, const FgGLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribLdv, ( FgGLuint _1, FgGLenum _2, FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ViewportArrayv, ( FgGLuint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ViewportIndexedf, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ViewportIndexedfv, ( FgGLuint _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, ScissorArrayv, ( FgGLuint _1, FgGLsizei _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ScissorIndexed, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ScissorIndexedv, ( FgGLuint _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DepthRangeArrayv, ( FgGLuint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, DepthRangeIndexed, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetFloati_v, ( FgGLenum _1, FgGLuint _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetDoublei_v, ( FgGLenum _1, FgGLuint _2, FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_VERSION_4_2 */ \
    FG_GL_FUNCTION( , void, DrawArraysInstancedBaseInstance, ( FgGLenum _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4, FgGLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, DrawElementsInstancedBaseInstance, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, const void * _4, FgGLsizei _5, FgGLuint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, DrawElementsInstancedBaseVertexBaseInstance, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, const void * _4, FgGLsizei _5, FgGLint _6, FgGLuint _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, GetInternalformativ, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, FgGLint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetActiveAtomicCounterBufferiv, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, BindImageTexture, ( FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLboolean _4, FgGLint _5, FgGLenum _6, FgGLenum _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, MemoryBarrier, ( FgGLbitfield _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexStorage1D, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, TexStorage2D, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, TexStorage3D, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, DrawTransformFeedbackInstanced, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, DrawTransformFeedbackStreamInstanced, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_VERSION_4_3 */ \
    FG_GL_FUNCTION( , void, ClearBufferData, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, const void * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ClearBufferSubData, ( FgGLenum _1, FgGLenum _2, FgGLintptr _3, FgGLsizeiptr _4, FgGLenum _5, FgGLenum _6, const void * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, DispatchCompute, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, DispatchComputeIndirect, ( FgGLintptr _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, CopyImageSubData, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLuint _7, FgGLenum _8, FgGLint _9, FgGLint _10, FgGLint _11, FgGLint _12, FgGLsizei _13, FgGLsizei _14, FgGLsizei _15 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15 ) ) \
    FG_GL_FUNCTION( , void, FramebufferParameteri, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetFramebufferParameteriv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetInternalformati64v, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, FgGLint64 * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, InvalidateTexSubImage, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, InvalidateTexImage, ( FgGLuint _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, InvalidateBufferSubData, ( FgGLuint _1, FgGLintptr _2, FgGLsizeiptr _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, InvalidateBufferData, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, InvalidateFramebuffer, ( FgGLenum _1, FgGLsizei _2, const FgGLenum * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, InvalidateSubFramebuffer, ( FgGLenum _1, FgGLsizei _2, const FgGLenum * _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, MultiDrawArraysIndirect, ( FgGLenum _1, const void * _2, FgGLsizei _3, FgGLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiDrawElementsIndirect, ( FgGLenum _1, FgGLenum _2, const void * _3, FgGLsizei _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetProgramInterfaceiv, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, GetProgramResourceIndex, ( FgGLuint _1, FgGLenum _2, const FgGLchar * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetProgramResourceName, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, FgGLsizei * _5, FgGLchar * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, GetProgramResourceiv, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, const FgGLenum * _5, FgGLsizei _6, FgGLsizei * _7, FgGLint * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetProgramResourceLocation, ( FgGLuint _1, FgGLenum _2, const FgGLchar * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetProgramResourceLocationIndex, ( FgGLuint _1, FgGLenum _2, const FgGLchar * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ShaderStorageBlockBinding, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexBufferRange, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLintptr _4, FgGLsizeiptr _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, TexStorage2DMultisample, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLboolean _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, TexStorage3DMultisample, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLboolean _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, TextureView, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLenum _4, FgGLuint _5, FgGLuint _6, FgGLuint _7, FgGLuint _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, BindVertexBuffer, ( FgGLuint _1, FgGLuint _2, FgGLintptr _3, FgGLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribFormat, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLboolean _4, FgGLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribIFormat, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribLFormat, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribBinding, ( FgGLuint _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexBindingDivisor, ( FgGLuint _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DebugMessageControl, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, const FgGLuint * _5, FgGLboolean _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, DebugMessageInsert, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLenum _4, FgGLsizei _5, const FgGLchar * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, DebugMessageCallback, ( FgGLDebugProc _1, const void * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, GetDebugMessageLog, ( FgGLuint _1, FgGLsizei _2, FgGLenum * _3, FgGLenum * _4, FgGLuint * _5, FgGLenum * _6, FgGLsizei * _7, FgGLchar * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, PushDebugGroup, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLchar * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, PopDebugGroup, ( ), ( ) ) \
    FG_GL_FUNCTION( , void, ObjectLabel, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLchar * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetObjectLabel, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLchar * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ObjectPtrLabel, ( const void * _1, FgGLsizei _2, const FgGLchar * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetObjectPtrLabel, ( const void * _1, FgGLsizei _2, FgGLsizei * _3, FgGLchar * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_VERSION_4_4 */ \
    FG_GL_FUNCTION( , void, BufferStorage, ( FgGLenum _1, FgGLsizeiptr _2, const void * _3, FgGLbitfield _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ClearTexImage, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLenum _4, const void * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ClearTexSubImage, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLenum _9, FgGLenum _10, const void * _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG_GL_FUNCTION( , void, BindBuffersBase, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, BindBuffersRange, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLuint * _4, const FgGLintptr * _5, const FgGLsizeiptr * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, BindTextures, ( FgGLuint _1, FgGLsizei _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, BindSamplers, ( FgGLuint _1, FgGLsizei _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, BindImageTextures, ( FgGLuint _1, FgGLsizei _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, BindVertexBuffers, ( FgGLuint _1, FgGLsizei _2, const FgGLuint * _3, const FgGLintptr * _4, const FgGLsizei * _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_ARB_ES2_compatibility */ \
\
    /* GL_ARB_ES3_compatibility */ \
\
    /* GL_ARB_arrays_of_arrays */ \
\
    /* GL_ARB_base_instance */ \
\
    /* GL_ARB_bindless_texture */ \
    FG_GL_FUNCTION( 0, FgGLuint64, GetTextureHandleARB, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLuint64, GetTextureSamplerHandleARB, ( FgGLuint _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MakeTextureHandleResidentARB, ( FgGLuint64 _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, MakeTextureHandleNonResidentARB, ( FgGLuint64 _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLuint64, GetImageHandleARB, ( FgGLuint _1, FgGLint _2, FgGLboolean _3, FgGLint _4, FgGLenum _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, MakeImageHandleResidentARB, ( FgGLuint64 _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MakeImageHandleNonResidentARB, ( FgGLuint64 _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, UniformHandleui64ARB, ( FgGLint _1, FgGLuint64 _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, UniformHandleui64vARB, ( FgGLint _1, FgGLsizei _2, const FgGLuint64 * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformHandleui64ARB, ( FgGLuint _1, FgGLint _2, FgGLuint64 _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformHandleui64vARB, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint64 * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsTextureHandleResidentARB, ( FgGLuint64 _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsImageHandleResidentARB, ( FgGLuint64 _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL1ui64ARB, ( FgGLuint _1, FgGLuint64EXT _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL1ui64vARB, ( FgGLuint _1, const FgGLuint64EXT * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribLui64vARB, ( FgGLuint _1, FgGLenum _2, FgGLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_ARB_blend_func_extended */ \
\
    /* GL_ARB_buffer_storage */ \
\
    /* GL_ARB_cl_event */ \
    FG_GL_FUNCTION( NULL, FgGLsync, CreateSyncFromCLeventARB, ( struct _cl_context * _1, struct _cl_event * _2, FgGLbitfield _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_ARB_clear_buffer_object */ \
\
    /* GL_ARB_clear_texture */ \
\
    /* GL_ARB_color_buffer_float */ \
    FG_GL_FUNCTION( , void, ClampColorARB, ( FgGLenum _1, FgGLenum _2 ), ( _1, _2 ) ) \
\
    /* GL_ARB_compatibility */ \
\
    /* GL_ARB_compressed_texture_pixel_storage */ \
\
    /* GL_ARB_compute_shader */ \
\
    /* GL_ARB_compute_variable_group_size */ \
    FG_GL_FUNCTION( , void, DispatchComputeGroupSizeARB, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_ARB_conservative_depth */ \
\
    /* GL_ARB_copy_buffer */ \
\
    /* GL_ARB_copy_image */ \
\
    /* GL_ARB_debug_output */ \
    FG_GL_FUNCTION( , void, DebugMessageControlARB, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, const FgGLuint * _5, FgGLboolean _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, DebugMessageInsertARB, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLenum _4, FgGLsizei _5, const FgGLchar * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, DebugMessageCallbackARB, ( FgGLDebugProcARB _1, const void * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, GetDebugMessageLogARB, ( FgGLuint _1, FgGLsizei _2, FgGLenum * _3, FgGLenum * _4, FgGLuint * _5, FgGLenum * _6, FgGLsizei * _7, FgGLchar * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
\
    /* GL_ARB_depth_buffer_float */ \
\
    /* GL_ARB_depth_clamp */ \
\
    /* GL_ARB_depth_texture */ \
\
    /* GL_ARB_draw_buffers */ \
    FG_GL_FUNCTION( , void, DrawBuffersARB, ( FgGLsizei _1, const FgGLenum * _2 ), ( _1, _2 ) ) \
\
    /* GL_ARB_draw_buffers_blend */ \
    FG_GL_FUNCTION( , void, BlendEquationiARB, ( FgGLuint _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, BlendEquationSeparateiARB, ( FgGLuint _1, FgGLenum _2, FgGLenum _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, BlendFunciARB, ( FgGLuint _1, FgGLenum _2, FgGLenum _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, BlendFuncSeparateiARB, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLenum _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_ARB_draw_elements_base_vertex */ \
\
    /* GL_ARB_draw_indirect */ \
\
    /* GL_ARB_draw_instanced */ \
    FG_GL_FUNCTION( , void, DrawArraysInstancedARB, ( FgGLenum _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, DrawElementsInstancedARB, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_ARB_enhanced_layouts */ \
\
    /* GL_ARB_explicit_attrib_location */ \
\
    /* GL_ARB_explicit_uniform_location */ \
\
    /* GL_ARB_fragment_coord_conventions */ \
\
    /* GL_ARB_fragment_layer_viewport */ \
\
    /* GL_ARB_fragment_program */ \
    FG_GL_FUNCTION( , void, ProgramStringARB, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, BindProgramARB, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DeleteProgramsARB, ( FgGLsizei _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GenProgramsARB, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, ProgramEnvParameter4dARB, ( FgGLenum _1, FgGLuint _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ProgramEnvParameter4dvARB, ( FgGLenum _1, FgGLuint _2, const FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramEnvParameter4fARB, ( FgGLenum _1, FgGLuint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ProgramEnvParameter4fvARB, ( FgGLenum _1, FgGLuint _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramLocalParameter4dARB, ( FgGLenum _1, FgGLuint _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ProgramLocalParameter4dvARB, ( FgGLenum _1, FgGLuint _2, const FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramLocalParameter4fARB, ( FgGLenum _1, FgGLuint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ProgramLocalParameter4fvARB, ( FgGLenum _1, FgGLuint _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetProgramEnvParameterdvARB, ( FgGLenum _1, FgGLuint _2, FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetProgramEnvParameterfvARB, ( FgGLenum _1, FgGLuint _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetProgramLocalParameterdvARB, ( FgGLenum _1, FgGLuint _2, FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetProgramLocalParameterfvARB, ( FgGLenum _1, FgGLuint _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetProgramivARB, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetProgramStringARB, ( FgGLenum _1, FgGLenum _2, FgGLvoid * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsProgramARB, ( FgGLuint _1 ), ( _1 ) ) \
\
    /* GL_ARB_fragment_program_shadow */ \
\
    /* GL_ARB_fragment_shader */ \
\
    /* GL_ARB_framebuffer_no_attachments */ \
\
    /* GL_ARB_framebuffer_object */ \
\
    /* GL_ARB_framebuffer_sRGB */ \
\
    /* GL_ARB_geometry_shader4 */ \
    FG_GL_FUNCTION( , void, ProgramParameteriARB, ( FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, FramebufferTextureARB, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, FramebufferTextureLayerARB, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, FramebufferTextureFaceARB, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLenum _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_ARB_get_program_binary */ \
\
    /* GL_ARB_gpu_shader5 */ \
\
    /* GL_ARB_gpu_shader_fp64 */ \
\
    /* GL_ARB_half_float_pixel */ \
\
    /* GL_ARB_half_float_vertex */ \
\
    /* GL_ARB_imaging */ \
    FG_GL_FUNCTION( , void, ColorTable, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLenum _5, const FgGLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ColorTableParameterfv, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ColorTableParameteriv, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, CopyColorTable, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetColorTable, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetColorTableParameterfv, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetColorTableParameteriv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ColorSubTable, ( FgGLenum _1, FgGLsizei _2, FgGLsizei _3, FgGLenum _4, FgGLenum _5, const FgGLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, CopyColorSubTable, ( FgGLenum _1, FgGLsizei _2, FgGLint _3, FgGLint _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ConvolutionFilter1D, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLenum _5, const FgGLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ConvolutionFilter2D, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, const FgGLvoid * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, ConvolutionParameterf, ( FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ConvolutionParameterfv, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ConvolutionParameteri, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ConvolutionParameteriv, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, CopyConvolutionFilter1D, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, CopyConvolutionFilter2D, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, GetConvolutionFilter, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetConvolutionParameterfv, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetConvolutionParameteriv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetSeparableFilter, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4, FgGLvoid * _5, FgGLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, SeparableFilter2D, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, const FgGLvoid * _7, const FgGLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, GetHistogram, ( FgGLenum _1, FgGLboolean _2, FgGLenum _3, FgGLenum _4, FgGLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetHistogramParameterfv, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetHistogramParameteriv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetMinmax, ( FgGLenum _1, FgGLboolean _2, FgGLenum _3, FgGLenum _4, FgGLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetMinmaxParameterfv, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetMinmaxParameteriv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Histogram, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLboolean _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Minmax, ( FgGLenum _1, FgGLenum _2, FgGLboolean _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ResetHistogram, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ResetMinmax, ( FgGLenum _1 ), ( _1 ) ) \
\
    /* GL_ARB_indirect_parameters */ \
    FG_GL_FUNCTION( , void, MultiDrawArraysIndirectCountARB, ( FgGLenum _1, FgGLintptr _2, FgGLintptr _3, FgGLsizei _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, MultiDrawElementsIndirectCountARB, ( FgGLenum _1, FgGLenum _2, FgGLintptr _3, FgGLintptr _4, FgGLsizei _5, FgGLsizei _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_ARB_instanced_arrays */ \
    FG_GL_FUNCTION( , void, VertexAttribDivisorARB, ( FgGLuint _1, FgGLuint _2 ), ( _1, _2 ) ) \
\
    /* GL_ARB_internalformat_query */ \
\
    /* GL_ARB_internalformat_query2 */ \
\
    /* GL_ARB_invalidate_subdata */ \
\
    /* GL_ARB_map_buffer_alignment */ \
\
    /* GL_ARB_map_buffer_range */ \
\
    /* GL_ARB_matrix_palette */ \
    FG_GL_FUNCTION( , void, CurrentPaletteMatrixARB, ( FgGLint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, MatrixIndexubvARB, ( FgGLint _1, const FgGLubyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MatrixIndexusvARB, ( FgGLint _1, const FgGLushort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MatrixIndexuivARB, ( FgGLint _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MatrixIndexPointerARB, ( FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_ARB_multi_bind */ \
\
    /* GL_ARB_multi_draw_indirect */ \
\
    /* GL_ARB_multisample */ \
    FG_GL_FUNCTION( , void, SampleCoverageARB, ( FgGLfloat _1, FgGLboolean _2 ), ( _1, _2 ) ) \
\
    /* GL_ARB_multitexture */ \
    FG_GL_FUNCTION( , void, ActiveTextureARB, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ClientActiveTextureARB, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord1dARB, ( FgGLenum _1, FgGLdouble _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord1dvARB, ( FgGLenum _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord1fARB, ( FgGLenum _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord1fvARB, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord1iARB, ( FgGLenum _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord1ivARB, ( FgGLenum _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord1sARB, ( FgGLenum _1, FgGLshort _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord1svARB, ( FgGLenum _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord2dARB, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord2dvARB, ( FgGLenum _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord2fARB, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord2fvARB, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord2iARB, ( FgGLenum _1, FgGLint _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord2ivARB, ( FgGLenum _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord2sARB, ( FgGLenum _1, FgGLshort _2, FgGLshort _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord2svARB, ( FgGLenum _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord3dARB, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord3dvARB, ( FgGLenum _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord3fARB, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord3fvARB, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord3iARB, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord3ivARB, ( FgGLenum _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord3sARB, ( FgGLenum _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord3svARB, ( FgGLenum _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord4dARB, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord4dvARB, ( FgGLenum _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord4fARB, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord4fvARB, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord4iARB, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord4ivARB, ( FgGLenum _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord4sARB, ( FgGLenum _1, FgGLshort _2, FgGLshort _3, FgGLshort _4, FgGLshort _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord4svARB, ( FgGLenum _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
\
    /* GL_ARB_occlusion_query */ \
    FG_GL_FUNCTION( , void, GenQueriesARB, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DeleteQueriesARB, ( FgGLsizei _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsQueryARB, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, BeginQueryARB, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, EndQueryARB, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GetQueryivARB, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetQueryObjectivARB, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetQueryObjectuivARB, ( FgGLuint _1, FgGLenum _2, FgGLuint * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_ARB_occlusion_query2 */ \
\
    /* GL_ARB_pixel_buffer_object */ \
\
    /* GL_ARB_point_parameters */ \
    FG_GL_FUNCTION( , void, PointParameterfARB, ( FgGLenum _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, PointParameterfvARB, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
\
    /* GL_ARB_point_sprite */ \
\
    /* GL_ARB_program_interface_query */ \
\
    /* GL_ARB_provoking_vertex */ \
\
    /* GL_ARB_query_buffer_object */ \
\
    /* GL_ARB_robust_buffer_access_behavior */ \
\
    /* GL_ARB_robustness */ \
    FG_GL_FUNCTION( 0, FgGLenum, GetGraphicsResetStatusARB, ( ), ( ) ) \
    FG_GL_FUNCTION( , void, GetnTexImageARB, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLenum _4, FgGLsizei _5, FgGLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ReadnPixelsARB, ( FgGLint _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, FgGLsizei _7, FgGLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, GetnCompressedTexImageARB, ( FgGLenum _1, FgGLint _2, FgGLsizei _3, FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetnUniformfvARB, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetnUniformivARB, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetnUniformuivARB, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetnUniformdvARB, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetnMapdvARB, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetnMapfvARB, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetnMapivARB, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetnPixelMapfvARB, ( FgGLenum _1, FgGLsizei _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetnPixelMapuivARB, ( FgGLenum _1, FgGLsizei _2, FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetnPixelMapusvARB, ( FgGLenum _1, FgGLsizei _2, FgGLushort * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetnPolygonStippleARB, ( FgGLsizei _1, FgGLubyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetnColorTableARB, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, FgGLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetnConvolutionFilterARB, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, FgGLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetnSeparableFilterARB, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, FgGLvoid * _5, FgGLsizei _6, FgGLvoid * _7, FgGLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, GetnHistogramARB, ( FgGLenum _1, FgGLboolean _2, FgGLenum _3, FgGLenum _4, FgGLsizei _5, FgGLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, GetnMinmaxARB, ( FgGLenum _1, FgGLboolean _2, FgGLenum _3, FgGLenum _4, FgGLsizei _5, FgGLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_ARB_robustness_isolation */ \
\
    /* GL_ARB_sample_shading */ \
    FG_GL_FUNCTION( , void, MinSampleShadingARB, ( FgGLfloat _1 ), ( _1 ) ) \
\
    /* GL_ARB_sampler_objects */ \
\
    /* GL_ARB_seamless_cube_map */ \
\
    /* GL_ARB_seamless_cubemap_per_texture */ \
\
    /* GL_ARB_separate_shader_objects */ \
\
    /* GL_ARB_shader_atomic_counters */ \
\
    /* GL_ARB_shader_bit_encoding */ \
\
    /* GL_ARB_shader_draw_parameters */ \
\
    /* GL_ARB_shader_group_vote */ \
\
    /* GL_ARB_shader_image_load_store */ \
\
    /* GL_ARB_shader_image_size */ \
\
    /* GL_ARB_shader_objects */ \
    FG_GL_FUNCTION( , void, DeleteObjectARB, ( FgGLhandleARB _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLhandleARB, GetHandleARB, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, DetachObjectARB, ( FgGLhandleARB _1, FgGLhandleARB _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLhandleARB, CreateShaderObjectARB, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ShaderSourceARB, ( FgGLhandleARB _1, FgGLsizei _2, const FgGLcharARB ** _3, const FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, CompileShaderARB, ( FgGLhandleARB _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLhandleARB, CreateProgramObjectARB, ( ), ( ) ) \
    FG_GL_FUNCTION( , void, AttachObjectARB, ( FgGLhandleARB _1, FgGLhandleARB _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, LinkProgramARB, ( FgGLhandleARB _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, UseProgramObjectARB, ( FgGLhandleARB _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ValidateProgramARB, ( FgGLhandleARB _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Uniform1fARB, ( FgGLint _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Uniform2fARB, ( FgGLint _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform3fARB, ( FgGLint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Uniform4fARB, ( FgGLint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, Uniform1iARB, ( FgGLint _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Uniform2iARB, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform3iARB, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Uniform4iARB, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, Uniform1fvARB, ( FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform2fvARB, ( FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform3fvARB, ( FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform4fvARB, ( FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform1ivARB, ( FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform2ivARB, ( FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform3ivARB, ( FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform4ivARB, ( FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, UniformMatrix2fvARB, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, UniformMatrix3fvARB, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, UniformMatrix4fvARB, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetObjectParameterfvARB, ( FgGLhandleARB _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetObjectParameterivARB, ( FgGLhandleARB _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetInfoLogARB, ( FgGLhandleARB _1, FgGLsizei _2, FgGLsizei * _3, FgGLcharARB * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetAttachedObjectsARB, ( FgGLhandleARB _1, FgGLsizei _2, FgGLsizei * _3, FgGLhandleARB * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetUniformLocationARB, ( FgGLhandleARB _1, const FgGLcharARB * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetActiveUniformARB, ( FgGLhandleARB _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLint * _5, FgGLenum * _6, FgGLcharARB * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, GetUniformfvARB, ( FgGLhandleARB _1, FgGLint _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetUniformivARB, ( FgGLhandleARB _1, FgGLint _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetShaderSourceARB, ( FgGLhandleARB _1, FgGLsizei _2, FgGLsizei * _3, FgGLcharARB * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_ARB_shader_precision */ \
\
    /* GL_ARB_shader_stencil_export */ \
\
    /* GL_ARB_shader_storage_buffer_object */ \
\
    /* GL_ARB_shader_subroutine */ \
\
    /* GL_ARB_shader_texture_lod */ \
\
    /* GL_ARB_shading_language_100 */ \
\
    /* GL_ARB_shading_language_420pack */ \
\
    /* GL_ARB_shading_language_include */ \
    FG_GL_FUNCTION( , void, NamedStringARB, ( FgGLenum _1, FgGLint _2, const FgGLchar * _3, FgGLint _4, const FgGLchar * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, DeleteNamedStringARB, ( FgGLint _1, const FgGLchar * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, CompileShaderIncludeARB, ( FgGLuint _1, FgGLsizei _2, const FgGLchar *const* _3, const FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsNamedStringARB, ( FgGLint _1, const FgGLchar * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetNamedStringARB, ( FgGLint _1, const FgGLchar * _2, FgGLsizei _3, FgGLint * _4, FgGLchar * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetNamedStringivARB, ( FgGLint _1, const FgGLchar * _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_ARB_shading_language_packing */ \
\
    /* GL_ARB_shadow */ \
\
    /* GL_ARB_shadow_ambient */ \
\
    /* GL_ARB_sparse_texture */ \
    FG_GL_FUNCTION( , void, TexPageCommitmentARB, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLboolean _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
\
    /* GL_ARB_stencil_texturing */ \
\
    /* GL_ARB_sync */ \
\
    /* GL_ARB_tessellation_shader */ \
\
    /* GL_ARB_texture_border_clamp */ \
\
    /* GL_ARB_texture_buffer_object */ \
    FG_GL_FUNCTION( , void, TexBufferARB, ( FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_ARB_texture_buffer_object_rgb32 */ \
\
    /* GL_ARB_texture_buffer_range */ \
\
    /* GL_ARB_texture_compression */ \
    FG_GL_FUNCTION( , void, CompressedTexImage3DARB, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLsizei _8, const FgGLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION( , void, CompressedTexImage2DARB, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLint _6, FgGLsizei _7, const FgGLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, CompressedTexImage1DARB, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLint _5, FgGLsizei _6, const FgGLvoid * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, CompressedTexSubImage3DARB, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLenum _9, FgGLsizei _10, const FgGLvoid * _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG_GL_FUNCTION( , void, CompressedTexSubImage2DARB, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLenum _7, FgGLsizei _8, const FgGLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION( , void, CompressedTexSubImage1DARB, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLenum _5, FgGLsizei _6, const FgGLvoid * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, GetCompressedTexImageARB, ( FgGLenum _1, FgGLint _2, FgGLvoid * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_ARB_texture_compression_bptc */ \
\
    /* GL_ARB_texture_compression_rgtc */ \
\
    /* GL_ARB_texture_cube_map */ \
\
    /* GL_ARB_texture_cube_map_array */ \
\
    /* GL_ARB_texture_env_add */ \
\
    /* GL_ARB_texture_env_combine */ \
\
    /* GL_ARB_texture_env_crossbar */ \
\
    /* GL_ARB_texture_env_dot3 */ \
\
    /* GL_ARB_texture_float */ \
\
    /* GL_ARB_texture_gather */ \
\
    /* GL_ARB_texture_mirror_clamp_to_edge */ \
\
    /* GL_ARB_texture_mirrored_repeat */ \
\
    /* GL_ARB_texture_multisample */ \
\
    /* GL_ARB_texture_non_power_of_two */ \
\
    /* GL_ARB_texture_query_levels */ \
\
    /* GL_ARB_texture_query_lod */ \
\
    /* GL_ARB_texture_rectangle */ \
\
    /* GL_ARB_texture_rg */ \
\
    /* GL_ARB_texture_rgb10_a2ui */ \
\
    /* GL_ARB_texture_stencil8 */ \
\
    /* GL_ARB_texture_storage */ \
\
    /* GL_ARB_texture_storage_multisample */ \
\
    /* GL_ARB_texture_swizzle */ \
\
    /* GL_ARB_texture_view */ \
\
    /* GL_ARB_timer_query */ \
\
    /* GL_ARB_transform_feedback2 */ \
\
    /* GL_ARB_transform_feedback3 */ \
\
    /* GL_ARB_transform_feedback_instanced */ \
\
    /* GL_ARB_transpose_matrix */ \
    FG_GL_FUNCTION( , void, LoadTransposeMatrixfARB, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, LoadTransposeMatrixdARB, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, MultTransposeMatrixfARB, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, MultTransposeMatrixdARB, ( const FgGLdouble * _1 ), ( _1 ) ) \
\
    /* GL_ARB_uniform_buffer_object */ \
\
    /* GL_ARB_vertex_array_bgra */ \
\
    /* GL_ARB_vertex_array_object */ \
\
    /* GL_ARB_vertex_attrib_64bit */ \
\
    /* GL_ARB_vertex_attrib_binding */ \
\
    /* GL_ARB_vertex_blend */ \
    FG_GL_FUNCTION( , void, WeightbvARB, ( FgGLint _1, const FgGLbyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, WeightsvARB, ( FgGLint _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, WeightivARB, ( FgGLint _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, WeightfvARB, ( FgGLint _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, WeightdvARB, ( FgGLint _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, WeightubvARB, ( FgGLint _1, const FgGLubyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, WeightusvARB, ( FgGLint _1, const FgGLushort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, WeightuivARB, ( FgGLint _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, WeightPointerARB, ( FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexBlendARB, ( FgGLint _1 ), ( _1 ) ) \
\
    /* GL_ARB_vertex_buffer_object */ \
    FG_GL_FUNCTION( , void, BindBufferARB, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DeleteBuffersARB, ( FgGLsizei _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GenBuffersARB, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsBufferARB, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, BufferDataARB, ( FgGLenum _1, FgGLsizeiptrARB _2, const FgGLvoid * _3, FgGLenum _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, BufferSubDataARB, ( FgGLenum _1, FgGLintptrARB _2, FgGLsizeiptrARB _3, const FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetBufferSubDataARB, ( FgGLenum _1, FgGLintptrARB _2, FgGLsizeiptrARB _3, FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( NULL, void *, MapBufferARB, ( FgGLenum _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, UnmapBufferARB, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GetBufferParameterivARB, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetBufferPointervARB, ( FgGLenum _1, FgGLenum _2, FgGLvoid ** _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_ARB_vertex_program */ \
    FG_GL_FUNCTION( , void, VertexAttrib1dARB, ( FgGLuint _1, FgGLdouble _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib1dvARB, ( FgGLuint _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib1fARB, ( FgGLuint _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib1fvARB, ( FgGLuint _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib1sARB, ( FgGLuint _1, FgGLshort _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib1svARB, ( FgGLuint _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib2dARB, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib2dvARB, ( FgGLuint _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib2fARB, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib2fvARB, ( FgGLuint _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib2sARB, ( FgGLuint _1, FgGLshort _2, FgGLshort _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib2svARB, ( FgGLuint _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib3dARB, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib3dvARB, ( FgGLuint _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib3fARB, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib3fvARB, ( FgGLuint _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib3sARB, ( FgGLuint _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib3svARB, ( FgGLuint _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4NbvARB, ( FgGLuint _1, const FgGLbyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4NivARB, ( FgGLuint _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4NsvARB, ( FgGLuint _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4NubARB, ( FgGLuint _1, FgGLubyte _2, FgGLubyte _3, FgGLubyte _4, FgGLubyte _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4NubvARB, ( FgGLuint _1, const FgGLubyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4NuivARB, ( FgGLuint _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4NusvARB, ( FgGLuint _1, const FgGLushort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4bvARB, ( FgGLuint _1, const FgGLbyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4dARB, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4dvARB, ( FgGLuint _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4fARB, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4fvARB, ( FgGLuint _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4ivARB, ( FgGLuint _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4sARB, ( FgGLuint _1, FgGLshort _2, FgGLshort _3, FgGLshort _4, FgGLshort _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4svARB, ( FgGLuint _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4ubvARB, ( FgGLuint _1, const FgGLubyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4uivARB, ( FgGLuint _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4usvARB, ( FgGLuint _1, const FgGLushort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribPointerARB, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLboolean _4, FgGLsizei _5, const FgGLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, EnableVertexAttribArrayARB, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, DisableVertexAttribArrayARB, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribdvARB, ( FgGLuint _1, FgGLenum _2, FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribfvARB, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribivARB, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribPointervARB, ( FgGLuint _1, FgGLenum _2, FgGLvoid ** _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_ARB_vertex_shader */ \
    FG_GL_FUNCTION( , void, BindAttribLocationARB, ( FgGLhandleARB _1, FgGLuint _2, const FgGLcharARB * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetActiveAttribARB, ( FgGLhandleARB _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLint * _5, FgGLenum * _6, FgGLcharARB * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetAttribLocationARB, ( FgGLhandleARB _1, const FgGLcharARB * _2 ), ( _1, _2 ) ) \
\
    /* GL_ARB_vertex_type_10f_11f_11f_rev */ \
\
    /* GL_ARB_vertex_type_2_10_10_10_rev */ \
\
    /* GL_ARB_viewport_array */ \
\
    /* GL_ARB_window_pos */ \
    FG_GL_FUNCTION( , void, WindowPos2dARB, ( FgGLdouble _1, FgGLdouble _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, WindowPos2dvARB, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos2fARB, ( FgGLfloat _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, WindowPos2fvARB, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos2iARB, ( FgGLint _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, WindowPos2ivARB, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos2sARB, ( FgGLshort _1, FgGLshort _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, WindowPos2svARB, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3dARB, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3dvARB, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3fARB, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3fvARB, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3iARB, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3ivARB, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3sARB, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3svARB, ( const FgGLshort * _1 ), ( _1 ) ) \
\
    /* GL_KHR_debug */ \
\
    /* GL_KHR_texture_compression_astc_ldr */ \
\
    /* GL_OES_byte_coordinates */ \
    FG_GL_FUNCTION( , void, MultiTexCoord1bOES, ( FgGLenum _1, FgGLbyte _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord1bvOES, ( FgGLenum _1, const FgGLbyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord2bOES, ( FgGLenum _1, FgGLbyte _2, FgGLbyte _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord2bvOES, ( FgGLenum _1, const FgGLbyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord3bOES, ( FgGLenum _1, FgGLbyte _2, FgGLbyte _3, FgGLbyte _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord3bvOES, ( FgGLenum _1, const FgGLbyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord4bOES, ( FgGLenum _1, FgGLbyte _2, FgGLbyte _3, FgGLbyte _4, FgGLbyte _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord4bvOES, ( FgGLenum _1, const FgGLbyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexCoord1bOES, ( FgGLbyte _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord1bvOES, ( const FgGLbyte * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2bOES, ( FgGLbyte _1, FgGLbyte _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2bvOES, ( const FgGLbyte * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord3bOES, ( FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexCoord3bvOES, ( const FgGLbyte * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord4bOES, ( FgGLbyte _1, FgGLbyte _2, FgGLbyte _3, FgGLbyte _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, TexCoord4bvOES, ( const FgGLbyte * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Vertex2bOES, ( FgGLbyte _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Vertex2bvOES, ( const FgGLbyte * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Vertex3bOES, ( FgGLbyte _1, FgGLbyte _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Vertex3bvOES, ( const FgGLbyte * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Vertex4bOES, ( FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Vertex4bvOES, ( const FgGLbyte * _1 ), ( _1 ) ) \
\
    /* GL_OES_compressed_paletted_texture */ \
\
    /* GL_OES_fixed_point */ \
    FG_GL_FUNCTION( , void, AlphaFuncxOES, ( FgGLenum _1, FgGLfixed _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, ClearColorxOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ClearDepthxOES, ( FgGLfixed _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ClipPlanexOES, ( FgGLenum _1, const FgGLfixed * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Color4xOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, DepthRangexOES, ( FgGLfixed _1, FgGLfixed _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, FogxOES, ( FgGLenum _1, FgGLfixed _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, FogxvOES, ( FgGLenum _1, const FgGLfixed * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, FrustumxOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4, FgGLfixed _5, FgGLfixed _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, GetClipPlanexOES, ( FgGLenum _1, FgGLfixed * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetFixedvOES, ( FgGLenum _1, FgGLfixed * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetTexEnvxvOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetTexParameterxvOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, LightModelxOES, ( FgGLenum _1, FgGLfixed _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, LightModelxvOES, ( FgGLenum _1, const FgGLfixed * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, LightxOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, LightxvOES, ( FgGLenum _1, FgGLenum _2, const FgGLfixed * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, LineWidthxOES, ( FgGLfixed _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, LoadMatrixxOES, ( const FgGLfixed * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, MaterialxOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MaterialxvOES, ( FgGLenum _1, FgGLenum _2, const FgGLfixed * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MultMatrixxOES, ( const FgGLfixed * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord4xOES, ( FgGLenum _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4, FgGLfixed _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, Normal3xOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, OrthoxOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4, FgGLfixed _5, FgGLfixed _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, PointParameterxvOES, ( FgGLenum _1, const FgGLfixed * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, PointSizexOES, ( FgGLfixed _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, PolygonOffsetxOES, ( FgGLfixed _1, FgGLfixed _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, RotatexOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, SampleCoverageOES, ( FgGLfixed _1, FgGLboolean _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, ScalexOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexEnvxOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexEnvxvOES, ( FgGLenum _1, FgGLenum _2, const FgGLfixed * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexParameterxOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexParameterxvOES, ( FgGLenum _1, FgGLenum _2, const FgGLfixed * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TranslatexOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, AccumxOES, ( FgGLenum _1, FgGLfixed _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, BitmapxOES, ( FgGLsizei _1, FgGLsizei _2, FgGLfixed _3, FgGLfixed _4, FgGLfixed _5, FgGLfixed _6, const FgGLubyte * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, BlendColorxOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ClearAccumxOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Color3xOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Color3xvOES, ( const FgGLfixed * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Color4xvOES, ( const FgGLfixed * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ConvolutionParameterxOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ConvolutionParameterxvOES, ( FgGLenum _1, FgGLenum _2, const FgGLfixed * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, EvalCoord1xOES, ( FgGLfixed _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, EvalCoord1xvOES, ( const FgGLfixed * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, EvalCoord2xOES, ( FgGLfixed _1, FgGLfixed _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, EvalCoord2xvOES, ( const FgGLfixed * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, FeedbackBufferxOES, ( FgGLsizei _1, FgGLenum _2, const FgGLfixed * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetConvolutionParameterxvOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetHistogramParameterxvOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetLightxOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetMapxvOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetMaterialxOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetPixelMapxv, ( FgGLenum _1, FgGLint _2, FgGLfixed * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetTexGenxvOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetTexLevelParameterxvOES, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLfixed * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, IndexxOES, ( FgGLfixed _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, IndexxvOES, ( const FgGLfixed * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, LoadTransposeMatrixxOES, ( const FgGLfixed * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Map1xOES, ( FgGLenum _1, FgGLfixed _2, FgGLfixed _3, FgGLint _4, FgGLint _5, FgGLfixed _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, Map2xOES, ( FgGLenum _1, FgGLfixed _2, FgGLfixed _3, FgGLint _4, FgGLint _5, FgGLfixed _6, FgGLfixed _7, FgGLint _8, FgGLint _9, FgGLfixed _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION( , void, MapGrid1xOES, ( FgGLint _1, FgGLfixed _2, FgGLfixed _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MapGrid2xOES, ( FgGLint _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4, FgGLfixed _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, MultTransposeMatrixxOES, ( const FgGLfixed * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord1xOES, ( FgGLenum _1, FgGLfixed _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord1xvOES, ( FgGLenum _1, const FgGLfixed * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord2xOES, ( FgGLenum _1, FgGLfixed _2, FgGLfixed _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord2xvOES, ( FgGLenum _1, const FgGLfixed * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord3xOES, ( FgGLenum _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord3xvOES, ( FgGLenum _1, const FgGLfixed * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord4xvOES, ( FgGLenum _1, const FgGLfixed * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Normal3xvOES, ( const FgGLfixed * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, PassThroughxOES, ( FgGLfixed _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, PixelMapx, ( FgGLenum _1, FgGLint _2, const FgGLfixed * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, PixelStorex, ( FgGLenum _1, FgGLfixed _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, PixelTransferxOES, ( FgGLenum _1, FgGLfixed _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, PixelZoomxOES, ( FgGLfixed _1, FgGLfixed _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, PrioritizeTexturesxOES, ( FgGLsizei _1, const FgGLuint * _2, const FgGLfixed * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, RasterPos2xOES, ( FgGLfixed _1, FgGLfixed _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, RasterPos2xvOES, ( const FgGLfixed * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, RasterPos3xOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, RasterPos3xvOES, ( const FgGLfixed * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, RasterPos4xOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, RasterPos4xvOES, ( const FgGLfixed * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, RectxOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, RectxvOES, ( const FgGLfixed * _1, const FgGLfixed * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexCoord1xOES, ( FgGLfixed _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord1xvOES, ( const FgGLfixed * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2xOES, ( FgGLfixed _1, FgGLfixed _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2xvOES, ( const FgGLfixed * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord3xOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexCoord3xvOES, ( const FgGLfixed * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord4xOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, TexCoord4xvOES, ( const FgGLfixed * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexGenxOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexGenxvOES, ( FgGLenum _1, FgGLenum _2, const FgGLfixed * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Vertex2xOES, ( FgGLfixed _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Vertex2xvOES, ( const FgGLfixed * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Vertex3xOES, ( FgGLfixed _1, FgGLfixed _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Vertex3xvOES, ( const FgGLfixed * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Vertex4xOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Vertex4xvOES, ( const FgGLfixed * _1 ), ( _1 ) ) \
\
    /* GL_OES_query_matrix */ \
    FG_GL_FUNCTION( 0, FgGLbitfield, QueryMatrixxOES, ( FgGLfixed * _1, FgGLint * _2 ), ( _1, _2 ) ) \
\
    /* GL_OES_read_format */ \
\
    /* GL_OES_single_precision */ \
    FG_GL_FUNCTION( , void, ClearDepthfOES, ( FgGLclampf _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ClipPlanefOES, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DepthRangefOES, ( FgGLclampf _1, FgGLclampf _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, FrustumfOES, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, GetClipPlanefOES, ( FgGLenum _1, FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, OrthofOES, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_3DFX_multisample */ \
\
    /* GL_3DFX_tbuffer */ \
    FG_GL_FUNCTION( , void, TbufferMask3DFX, ( FgGLuint _1 ), ( _1 ) ) \
\
    /* GL_3DFX_texture_compression_FXT1 */ \
\
    /* GL_AMD_blend_minmax_factor */ \
\
    /* GL_AMD_conservative_depth */ \
\
    /* GL_AMD_debug_output */ \
    FG_GL_FUNCTION( , void, DebugMessageEnableAMD, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, const FgGLuint * _4, FgGLboolean _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, DebugMessageInsertAMD, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, const FgGLchar * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, DebugMessageCallbackAMD, ( FgGLDebugProcAMD _1, void * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, GetDebugMessageLogAMD, ( FgGLuint _1, FgGLsizei _2, FgGLenum * _3, FgGLuint * _4, FgGLuint * _5, FgGLsizei * _6, FgGLchar * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
\
    /* GL_AMD_depth_clamp_separate */ \
\
    /* GL_AMD_draw_buffers_blend */ \
    FG_GL_FUNCTION( , void, BlendFuncIndexedAMD, ( FgGLuint _1, FgGLenum _2, FgGLenum _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, BlendFuncSeparateIndexedAMD, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLenum _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, BlendEquationIndexedAMD, ( FgGLuint _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, BlendEquationSeparateIndexedAMD, ( FgGLuint _1, FgGLenum _2, FgGLenum _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_AMD_interleaved_elements */ \
    FG_GL_FUNCTION( , void, VertexAttribParameteriAMD, ( FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_AMD_multi_draw_indirect */ \
    FG_GL_FUNCTION( , void, MultiDrawArraysIndirectAMD, ( FgGLenum _1, const FgGLvoid * _2, FgGLsizei _3, FgGLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiDrawElementsIndirectAMD, ( FgGLenum _1, FgGLenum _2, const FgGLvoid * _3, FgGLsizei _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_AMD_name_gen_delete */ \
    FG_GL_FUNCTION( , void, GenNamesAMD, ( FgGLenum _1, FgGLuint _2, FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, DeleteNamesAMD, ( FgGLenum _1, FgGLuint _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsNameAMD, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
\
    /* GL_AMD_performance_monitor */ \
    FG_GL_FUNCTION( , void, GetPerfMonitorGroupsAMD, ( FgGLint * _1, FgGLsizei _2, FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetPerfMonitorCountersAMD, ( FgGLuint _1, FgGLint * _2, FgGLint * _3, FgGLsizei _4, FgGLuint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetPerfMonitorGroupStringAMD, ( FgGLuint _1, FgGLsizei _2, FgGLsizei * _3, FgGLchar * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetPerfMonitorCounterStringAMD, ( FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLchar * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetPerfMonitorCounterInfoAMD, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GenPerfMonitorsAMD, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DeletePerfMonitorsAMD, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, SelectPerfMonitorCountersAMD, ( FgGLuint _1, FgGLboolean _2, FgGLuint _3, FgGLint _4, FgGLuint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, BeginPerfMonitorAMD, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, EndPerfMonitorAMD, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GetPerfMonitorCounterDataAMD, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLuint * _4, FgGLint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_AMD_pinned_memory */ \
\
    /* GL_AMD_query_buffer_object */ \
\
    /* GL_AMD_sample_positions */ \
    FG_GL_FUNCTION( , void, SetMultisamplefvAMD, ( FgGLenum _1, FgGLuint _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_AMD_seamless_cubemap_per_texture */ \
\
    /* GL_AMD_shader_atomic_counter_ops */ \
\
    /* GL_AMD_shader_stencil_export */ \
\
    /* GL_AMD_shader_trinary_minmax */ \
\
    /* GL_AMD_sparse_texture */ \
    FG_GL_FUNCTION( , void, TexStorageSparseAMD, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLbitfield _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, TextureStorageSparseAMD, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLbitfield _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
\
    /* GL_AMD_stencil_operation_extended */ \
    FG_GL_FUNCTION( , void, StencilOpValueAMD, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
\
    /* GL_AMD_texture_texture4 */ \
\
    /* GL_AMD_transform_feedback3_lines_triangles */ \
\
    /* GL_AMD_vertex_shader_layer */ \
\
    /* GL_AMD_vertex_shader_tessellator */ \
    FG_GL_FUNCTION( , void, TessellationFactorAMD, ( FgGLfloat _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TessellationModeAMD, ( FgGLenum _1 ), ( _1 ) ) \
\
    /* GL_AMD_vertex_shader_viewport_index */ \
\
    /* GL_APPLE_aux_depth_stencil */ \
\
    /* GL_APPLE_client_storage */ \
\
    /* GL_APPLE_element_array */ \
    FG_GL_FUNCTION( , void, ElementPointerAPPLE, ( FgGLenum _1, const FgGLvoid * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DrawElementArrayAPPLE, ( FgGLenum _1, FgGLint _2, FgGLsizei _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, DrawRangeElementArrayAPPLE, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLint _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, MultiDrawElementArrayAPPLE, ( FgGLenum _1, const FgGLint * _2, const FgGLsizei * _3, FgGLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiDrawRangeElementArrayAPPLE, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, const FgGLint * _4, const FgGLsizei * _5, FgGLsizei _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_APPLE_fence */ \
    FG_GL_FUNCTION( , void, GenFencesAPPLE, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DeleteFencesAPPLE, ( FgGLsizei _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, SetFenceAPPLE, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsFenceAPPLE, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, TestFenceAPPLE, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, FinishFenceAPPLE, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, TestObjectAPPLE, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, FinishObjectAPPLE, ( FgGLenum _1, FgGLint _2 ), ( _1, _2 ) ) \
\
    /* GL_APPLE_float_pixels */ \
\
    /* GL_APPLE_flush_buffer_range */ \
    FG_GL_FUNCTION( , void, BufferParameteriAPPLE, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, FlushMappedBufferRangeAPPLE, ( FgGLenum _1, FgGLintptr _2, FgGLsizeiptr _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_APPLE_object_purgeable */ \
    FG_GL_FUNCTION( 0, FgGLenum, ObjectPurgeableAPPLE, ( FgGLenum _1, FgGLuint _2, FgGLenum _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( 0, FgGLenum, ObjectUnpurgeableAPPLE, ( FgGLenum _1, FgGLuint _2, FgGLenum _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetObjectParameterivAPPLE, ( FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_APPLE_rgb_422 */ \
\
    /* GL_APPLE_row_bytes */ \
\
    /* GL_APPLE_specular_vector */ \
\
    /* GL_APPLE_texture_range */ \
    FG_GL_FUNCTION( , void, TextureRangeAPPLE, ( FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetTexParameterPointervAPPLE, ( FgGLenum _1, FgGLenum _2, FgGLvoid ** _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_APPLE_transform_hint */ \
\
    /* GL_APPLE_vertex_array_object */ \
    FG_GL_FUNCTION( , void, BindVertexArrayAPPLE, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, DeleteVertexArraysAPPLE, ( FgGLsizei _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GenVertexArraysAPPLE, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsVertexArrayAPPLE, ( FgGLuint _1 ), ( _1 ) ) \
\
    /* GL_APPLE_vertex_array_range */ \
    FG_GL_FUNCTION( , void, VertexArrayRangeAPPLE, ( FgGLsizei _1, FgGLvoid * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, FlushVertexArrayRangeAPPLE, ( FgGLsizei _1, FgGLvoid * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexArrayParameteriAPPLE, ( FgGLenum _1, FgGLint _2 ), ( _1, _2 ) ) \
\
    /* GL_APPLE_vertex_program_evaluators */ \
    FG_GL_FUNCTION( , void, EnableVertexAttribAPPLE, ( FgGLuint _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DisableVertexAttribAPPLE, ( FgGLuint _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsVertexAttribEnabledAPPLE, ( FgGLuint _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MapVertexAttrib1dAPPLE, ( FgGLuint _1, FgGLuint _2, FgGLdouble _3, FgGLdouble _4, FgGLint _5, FgGLint _6, const FgGLdouble * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, MapVertexAttrib1fAPPLE, ( FgGLuint _1, FgGLuint _2, FgGLfloat _3, FgGLfloat _4, FgGLint _5, FgGLint _6, const FgGLfloat * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, MapVertexAttrib2dAPPLE, ( FgGLuint _1, FgGLuint _2, FgGLdouble _3, FgGLdouble _4, FgGLint _5, FgGLint _6, FgGLdouble _7, FgGLdouble _8, FgGLint _9, FgGLint _10, const FgGLdouble * _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG_GL_FUNCTION( , void, MapVertexAttrib2fAPPLE, ( FgGLuint _1, FgGLuint _2, FgGLfloat _3, FgGLfloat _4, FgGLint _5, FgGLint _6, FgGLfloat _7, FgGLfloat _8, FgGLint _9, FgGLint _10, const FgGLfloat * _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
\
    /* GL_APPLE_ycbcr_422 */ \
\
    /* GL_ATI_draw_buffers */ \
    FG_GL_FUNCTION( , void, DrawBuffersATI, ( FgGLsizei _1, const FgGLenum * _2 ), ( _1, _2 ) ) \
\
    /* GL_ATI_element_array */ \
    FG_GL_FUNCTION( , void, ElementPointerATI, ( FgGLenum _1, const FgGLvoid * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DrawElementArrayATI, ( FgGLenum _1, FgGLsizei _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DrawRangeElementArrayATI, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_ATI_envmap_bumpmap */ \
    FG_GL_FUNCTION( , void, TexBumpParameterivATI, ( FgGLenum _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexBumpParameterfvATI, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetTexBumpParameterivATI, ( FgGLenum _1, FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetTexBumpParameterfvATI, ( FgGLenum _1, FgGLfloat * _2 ), ( _1, _2 ) ) \
\
    /* GL_ATI_fragment_shader */ \
    FG_GL_FUNCTION( 0, FgGLuint, GenFragmentShadersATI, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, BindFragmentShaderATI, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, DeleteFragmentShaderATI, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, BeginFragmentShaderATI, ( ), ( ) ) \
    FG_GL_FUNCTION( , void, EndFragmentShaderATI, ( ), ( ) ) \
    FG_GL_FUNCTION( , void, PassTexCoordATI, ( FgGLuint _1, FgGLuint _2, FgGLenum _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SampleMapATI, ( FgGLuint _1, FgGLuint _2, FgGLenum _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ColorFragmentOp1ATI, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6, FgGLuint _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, ColorFragmentOp2ATI, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6, FgGLuint _7, FgGLuint _8, FgGLuint _9, FgGLuint _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION( , void, ColorFragmentOp3ATI, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6, FgGLuint _7, FgGLuint _8, FgGLuint _9, FgGLuint _10, FgGLuint _11, FgGLuint _12, FgGLuint _13 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 ) ) \
    FG_GL_FUNCTION( , void, AlphaFragmentOp1ATI, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, AlphaFragmentOp2ATI, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6, FgGLuint _7, FgGLuint _8, FgGLuint _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION( , void, AlphaFragmentOp3ATI, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6, FgGLuint _7, FgGLuint _8, FgGLuint _9, FgGLuint _10, FgGLuint _11, FgGLuint _12 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FG_GL_FUNCTION( , void, SetFragmentShaderConstantATI, ( FgGLuint _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
\
    /* GL_ATI_map_object_buffer */ \
    FG_GL_FUNCTION( NULL, void *, MapObjectBufferATI, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, UnmapObjectBufferATI, ( FgGLuint _1 ), ( _1 ) ) \
\
    /* GL_ATI_meminfo */ \
\
    /* GL_ATI_pixel_format_float */ \
\
    /* GL_ATI_pn_triangles */ \
    FG_GL_FUNCTION( , void, PNTrianglesiATI, ( FgGLenum _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, PNTrianglesfATI, ( FgGLenum _1, FgGLfloat _2 ), ( _1, _2 ) ) \
\
    /* GL_ATI_separate_stencil */ \
    FG_GL_FUNCTION( , void, StencilOpSeparateATI, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, StencilFuncSeparateATI, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_ATI_text_fragment_shader */ \
\
    /* GL_ATI_texture_env_combine3 */ \
\
    /* GL_ATI_texture_float */ \
\
    /* GL_ATI_texture_mirror_once */ \
\
    /* GL_ATI_vertex_array_object */ \
    FG_GL_FUNCTION( 0, FgGLuint, NewObjectBufferATI, ( FgGLsizei _1, const FgGLvoid * _2, FgGLenum _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsObjectBufferATI, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, UpdateObjectBufferATI, ( FgGLuint _1, FgGLuint _2, FgGLsizei _3, const FgGLvoid * _4, FgGLenum _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetObjectBufferfvATI, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetObjectBufferivATI, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, FreeObjectBufferATI, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ArrayObjectATI, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLuint _5, FgGLuint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, GetArrayObjectfvATI, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetArrayObjectivATI, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VariantArrayObjectATI, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLuint _4, FgGLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetVariantArrayObjectfvATI, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVariantArrayObjectivATI, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_ATI_vertex_attrib_array_object */ \
    FG_GL_FUNCTION( , void, VertexAttribArrayObjectATI, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLboolean _4, FgGLsizei _5, FgGLuint _6, FgGLuint _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribArrayObjectfvATI, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribArrayObjectivATI, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_ATI_vertex_streams */ \
    FG_GL_FUNCTION( , void, VertexStream1sATI, ( FgGLenum _1, FgGLshort _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexStream1svATI, ( FgGLenum _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexStream1iATI, ( FgGLenum _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexStream1ivATI, ( FgGLenum _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexStream1fATI, ( FgGLenum _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexStream1fvATI, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexStream1dATI, ( FgGLenum _1, FgGLdouble _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexStream1dvATI, ( FgGLenum _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexStream2sATI, ( FgGLenum _1, FgGLshort _2, FgGLshort _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexStream2svATI, ( FgGLenum _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexStream2iATI, ( FgGLenum _1, FgGLint _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexStream2ivATI, ( FgGLenum _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexStream2fATI, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexStream2fvATI, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexStream2dATI, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexStream2dvATI, ( FgGLenum _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexStream3sATI, ( FgGLenum _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexStream3svATI, ( FgGLenum _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexStream3iATI, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexStream3ivATI, ( FgGLenum _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexStream3fATI, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexStream3fvATI, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexStream3dATI, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexStream3dvATI, ( FgGLenum _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexStream4sATI, ( FgGLenum _1, FgGLshort _2, FgGLshort _3, FgGLshort _4, FgGLshort _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexStream4svATI, ( FgGLenum _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexStream4iATI, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexStream4ivATI, ( FgGLenum _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexStream4fATI, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexStream4fvATI, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexStream4dATI, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexStream4dvATI, ( FgGLenum _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, NormalStream3bATI, ( FgGLenum _1, FgGLbyte _2, FgGLbyte _3, FgGLbyte _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, NormalStream3bvATI, ( FgGLenum _1, const FgGLbyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, NormalStream3sATI, ( FgGLenum _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, NormalStream3svATI, ( FgGLenum _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, NormalStream3iATI, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, NormalStream3ivATI, ( FgGLenum _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, NormalStream3fATI, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, NormalStream3fvATI, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, NormalStream3dATI, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, NormalStream3dvATI, ( FgGLenum _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, ClientActiveVertexStreamATI, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, VertexBlendEnviATI, ( FgGLenum _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexBlendEnvfATI, ( FgGLenum _1, FgGLfloat _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_422_pixels */ \
\
    /* GL_EXT_abgr */ \
\
    /* GL_EXT_bgra */ \
\
    /* GL_EXT_bindable_uniform */ \
    FG_GL_FUNCTION( , void, UniformBufferEXT, ( FgGLuint _1, FgGLint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetUniformBufferSizeEXT, ( FgGLuint _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLintptr, GetUniformOffsetEXT, ( FgGLuint _1, FgGLint _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_blend_color */ \
    FG_GL_FUNCTION( , void, BlendColorEXT, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_blend_equation_separate */ \
    FG_GL_FUNCTION( , void, BlendEquationSeparateEXT, ( FgGLenum _1, FgGLenum _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_blend_func_separate */ \
    FG_GL_FUNCTION( , void, BlendFuncSeparateEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_blend_logic_op */ \
\
    /* GL_EXT_blend_minmax */ \
    FG_GL_FUNCTION( , void, BlendEquationEXT, ( FgGLenum _1 ), ( _1 ) ) \
\
    /* GL_EXT_blend_subtract */ \
\
    /* GL_EXT_clip_volume_hint */ \
\
    /* GL_EXT_cmyka */ \
\
    /* GL_EXT_color_subtable */ \
    FG_GL_FUNCTION( , void, ColorSubTableEXT, ( FgGLenum _1, FgGLsizei _2, FgGLsizei _3, FgGLenum _4, FgGLenum _5, const FgGLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, CopyColorSubTableEXT, ( FgGLenum _1, FgGLsizei _2, FgGLint _3, FgGLint _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_compiled_vertex_array */ \
    FG_GL_FUNCTION( , void, LockArraysEXT, ( FgGLint _1, FgGLsizei _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, UnlockArraysEXT, ( ), ( ) ) \
\
    /* GL_EXT_convolution */ \
    FG_GL_FUNCTION( , void, ConvolutionFilter1DEXT, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLenum _5, const FgGLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ConvolutionFilter2DEXT, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, const FgGLvoid * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, ConvolutionParameterfEXT, ( FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ConvolutionParameterfvEXT, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ConvolutionParameteriEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ConvolutionParameterivEXT, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, CopyConvolutionFilter1DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, CopyConvolutionFilter2DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, GetConvolutionFilterEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetConvolutionParameterfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetConvolutionParameterivEXT, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetSeparableFilterEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4, FgGLvoid * _5, FgGLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, SeparableFilter2DEXT, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, const FgGLvoid * _7, const FgGLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
\
    /* GL_EXT_coordinate_frame */ \
    FG_GL_FUNCTION( , void, Tangent3bEXT, ( FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Tangent3bvEXT, ( const FgGLbyte * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Tangent3dEXT, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Tangent3dvEXT, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Tangent3fEXT, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Tangent3fvEXT, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Tangent3iEXT, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Tangent3ivEXT, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Tangent3sEXT, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Tangent3svEXT, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Binormal3bEXT, ( FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Binormal3bvEXT, ( const FgGLbyte * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Binormal3dEXT, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Binormal3dvEXT, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Binormal3fEXT, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Binormal3fvEXT, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Binormal3iEXT, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Binormal3ivEXT, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Binormal3sEXT, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Binormal3svEXT, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TangentPointerEXT, ( FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, BinormalPointerEXT, ( FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_copy_texture */ \
    FG_GL_FUNCTION( , void, CopyTexImage1DEXT, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLint _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, CopyTexImage2DEXT, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLint _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, CopyTexSubImage1DEXT, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, CopyTexSubImage2DEXT, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, CopyTexSubImage3DEXT, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLsizei _8, FgGLsizei _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
\
    /* GL_EXT_cull_vertex */ \
    FG_GL_FUNCTION( , void, CullParameterdvEXT, ( FgGLenum _1, FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, CullParameterfvEXT, ( FgGLenum _1, FgGLfloat * _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_depth_bounds_test */ \
    FG_GL_FUNCTION( , void, DepthBoundsEXT, ( FgGLclampd _1, FgGLclampd _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_direct_state_access */ \
    FG_GL_FUNCTION( , void, MatrixLoadfEXT, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MatrixLoaddEXT, ( FgGLenum _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MatrixMultfEXT, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MatrixMultdEXT, ( FgGLenum _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MatrixLoadIdentityEXT, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, MatrixRotatefEXT, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, MatrixRotatedEXT, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, MatrixScalefEXT, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MatrixScaledEXT, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MatrixTranslatefEXT, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MatrixTranslatedEXT, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MatrixFrustumEXT, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6, FgGLdouble _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, MatrixOrthoEXT, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6, FgGLdouble _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, MatrixPopEXT, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, MatrixPushEXT, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ClientAttribDefaultEXT, ( FgGLbitfield _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, PushClientAttribDefaultEXT, ( FgGLbitfield _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TextureParameterfEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, TextureParameterfvEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, TextureParameteriEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, TextureParameterivEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, const FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, TextureImage1DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLint _6, FgGLenum _7, FgGLenum _8, const FgGLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION( , void, TextureImage2DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLenum _8, FgGLenum _9, const FgGLvoid * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION( , void, TextureSubImage1DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLenum _6, FgGLenum _7, const FgGLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, TextureSubImage2DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLenum _8, FgGLenum _9, const FgGLvoid * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION( , void, CopyTextureImage1DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLint _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, CopyTextureImage2DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8, FgGLint _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION( , void, CopyTextureSubImage1DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, CopyTextureSubImage2DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLsizei _8, FgGLsizei _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION( , void, GetTextureImageEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLenum _5, FgGLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, GetTextureParameterfvEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetTextureParameterivEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetTextureLevelParameterfvEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetTextureLevelParameterivEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, TextureImage3DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLint _8, FgGLenum _9, FgGLenum _10, const FgGLvoid * _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG_GL_FUNCTION( , void, TextureSubImage3DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8, FgGLsizei _9, FgGLenum _10, FgGLenum _11, const FgGLvoid * _12 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FG_GL_FUNCTION( , void, CopyTextureSubImage3DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLint _8, FgGLsizei _9, FgGLsizei _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION( , void, BindMultiTextureEXT, ( FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoordPointerEXT, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, const FgGLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, MultiTexEnvfEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexEnvfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexEnviEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexEnvivEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexGendEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexGendvEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexGenfEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexGenfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexGeniEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexGenivEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetMultiTexEnvfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetMultiTexEnvivEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetMultiTexGendvEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetMultiTexGenfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetMultiTexGenivEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexParameteriEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexParameterivEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexParameterfEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexParameterfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexImage1DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLint _6, FgGLenum _7, FgGLenum _8, const FgGLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION( , void, MultiTexImage2DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLenum _8, FgGLenum _9, const FgGLvoid * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION( , void, MultiTexSubImage1DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLenum _6, FgGLenum _7, const FgGLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, MultiTexSubImage2DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLenum _8, FgGLenum _9, const FgGLvoid * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION( , void, CopyMultiTexImage1DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLint _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, CopyMultiTexImage2DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8, FgGLint _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION( , void, CopyMultiTexSubImage1DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, CopyMultiTexSubImage2DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLsizei _8, FgGLsizei _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION( , void, GetMultiTexImageEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLenum _5, FgGLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, GetMultiTexParameterfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetMultiTexParameterivEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetMultiTexLevelParameterfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetMultiTexLevelParameterivEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, MultiTexImage3DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLint _8, FgGLenum _9, FgGLenum _10, const FgGLvoid * _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG_GL_FUNCTION( , void, MultiTexSubImage3DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8, FgGLsizei _9, FgGLenum _10, FgGLenum _11, const FgGLvoid * _12 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FG_GL_FUNCTION( , void, CopyMultiTexSubImage3DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLint _8, FgGLsizei _9, FgGLsizei _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION( , void, EnableClientStateIndexedEXT, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DisableClientStateIndexedEXT, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetFloatIndexedvEXT, ( FgGLenum _1, FgGLuint _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetDoubleIndexedvEXT, ( FgGLenum _1, FgGLuint _2, FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetPointerIndexedvEXT, ( FgGLenum _1, FgGLuint _2, FgGLvoid ** _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, EnableIndexedEXT, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DisableIndexedEXT, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsEnabledIndexedEXT, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetIntegerIndexedvEXT, ( FgGLenum _1, FgGLuint _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetBooleanIndexedvEXT, ( FgGLenum _1, FgGLuint _2, FgGLboolean * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, CompressedTextureImage3DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLint _8, FgGLsizei _9, const FgGLvoid * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION( , void, CompressedTextureImage2DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLsizei _8, const FgGLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION( , void, CompressedTextureImage1DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLint _6, FgGLsizei _7, const FgGLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, CompressedTextureSubImage3DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8, FgGLsizei _9, FgGLenum _10, FgGLsizei _11, const FgGLvoid * _12 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FG_GL_FUNCTION( , void, CompressedTextureSubImage2DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLenum _8, FgGLsizei _9, const FgGLvoid * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION( , void, CompressedTextureSubImage1DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLenum _6, FgGLsizei _7, const FgGLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, GetCompressedTextureImageEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, CompressedMultiTexImage3DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLint _8, FgGLsizei _9, const FgGLvoid * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION( , void, CompressedMultiTexImage2DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLsizei _8, const FgGLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION( , void, CompressedMultiTexImage1DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLint _6, FgGLsizei _7, const FgGLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, CompressedMultiTexSubImage3DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8, FgGLsizei _9, FgGLenum _10, FgGLsizei _11, const FgGLvoid * _12 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FG_GL_FUNCTION( , void, CompressedMultiTexSubImage2DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLenum _8, FgGLsizei _9, const FgGLvoid * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION( , void, CompressedMultiTexSubImage1DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLenum _6, FgGLsizei _7, const FgGLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, GetCompressedMultiTexImageEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MatrixLoadTransposefEXT, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MatrixLoadTransposedEXT, ( FgGLenum _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MatrixMultTransposefEXT, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MatrixMultTransposedEXT, ( FgGLenum _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, NamedBufferDataEXT, ( FgGLuint _1, FgGLsizeiptr _2, const FgGLvoid * _3, FgGLenum _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, NamedBufferSubDataEXT, ( FgGLuint _1, FgGLintptr _2, FgGLsizeiptr _3, const FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( NULL, void *, MapNamedBufferEXT, ( FgGLuint _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, UnmapNamedBufferEXT, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GetNamedBufferParameterivEXT, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetNamedBufferPointervEXT, ( FgGLuint _1, FgGLenum _2, FgGLvoid ** _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetNamedBufferSubDataEXT, ( FgGLuint _1, FgGLintptr _2, FgGLsizeiptr _3, FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform1fEXT, ( FgGLuint _1, FgGLint _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform2fEXT, ( FgGLuint _1, FgGLint _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform3fEXT, ( FgGLuint _1, FgGLint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform4fEXT, ( FgGLuint _1, FgGLint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform1iEXT, ( FgGLuint _1, FgGLint _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform2iEXT, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform3iEXT, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform4iEXT, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform1fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform2fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform3fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform4fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform1ivEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform2ivEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform3ivEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform4ivEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix2fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix3fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix4fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix2x3fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix3x2fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix2x4fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix4x2fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix3x4fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix4x3fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, TextureBufferEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexBufferEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, TextureParameterIivEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, const FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, TextureParameterIuivEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, const FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetTextureParameterIivEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetTextureParameterIuivEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexParameterIivEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexParameterIuivEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetMultiTexParameterIivEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetMultiTexParameterIuivEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform1uiEXT, ( FgGLuint _1, FgGLint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform2uiEXT, ( FgGLuint _1, FgGLint _2, FgGLuint _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform3uiEXT, ( FgGLuint _1, FgGLint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform4uiEXT, ( FgGLuint _1, FgGLint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform1uivEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform2uivEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform3uivEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform4uivEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, NamedProgramLocalParameters4fvEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, const FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, NamedProgramLocalParameterI4iEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, NamedProgramLocalParameterI4ivEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, const FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, NamedProgramLocalParametersI4ivEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, const FgGLint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, NamedProgramLocalParameterI4uiEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6, FgGLuint _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, NamedProgramLocalParameterI4uivEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, const FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, NamedProgramLocalParametersI4uivEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, const FgGLuint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetNamedProgramLocalParameterIivEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetNamedProgramLocalParameterIuivEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, EnableClientStateiEXT, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DisableClientStateiEXT, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetFloati_vEXT, ( FgGLenum _1, FgGLuint _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetDoublei_vEXT, ( FgGLenum _1, FgGLuint _2, FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetPointeri_vEXT, ( FgGLenum _1, FgGLuint _2, FgGLvoid ** _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, NamedProgramStringEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, const FgGLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, NamedProgramLocalParameter4dEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6, FgGLdouble _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, NamedProgramLocalParameter4dvEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, const FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, NamedProgramLocalParameter4fEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, NamedProgramLocalParameter4fvEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetNamedProgramLocalParameterdvEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetNamedProgramLocalParameterfvEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetNamedProgramivEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetNamedProgramStringEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, NamedRenderbufferStorageEXT, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetNamedRenderbufferParameterivEXT, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, NamedRenderbufferStorageMultisampleEXT, ( FgGLuint _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, NamedRenderbufferStorageMultisampleCoverageEXT, ( FgGLuint _1, FgGLsizei _2, FgGLsizei _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( 0, FgGLenum, CheckNamedFramebufferStatusEXT, ( FgGLuint _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, NamedFramebufferTexture1DEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, NamedFramebufferTexture2DEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, NamedFramebufferTexture3DEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5, FgGLint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, NamedFramebufferRenderbufferEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetNamedFramebufferAttachmentParameterivEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GenerateTextureMipmapEXT, ( FgGLuint _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GenerateMultiTexMipmapEXT, ( FgGLenum _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, FramebufferDrawBufferEXT, ( FgGLuint _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, FramebufferDrawBuffersEXT, ( FgGLuint _1, FgGLsizei _2, const FgGLenum * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, FramebufferReadBufferEXT, ( FgGLuint _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetFramebufferParameterivEXT, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, NamedCopyBufferSubDataEXT, ( FgGLuint _1, FgGLuint _2, FgGLintptr _3, FgGLintptr _4, FgGLsizeiptr _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, NamedFramebufferTextureEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, NamedFramebufferTextureLayerEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, NamedFramebufferTextureFaceEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLenum _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, TextureRenderbufferEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MultiTexRenderbufferEXT, ( FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexArrayVertexOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLintptr _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, VertexArrayColorOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLintptr _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, VertexArrayEdgeFlagOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLintptr _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexArrayIndexOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLsizei _4, FgGLintptr _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexArrayNormalOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLsizei _4, FgGLintptr _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexArrayTexCoordOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLintptr _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, VertexArrayMultiTexCoordOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLint _4, FgGLenum _5, FgGLsizei _6, FgGLintptr _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, VertexArrayFogCoordOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLsizei _4, FgGLintptr _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexArraySecondaryColorOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLintptr _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, VertexArrayVertexAttribOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLint _4, FgGLenum _5, FgGLboolean _6, FgGLsizei _7, FgGLintptr _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, VertexArrayVertexAttribIOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLint _4, FgGLenum _5, FgGLsizei _6, FgGLintptr _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, EnableVertexArrayEXT, ( FgGLuint _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DisableVertexArrayEXT, ( FgGLuint _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, EnableVertexArrayAttribEXT, ( FgGLuint _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DisableVertexArrayAttribEXT, ( FgGLuint _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetVertexArrayIntegervEXT, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVertexArrayPointervEXT, ( FgGLuint _1, FgGLenum _2, FgGLvoid ** _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVertexArrayIntegeri_vEXT, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetVertexArrayPointeri_vEXT, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLvoid ** _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( NULL, void *, MapNamedBufferRangeEXT, ( FgGLuint _1, FgGLintptr _2, FgGLsizeiptr _3, FgGLbitfield _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, FlushMappedNamedBufferRangeEXT, ( FgGLuint _1, FgGLintptr _2, FgGLsizeiptr _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, NamedBufferStorageEXT, ( FgGLuint _1, FgGLsizeiptr _2, const void * _3, FgGLbitfield _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ClearNamedBufferDataEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, const void * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ClearNamedBufferSubDataEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLsizeiptr _5, FgGLsizeiptr _6, const void * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, NamedFramebufferParameteriEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetNamedFramebufferParameterivEXT, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform1dEXT, ( FgGLuint _1, FgGLint _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform2dEXT, ( FgGLuint _1, FgGLint _2, FgGLdouble _3, FgGLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform3dEXT, ( FgGLuint _1, FgGLint _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform4dEXT, ( FgGLuint _1, FgGLint _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform1dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform2dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform3dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform4dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix2dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix3dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix4dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix2x3dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix2x4dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix3x2dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix3x4dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix4x2dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformMatrix4x3dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, TextureBufferRangeEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLintptr _5, FgGLsizeiptr _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, TextureStorage1DEXT, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, TextureStorage2DEXT, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, TextureStorage3DEXT, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, TextureStorage2DMultisampleEXT, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6, FgGLboolean _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, TextureStorage3DMultisampleEXT, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLboolean _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, VertexArrayBindVertexBufferEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLintptr _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexArrayVertexAttribFormatEXT, ( FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLenum _4, FgGLboolean _5, FgGLuint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, VertexArrayVertexAttribIFormatEXT, ( FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLenum _4, FgGLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexArrayVertexAttribLFormatEXT, ( FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLenum _4, FgGLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexArrayVertexAttribBindingEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexArrayVertexBindingDivisorEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexArrayVertexAttribLOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLint _4, FgGLenum _5, FgGLsizei _6, FgGLintptr _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, TexturePageCommitmentEXT, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLboolean _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION( , void, VertexArrayVertexAttribDivisorEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_draw_buffers2 */ \
    FG_GL_FUNCTION( , void, ColorMaskIndexedEXT, ( FgGLuint _1, FgGLboolean _2, FgGLboolean _3, FgGLboolean _4, FgGLboolean _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_draw_instanced */ \
    FG_GL_FUNCTION( , void, DrawArraysInstancedEXT, ( FgGLenum _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, DrawElementsInstancedEXT, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_draw_range_elements */ \
    FG_GL_FUNCTION( , void, DrawRangeElementsEXT, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4, FgGLenum _5, const FgGLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_EXT_fog_coord */ \
    FG_GL_FUNCTION( , void, FogCoordfEXT, ( FgGLfloat _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, FogCoordfvEXT, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, FogCoorddEXT, ( FgGLdouble _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, FogCoorddvEXT, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, FogCoordPointerEXT, ( FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_framebuffer_blit */ \
    FG_GL_FUNCTION( , void, BlitFramebufferEXT, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLint _8, FgGLbitfield _9, FgGLenum _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
\
    /* GL_EXT_framebuffer_multisample */ \
    FG_GL_FUNCTION( , void, RenderbufferStorageMultisampleEXT, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_framebuffer_multisample_blit_scaled */ \
\
    /* GL_EXT_framebuffer_object */ \
    FG_GL_FUNCTION( 0, FgGLboolean, IsRenderbufferEXT, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, BindRenderbufferEXT, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DeleteRenderbuffersEXT, ( FgGLsizei _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GenRenderbuffersEXT, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, RenderbufferStorageEXT, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetRenderbufferParameterivEXT, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsFramebufferEXT, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, BindFramebufferEXT, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DeleteFramebuffersEXT, ( FgGLsizei _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GenFramebuffersEXT, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLenum, CheckFramebufferStatusEXT, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, FramebufferTexture1DEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, FramebufferTexture2DEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, FramebufferTexture3DEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5, FgGLint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, FramebufferRenderbufferEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetFramebufferAttachmentParameterivEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GenerateMipmapEXT, ( FgGLenum _1 ), ( _1 ) ) \
\
    /* GL_EXT_framebuffer_sRGB */ \
\
    /* GL_EXT_geometry_shader4 */ \
    FG_GL_FUNCTION( , void, ProgramParameteriEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_gpu_program_parameters */ \
    FG_GL_FUNCTION( , void, ProgramEnvParameters4fvEXT, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramLocalParameters4fvEXT, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_gpu_shader4 */ \
    FG_GL_FUNCTION( , void, GetUniformuivEXT, ( FgGLuint _1, FgGLint _2, FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, BindFragDataLocationEXT, ( FgGLuint _1, FgGLuint _2, const FgGLchar * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetFragDataLocationEXT, ( FgGLuint _1, const FgGLchar * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Uniform1uiEXT, ( FgGLint _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Uniform2uiEXT, ( FgGLint _1, FgGLuint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform3uiEXT, ( FgGLint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Uniform4uiEXT, ( FgGLint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, Uniform1uivEXT, ( FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform2uivEXT, ( FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform3uivEXT, ( FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform4uivEXT, ( FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_histogram */ \
    FG_GL_FUNCTION( , void, GetHistogramEXT, ( FgGLenum _1, FgGLboolean _2, FgGLenum _3, FgGLenum _4, FgGLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetHistogramParameterfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetHistogramParameterivEXT, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetMinmaxEXT, ( FgGLenum _1, FgGLboolean _2, FgGLenum _3, FgGLenum _4, FgGLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetMinmaxParameterfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetMinmaxParameterivEXT, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, HistogramEXT, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLboolean _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MinmaxEXT, ( FgGLenum _1, FgGLenum _2, FgGLboolean _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ResetHistogramEXT, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ResetMinmaxEXT, ( FgGLenum _1 ), ( _1 ) ) \
\
    /* GL_EXT_index_array_formats */ \
\
    /* GL_EXT_index_func */ \
    FG_GL_FUNCTION( , void, IndexFuncEXT, ( FgGLenum _1, FgGLclampf _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_index_material */ \
    FG_GL_FUNCTION( , void, IndexMaterialEXT, ( FgGLenum _1, FgGLenum _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_index_texture */ \
\
    /* GL_EXT_light_texture */ \
    FG_GL_FUNCTION( , void, ApplyTextureEXT, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TextureLightEXT, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TextureMaterialEXT, ( FgGLenum _1, FgGLenum _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_misc_attribute */ \
\
    /* GL_EXT_multi_draw_arrays */ \
    FG_GL_FUNCTION( , void, MultiDrawArraysEXT, ( FgGLenum _1, const FgGLint * _2, const FgGLsizei * _3, FgGLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiDrawElementsEXT, ( FgGLenum _1, const FgGLsizei * _2, FgGLenum _3, const FgGLvoid *const* _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_multisample */ \
    FG_GL_FUNCTION( , void, SampleMaskEXT, ( FgGLclampf _1, FgGLboolean _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, SamplePatternEXT, ( FgGLenum _1 ), ( _1 ) ) \
\
    /* GL_EXT_packed_depth_stencil */ \
\
    /* GL_EXT_packed_float */ \
\
    /* GL_EXT_packed_pixels */ \
\
    /* GL_EXT_paletted_texture */ \
    FG_GL_FUNCTION( , void, ColorTableEXT, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLenum _5, const FgGLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, GetColorTableEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetColorTableParameterivEXT, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetColorTableParameterfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_pixel_buffer_object */ \
\
    /* GL_EXT_pixel_transform */ \
    FG_GL_FUNCTION( , void, PixelTransformParameteriEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, PixelTransformParameterfEXT, ( FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, PixelTransformParameterivEXT, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, PixelTransformParameterfvEXT, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetPixelTransformParameterivEXT, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetPixelTransformParameterfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_pixel_transform_color_table */ \
\
    /* GL_EXT_point_parameters */ \
    FG_GL_FUNCTION( , void, PointParameterfEXT, ( FgGLenum _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, PointParameterfvEXT, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_polygon_offset */ \
    FG_GL_FUNCTION( , void, PolygonOffsetEXT, ( FgGLfloat _1, FgGLfloat _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_provoking_vertex */ \
    FG_GL_FUNCTION( , void, ProvokingVertexEXT, ( FgGLenum _1 ), ( _1 ) ) \
\
    /* GL_EXT_rescale_normal */ \
\
    /* GL_EXT_secondary_color */ \
    FG_GL_FUNCTION( , void, SecondaryColor3bEXT, ( FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3bvEXT, ( const FgGLbyte * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3dEXT, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3dvEXT, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3fEXT, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3fvEXT, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3iEXT, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3ivEXT, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3sEXT, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3svEXT, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3ubEXT, ( FgGLubyte _1, FgGLubyte _2, FgGLubyte _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3ubvEXT, ( const FgGLubyte * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3uiEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3uivEXT, ( const FgGLuint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3usEXT, ( FgGLushort _1, FgGLushort _2, FgGLushort _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3usvEXT, ( const FgGLushort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColorPointerEXT, ( FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_separate_shader_objects */ \
    FG_GL_FUNCTION( , void, UseShaderProgramEXT, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, ActiveProgramEXT, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, CreateShaderProgramEXT, ( FgGLenum _1, const FgGLchar * _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_separate_specular_color */ \
\
    /* GL_EXT_shader_image_load_store */ \
    FG_GL_FUNCTION( , void, BindImageTextureEXT, ( FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLboolean _4, FgGLint _5, FgGLenum _6, FgGLint _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, MemoryBarrierEXT, ( FgGLbitfield _1 ), ( _1 ) ) \
\
    /* GL_EXT_shadow_funcs */ \
\
    /* GL_EXT_shared_texture_palette */ \
\
    /* GL_EXT_stencil_clear_tag */ \
    FG_GL_FUNCTION( , void, StencilClearTagEXT, ( FgGLsizei _1, FgGLuint _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_stencil_two_side */ \
    FG_GL_FUNCTION( , void, ActiveStencilFaceEXT, ( FgGLenum _1 ), ( _1 ) ) \
\
    /* GL_EXT_stencil_wrap */ \
\
    /* GL_EXT_subtexture */ \
    FG_GL_FUNCTION( , void, TexSubImage1DEXT, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, const FgGLvoid * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, TexSubImage2DEXT, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLenum _7, FgGLenum _8, const FgGLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
\
    /* GL_EXT_texture */ \
\
    /* GL_EXT_texture3D */ \
    FG_GL_FUNCTION( , void, TexImage3DEXT, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLenum _8, FgGLenum _9, const FgGLvoid * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION( , void, TexSubImage3DEXT, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLenum _9, FgGLenum _10, const FgGLvoid * _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
\
    /* GL_EXT_texture_array */ \
\
    /* GL_EXT_texture_buffer_object */ \
    FG_GL_FUNCTION( , void, TexBufferEXT, ( FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_texture_compression_latc */ \
\
    /* GL_EXT_texture_compression_rgtc */ \
\
    /* GL_EXT_texture_compression_s3tc */ \
\
    /* GL_EXT_texture_cube_map */ \
\
    /* GL_EXT_texture_env_add */ \
\
    /* GL_EXT_texture_env_combine */ \
\
    /* GL_EXT_texture_env_dot3 */ \
\
    /* GL_EXT_texture_filter_anisotropic */ \
\
    /* GL_EXT_texture_integer */ \
    FG_GL_FUNCTION( , void, TexParameterIivEXT, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexParameterIuivEXT, ( FgGLenum _1, FgGLenum _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetTexParameterIivEXT, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetTexParameterIuivEXT, ( FgGLenum _1, FgGLenum _2, FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ClearColorIiEXT, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ClearColorIuiEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_texture_lod_bias */ \
\
    /* GL_EXT_texture_mirror_clamp */ \
\
    /* GL_EXT_texture_object */ \
    FG_GL_FUNCTION( 0, FgGLboolean, AreTexturesResidentEXT, ( FgGLsizei _1, const FgGLuint * _2, FgGLboolean * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, BindTextureEXT, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DeleteTexturesEXT, ( FgGLsizei _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GenTexturesEXT, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsTextureEXT, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, PrioritizeTexturesEXT, ( FgGLsizei _1, const FgGLuint * _2, const FgGLclampf * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_texture_perturb_normal */ \
    FG_GL_FUNCTION( , void, TextureNormalEXT, ( FgGLenum _1 ), ( _1 ) ) \
\
    /* GL_EXT_texture_sRGB */ \
\
    /* GL_EXT_texture_sRGB_decode */ \
\
    /* GL_EXT_texture_shared_exponent */ \
\
    /* GL_EXT_texture_snorm */ \
\
    /* GL_EXT_texture_swizzle */ \
\
    /* GL_EXT_timer_query */ \
    FG_GL_FUNCTION( , void, GetQueryObjecti64vEXT, ( FgGLuint _1, FgGLenum _2, FgGLint64 * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetQueryObjectui64vEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint64 * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_transform_feedback */ \
    FG_GL_FUNCTION( , void, BeginTransformFeedbackEXT, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, EndTransformFeedbackEXT, ( ), ( ) ) \
    FG_GL_FUNCTION( , void, BindBufferRangeEXT, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLintptr _4, FgGLsizeiptr _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, BindBufferOffsetEXT, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLintptr _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, BindBufferBaseEXT, ( FgGLenum _1, FgGLuint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TransformFeedbackVaryingsEXT, ( FgGLuint _1, FgGLsizei _2, const FgGLchar *const* _3, FgGLenum _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetTransformFeedbackVaryingEXT, ( FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLsizei * _5, FgGLenum * _6, FgGLchar * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
\
    /* GL_EXT_vertex_array */ \
    FG_GL_FUNCTION( , void, ArrayElementEXT, ( FgGLint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ColorPointerEXT, ( FgGLint _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, const FgGLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, DrawArraysEXT, ( FgGLenum _1, FgGLint _2, FgGLsizei _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, EdgeFlagPointerEXT, ( FgGLsizei _1, FgGLsizei _2, const FgGLboolean * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetPointervEXT, ( FgGLenum _1, FgGLvoid ** _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, IndexPointerEXT, ( FgGLenum _1, FgGLsizei _2, FgGLsizei _3, const FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, NormalPointerEXT, ( FgGLenum _1, FgGLsizei _2, FgGLsizei _3, const FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, TexCoordPointerEXT, ( FgGLint _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, const FgGLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexPointerEXT, ( FgGLint _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, const FgGLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_vertex_array_bgra */ \
\
    /* GL_EXT_vertex_attrib_64bit */ \
    FG_GL_FUNCTION( , void, VertexAttribL1dEXT, ( FgGLuint _1, FgGLdouble _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL2dEXT, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL3dEXT, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL4dEXT, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL1dvEXT, ( FgGLuint _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL2dvEXT, ( FgGLuint _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL3dvEXT, ( FgGLuint _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL4dvEXT, ( FgGLuint _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribLPointerEXT, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, const FgGLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribLdvEXT, ( FgGLuint _1, FgGLenum _2, FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_vertex_shader */ \
    FG_GL_FUNCTION( , void, BeginVertexShaderEXT, ( ), ( ) ) \
    FG_GL_FUNCTION( , void, EndVertexShaderEXT, ( ), ( ) ) \
    FG_GL_FUNCTION( , void, BindVertexShaderEXT, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, GenVertexShadersEXT, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, DeleteVertexShaderEXT, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ShaderOp1EXT, ( FgGLenum _1, FgGLuint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ShaderOp2EXT, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ShaderOp3EXT, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, SwizzleEXT, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLenum _4, FgGLenum _5, FgGLenum _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, WriteMaskEXT, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLenum _4, FgGLenum _5, FgGLenum _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, InsertComponentEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ExtractComponentEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, GenSymbolsEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, SetInvariantEXT, ( FgGLuint _1, FgGLenum _2, const FgGLvoid * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SetLocalConstantEXT, ( FgGLuint _1, FgGLenum _2, const FgGLvoid * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VariantbvEXT, ( FgGLuint _1, const FgGLbyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VariantsvEXT, ( FgGLuint _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VariantivEXT, ( FgGLuint _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VariantfvEXT, ( FgGLuint _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VariantdvEXT, ( FgGLuint _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VariantubvEXT, ( FgGLuint _1, const FgGLubyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VariantusvEXT, ( FgGLuint _1, const FgGLushort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VariantuivEXT, ( FgGLuint _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VariantPointerEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, const FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, EnableVariantClientStateEXT, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, DisableVariantClientStateEXT, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, BindLightParameterEXT, ( FgGLenum _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, BindMaterialParameterEXT, ( FgGLenum _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, BindTexGenParameterEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, BindTextureUnitParameterEXT, ( FgGLenum _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, BindParameterEXT, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsVariantEnabledEXT, ( FgGLuint _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetVariantBooleanvEXT, ( FgGLuint _1, FgGLenum _2, FgGLboolean * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVariantIntegervEXT, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVariantFloatvEXT, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVariantPointervEXT, ( FgGLuint _1, FgGLenum _2, FgGLvoid ** _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetInvariantBooleanvEXT, ( FgGLuint _1, FgGLenum _2, FgGLboolean * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetInvariantIntegervEXT, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetInvariantFloatvEXT, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetLocalConstantBooleanvEXT, ( FgGLuint _1, FgGLenum _2, FgGLboolean * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetLocalConstantIntegervEXT, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetLocalConstantFloatvEXT, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_vertex_weighting */ \
    FG_GL_FUNCTION( , void, VertexWeightfEXT, ( FgGLfloat _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, VertexWeightfvEXT, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, VertexWeightPointerEXT, ( FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_x11_sync_object */ \
    FG_GL_FUNCTION( NULL, FgGLsync, ImportSyncEXT, ( FgGLenum _1, FgGLintptr _2, FgGLbitfield _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_GREMEDY_frame_terminator */ \
    FG_GL_FUNCTION( , void, FrameTerminatorGREMEDY, ( ), ( ) ) \
\
    /* GL_GREMEDY_string_marker */ \
    FG_GL_FUNCTION( , void, StringMarkerGREMEDY, ( FgGLsizei _1, const FgGLvoid * _2 ), ( _1, _2 ) ) \
\
    /* GL_HP_convolution_border_modes */ \
\
    /* GL_HP_image_transform */ \
    FG_GL_FUNCTION( , void, ImageTransformParameteriHP, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ImageTransformParameterfHP, ( FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ImageTransformParameterivHP, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ImageTransformParameterfvHP, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetImageTransformParameterivHP, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetImageTransformParameterfvHP, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_HP_occlusion_test */ \
\
    /* GL_HP_texture_lighting */ \
\
    /* GL_IBM_cull_vertex */ \
\
    /* GL_IBM_multimode_draw_arrays */ \
    FG_GL_FUNCTION( , void, MultiModeDrawArraysIBM, ( const FgGLenum * _1, const FgGLint * _2, const FgGLsizei * _3, FgGLsizei _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, MultiModeDrawElementsIBM, ( const FgGLenum * _1, const FgGLsizei * _2, FgGLenum _3, const FgGLvoid *const* _4, FgGLsizei _5, FgGLint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_IBM_rasterpos_clip */ \
\
    /* GL_IBM_static_data */ \
    FG_GL_FUNCTION( , void, FlushStaticDataIBM, ( FgGLenum _1 ), ( _1 ) ) \
\
    /* GL_IBM_texture_mirrored_repeat */ \
\
    /* GL_IBM_vertex_array_lists */ \
    FG_GL_FUNCTION( , void, ColorPointerListIBM, ( FgGLint _1, FgGLenum _2, FgGLint _3, const FgGLvoid ** _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColorPointerListIBM, ( FgGLint _1, FgGLenum _2, FgGLint _3, const FgGLvoid ** _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, EdgeFlagPointerListIBM, ( FgGLint _1, const FgGLboolean ** _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, FogCoordPointerListIBM, ( FgGLenum _1, FgGLint _2, const FgGLvoid ** _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, IndexPointerListIBM, ( FgGLenum _1, FgGLint _2, const FgGLvoid ** _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, NormalPointerListIBM, ( FgGLenum _1, FgGLint _2, const FgGLvoid ** _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, TexCoordPointerListIBM, ( FgGLint _1, FgGLenum _2, FgGLint _3, const FgGLvoid ** _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexPointerListIBM, ( FgGLint _1, FgGLenum _2, FgGLint _3, const FgGLvoid ** _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_INGR_blend_func_separate */ \
    FG_GL_FUNCTION( , void, BlendFuncSeparateINGR, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_INGR_color_clamp */ \
\
    /* GL_INGR_interlace_read */ \
\
    /* GL_INTEL_map_texture */ \
    FG_GL_FUNCTION( , void, SyncTextureINTEL, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, UnmapTexture2DINTEL, ( FgGLuint _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( NULL, void *, MapTexture2DINTEL, ( FgGLuint _1, FgGLint _2, FgGLbitfield _3, const FgGLint * _4, const FgGLenum * _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_INTEL_parallel_arrays */ \
    FG_GL_FUNCTION( , void, VertexPointervINTEL, ( FgGLint _1, FgGLenum _2, const FgGLvoid ** _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, NormalPointervINTEL, ( FgGLenum _1, const FgGLvoid ** _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, ColorPointervINTEL, ( FgGLint _1, FgGLenum _2, const FgGLvoid ** _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexCoordPointervINTEL, ( FgGLint _1, FgGLenum _2, const FgGLvoid ** _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_MESAX_texture_stack */ \
\
    /* GL_MESA_pack_invert */ \
\
    /* GL_MESA_resize_buffers */ \
    FG_GL_FUNCTION( , void, ResizeBuffersMESA, ( ), ( ) ) \
\
    /* GL_MESA_window_pos */ \
    FG_GL_FUNCTION( , void, WindowPos2dMESA, ( FgGLdouble _1, FgGLdouble _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, WindowPos2dvMESA, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos2fMESA, ( FgGLfloat _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, WindowPos2fvMESA, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos2iMESA, ( FgGLint _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, WindowPos2ivMESA, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos2sMESA, ( FgGLshort _1, FgGLshort _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, WindowPos2svMESA, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3dMESA, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3dvMESA, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3fMESA, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3fvMESA, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3iMESA, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3ivMESA, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3sMESA, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, WindowPos3svMESA, ( const FgGLshort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos4dMESA, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, WindowPos4dvMESA, ( const FgGLdouble * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos4fMESA, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, WindowPos4fvMESA, ( const FgGLfloat * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos4iMESA, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, WindowPos4ivMESA, ( const FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, WindowPos4sMESA, ( FgGLshort _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, WindowPos4svMESA, ( const FgGLshort * _1 ), ( _1 ) ) \
\
    /* GL_MESA_ycbcr_texture */ \
\
    /* GL_NVX_conditional_render */ \
    FG_GL_FUNCTION( , void, BeginConditionalRenderNVX, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, EndConditionalRenderNVX, ( ), ( ) ) \
\
    /* GL_NV_bindless_multi_draw_indirect */ \
    FG_GL_FUNCTION( , void, MultiDrawArraysIndirectBindlessNV, ( FgGLenum _1, const FgGLvoid * _2, FgGLsizei _3, FgGLsizei _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, MultiDrawElementsIndirectBindlessNV, ( FgGLenum _1, FgGLenum _2, const FgGLvoid * _3, FgGLsizei _4, FgGLsizei _5, FgGLint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_NV_bindless_texture */ \
    FG_GL_FUNCTION( 0, FgGLuint64, GetTextureHandleNV, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLuint64, GetTextureSamplerHandleNV, ( FgGLuint _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MakeTextureHandleResidentNV, ( FgGLuint64 _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, MakeTextureHandleNonResidentNV, ( FgGLuint64 _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLuint64, GetImageHandleNV, ( FgGLuint _1, FgGLint _2, FgGLboolean _3, FgGLint _4, FgGLenum _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, MakeImageHandleResidentNV, ( FgGLuint64 _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MakeImageHandleNonResidentNV, ( FgGLuint64 _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, UniformHandleui64NV, ( FgGLint _1, FgGLuint64 _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, UniformHandleui64vNV, ( FgGLint _1, FgGLsizei _2, const FgGLuint64 * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformHandleui64NV, ( FgGLuint _1, FgGLint _2, FgGLuint64 _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformHandleui64vNV, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint64 * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsTextureHandleResidentNV, ( FgGLuint64 _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsImageHandleResidentNV, ( FgGLuint64 _1 ), ( _1 ) ) \
\
    /* GL_NV_blend_equation_advanced */ \
    FG_GL_FUNCTION( , void, BlendParameteriNV, ( FgGLenum _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, BlendBarrierNV, ( ), ( ) ) \
\
    /* GL_NV_blend_equation_advanced_coherent */ \
\
    /* GL_NV_blend_square */ \
\
    /* GL_NV_compute_program5 */ \
\
    /* GL_NV_conditional_render */ \
    FG_GL_FUNCTION( , void, BeginConditionalRenderNV, ( FgGLuint _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, EndConditionalRenderNV, ( ), ( ) ) \
\
    /* GL_NV_copy_depth_to_color */ \
\
    /* GL_NV_copy_image */ \
    FG_GL_FUNCTION( , void, CopyImageSubDataNV, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLuint _7, FgGLenum _8, FgGLint _9, FgGLint _10, FgGLint _11, FgGLint _12, FgGLsizei _13, FgGLsizei _14, FgGLsizei _15 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15 ) ) \
\
    /* GL_NV_deep_texture3D */ \
\
    /* GL_NV_depth_buffer_float */ \
    FG_GL_FUNCTION( , void, DepthRangedNV, ( FgGLdouble _1, FgGLdouble _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, ClearDepthdNV, ( FgGLdouble _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, DepthBoundsdNV, ( FgGLdouble _1, FgGLdouble _2 ), ( _1, _2 ) ) \
\
    /* GL_NV_depth_clamp */ \
\
    /* GL_NV_draw_texture */ \
    FG_GL_FUNCTION( , void, DrawTextureNV, ( FgGLuint _1, FgGLuint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9, FgGLfloat _10, FgGLfloat _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
\
    /* GL_NV_evaluators */ \
    FG_GL_FUNCTION( , void, MapControlPointsNV, ( FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLint _6, FgGLint _7, FgGLboolean _8, const FgGLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION( , void, MapParameterivNV, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MapParameterfvNV, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetMapControlPointsNV, ( FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLboolean _6, FgGLvoid * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, GetMapParameterivNV, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetMapParameterfvNV, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetMapAttribParameterivNV, ( FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetMapAttribParameterfvNV, ( FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, EvalMapsNV, ( FgGLenum _1, FgGLenum _2 ), ( _1, _2 ) ) \
\
    /* GL_NV_explicit_multisample */ \
    FG_GL_FUNCTION( , void, GetMultisamplefvNV, ( FgGLenum _1, FgGLuint _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SampleMaskIndexedNV, ( FgGLuint _1, FgGLbitfield _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexRenderbufferNV, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
\
    /* GL_NV_fence */ \
    FG_GL_FUNCTION( , void, DeleteFencesNV, ( FgGLsizei _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GenFencesNV, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsFenceNV, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, TestFenceNV, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GetFenceivNV, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, FinishFenceNV, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, SetFenceNV, ( FgGLuint _1, FgGLenum _2 ), ( _1, _2 ) ) \
\
    /* GL_NV_float_buffer */ \
\
    /* GL_NV_fog_distance */ \
\
    /* GL_NV_fragment_program */ \
    FG_GL_FUNCTION( , void, ProgramNamedParameter4fNV, ( FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, ProgramNamedParameter4fvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramNamedParameter4dNV, ( FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6, FgGLdouble _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, ProgramNamedParameter4dvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3, const FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetProgramNamedParameterfvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3, FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetProgramNamedParameterdvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3, FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_NV_fragment_program2 */ \
\
    /* GL_NV_fragment_program4 */ \
\
    /* GL_NV_fragment_program_option */ \
\
    /* GL_NV_framebuffer_multisample_coverage */ \
    FG_GL_FUNCTION( , void, RenderbufferStorageMultisampleCoverageNV, ( FgGLenum _1, FgGLsizei _2, FgGLsizei _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_NV_geometry_program4 */ \
    FG_GL_FUNCTION( , void, ProgramVertexLimitNV, ( FgGLenum _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, FramebufferTextureEXT, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, FramebufferTextureLayerEXT, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, FramebufferTextureFaceEXT, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLenum _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_NV_geometry_shader4 */ \
\
    /* GL_NV_gpu_program4 */ \
    FG_GL_FUNCTION( , void, ProgramLocalParameterI4iNV, ( FgGLenum _1, FgGLuint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ProgramLocalParameterI4ivNV, ( FgGLenum _1, FgGLuint _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramLocalParametersI4ivNV, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramLocalParameterI4uiNV, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ProgramLocalParameterI4uivNV, ( FgGLenum _1, FgGLuint _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramLocalParametersI4uivNV, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramEnvParameterI4iNV, ( FgGLenum _1, FgGLuint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ProgramEnvParameterI4ivNV, ( FgGLenum _1, FgGLuint _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramEnvParametersI4ivNV, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramEnvParameterI4uiNV, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ProgramEnvParameterI4uivNV, ( FgGLenum _1, FgGLuint _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramEnvParametersI4uivNV, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetProgramLocalParameterIivNV, ( FgGLenum _1, FgGLuint _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetProgramLocalParameterIuivNV, ( FgGLenum _1, FgGLuint _2, FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetProgramEnvParameterIivNV, ( FgGLenum _1, FgGLuint _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetProgramEnvParameterIuivNV, ( FgGLenum _1, FgGLuint _2, FgGLuint * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_NV_gpu_program5 */ \
    FG_GL_FUNCTION( , void, ProgramSubroutineParametersuivNV, ( FgGLenum _1, FgGLsizei _2, const FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetProgramSubroutineParameteruivNV, ( FgGLenum _1, FgGLuint _2, FgGLuint * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_NV_gpu_program5_mem_extended */ \
\
    /* GL_NV_gpu_shader5 */ \
    FG_GL_FUNCTION( , void, Uniform1i64NV, ( FgGLint _1, FgGLint64EXT _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Uniform2i64NV, ( FgGLint _1, FgGLint64EXT _2, FgGLint64EXT _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform3i64NV, ( FgGLint _1, FgGLint64EXT _2, FgGLint64EXT _3, FgGLint64EXT _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Uniform4i64NV, ( FgGLint _1, FgGLint64EXT _2, FgGLint64EXT _3, FgGLint64EXT _4, FgGLint64EXT _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, Uniform1i64vNV, ( FgGLint _1, FgGLsizei _2, const FgGLint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform2i64vNV, ( FgGLint _1, FgGLsizei _2, const FgGLint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform3i64vNV, ( FgGLint _1, FgGLsizei _2, const FgGLint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform4i64vNV, ( FgGLint _1, FgGLsizei _2, const FgGLint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform1ui64NV, ( FgGLint _1, FgGLuint64EXT _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Uniform2ui64NV, ( FgGLint _1, FgGLuint64EXT _2, FgGLuint64EXT _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform3ui64NV, ( FgGLint _1, FgGLuint64EXT _2, FgGLuint64EXT _3, FgGLuint64EXT _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Uniform4ui64NV, ( FgGLint _1, FgGLuint64EXT _2, FgGLuint64EXT _3, FgGLuint64EXT _4, FgGLuint64EXT _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, Uniform1ui64vNV, ( FgGLint _1, FgGLsizei _2, const FgGLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform2ui64vNV, ( FgGLint _1, FgGLsizei _2, const FgGLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform3ui64vNV, ( FgGLint _1, FgGLsizei _2, const FgGLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Uniform4ui64vNV, ( FgGLint _1, FgGLsizei _2, const FgGLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetUniformi64vNV, ( FgGLuint _1, FgGLint _2, FgGLint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform1i64NV, ( FgGLuint _1, FgGLint _2, FgGLint64EXT _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform2i64NV, ( FgGLuint _1, FgGLint _2, FgGLint64EXT _3, FgGLint64EXT _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform3i64NV, ( FgGLuint _1, FgGLint _2, FgGLint64EXT _3, FgGLint64EXT _4, FgGLint64EXT _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform4i64NV, ( FgGLuint _1, FgGLint _2, FgGLint64EXT _3, FgGLint64EXT _4, FgGLint64EXT _5, FgGLint64EXT _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform1i64vNV, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint64EXT * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform2i64vNV, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint64EXT * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform3i64vNV, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint64EXT * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform4i64vNV, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint64EXT * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform1ui64NV, ( FgGLuint _1, FgGLint _2, FgGLuint64EXT _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform2ui64NV, ( FgGLuint _1, FgGLint _2, FgGLuint64EXT _3, FgGLuint64EXT _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform3ui64NV, ( FgGLuint _1, FgGLint _2, FgGLuint64EXT _3, FgGLuint64EXT _4, FgGLuint64EXT _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform4ui64NV, ( FgGLuint _1, FgGLint _2, FgGLuint64EXT _3, FgGLuint64EXT _4, FgGLuint64EXT _5, FgGLuint64EXT _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform1ui64vNV, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint64EXT * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform2ui64vNV, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint64EXT * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform3ui64vNV, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint64EXT * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniform4ui64vNV, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint64EXT * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_NV_half_float */ \
    FG_GL_FUNCTION( , void, Vertex2hNV, ( FgGLhalfNV _1, FgGLhalfNV _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Vertex2hvNV, ( const FgGLhalfNV * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Vertex3hNV, ( FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Vertex3hvNV, ( const FgGLhalfNV * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Vertex4hNV, ( FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3, FgGLhalfNV _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Vertex4hvNV, ( const FgGLhalfNV * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Normal3hNV, ( FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Normal3hvNV, ( const FgGLhalfNV * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Color3hNV, ( FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, Color3hvNV, ( const FgGLhalfNV * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, Color4hNV, ( FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3, FgGLhalfNV _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, Color4hvNV, ( const FgGLhalfNV * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord1hNV, ( FgGLhalfNV _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord1hvNV, ( const FgGLhalfNV * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2hNV, ( FgGLhalfNV _1, FgGLhalfNV _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2hvNV, ( const FgGLhalfNV * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord3hNV, ( FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexCoord3hvNV, ( const FgGLhalfNV * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, TexCoord4hNV, ( FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3, FgGLhalfNV _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, TexCoord4hvNV, ( const FgGLhalfNV * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord1hNV, ( FgGLenum _1, FgGLhalfNV _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord1hvNV, ( FgGLenum _1, const FgGLhalfNV * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord2hNV, ( FgGLenum _1, FgGLhalfNV _2, FgGLhalfNV _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord2hvNV, ( FgGLenum _1, const FgGLhalfNV * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord3hNV, ( FgGLenum _1, FgGLhalfNV _2, FgGLhalfNV _3, FgGLhalfNV _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord3hvNV, ( FgGLenum _1, const FgGLhalfNV * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord4hNV, ( FgGLenum _1, FgGLhalfNV _2, FgGLhalfNV _3, FgGLhalfNV _4, FgGLhalfNV _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, MultiTexCoord4hvNV, ( FgGLenum _1, const FgGLhalfNV * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, FogCoordhNV, ( FgGLhalfNV _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, FogCoordhvNV, ( const FgGLhalfNV * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3hNV, ( FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColor3hvNV, ( const FgGLhalfNV * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, VertexWeighthNV, ( FgGLhalfNV _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, VertexWeighthvNV, ( const FgGLhalfNV * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib1hNV, ( FgGLuint _1, FgGLhalfNV _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib1hvNV, ( FgGLuint _1, const FgGLhalfNV * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib2hNV, ( FgGLuint _1, FgGLhalfNV _2, FgGLhalfNV _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib2hvNV, ( FgGLuint _1, const FgGLhalfNV * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib3hNV, ( FgGLuint _1, FgGLhalfNV _2, FgGLhalfNV _3, FgGLhalfNV _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib3hvNV, ( FgGLuint _1, const FgGLhalfNV * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4hNV, ( FgGLuint _1, FgGLhalfNV _2, FgGLhalfNV _3, FgGLhalfNV _4, FgGLhalfNV _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4hvNV, ( FgGLuint _1, const FgGLhalfNV * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribs1hvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLhalfNV * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribs2hvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLhalfNV * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribs3hvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLhalfNV * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribs4hvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLhalfNV * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_NV_light_max_exponent */ \
\
    /* GL_NV_multisample_coverage */ \
\
    /* GL_NV_multisample_filter_hint */ \
\
    /* GL_NV_occlusion_query */ \
    FG_GL_FUNCTION( , void, GenOcclusionQueriesNV, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DeleteOcclusionQueriesNV, ( FgGLsizei _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsOcclusionQueryNV, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, BeginOcclusionQueryNV, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, EndOcclusionQueryNV, ( ), ( ) ) \
    FG_GL_FUNCTION( , void, GetOcclusionQueryivNV, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetOcclusionQueryuivNV, ( FgGLuint _1, FgGLenum _2, FgGLuint * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_NV_packed_depth_stencil */ \
\
    /* GL_NV_parameter_buffer_object */ \
    FG_GL_FUNCTION( , void, ProgramBufferParametersfvNV, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4, const FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramBufferParametersIivNV, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4, const FgGLint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, ProgramBufferParametersIuivNV, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4, const FgGLuint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_NV_parameter_buffer_object2 */ \
\
    /* GL_NV_path_rendering */ \
    FG_GL_FUNCTION( 0, FgGLuint, GenPathsNV, ( FgGLsizei _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, DeletePathsNV, ( FgGLuint _1, FgGLsizei _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsPathNV, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, PathCommandsNV, ( FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3, FgGLsizei _4, FgGLenum _5, const FgGLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, PathCoordsNV, ( FgGLuint _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, PathSubCommandsNV, ( FgGLuint _1, FgGLsizei _2, FgGLsizei _3, FgGLsizei _4, const FgGLubyte * _5, FgGLsizei _6, FgGLenum _7, const FgGLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, PathSubCoordsNV, ( FgGLuint _1, FgGLsizei _2, FgGLsizei _3, FgGLenum _4, const FgGLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, PathStringNV, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, PathGlyphsNV, ( FgGLuint _1, FgGLenum _2, const FgGLvoid * _3, FgGLbitfield _4, FgGLsizei _5, FgGLenum _6, const FgGLvoid * _7, FgGLenum _8, FgGLuint _9, FgGLfloat _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION( , void, PathGlyphRangeNV, ( FgGLuint _1, FgGLenum _2, const FgGLvoid * _3, FgGLbitfield _4, FgGLuint _5, FgGLsizei _6, FgGLenum _7, FgGLuint _8, FgGLfloat _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION( , void, WeightPathsNV, ( FgGLuint _1, FgGLsizei _2, const FgGLuint * _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, CopyPathNV, ( FgGLuint _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, InterpolatePathsNV, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, TransformPathNV, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, PathParameterivNV, ( FgGLuint _1, FgGLenum _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, PathParameteriNV, ( FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, PathParameterfvNV, ( FgGLuint _1, FgGLenum _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, PathParameterfNV, ( FgGLuint _1, FgGLenum _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, PathDashArrayNV, ( FgGLuint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, PathStencilFuncNV, ( FgGLenum _1, FgGLint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, PathStencilDepthOffsetNV, ( FgGLfloat _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, StencilFillPathNV, ( FgGLuint _1, FgGLenum _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, StencilStrokePathNV, ( FgGLuint _1, FgGLint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, StencilFillPathInstancedNV, ( FgGLsizei _1, FgGLenum _2, const FgGLvoid * _3, FgGLuint _4, FgGLenum _5, FgGLuint _6, FgGLenum _7, const FgGLfloat * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, StencilStrokePathInstancedNV, ( FgGLsizei _1, FgGLenum _2, const FgGLvoid * _3, FgGLuint _4, FgGLint _5, FgGLuint _6, FgGLenum _7, const FgGLfloat * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, PathCoverDepthFuncNV, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, PathColorGenNV, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, PathTexGenNV, ( FgGLenum _1, FgGLenum _2, FgGLint _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, PathFogGenNV, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, CoverFillPathNV, ( FgGLuint _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, CoverStrokePathNV, ( FgGLuint _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, CoverFillPathInstancedNV, ( FgGLsizei _1, FgGLenum _2, const FgGLvoid * _3, FgGLuint _4, FgGLenum _5, FgGLenum _6, const FgGLfloat * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, CoverStrokePathInstancedNV, ( FgGLsizei _1, FgGLenum _2, const FgGLvoid * _3, FgGLuint _4, FgGLenum _5, FgGLenum _6, const FgGLfloat * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, GetPathParameterivNV, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetPathParameterfvNV, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetPathCommandsNV, ( FgGLuint _1, FgGLubyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetPathCoordsNV, ( FgGLuint _1, FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetPathDashArrayNV, ( FgGLuint _1, FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetPathMetricsNV, ( FgGLbitfield _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4, FgGLuint _5, FgGLsizei _6, FgGLfloat * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, GetPathMetricRangeNV, ( FgGLbitfield _1, FgGLuint _2, FgGLsizei _3, FgGLsizei _4, FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetPathSpacingNV, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4, FgGLuint _5, FgGLfloat _6, FgGLfloat _7, FgGLenum _8, FgGLfloat * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION( , void, GetPathColorGenivNV, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetPathColorGenfvNV, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetPathTexGenivNV, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetPathTexGenfvNV, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsPointInFillPathNV, ( FgGLuint _1, FgGLuint _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsPointInStrokePathNV, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( 0, FgGLfloat, GetPathLengthNV, ( FgGLuint _1, FgGLsizei _2, FgGLsizei _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, PointAlongPathNV, ( FgGLuint _1, FgGLsizei _2, FgGLsizei _3, FgGLfloat _4, FgGLfloat * _5, FgGLfloat * _6, FgGLfloat * _7, FgGLfloat * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
\
    /* GL_NV_pixel_data_range */ \
    FG_GL_FUNCTION( , void, PixelDataRangeNV, ( FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, FlushPixelDataRangeNV, ( FgGLenum _1 ), ( _1 ) ) \
\
    /* GL_NV_point_sprite */ \
    FG_GL_FUNCTION( , void, PointParameteriNV, ( FgGLenum _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, PointParameterivNV, ( FgGLenum _1, const FgGLint * _2 ), ( _1, _2 ) ) \
\
    /* GL_NV_present_video */ \
    FG_GL_FUNCTION( , void, PresentFrameKeyedNV, ( FgGLuint _1, FgGLuint64EXT _2, FgGLuint _3, FgGLuint _4, FgGLenum _5, FgGLenum _6, FgGLuint _7, FgGLuint _8, FgGLenum _9, FgGLuint _10, FgGLuint _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG_GL_FUNCTION( , void, PresentFrameDualFillNV, ( FgGLuint _1, FgGLuint64EXT _2, FgGLuint _3, FgGLuint _4, FgGLenum _5, FgGLenum _6, FgGLuint _7, FgGLenum _8, FgGLuint _9, FgGLenum _10, FgGLuint _11, FgGLenum _12, FgGLuint _13 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 ) ) \
    FG_GL_FUNCTION( , void, GetVideoivNV, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVideouivNV, ( FgGLuint _1, FgGLenum _2, FgGLuint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVideoi64vNV, ( FgGLuint _1, FgGLenum _2, FgGLint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVideoui64vNV, ( FgGLuint _1, FgGLenum _2, FgGLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_NV_primitive_restart */ \
    FG_GL_FUNCTION( , void, PrimitiveRestartNV, ( ), ( ) ) \
    FG_GL_FUNCTION( , void, PrimitiveRestartIndexNV, ( FgGLuint _1 ), ( _1 ) ) \
\
    /* GL_NV_register_combiners */ \
    FG_GL_FUNCTION( , void, CombinerParameterfvNV, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, CombinerParameterfNV, ( FgGLenum _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, CombinerParameterivNV, ( FgGLenum _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, CombinerParameteriNV, ( FgGLenum _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, CombinerInputNV, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLenum _5, FgGLenum _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, CombinerOutputNV, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLenum _5, FgGLenum _6, FgGLenum _7, FgGLboolean _8, FgGLboolean _9, FgGLboolean _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION( , void, FinalCombinerInputNV, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetCombinerInputParameterfvNV, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetCombinerInputParameterivNV, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetCombinerOutputParameterfvNV, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetCombinerOutputParameterivNV, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetFinalCombinerInputParameterfvNV, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetFinalCombinerInputParameterivNV, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_NV_register_combiners2 */ \
    FG_GL_FUNCTION( , void, CombinerStageParameterfvNV, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetCombinerStageParameterfvNV, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_NV_shader_atomic_counters */ \
\
    /* GL_NV_shader_atomic_float */ \
\
    /* GL_NV_shader_buffer_load */ \
    FG_GL_FUNCTION( , void, MakeBufferResidentNV, ( FgGLenum _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MakeBufferNonResidentNV, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsBufferResidentNV, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, MakeNamedBufferResidentNV, ( FgGLuint _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, MakeNamedBufferNonResidentNV, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsNamedBufferResidentNV, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GetBufferParameterui64vNV, ( FgGLenum _1, FgGLenum _2, FgGLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetNamedBufferParameterui64vNV, ( FgGLuint _1, FgGLenum _2, FgGLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetIntegerui64vNV, ( FgGLenum _1, FgGLuint64EXT * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Uniformui64NV, ( FgGLint _1, FgGLuint64EXT _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Uniformui64vNV, ( FgGLint _1, FgGLsizei _2, const FgGLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetUniformui64vNV, ( FgGLuint _1, FgGLint _2, FgGLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformui64NV, ( FgGLuint _1, FgGLint _2, FgGLuint64EXT _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramUniformui64vNV, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint64EXT * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_NV_shader_buffer_store */ \
\
    /* GL_NV_shader_storage_buffer_object */ \
\
    /* GL_NV_tessellation_program5 */ \
\
    /* GL_NV_texgen_emboss */ \
\
    /* GL_NV_texgen_reflection */ \
\
    /* GL_NV_texture_barrier */ \
    FG_GL_FUNCTION( , void, TextureBarrierNV, ( ), ( ) ) \
\
    /* GL_NV_texture_compression_vtc */ \
\
    /* GL_NV_texture_env_combine4 */ \
\
    /* GL_NV_texture_expand_normal */ \
\
    /* GL_NV_texture_multisample */ \
    FG_GL_FUNCTION( , void, TexImage2DMultisampleCoverageNV, ( FgGLenum _1, FgGLsizei _2, FgGLsizei _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLboolean _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, TexImage3DMultisampleCoverageNV, ( FgGLenum _1, FgGLsizei _2, FgGLsizei _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLboolean _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, TextureImage2DMultisampleNV, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLboolean _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, TextureImage3DMultisampleNV, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLboolean _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, TextureImage2DMultisampleCoverageNV, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLboolean _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, TextureImage3DMultisampleCoverageNV, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLboolean _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
\
    /* GL_NV_texture_rectangle */ \
\
    /* GL_NV_texture_shader */ \
\
    /* GL_NV_texture_shader2 */ \
\
    /* GL_NV_texture_shader3 */ \
\
    /* GL_NV_transform_feedback */ \
    FG_GL_FUNCTION( , void, BeginTransformFeedbackNV, ( FgGLenum _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, EndTransformFeedbackNV, ( ), ( ) ) \
    FG_GL_FUNCTION( , void, TransformFeedbackAttribsNV, ( FgGLuint _1, const FgGLint * _2, FgGLenum _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, BindBufferRangeNV, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLintptr _4, FgGLsizeiptr _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, BindBufferOffsetNV, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLintptr _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, BindBufferBaseNV, ( FgGLenum _1, FgGLuint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TransformFeedbackVaryingsNV, ( FgGLuint _1, FgGLsizei _2, const FgGLint * _3, FgGLenum _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ActiveVaryingNV, ( FgGLuint _1, const FgGLchar * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetVaryingLocationNV, ( FgGLuint _1, const FgGLchar * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetActiveVaryingNV, ( FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLsizei * _5, FgGLenum * _6, FgGLchar * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, GetTransformFeedbackVaryingNV, ( FgGLuint _1, FgGLuint _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TransformFeedbackStreamAttribsNV, ( FgGLsizei _1, const FgGLint * _2, FgGLsizei _3, const FgGLint * _4, FgGLenum _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_NV_transform_feedback2 */ \
    FG_GL_FUNCTION( , void, BindTransformFeedbackNV, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DeleteTransformFeedbacksNV, ( FgGLsizei _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GenTransformFeedbacksNV, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsTransformFeedbackNV, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, PauseTransformFeedbackNV, ( ), ( ) ) \
    FG_GL_FUNCTION( , void, ResumeTransformFeedbackNV, ( ), ( ) ) \
    FG_GL_FUNCTION( , void, DrawTransformFeedbackNV, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
\
    /* GL_NV_vdpau_interop */ \
    FG_GL_FUNCTION( , void, VDPAUInitNV, ( const FgGLvoid * _1, const FgGLvoid * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VDPAUFiniNV, ( ), ( ) ) \
    FG_GL_FUNCTION( 0, FgGLvdpauSurfaceNV, VDPAURegisterVideoSurfaceNV, ( const FgGLvoid * _1, FgGLenum _2, FgGLsizei _3, const FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( 0, FgGLvdpauSurfaceNV, VDPAURegisterOutputSurfaceNV, ( const FgGLvoid * _1, FgGLenum _2, FgGLsizei _3, const FgGLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VDPAUIsSurfaceNV, ( FgGLvdpauSurfaceNV _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, VDPAUUnregisterSurfaceNV, ( FgGLvdpauSurfaceNV _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, VDPAUGetSurfaceivNV, ( FgGLvdpauSurfaceNV _1, FgGLenum _2, FgGLsizei _3, FgGLsizei * _4, FgGLint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VDPAUSurfaceAccessNV, ( FgGLvdpauSurfaceNV _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VDPAUMapSurfacesNV, ( FgGLsizei _1, const FgGLvdpauSurfaceNV * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VDPAUUnmapSurfacesNV, ( FgGLsizei _1, const FgGLvdpauSurfaceNV * _2 ), ( _1, _2 ) ) \
\
    /* GL_NV_vertex_array_range */ \
    FG_GL_FUNCTION( , void, FlushVertexArrayRangeNV, ( ), ( ) ) \
    FG_GL_FUNCTION( , void, VertexArrayRangeNV, ( FgGLsizei _1, const FgGLvoid * _2 ), ( _1, _2 ) ) \
\
    /* GL_NV_vertex_array_range2 */ \
\
    /* GL_NV_vertex_attrib_integer_64bit */ \
    FG_GL_FUNCTION( , void, VertexAttribL1i64NV, ( FgGLuint _1, FgGLint64EXT _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL2i64NV, ( FgGLuint _1, FgGLint64EXT _2, FgGLint64EXT _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL3i64NV, ( FgGLuint _1, FgGLint64EXT _2, FgGLint64EXT _3, FgGLint64EXT _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL4i64NV, ( FgGLuint _1, FgGLint64EXT _2, FgGLint64EXT _3, FgGLint64EXT _4, FgGLint64EXT _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL1i64vNV, ( FgGLuint _1, const FgGLint64EXT * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL2i64vNV, ( FgGLuint _1, const FgGLint64EXT * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL3i64vNV, ( FgGLuint _1, const FgGLint64EXT * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL4i64vNV, ( FgGLuint _1, const FgGLint64EXT * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL1ui64NV, ( FgGLuint _1, FgGLuint64EXT _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL2ui64NV, ( FgGLuint _1, FgGLuint64EXT _2, FgGLuint64EXT _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL3ui64NV, ( FgGLuint _1, FgGLuint64EXT _2, FgGLuint64EXT _3, FgGLuint64EXT _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL4ui64NV, ( FgGLuint _1, FgGLuint64EXT _2, FgGLuint64EXT _3, FgGLuint64EXT _4, FgGLuint64EXT _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL1ui64vNV, ( FgGLuint _1, const FgGLuint64EXT * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL2ui64vNV, ( FgGLuint _1, const FgGLuint64EXT * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL3ui64vNV, ( FgGLuint _1, const FgGLuint64EXT * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribL4ui64vNV, ( FgGLuint _1, const FgGLuint64EXT * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribLi64vNV, ( FgGLuint _1, FgGLenum _2, FgGLint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribLui64vNV, ( FgGLuint _1, FgGLenum _2, FgGLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribLFormatNV, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLsizei _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_NV_vertex_buffer_unified_memory */ \
    FG_GL_FUNCTION( , void, BufferAddressRangeNV, ( FgGLenum _1, FgGLuint _2, FgGLuint64EXT _3, FgGLsizeiptr _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexFormatNV, ( FgGLint _1, FgGLenum _2, FgGLsizei _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, NormalFormatNV, ( FgGLenum _1, FgGLsizei _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, ColorFormatNV, ( FgGLint _1, FgGLenum _2, FgGLsizei _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, IndexFormatNV, ( FgGLenum _1, FgGLsizei _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexCoordFormatNV, ( FgGLint _1, FgGLenum _2, FgGLsizei _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, EdgeFlagFormatNV, ( FgGLsizei _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, SecondaryColorFormatNV, ( FgGLint _1, FgGLenum _2, FgGLsizei _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, FogCoordFormatNV, ( FgGLenum _1, FgGLsizei _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribFormatNV, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLboolean _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribIFormatNV, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetIntegerui64i_vNV, ( FgGLenum _1, FgGLuint _2, FgGLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_NV_vertex_program */ \
    FG_GL_FUNCTION( 0, FgGLboolean, AreProgramsResidentNV, ( FgGLsizei _1, const FgGLuint * _2, FgGLboolean * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, BindProgramNV, ( FgGLenum _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, DeleteProgramsNV, ( FgGLsizei _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, ExecuteProgramNV, ( FgGLenum _1, FgGLuint _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GenProgramsNV, ( FgGLsizei _1, FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetProgramParameterdvNV, ( FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetProgramParameterfvNV, ( FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetProgramivNV, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetProgramStringNV, ( FgGLuint _1, FgGLenum _2, FgGLubyte * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetTrackMatrixivNV, ( FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribdvNV, ( FgGLuint _1, FgGLenum _2, FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribfvNV, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribivNV, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribPointervNV, ( FgGLuint _1, FgGLenum _2, FgGLvoid ** _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsProgramNV, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, LoadProgramNV, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLubyte * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramParameter4dNV, ( FgGLenum _1, FgGLuint _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ProgramParameter4dvNV, ( FgGLenum _1, FgGLuint _2, const FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramParameter4fNV, ( FgGLenum _1, FgGLuint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ProgramParameter4fvNV, ( FgGLenum _1, FgGLuint _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ProgramParameters4dvNV, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ProgramParameters4fvNV, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, RequestResidentProgramsNV, ( FgGLsizei _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TrackMatrixNV, ( FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLenum _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribPointerNV, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, const FgGLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib1dNV, ( FgGLuint _1, FgGLdouble _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib1dvNV, ( FgGLuint _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib1fNV, ( FgGLuint _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib1fvNV, ( FgGLuint _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib1sNV, ( FgGLuint _1, FgGLshort _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib1svNV, ( FgGLuint _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib2dNV, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib2dvNV, ( FgGLuint _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib2fNV, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib2fvNV, ( FgGLuint _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib2sNV, ( FgGLuint _1, FgGLshort _2, FgGLshort _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib2svNV, ( FgGLuint _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib3dNV, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib3dvNV, ( FgGLuint _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib3fNV, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib3fvNV, ( FgGLuint _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib3sNV, ( FgGLuint _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib3svNV, ( FgGLuint _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4dNV, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4dvNV, ( FgGLuint _1, const FgGLdouble * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4fNV, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4fvNV, ( FgGLuint _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4sNV, ( FgGLuint _1, FgGLshort _2, FgGLshort _3, FgGLshort _4, FgGLshort _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4svNV, ( FgGLuint _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4ubNV, ( FgGLuint _1, FgGLubyte _2, FgGLubyte _3, FgGLubyte _4, FgGLubyte _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttrib4ubvNV, ( FgGLuint _1, const FgGLubyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribs1dvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribs1fvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribs1svNV, ( FgGLuint _1, FgGLsizei _2, const FgGLshort * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribs2dvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribs2fvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribs2svNV, ( FgGLuint _1, FgGLsizei _2, const FgGLshort * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribs3dvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribs3fvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribs3svNV, ( FgGLuint _1, FgGLsizei _2, const FgGLshort * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribs4dvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribs4fvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribs4svNV, ( FgGLuint _1, FgGLsizei _2, const FgGLshort * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribs4ubvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_NV_vertex_program1_1 */ \
\
    /* GL_NV_vertex_program2 */ \
\
    /* GL_NV_vertex_program2_option */ \
\
    /* GL_NV_vertex_program3 */ \
\
    /* GL_NV_vertex_program4 */ \
    FG_GL_FUNCTION( , void, VertexAttribI1iEXT, ( FgGLuint _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI2iEXT, ( FgGLuint _1, FgGLint _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI3iEXT, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI4iEXT, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI1uiEXT, ( FgGLuint _1, FgGLuint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI2uiEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI3uiEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI4uiEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI1ivEXT, ( FgGLuint _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI2ivEXT, ( FgGLuint _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI3ivEXT, ( FgGLuint _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI4ivEXT, ( FgGLuint _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI1uivEXT, ( FgGLuint _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI2uivEXT, ( FgGLuint _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI3uivEXT, ( FgGLuint _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI4uivEXT, ( FgGLuint _1, const FgGLuint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI4bvEXT, ( FgGLuint _1, const FgGLbyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI4svEXT, ( FgGLuint _1, const FgGLshort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI4ubvEXT, ( FgGLuint _1, const FgGLubyte * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribI4usvEXT, ( FgGLuint _1, const FgGLushort * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, VertexAttribIPointerEXT, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, const FgGLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribIivEXT, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVertexAttribIuivEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_NV_video_capture */ \
    FG_GL_FUNCTION( , void, BeginVideoCaptureNV, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, BindVideoCaptureStreamBufferNV, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLintptrARB _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, BindVideoCaptureStreamTextureNV, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLenum _4, FgGLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, EndVideoCaptureNV, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GetVideoCaptureivNV, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetVideoCaptureStreamivNV, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetVideoCaptureStreamfvNV, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetVideoCaptureStreamdvNV, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( 0, FgGLenum, VideoCaptureNV, ( FgGLuint _1, FgGLuint * _2, FgGLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, VideoCaptureStreamParameterivNV, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, const FgGLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VideoCaptureStreamParameterfvNV, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, VideoCaptureStreamParameterdvNV, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, const FgGLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_OML_interlace */ \
\
    /* GL_OML_resample */ \
\
    /* GL_OML_subsample */ \
\
    /* GL_PGI_misc_hints */ \
    FG_GL_FUNCTION( , void, HintPGI, ( FgGLenum _1, FgGLint _2 ), ( _1, _2 ) ) \
\
    /* GL_PGI_vertex_hints */ \
\
    /* GL_REND_screen_coordinates */ \
\
    /* GL_S3_s3tc */ \
\
    /* GL_SGIS_detail_texture */ \
    FG_GL_FUNCTION( , void, DetailTexFuncSGIS, ( FgGLenum _1, FgGLsizei _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetDetailTexFuncSGIS, ( FgGLenum _1, FgGLfloat * _2 ), ( _1, _2 ) ) \
\
    /* GL_SGIS_fog_function */ \
    FG_GL_FUNCTION( , void, FogFuncSGIS, ( FgGLsizei _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetFogFuncSGIS, ( FgGLfloat * _1 ), ( _1 ) ) \
\
    /* GL_SGIS_generate_mipmap */ \
\
    /* GL_SGIS_multisample */ \
    FG_GL_FUNCTION( , void, SampleMaskSGIS, ( FgGLclampf _1, FgGLboolean _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, SamplePatternSGIS, ( FgGLenum _1 ), ( _1 ) ) \
\
    /* GL_SGIS_pixel_texture */ \
    FG_GL_FUNCTION( , void, PixelTexGenParameteriSGIS, ( FgGLenum _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, PixelTexGenParameterivSGIS, ( FgGLenum _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, PixelTexGenParameterfSGIS, ( FgGLenum _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, PixelTexGenParameterfvSGIS, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetPixelTexGenParameterivSGIS, ( FgGLenum _1, FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, GetPixelTexGenParameterfvSGIS, ( FgGLenum _1, FgGLfloat * _2 ), ( _1, _2 ) ) \
\
    /* GL_SGIS_point_line_texgen */ \
\
    /* GL_SGIS_point_parameters */ \
    FG_GL_FUNCTION( , void, PointParameterfSGIS, ( FgGLenum _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, PointParameterfvSGIS, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
\
    /* GL_SGIS_sharpen_texture */ \
    FG_GL_FUNCTION( , void, SharpenTexFuncSGIS, ( FgGLenum _1, FgGLsizei _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetSharpenTexFuncSGIS, ( FgGLenum _1, FgGLfloat * _2 ), ( _1, _2 ) ) \
\
    /* GL_SGIS_texture4D */ \
    FG_GL_FUNCTION( , void, TexImage4DSGIS, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLint _8, FgGLenum _9, FgGLenum _10, const FgGLvoid * _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG_GL_FUNCTION( , void, TexSubImage4DSGIS, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8, FgGLsizei _9, FgGLsizei _10, FgGLenum _11, FgGLenum _12, const FgGLvoid * _13 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 ) ) \
\
    /* GL_SGIS_texture_border_clamp */ \
\
    /* GL_SGIS_texture_color_mask */ \
    FG_GL_FUNCTION( , void, TextureColorMaskSGIS, ( FgGLboolean _1, FgGLboolean _2, FgGLboolean _3, FgGLboolean _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_SGIS_texture_edge_clamp */ \
\
    /* GL_SGIS_texture_filter4 */ \
    FG_GL_FUNCTION( , void, GetTexFilterFuncSGIS, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexFilterFuncSGIS, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_SGIS_texture_lod */ \
\
    /* GL_SGIS_texture_select */ \
\
    /* GL_SGIX_async */ \
    FG_GL_FUNCTION( , void, AsyncMarkerSGIX, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLint, FinishAsyncSGIX, ( FgGLuint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLint, PollAsyncSGIX, ( FgGLuint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, GenAsyncMarkersSGIX, ( FgGLsizei _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, DeleteAsyncMarkersSGIX, ( FgGLuint _1, FgGLsizei _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsAsyncMarkerSGIX, ( FgGLuint _1 ), ( _1 ) ) \
\
    /* GL_SGIX_async_histogram */ \
\
    /* GL_SGIX_async_pixel */ \
\
    /* GL_SGIX_blend_alpha_minmax */ \
\
    /* GL_SGIX_calligraphic_fragment */ \
\
    /* GL_SGIX_clipmap */ \
\
    /* GL_SGIX_convolution_accuracy */ \
\
    /* GL_SGIX_depth_pass_instrument */ \
\
    /* GL_SGIX_depth_texture */ \
\
    /* GL_SGIX_flush_raster */ \
    FG_GL_FUNCTION( , void, FlushRasterSGIX, ( ), ( ) ) \
\
    /* GL_SGIX_fog_offset */ \
\
    /* GL_SGIX_fragment_lighting */ \
    FG_GL_FUNCTION( , void, FragmentColorMaterialSGIX, ( FgGLenum _1, FgGLenum _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, FragmentLightfSGIX, ( FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, FragmentLightfvSGIX, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, FragmentLightiSGIX, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, FragmentLightivSGIX, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, FragmentLightModelfSGIX, ( FgGLenum _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, FragmentLightModelfvSGIX, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, FragmentLightModeliSGIX, ( FgGLenum _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, FragmentLightModelivSGIX, ( FgGLenum _1, const FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, FragmentMaterialfSGIX, ( FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, FragmentMaterialfvSGIX, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, FragmentMaterialiSGIX, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, FragmentMaterialivSGIX, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetFragmentLightfvSGIX, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetFragmentLightivSGIX, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetFragmentMaterialfvSGIX, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetFragmentMaterialivSGIX, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, LightEnviSGIX, ( FgGLenum _1, FgGLint _2 ), ( _1, _2 ) ) \
\
    /* GL_SGIX_framezoom */ \
    FG_GL_FUNCTION( , void, FrameZoomSGIX, ( FgGLint _1 ), ( _1 ) ) \
\
    /* GL_SGIX_igloo_interface */ \
    FG_GL_FUNCTION( , void, IglooInterfaceSGIX, ( FgGLenum _1, const FgGLvoid * _2 ), ( _1, _2 ) ) \
\
    /* GL_SGIX_instruments */ \
    FG_GL_FUNCTION( 0, FgGLint, GetInstrumentsSGIX, ( ), ( ) ) \
    FG_GL_FUNCTION( , void, InstrumentsBufferSGIX, ( FgGLsizei _1, FgGLint * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( 0, FgGLint, PollInstrumentsSGIX, ( FgGLint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ReadInstrumentsSGIX, ( FgGLint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, StartInstrumentsSGIX, ( ), ( ) ) \
    FG_GL_FUNCTION( , void, StopInstrumentsSGIX, ( FgGLint _1 ), ( _1 ) ) \
\
    /* GL_SGIX_interlace */ \
\
    /* GL_SGIX_ir_instrument1 */ \
\
    /* GL_SGIX_list_priority */ \
    FG_GL_FUNCTION( , void, GetListParameterfvSGIX, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetListParameterivSGIX, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ListParameterfSGIX, ( FgGLuint _1, FgGLenum _2, FgGLfloat _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ListParameterfvSGIX, ( FgGLuint _1, FgGLenum _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ListParameteriSGIX, ( FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ListParameterivSGIX, ( FgGLuint _1, FgGLenum _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_SGIX_pixel_texture */ \
    FG_GL_FUNCTION( , void, PixelTexGenSGIX, ( FgGLenum _1 ), ( _1 ) ) \
\
    /* GL_SGIX_pixel_tiles */ \
\
    /* GL_SGIX_polynomial_ffd */ \
    FG_GL_FUNCTION( , void, DeformationMap3dSGIX, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLint _4, FgGLint _5, FgGLdouble _6, FgGLdouble _7, FgGLint _8, FgGLint _9, FgGLdouble _10, FgGLdouble _11, FgGLint _12, FgGLint _13, const FgGLdouble * _14 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14 ) ) \
    FG_GL_FUNCTION( , void, DeformationMap3fSGIX, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLint _4, FgGLint _5, FgGLfloat _6, FgGLfloat _7, FgGLint _8, FgGLint _9, FgGLfloat _10, FgGLfloat _11, FgGLint _12, FgGLint _13, const FgGLfloat * _14 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14 ) ) \
    FG_GL_FUNCTION( , void, DeformSGIX, ( FgGLbitfield _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, LoadIdentityDeformationMapSGIX, ( FgGLbitfield _1 ), ( _1 ) ) \
\
    /* GL_SGIX_reference_plane */ \
    FG_GL_FUNCTION( , void, ReferencePlaneSGIX, ( const FgGLdouble * _1 ), ( _1 ) ) \
\
    /* GL_SGIX_resample */ \
\
    /* GL_SGIX_scalebias_hint */ \
\
    /* GL_SGIX_shadow */ \
\
    /* GL_SGIX_shadow_ambient */ \
\
    /* GL_SGIX_sprite */ \
    FG_GL_FUNCTION( , void, SpriteParameterfSGIX, ( FgGLenum _1, FgGLfloat _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, SpriteParameterfvSGIX, ( FgGLenum _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, SpriteParameteriSGIX, ( FgGLenum _1, FgGLint _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, SpriteParameterivSGIX, ( FgGLenum _1, const FgGLint * _2 ), ( _1, _2 ) ) \
\
    /* GL_SGIX_subsample */ \
\
    /* GL_SGIX_tag_sample_buffer */ \
    FG_GL_FUNCTION( , void, TagSampleBufferSGIX, ( ), ( ) ) \
\
    /* GL_SGIX_texture_add_env */ \
\
    /* GL_SGIX_texture_coordinate_clamp */ \
\
    /* GL_SGIX_texture_lod_bias */ \
\
    /* GL_SGIX_texture_multi_buffer */ \
\
    /* GL_SGIX_texture_scale_bias */ \
\
    /* GL_SGIX_vertex_preclip */ \
\
    /* GL_SGIX_ycrcb */ \
\
    /* GL_SGIX_ycrcb_subsample */ \
\
    /* GL_SGIX_ycrcba */ \
\
    /* GL_SGI_color_matrix */ \
\
    /* GL_SGI_color_table */ \
    FG_GL_FUNCTION( , void, ColorTableSGI, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLenum _5, const FgGLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ColorTableParameterfvSGI, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ColorTableParameterivSGI, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, CopyColorTableSGI, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, GetColorTableSGI, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, GetColorTableParameterfvSGI, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, GetColorTableParameterivSGI, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_SGI_texture_color_table */ \
\
    /* GL_SUNX_constant_data */ \
    FG_GL_FUNCTION( , void, FinishTextureSUNX, ( ), ( ) ) \
\
    /* GL_SUN_convolution_border_modes */ \
\
    /* GL_SUN_global_alpha */ \
    FG_GL_FUNCTION( , void, GlobalAlphaFactorbSUN, ( FgGLbyte _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GlobalAlphaFactorsSUN, ( FgGLshort _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GlobalAlphaFactoriSUN, ( FgGLint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GlobalAlphaFactorfSUN, ( FgGLfloat _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GlobalAlphaFactordSUN, ( FgGLdouble _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GlobalAlphaFactorubSUN, ( FgGLubyte _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GlobalAlphaFactorusSUN, ( FgGLushort _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, GlobalAlphaFactoruiSUN, ( FgGLuint _1 ), ( _1 ) ) \
\
    /* GL_SUN_mesh_array */ \
    FG_GL_FUNCTION( , void, DrawMeshArraysSUN, ( FgGLenum _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_SUN_slice_accum */ \
\
    /* GL_SUN_triangle_list */ \
    FG_GL_FUNCTION( , void, ReplacementCodeuiSUN, ( FgGLuint _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ReplacementCodeusSUN, ( FgGLushort _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ReplacementCodeubSUN, ( FgGLubyte _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ReplacementCodeuivSUN, ( const FgGLuint * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ReplacementCodeusvSUN, ( const FgGLushort * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ReplacementCodeubvSUN, ( const FgGLubyte * _1 ), ( _1 ) ) \
    FG_GL_FUNCTION( , void, ReplacementCodePointerSUN, ( FgGLenum _1, FgGLsizei _2, const FgGLvoid ** _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_SUN_vertex */ \
    FG_GL_FUNCTION( , void, Color4ubVertex2fSUN, ( FgGLubyte _1, FgGLubyte _2, FgGLubyte _3, FgGLubyte _4, FgGLfloat _5, FgGLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, Color4ubVertex2fvSUN, ( const FgGLubyte * _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Color4ubVertex3fSUN, ( FgGLubyte _1, FgGLubyte _2, FgGLubyte _3, FgGLubyte _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, Color4ubVertex3fvSUN, ( const FgGLubyte * _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Color3fVertex3fSUN, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, Color3fVertex3fvSUN, ( const FgGLfloat * _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Normal3fVertex3fSUN, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, Normal3fVertex3fvSUN, ( const FgGLfloat * _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, Color4fNormal3fVertex3fSUN, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9, FgGLfloat _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION( , void, Color4fNormal3fVertex3fvSUN, ( const FgGLfloat * _1, const FgGLfloat * _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2fVertex3fSUN, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2fVertex3fvSUN, ( const FgGLfloat * _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexCoord4fVertex4fSUN, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, TexCoord4fVertex4fvSUN, ( const FgGLfloat * _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2fColor4ubVertex3fSUN, ( FgGLfloat _1, FgGLfloat _2, FgGLubyte _3, FgGLubyte _4, FgGLubyte _5, FgGLubyte _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2fColor4ubVertex3fvSUN, ( const FgGLfloat * _1, const FgGLubyte * _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2fColor3fVertex3fSUN, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2fColor3fVertex3fvSUN, ( const FgGLfloat * _1, const FgGLfloat * _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2fNormal3fVertex3fSUN, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2fNormal3fVertex3fvSUN, ( const FgGLfloat * _1, const FgGLfloat * _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2fColor4fNormal3fVertex3fSUN, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9, FgGLfloat _10, FgGLfloat _11, FgGLfloat _12 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FG_GL_FUNCTION( , void, TexCoord2fColor4fNormal3fVertex3fvSUN, ( const FgGLfloat * _1, const FgGLfloat * _2, const FgGLfloat * _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, TexCoord4fColor4fNormal3fVertex4fSUN, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9, FgGLfloat _10, FgGLfloat _11, FgGLfloat _12, FgGLfloat _13, FgGLfloat _14, FgGLfloat _15 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15 ) ) \
    FG_GL_FUNCTION( , void, TexCoord4fColor4fNormal3fVertex4fvSUN, ( const FgGLfloat * _1, const FgGLfloat * _2, const FgGLfloat * _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ReplacementCodeuiVertex3fSUN, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ReplacementCodeuiVertex3fvSUN, ( const FgGLuint * _1, const FgGLfloat * _2 ), ( _1, _2 ) ) \
    FG_GL_FUNCTION( , void, ReplacementCodeuiColor4ubVertex3fSUN, ( FgGLuint _1, FgGLubyte _2, FgGLubyte _3, FgGLubyte _4, FgGLubyte _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION( , void, ReplacementCodeuiColor4ubVertex3fvSUN, ( const FgGLuint * _1, const FgGLubyte * _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ReplacementCodeuiColor3fVertex3fSUN, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, ReplacementCodeuiColor3fVertex3fvSUN, ( const FgGLuint * _1, const FgGLfloat * _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ReplacementCodeuiNormal3fVertex3fSUN, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION( , void, ReplacementCodeuiNormal3fVertex3fvSUN, ( const FgGLuint * _1, const FgGLfloat * _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ReplacementCodeuiColor4fNormal3fVertex3fSUN, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9, FgGLfloat _10, FgGLfloat _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG_GL_FUNCTION( , void, ReplacementCodeuiColor4fNormal3fVertex3fvSUN, ( const FgGLuint * _1, const FgGLfloat * _2, const FgGLfloat * _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ReplacementCodeuiTexCoord2fVertex3fSUN, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION( , void, ReplacementCodeuiTexCoord2fVertex3fvSUN, ( const FgGLuint * _1, const FgGLfloat * _2, const FgGLfloat * _3 ), ( _1, _2, _3 ) ) \
    FG_GL_FUNCTION( , void, ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION( , void, ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN, ( const FgGLuint * _1, const FgGLfloat * _2, const FgGLfloat * _3, const FgGLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION( , void, ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9, FgGLfloat _10, FgGLfloat _11, FgGLfloat _12, FgGLfloat _13 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 ) ) \
    FG_GL_FUNCTION( , void, ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN, ( const FgGLuint * _1, const FgGLfloat * _2, const FgGLfloat * _3, const FgGLfloat * _4, const FgGLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_WIN_phong_shading */ \
\
    /* GL_WIN_specular_fog */ \

typedef void ( * FgGLDebugProc )(
    FgGLenum
    , FgGLenum
    , FgGLuint
    , FgGLenum
    , FgGLsizei
    , const FgGLchar *
    , const void *
);
typedef void ( * FgGLDebugProcARB )(
    FgGLenum
    , FgGLenum
    , FgGLuint
    , FgGLenum
    , FgGLsizei
    , const FgGLchar *
    , const void *
);
typedef void ( * FgGLDebugProcAMD )(
    FgGLuint
    , FgGLenum
    , FgGLenum
    , FgGLsizei
    , const FgGLchar *
    , void *
);

#define GL_DECLARE_FUNCTION( _dummyReturnValue, _returnType, _name, _args, _argValues ) \
    FGEXPORT _returnType fgGL##_name _args; \

#define FG_GL_FUNCTION GL_DECLARE_FUNCTION
    FG_GL_FUNCTIONS
#undef  FG_GL_FUNCTION

#undef  GL_DECLARE_FUNCTION

#endif  // FG_GL_FUNCTIONS_H
