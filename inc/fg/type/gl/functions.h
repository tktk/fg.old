#ifndef FG_TYPE_GL_FUNCTIONS_H
#define FG_TYPE_GL_FUNCTIONS_H

#include "fg/gl/types.h"

#define FG_GL_FUNCTIONS \
    /* GL_VERSION_1_0 */ \
    FG_GL_FUNCTION_NUM( GetError, FgGLenum, (), () ) \
    FG_GL_FUNCTION_VOID( Begin, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( End, (), () ) \
    FG_GL_FUNCTION_VOID( EdgeFlag, ( , FgGLboolean _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( EdgeFlagv, ( , const FgGLboolean * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Vertex2s, ( , FgGLshort _1, FgGLshort _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Vertex2i, ( , FgGLint _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Vertex2f, ( , FgGLfloat _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Vertex2d, ( , FgGLdouble _1, FgGLdouble _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Vertex3s, ( , FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Vertex3i, ( , FgGLint _1, FgGLint _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Vertex3f, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Vertex3d, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Vertex4s, ( , FgGLshort _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Vertex4i, ( , FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Vertex4f, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Vertex4d, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Vertex2sv, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Vertex2iv, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Vertex2fv, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Vertex2dv, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Vertex3sv, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Vertex3iv, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Vertex3fv, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Vertex3dv, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Vertex4sv, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Vertex4iv, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Vertex4fv, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Vertex4dv, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord1s, ( , FgGLshort _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord1i, ( , FgGLint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord1f, ( , FgGLfloat _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord1d, ( , FgGLdouble _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2s, ( , FgGLshort _1, FgGLshort _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2i, ( , FgGLint _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2f, ( , FgGLfloat _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2d, ( , FgGLdouble _1, FgGLdouble _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord3s, ( , FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord3i, ( , FgGLint _1, FgGLint _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord3f, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord3d, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord4s, ( , FgGLshort _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord4i, ( , FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord4f, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord4d, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord1sv, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord1iv, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord1fv, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord1dv, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2sv, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2iv, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2fv, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2dv, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord3sv, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord3iv, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord3fv, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord3dv, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord4sv, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord4iv, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord4fv, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord4dv, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Normal3b, ( , FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Normal3s, ( , FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Normal3i, ( , FgGLint _1, FgGLint _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Normal3f, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Normal3d, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Normal3bv, ( , const FgGLbyte * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Normal3sv, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Normal3iv, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Normal3fv, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Normal3dv, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Color3b, ( , FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Color3s, ( , FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Color3i, ( , FgGLint _1, FgGLint _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Color3f, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Color3d, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Color3ub, ( , FgGLubyte _1, FgGLubyte _2, FgGLubyte _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Color3us, ( , FgGLushort _1, FgGLushort _2, FgGLushort _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Color3ui, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Color4b, ( , FgGLbyte _1, FgGLbyte _2, FgGLbyte _3, FgGLbyte _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Color4s, ( , FgGLshort _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Color4i, ( , FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Color4f, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Color4d, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Color4ub, ( , FgGLubyte _1, FgGLubyte _2, FgGLubyte _3, FgGLubyte _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Color4us, ( , FgGLushort _1, FgGLushort _2, FgGLushort _3, FgGLushort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Color4ui, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Color3bv, ( , const FgGLbyte * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Color3sv, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Color3iv, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Color3fv, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Color3dv, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Color3ubv, ( , const FgGLubyte * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Color3usv, ( , const FgGLushort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Color3uiv, ( , const FgGLuint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Color4bv, ( , const FgGLbyte * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Color4sv, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Color4iv, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Color4fv, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Color4dv, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Color4ubv, ( , const FgGLubyte * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Color4usv, ( , const FgGLushort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Color4uiv, ( , const FgGLuint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Indexs, ( , FgGLshort _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Indexi, ( , FgGLint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Indexf, ( , FgGLfloat _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Indexd, ( , FgGLdouble _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Indexsv, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Indexiv, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Indexfv, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Indexdv, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Rects, ( , FgGLshort _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Recti, ( , FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Rectf, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Rectd, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Rectsv, ( , const FgGLshort * _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Rectiv, ( , const FgGLint * _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Rectfv, ( , const FgGLfloat * _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Rectdv, ( , const FgGLdouble * _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DepthRange, ( , FgGLclampd _1, FgGLclampd _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Viewport, ( , FgGLint _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MatrixMode, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( LoadMatrixf, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( LoadMatrixd, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( MultMatrixf, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( MultMatrixd, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( LoadIdentity, (), () ) \
    FG_GL_FUNCTION_VOID( Rotatef, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Rotated, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Translatef, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Translated, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Scalef, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Scaled, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Frustum, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( Ortho, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( PushMatrix, (), () ) \
    FG_GL_FUNCTION_VOID( PopMatrix, (), () ) \
    FG_GL_FUNCTION_VOID( Enable, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Disable, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexGeni, ( , FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexGenf, ( , FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexGend, ( , FgGLenum _1, FgGLenum _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexGeniv, ( , FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexGenfv, ( , FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexGendv, ( , FgGLenum _1, FgGLenum _2, const FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ClipPlane, ( , FgGLenum _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos2s, ( , FgGLshort _1, FgGLshort _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos2i, ( , FgGLint _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos2f, ( , FgGLfloat _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos2d, ( , FgGLdouble _1, FgGLdouble _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos2sv, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos2iv, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos2fv, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos2dv, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos3s, ( , FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos3i, ( , FgGLint _1, FgGLint _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos3f, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos3d, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos3sv, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos3iv, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos3fv, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos3dv, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos4s, ( , FgGLshort _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos4i, ( , FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos4f, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos4d, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos4sv, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos4iv, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos4fv, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos4dv, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( FrontFace, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Materiali, ( , FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Materialf, ( , FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Materialiv, ( , FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Materialfv, ( , FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Lighti, ( , FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Lightf, ( , FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Lightiv, ( , FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Lightfv, ( , FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( LightModeli, ( , FgGLenum _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( LightModelf, ( , FgGLenum _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( LightModeliv, ( , FgGLenum _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( LightModelfv, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( ColorMaterial, ( , FgGLenum _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( ShadeModel, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( PointSize, ( , FgGLfloat _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( LineWidth, ( , FgGLfloat _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( LineStipple, ( , FgGLint _1, FgGLushort _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( CullFace, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( PolygonStipple, ( , const FgGLubyte * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( PolygonMode, ( , FgGLenum _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( PixelStorei, ( , FgGLenum _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( PixelStoref, ( , FgGLenum _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( PixelTransferi, ( , FgGLenum _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( PixelTransferf, ( , FgGLenum _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( PixelMapuiv, ( , FgGLenum _1, FgGLsizei _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( PixelMapusv, ( , FgGLenum _1, FgGLsizei _2, const FgGLushort * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( PixelMapfv, ( , FgGLenum _1, FgGLsizei _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( DrawPixels, ( , FgGLsizei _1, FgGLsizei _2, FgGLenum _3, FgGLenum _4, const FgGLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( PixelZoom, ( , FgGLfloat _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Bitmap, ( , FgGLsizei _1, FgGLsizei _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, const FgGLubyte * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( TexImage1D, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLint _5, FgGLenum _6, FgGLenum _7, const FgGLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( TexImage2D, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLsizei _5, FgGLint _6, FgGLenum _7, FgGLenum _8, const FgGLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION_VOID( TexParameteri, ( , FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexParameterf, ( , FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexParameteriv, ( , FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexParameterfv, ( , FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexEnvi, ( , FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexEnvf, ( , FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexEnviv, ( , FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexEnvfv, ( , FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Fogi, ( , FgGLenum _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Fogf, ( , FgGLenum _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Fogiv, ( , FgGLenum _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Fogfv, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Scissor, ( , FgGLint _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( AlphaFunc, ( , FgGLenum _1, FgGLclampf _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( StencilFunc, ( , FgGLenum _1, FgGLint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( StencilOp, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( DepthFunc, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( BlendFunc, ( , FgGLenum _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( LogicOp, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( DrawBuffer, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( IndexMask, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ColorMask, ( , FgGLboolean _1, FgGLboolean _2, FgGLboolean _3, FgGLboolean _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( DepthMask, ( , FgGLboolean _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( StencilMask, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Clear, ( , FgGLbitfield _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ClearColor, ( , FgGLclampf _1, FgGLclampf _2, FgGLclampf _3, FgGLclampf _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ClearIndex, ( , FgGLfloat _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ClearDepth, ( , FgGLclampd _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ClearStencil, ( , FgGLint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ClearAccum, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Accum, ( , FgGLenum _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( ReadPixels, ( , FgGLint _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, FgGLvoid * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( ReadBuffer, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( CopyPixels, ( , FgGLint _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4, FgGLenum _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( Map1f, ( , FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLint _4, FgGLint _5, const FgGLfloat * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( Map1d, ( , FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLint _4, FgGLint _5, const FgGLdouble * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( Map2f, ( , FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLint _4, FgGLint _5, FgGLfloat _6, FgGLfloat _7, FgGLint _8, FgGLint _9, const FgGLfloat * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION_VOID( Map2d, ( , FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLint _4, FgGLint _5, FgGLdouble _6, FgGLdouble _7, FgGLint _8, FgGLint _9, const FgGLdouble * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION_VOID( EvalCoord1f, ( , FgGLfloat _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( EvalCoord1d, ( , FgGLdouble _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( EvalCoord2f, ( , FgGLfloat _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( EvalCoord2d, ( , FgGLdouble _1, FgGLdouble _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( EvalCoord1fv, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( EvalCoord1dv, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( EvalCoord2fv, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( EvalCoord2dv, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( MapGrid1f, ( , FgGLint _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MapGrid1d, ( , FgGLint _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MapGrid2f, ( , FgGLint _1, FgGLfloat _2, FgGLfloat _3, FgGLint _4, FgGLfloat _5, FgGLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( MapGrid2d, ( , FgGLint _1, FgGLdouble _2, FgGLdouble _3, FgGLint _4, FgGLdouble _5, FgGLdouble _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( EvalMesh1, ( , FgGLenum _1, FgGLint _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( EvalMesh2, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( EvalPoint1, ( , FgGLint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( EvalPoint2, ( , FgGLint _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( InitNames, (), () ) \
    FG_GL_FUNCTION_VOID( PopName, (), () ) \
    FG_GL_FUNCTION_VOID( PushName, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( LoadName, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( RenderMode, FgGLint, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( SelectBuffer, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( FeedbackBuffer, ( , FgGLsizei _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( PassThrough, ( , FgGLfloat _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( NewList, ( , FgGLuint _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( EndList, (), () ) \
    FG_GL_FUNCTION_VOID( CallList, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( CallLists, ( , FgGLsizei _1, FgGLenum _2, const FgGLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ListBase, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( GenLists, FgGLuint, ( , FgGLsizei _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( IsList, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( DeleteLists, ( , FgGLuint _1, FgGLsizei _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Flush, (), () ) \
    FG_GL_FUNCTION_VOID( Finish, (), () ) \
    FG_GL_FUNCTION_VOID( Hint, ( , FgGLenum _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetBooleanv, ( , FgGLenum _1, FgGLboolean * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetIntegerv, ( , FgGLenum _1, FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetFloatv, ( , FgGLenum _1, FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetDoublev, ( , FgGLenum _1, FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( IsEnabled, FgGLboolean, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GetClipPlane, ( , FgGLenum _1, FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetLightiv, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetLightfv, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetMaterialiv, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetMaterialfv, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetTexEnviv, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetTexEnvfv, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetTexGeniv, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetTexGenfv, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetTexParameteriv, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetTexParameterfv, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetTexLevelParameteriv, ( , FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetTexLevelParameterfv, ( , FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetPixelMapuiv, ( , FgGLenum _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetPixelMapusv, ( , FgGLenum _1, FgGLushort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetPixelMapfv, ( , FgGLenum _1, FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetMapiv, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetMapfv, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetMapdv, ( , FgGLenum _1, FgGLenum _2, FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetTexImage, ( , FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLenum _4, FgGLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetPolygonStipple, ( , FgGLubyte * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_PTR( GetString, const FgGLubyte *, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( PushAttrib, ( , FgGLbitfield _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( PopAttrib, (), () ) \
\
    /* GL_VERSION_1_1 */ \
    FG_GL_FUNCTION_VOID( Indexub, ( , FgGLubyte _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Indexubv, ( , const FgGLubyte * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( EdgeFlagPointer, ( , FgGLsizei _1, const FgGLvoid * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexCoordPointer, ( , FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ColorPointer, ( , FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( IndexPointer, ( , FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( NormalPointer, ( , FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexPointer, ( , FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( EnableClientState, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( DisableClientState, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ArrayElement, ( , FgGLint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( DrawArrays, ( , FgGLenum _1, FgGLint _2, FgGLsizei _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( DrawElements, ( , FgGLenum _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( InterleavedArrays, ( , FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( PolygonOffset, ( , FgGLfloat _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( CopyTexImage1D, ( , FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLint _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( CopyTexImage2D, ( , FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLint _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( TexSubImage1D, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, const FgGLvoid * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( TexSubImage2D, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLenum _7, FgGLenum _8, const FgGLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION_VOID( CopyTexSubImage1D, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( CopyTexSubImage2D, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( BindTexture, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DeleteTextures, ( , FgGLsizei _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GenTextures, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( AreTexturesResident, FgGLboolean, ( , FgGLsizei _1, const FgGLuint * _2, FgGLboolean * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( PrioritizeTextures, ( , FgGLsizei _1, const FgGLuint * _2, const FgGLclampf * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_NUM( IsTexture, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GetPointerv, ( , FgGLenum _1, FgGLvoid ** _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( PushClientAttrib, ( , FgGLbitfield _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( PopClientAttrib, (), () ) \
\
    /* GL_VERSION_1_2 */ \
    FG_GL_FUNCTION_VOID( DrawRangeElements, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4, FgGLenum _5, const FgGLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( TexImage3D, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLenum _8, FgGLenum _9, const FgGLvoid * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION_VOID( TexSubImage3D, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLenum _9, FgGLenum _10, const FgGLvoid * _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG_GL_FUNCTION_VOID( CopyTexSubImage3D, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLsizei _8, FgGLsizei _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
\
    /* GL_VERSION_1_3 */ \
    FG_GL_FUNCTION_VOID( ActiveTexture, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( SampleCoverage, ( , FgGLfloat _1, FgGLboolean _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( CompressedTexImage3D, ( , FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLsizei _8, const FgGLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION_VOID( CompressedTexImage2D, ( , FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLint _6, FgGLsizei _7, const FgGLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( CompressedTexImage1D, ( , FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLint _5, FgGLsizei _6, const FgGLvoid * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( CompressedTexSubImage3D, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLenum _9, FgGLsizei _10, const FgGLvoid * _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG_GL_FUNCTION_VOID( CompressedTexSubImage2D, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLenum _7, FgGLsizei _8, const FgGLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION_VOID( CompressedTexSubImage1D, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLenum _5, FgGLsizei _6, const FgGLvoid * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( GetCompressedTexImage, ( , FgGLenum _1, FgGLint _2, FgGLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ClientActiveTexture, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1d, ( , FgGLenum _1, FgGLdouble _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1dv, ( , FgGLenum _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1f, ( , FgGLenum _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1fv, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1i, ( , FgGLenum _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1iv, ( , FgGLenum _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1s, ( , FgGLenum _1, FgGLshort _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1sv, ( , FgGLenum _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2d, ( , FgGLenum _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2dv, ( , FgGLenum _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2f, ( , FgGLenum _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2fv, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2i, ( , FgGLenum _1, FgGLint _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2iv, ( , FgGLenum _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2s, ( , FgGLenum _1, FgGLshort _2, FgGLshort _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2sv, ( , FgGLenum _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3d, ( , FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3dv, ( , FgGLenum _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3f, ( , FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3fv, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3i, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3iv, ( , FgGLenum _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3s, ( , FgGLenum _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3sv, ( , FgGLenum _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4d, ( , FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4dv, ( , FgGLenum _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4f, ( , FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4fv, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4i, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4iv, ( , FgGLenum _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4s, ( , FgGLenum _1, FgGLshort _2, FgGLshort _3, FgGLshort _4, FgGLshort _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4sv, ( , FgGLenum _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( LoadTransposeMatrixf, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( LoadTransposeMatrixd, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( MultTransposeMatrixf, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( MultTransposeMatrixd, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
\
    /* GL_VERSION_1_4 */ \
    FG_GL_FUNCTION_VOID( BlendFuncSeparate, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiDrawArrays, ( , FgGLenum _1, const FgGLint * _2, const FgGLsizei * _3, FgGLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiDrawElements, ( , FgGLenum _1, const FgGLsizei * _2, FgGLenum _3, const FgGLvoid *const* _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( PointParameterf, ( , FgGLenum _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( PointParameterfv, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( PointParameteri, ( , FgGLenum _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( PointParameteriv, ( , FgGLenum _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( FogCoordf, ( , FgGLfloat _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( FogCoordfv, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( FogCoordd, ( , FgGLdouble _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( FogCoorddv, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( FogCoordPointer, ( , FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3b, ( , FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3bv, ( , const FgGLbyte * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3d, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3dv, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3f, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3fv, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3i, ( , FgGLint _1, FgGLint _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3iv, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3s, ( , FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3sv, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3ub, ( , FgGLubyte _1, FgGLubyte _2, FgGLubyte _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3ubv, ( , const FgGLubyte * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3ui, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3uiv, ( , const FgGLuint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3us, ( , FgGLushort _1, FgGLushort _2, FgGLushort _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3usv, ( , const FgGLushort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColorPointer, ( , FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos2d, ( , FgGLdouble _1, FgGLdouble _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos2dv, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos2f, ( , FgGLfloat _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos2fv, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos2i, ( , FgGLint _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos2iv, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos2s, ( , FgGLshort _1, FgGLshort _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos2sv, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3d, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3dv, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3f, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3fv, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3i, ( , FgGLint _1, FgGLint _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3iv, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3s, ( , FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3sv, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( BlendColor, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( BlendEquation, ( , FgGLenum _1 ), ( , _1 ) ) \
\
    /* GL_VERSION_1_5 */ \
    FG_GL_FUNCTION_VOID( GenQueries, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DeleteQueries, ( , FgGLsizei _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( IsQuery, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( BeginQuery, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( EndQuery, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GetQueryiv, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetQueryObjectiv, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetQueryObjectuiv, ( , FgGLuint _1, FgGLenum _2, FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( BindBuffer, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DeleteBuffers, ( , FgGLsizei _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GenBuffers, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( IsBuffer, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( BufferData, ( , FgGLenum _1, FgGLsizeiptr _2, const FgGLvoid * _3, FgGLenum _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( BufferSubData, ( , FgGLenum _1, FgGLintptr _2, FgGLsizeiptr _3, const FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetBufferSubData, ( , FgGLenum _1, FgGLintptr _2, FgGLsizeiptr _3, FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_PTR( MapBuffer, void *, ( , FgGLenum _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( UnmapBuffer, FgGLboolean, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GetBufferParameteriv, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetBufferPointerv, ( , FgGLenum _1, FgGLenum _2, FgGLvoid ** _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_VERSION_2_0 */ \
    FG_GL_FUNCTION_VOID( BlendEquationSeparate, ( , FgGLenum _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DrawBuffers, ( , FgGLsizei _1, const FgGLenum * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( StencilOpSeparate, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( StencilFuncSeparate, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( StencilMaskSeparate, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( AttachShader, ( , FgGLuint _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( BindAttribLocation, ( , FgGLuint _1, FgGLuint _2, const FgGLchar * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( CompileShader, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( CreateProgram, FgGLuint, (), () ) \
    FG_GL_FUNCTION_NUM( CreateShader, FgGLuint, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( DeleteProgram, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( DeleteShader, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( DetachShader, ( , FgGLuint _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DisableVertexAttribArray, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( EnableVertexAttribArray, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GetActiveAttrib, ( , FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLint * _5, FgGLenum * _6, FgGLchar * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( GetActiveUniform, ( , FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLint * _5, FgGLenum * _6, FgGLchar * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( GetAttachedShaders, ( , FgGLuint _1, FgGLsizei _2, FgGLsizei * _3, FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_NUM( GetAttribLocation, FgGLint, ( , FgGLuint _1, const FgGLchar * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramiv, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramInfoLog, ( , FgGLuint _1, FgGLsizei _2, FgGLsizei * _3, FgGLchar * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetShaderiv, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetShaderInfoLog, ( , FgGLuint _1, FgGLsizei _2, FgGLsizei * _3, FgGLchar * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetShaderSource, ( , FgGLuint _1, FgGLsizei _2, FgGLsizei * _3, FgGLchar * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_NUM( GetUniformLocation, FgGLint, ( , FgGLuint _1, const FgGLchar * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetUniformfv, ( , FgGLuint _1, FgGLint _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetUniformiv, ( , FgGLuint _1, FgGLint _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribdv, ( , FgGLuint _1, FgGLenum _2, FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribfv, ( , FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribiv, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribPointerv, ( , FgGLuint _1, FgGLenum _2, FgGLvoid ** _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_NUM( IsProgram, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( IsShader, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( LinkProgram, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ShaderSource, ( , FgGLuint _1, FgGLsizei _2, const FgGLchar *const* _3, const FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( UseProgram, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Uniform1f, ( , FgGLint _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Uniform2f, ( , FgGLint _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform3f, ( , FgGLint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Uniform4f, ( , FgGLint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( Uniform1i, ( , FgGLint _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Uniform2i, ( , FgGLint _1, FgGLint _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform3i, ( , FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Uniform4i, ( , FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( Uniform1fv, ( , FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform2fv, ( , FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform3fv, ( , FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform4fv, ( , FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform1iv, ( , FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform2iv, ( , FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform3iv, ( , FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform4iv, ( , FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( UniformMatrix2fv, ( , FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( UniformMatrix3fv, ( , FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( UniformMatrix4fv, ( , FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ValidateProgram, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1d, ( , FgGLuint _1, FgGLdouble _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1dv, ( , FgGLuint _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1f, ( , FgGLuint _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1fv, ( , FgGLuint _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1s, ( , FgGLuint _1, FgGLshort _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1sv, ( , FgGLuint _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2d, ( , FgGLuint _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2dv, ( , FgGLuint _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2f, ( , FgGLuint _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2fv, ( , FgGLuint _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2s, ( , FgGLuint _1, FgGLshort _2, FgGLshort _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2sv, ( , FgGLuint _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3d, ( , FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3dv, ( , FgGLuint _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3f, ( , FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3fv, ( , FgGLuint _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3s, ( , FgGLuint _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3sv, ( , FgGLuint _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4Nbv, ( , FgGLuint _1, const FgGLbyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4Niv, ( , FgGLuint _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4Nsv, ( , FgGLuint _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4Nub, ( , FgGLuint _1, FgGLubyte _2, FgGLubyte _3, FgGLubyte _4, FgGLubyte _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4Nubv, ( , FgGLuint _1, const FgGLubyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4Nuiv, ( , FgGLuint _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4Nusv, ( , FgGLuint _1, const FgGLushort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4bv, ( , FgGLuint _1, const FgGLbyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4d, ( , FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4dv, ( , FgGLuint _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4f, ( , FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4fv, ( , FgGLuint _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4iv, ( , FgGLuint _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4s, ( , FgGLuint _1, FgGLshort _2, FgGLshort _3, FgGLshort _4, FgGLshort _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4sv, ( , FgGLuint _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4ubv, ( , FgGLuint _1, const FgGLubyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4uiv, ( , FgGLuint _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4usv, ( , FgGLuint _1, const FgGLushort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribPointer, ( , FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLboolean _4, FgGLsizei _5, const FgGLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_VERSION_2_1 */ \
    FG_GL_FUNCTION_VOID( UniformMatrix2x3fv, ( , FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( UniformMatrix3x2fv, ( , FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( UniformMatrix2x4fv, ( , FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( UniformMatrix4x2fv, ( , FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( UniformMatrix3x4fv, ( , FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( UniformMatrix4x3fv, ( , FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_VERSION_3_0 */ \
    FG_GL_FUNCTION_VOID( ColorMaski, ( , FgGLuint _1, FgGLboolean _2, FgGLboolean _3, FgGLboolean _4, FgGLboolean _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetBooleani_v, ( , FgGLenum _1, FgGLuint _2, FgGLboolean * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetIntegeri_v, ( , FgGLenum _1, FgGLuint _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Enablei, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Disablei, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( IsEnabledi, FgGLboolean, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( BeginTransformFeedback, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( EndTransformFeedback, (), () ) \
    FG_GL_FUNCTION_VOID( BindBufferRange, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLintptr _4, FgGLsizeiptr _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( BindBufferBase, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TransformFeedbackVaryings, ( , FgGLuint _1, FgGLsizei _2, const FgGLchar *const* _3, FgGLenum _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetTransformFeedbackVarying, ( , FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLsizei * _5, FgGLenum * _6, FgGLchar * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( ClampColor, ( , FgGLenum _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( BeginConditionalRender, ( , FgGLuint _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( EndConditionalRender, (), () ) \
    FG_GL_FUNCTION_VOID( VertexAttribIPointer, ( , FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, const FgGLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribIiv, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribIuiv, ( , FgGLuint _1, FgGLenum _2, FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI1i, ( , FgGLuint _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2i, ( , FgGLuint _1, FgGLint _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3i, ( , FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4i, ( , FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI1ui, ( , FgGLuint _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2ui, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3ui, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4ui, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI1iv, ( , FgGLuint _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2iv, ( , FgGLuint _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3iv, ( , FgGLuint _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4iv, ( , FgGLuint _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI1uiv, ( , FgGLuint _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2uiv, ( , FgGLuint _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3uiv, ( , FgGLuint _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4uiv, ( , FgGLuint _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4bv, ( , FgGLuint _1, const FgGLbyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4sv, ( , FgGLuint _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4ubv, ( , FgGLuint _1, const FgGLubyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4usv, ( , FgGLuint _1, const FgGLushort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetUniformuiv, ( , FgGLuint _1, FgGLint _2, FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( BindFragDataLocation, ( , FgGLuint _1, FgGLuint _2, const FgGLchar * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_NUM( GetFragDataLocation, FgGLint, ( , FgGLuint _1, const FgGLchar * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Uniform1ui, ( , FgGLint _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Uniform2ui, ( , FgGLint _1, FgGLuint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform3ui, ( , FgGLint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Uniform4ui, ( , FgGLint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( Uniform1uiv, ( , FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform2uiv, ( , FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform3uiv, ( , FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform4uiv, ( , FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexParameterIiv, ( , FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexParameterIuiv, ( , FgGLenum _1, FgGLenum _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetTexParameterIiv, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetTexParameterIuiv, ( , FgGLenum _1, FgGLenum _2, FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ClearBufferiv, ( , FgGLenum _1, FgGLint _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ClearBufferuiv, ( , FgGLenum _1, FgGLint _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ClearBufferfv, ( , FgGLenum _1, FgGLint _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ClearBufferfi, ( , FgGLenum _1, FgGLint _2, FgGLfloat _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_PTR( GetStringi, const FgGLubyte *, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( IsRenderbuffer, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( BindRenderbuffer, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DeleteRenderbuffers, ( , FgGLsizei _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GenRenderbuffers, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( RenderbufferStorage, ( , FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetRenderbufferParameteriv, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_NUM( IsFramebuffer, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( BindFramebuffer, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DeleteFramebuffers, ( , FgGLsizei _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GenFramebuffers, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( CheckFramebufferStatus, FgGLenum, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( FramebufferTexture1D, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( FramebufferTexture2D, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( FramebufferTexture3D, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5, FgGLint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( FramebufferRenderbuffer, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetFramebufferAttachmentParameteriv, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GenerateMipmap, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( BlitFramebuffer, ( , FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLint _8, FgGLbitfield _9, FgGLenum _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION_VOID( RenderbufferStorageMultisample, ( , FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( FramebufferTextureLayer, ( , FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_PTR( MapBufferRange, void *, ( , FgGLenum _1, FgGLintptr _2, FgGLsizeiptr _3, FgGLbitfield _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( FlushMappedBufferRange, ( , FgGLenum _1, FgGLintptr _2, FgGLsizeiptr _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( BindVertexArray, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( DeleteVertexArrays, ( , FgGLsizei _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GenVertexArrays, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( IsVertexArray, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
\
    /* GL_VERSION_3_1 */ \
    FG_GL_FUNCTION_VOID( DrawArraysInstanced, ( , FgGLenum _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( DrawElementsInstanced, ( , FgGLenum _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( TexBuffer, ( , FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( PrimitiveRestartIndex, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( CopyBufferSubData, ( , FgGLenum _1, FgGLenum _2, FgGLintptr _3, FgGLintptr _4, FgGLsizeiptr _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetUniformIndices, ( , FgGLuint _1, FgGLsizei _2, const FgGLchar *const* _3, FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetActiveUniformsiv, ( , FgGLuint _1, FgGLsizei _2, const FgGLuint * _3, FgGLenum _4, FgGLint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetActiveUniformName, ( , FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLchar * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_NUM( GetUniformBlockIndex, FgGLuint, ( , FgGLuint _1, const FgGLchar * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetActiveUniformBlockiv, ( , FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetActiveUniformBlockName, ( , FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLchar * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( UniformBlockBinding, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_VERSION_3_2 */ \
    FG_GL_FUNCTION_VOID( DrawElementsBaseVertex, ( , FgGLenum _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( DrawRangeElementsBaseVertex, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4, FgGLenum _5, const FgGLvoid * _6, FgGLint _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( DrawElementsInstancedBaseVertex, ( , FgGLenum _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4, FgGLsizei _5, FgGLint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( MultiDrawElementsBaseVertex, ( , FgGLenum _1, const FgGLsizei * _2, FgGLenum _3, const FgGLvoid *const* _4, FgGLsizei _5, const FgGLint * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ProvokingVertex, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_PTR( FenceSync, FgGLsync, ( , FgGLenum _1, FgGLbitfield _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( IsSync, FgGLboolean, ( , FgGLsync _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( DeleteSync, ( , FgGLsync _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( ClientWaitSync, FgGLenum, ( , FgGLsync _1, FgGLbitfield _2, FgGLuint64 _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( WaitSync, ( , FgGLsync _1, FgGLbitfield _2, FgGLuint64 _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetInteger64v, ( , FgGLenum _1, FgGLint64 * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetSynciv, ( , FgGLsync _1, FgGLenum _2, FgGLsizei _3, FgGLsizei * _4, FgGLint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetInteger64i_v, ( , FgGLenum _1, FgGLuint _2, FgGLint64 * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetBufferParameteri64v, ( , FgGLenum _1, FgGLenum _2, FgGLint64 * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( FramebufferTexture, ( , FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( TexImage2DMultisample, ( , FgGLenum _1, FgGLsizei _2, FgGLint _3, FgGLsizei _4, FgGLsizei _5, FgGLboolean _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( TexImage3DMultisample, ( , FgGLenum _1, FgGLsizei _2, FgGLint _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLboolean _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( GetMultisamplefv, ( , FgGLenum _1, FgGLuint _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SampleMaski, ( , FgGLuint _1, FgGLbitfield _2 ), ( , _1, _2 ) ) \
\
    /* GL_VERSION_3_3 */ \
    FG_GL_FUNCTION_VOID( BindFragDataLocationIndexed, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3, const FgGLchar * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_NUM( GetFragDataIndex, FgGLint, ( , FgGLuint _1, const FgGLchar * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GenSamplers, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DeleteSamplers, ( , FgGLsizei _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( IsSampler, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( BindSampler, ( , FgGLuint _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( SamplerParameteri, ( , FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SamplerParameteriv, ( , FgGLuint _1, FgGLenum _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SamplerParameterf, ( , FgGLuint _1, FgGLenum _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SamplerParameterfv, ( , FgGLuint _1, FgGLenum _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SamplerParameterIiv, ( , FgGLuint _1, FgGLenum _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SamplerParameterIuiv, ( , FgGLuint _1, FgGLenum _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetSamplerParameteriv, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetSamplerParameterIiv, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetSamplerParameterfv, ( , FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetSamplerParameterIuiv, ( , FgGLuint _1, FgGLenum _2, FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( QueryCounter, ( , FgGLuint _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetQueryObjecti64v, ( , FgGLuint _1, FgGLenum _2, FgGLint64 * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetQueryObjectui64v, ( , FgGLuint _1, FgGLenum _2, FgGLuint64 * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribDivisor, ( , FgGLuint _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribP1ui, ( , FgGLuint _1, FgGLenum _2, FgGLboolean _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribP1uiv, ( , FgGLuint _1, FgGLenum _2, FgGLboolean _3, const FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribP2ui, ( , FgGLuint _1, FgGLenum _2, FgGLboolean _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribP2uiv, ( , FgGLuint _1, FgGLenum _2, FgGLboolean _3, const FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribP3ui, ( , FgGLuint _1, FgGLenum _2, FgGLboolean _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribP3uiv, ( , FgGLuint _1, FgGLenum _2, FgGLboolean _3, const FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribP4ui, ( , FgGLuint _1, FgGLenum _2, FgGLboolean _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribP4uiv, ( , FgGLuint _1, FgGLenum _2, FgGLboolean _3, const FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexP2ui, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexP2uiv, ( , FgGLenum _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexP3ui, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexP3uiv, ( , FgGLenum _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexP4ui, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexP4uiv, ( , FgGLenum _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexCoordP1ui, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexCoordP1uiv, ( , FgGLenum _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexCoordP2ui, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexCoordP2uiv, ( , FgGLenum _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexCoordP3ui, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexCoordP3uiv, ( , FgGLenum _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexCoordP4ui, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexCoordP4uiv, ( , FgGLenum _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP1ui, ( , FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP1uiv, ( , FgGLenum _1, FgGLenum _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP2ui, ( , FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP2uiv, ( , FgGLenum _1, FgGLenum _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP3ui, ( , FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP3uiv, ( , FgGLenum _1, FgGLenum _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP4ui, ( , FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP4uiv, ( , FgGLenum _1, FgGLenum _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( NormalP3ui, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( NormalP3uiv, ( , FgGLenum _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( ColorP3ui, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( ColorP3uiv, ( , FgGLenum _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( ColorP4ui, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( ColorP4uiv, ( , FgGLenum _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColorP3ui, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColorP3uiv, ( , FgGLenum _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
\
    /* GL_VERSION_4_0 */ \
    FG_GL_FUNCTION_VOID( MinSampleShading, ( , FgGLfloat _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( BlendEquationi, ( , FgGLuint _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( BlendEquationSeparatei, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( BlendFunci, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( BlendFuncSeparatei, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLenum _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( DrawArraysIndirect, ( , FgGLenum _1, const FgGLvoid * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DrawElementsIndirect, ( , FgGLenum _1, FgGLenum _2, const FgGLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform1d, ( , FgGLint _1, FgGLdouble _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Uniform2d, ( , FgGLint _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform3d, ( , FgGLint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Uniform4d, ( , FgGLint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( Uniform1dv, ( , FgGLint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform2dv, ( , FgGLint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform3dv, ( , FgGLint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform4dv, ( , FgGLint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( UniformMatrix2dv, ( , FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( UniformMatrix3dv, ( , FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( UniformMatrix4dv, ( , FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( UniformMatrix2x3dv, ( , FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( UniformMatrix2x4dv, ( , FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( UniformMatrix3x2dv, ( , FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( UniformMatrix3x4dv, ( , FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( UniformMatrix4x2dv, ( , FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( UniformMatrix4x3dv, ( , FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetUniformdv, ( , FgGLuint _1, FgGLint _2, FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_NUM( GetSubroutineUniformLocation, FgGLint, ( , FgGLuint _1, FgGLenum _2, const FgGLchar * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_NUM( GetSubroutineIndex, FgGLuint, ( , FgGLuint _1, FgGLenum _2, const FgGLchar * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetActiveSubroutineUniformiv, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLenum _4, FgGLint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetActiveSubroutineUniformName, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, FgGLsizei * _5, FgGLchar * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( GetActiveSubroutineName, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, FgGLsizei * _5, FgGLchar * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( UniformSubroutinesuiv, ( , FgGLenum _1, FgGLsizei _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetUniformSubroutineuiv, ( , FgGLenum _1, FgGLint _2, FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramStageiv, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( PatchParameteri, ( , FgGLenum _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( PatchParameterfv, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( BindTransformFeedback, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DeleteTransformFeedbacks, ( , FgGLsizei _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GenTransformFeedbacks, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( IsTransformFeedback, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( PauseTransformFeedback, (), () ) \
    FG_GL_FUNCTION_VOID( ResumeTransformFeedback, (), () ) \
    FG_GL_FUNCTION_VOID( DrawTransformFeedback, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DrawTransformFeedbackStream, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( BeginQueryIndexed, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( EndQueryIndexed, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetQueryIndexediv, ( , FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_VERSION_4_1 */ \
    FG_GL_FUNCTION_VOID( ReleaseShaderCompiler, (), () ) \
    FG_GL_FUNCTION_VOID( ShaderBinary, ( , FgGLsizei _1, const FgGLuint * _2, FgGLenum _3, const FgGLvoid * _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetShaderPrecisionFormat, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( DepthRangef, ( , FgGLfloat _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( ClearDepthf, ( , FgGLfloat _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramBinary, ( , FgGLuint _1, FgGLsizei _2, FgGLsizei * _3, FgGLenum * _4, FgGLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramBinary, ( , FgGLuint _1, FgGLenum _2, const FgGLvoid * _3, FgGLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramParameteri, ( , FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( UseProgramStages, ( , FgGLuint _1, FgGLbitfield _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ActiveShaderProgram, ( , FgGLuint _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( CreateShaderProgramv, FgGLuint, ( , FgGLenum _1, FgGLsizei _2, const FgGLchar *const* _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( BindProgramPipeline, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( DeleteProgramPipelines, ( , FgGLsizei _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GenProgramPipelines, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( IsProgramPipeline, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramPipelineiv, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1i, ( , FgGLuint _1, FgGLint _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1iv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1f, ( , FgGLuint _1, FgGLint _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1fv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1d, ( , FgGLuint _1, FgGLint _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1dv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1ui, ( , FgGLuint _1, FgGLint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1uiv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2i, ( , FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2iv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2f, ( , FgGLuint _1, FgGLint _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2fv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2d, ( , FgGLuint _1, FgGLint _2, FgGLdouble _3, FgGLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2dv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2ui, ( , FgGLuint _1, FgGLint _2, FgGLuint _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2uiv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3i, ( , FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3iv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3f, ( , FgGLuint _1, FgGLint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3fv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3d, ( , FgGLuint _1, FgGLint _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3dv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3ui, ( , FgGLuint _1, FgGLint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3uiv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4i, ( , FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4iv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4f, ( , FgGLuint _1, FgGLint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4fv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4d, ( , FgGLuint _1, FgGLint _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4dv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4ui, ( , FgGLuint _1, FgGLint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4uiv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2fv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3fv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4fv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2dv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3dv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4dv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x3fv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x2fv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x4fv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x2fv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x4fv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x3fv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x3dv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x2dv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x4dv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x2dv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x4dv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x3dv, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ValidateProgramPipeline, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramPipelineInfoLog, ( , FgGLuint _1, FgGLsizei _2, FgGLsizei * _3, FgGLchar * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1d, ( , FgGLuint _1, FgGLdouble _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2d, ( , FgGLuint _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3d, ( , FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4d, ( , FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1dv, ( , FgGLuint _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2dv, ( , FgGLuint _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3dv, ( , FgGLuint _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4dv, ( , FgGLuint _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribLPointer, ( , FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, const FgGLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribLdv, ( , FgGLuint _1, FgGLenum _2, FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ViewportArrayv, ( , FgGLuint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ViewportIndexedf, ( , FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ViewportIndexedfv, ( , FgGLuint _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( ScissorArrayv, ( , FgGLuint _1, FgGLsizei _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ScissorIndexed, ( , FgGLuint _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ScissorIndexedv, ( , FgGLuint _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DepthRangeArrayv, ( , FgGLuint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( DepthRangeIndexed, ( , FgGLuint _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetFloati_v, ( , FgGLenum _1, FgGLuint _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetDoublei_v, ( , FgGLenum _1, FgGLuint _2, FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_VERSION_4_2 */ \
    FG_GL_FUNCTION_VOID( DrawArraysInstancedBaseInstance, ( , FgGLenum _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4, FgGLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( DrawElementsInstancedBaseInstance, ( , FgGLenum _1, FgGLsizei _2, FgGLenum _3, const void * _4, FgGLsizei _5, FgGLuint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( DrawElementsInstancedBaseVertexBaseInstance, ( , FgGLenum _1, FgGLsizei _2, FgGLenum _3, const void * _4, FgGLsizei _5, FgGLint _6, FgGLuint _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( GetInternalformativ, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, FgGLint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetActiveAtomicCounterBufferiv, ( , FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( BindImageTexture, ( , FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLboolean _4, FgGLint _5, FgGLenum _6, FgGLenum _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( MemoryBarrier, ( , FgGLbitfield _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexStorage1D, ( , FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( TexStorage2D, ( , FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( TexStorage3D, ( , FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( DrawTransformFeedbackInstanced, ( , FgGLenum _1, FgGLuint _2, FgGLsizei _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( DrawTransformFeedbackStreamInstanced, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_VERSION_4_3 */ \
    FG_GL_FUNCTION_VOID( ClearBufferData, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, const void * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ClearBufferSubData, ( , FgGLenum _1, FgGLenum _2, FgGLintptr _3, FgGLsizeiptr _4, FgGLenum _5, FgGLenum _6, const void * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( DispatchCompute, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( DispatchComputeIndirect, ( , FgGLintptr _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( CopyImageSubData, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLuint _7, FgGLenum _8, FgGLint _9, FgGLint _10, FgGLint _11, FgGLint _12, FgGLsizei _13, FgGLsizei _14, FgGLsizei _15 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15 ) ) \
    FG_GL_FUNCTION_VOID( FramebufferParameteri, ( , FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetFramebufferParameteriv, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetInternalformati64v, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, FgGLint64 * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( InvalidateTexSubImage, ( , FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( InvalidateTexImage, ( , FgGLuint _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( InvalidateBufferSubData, ( , FgGLuint _1, FgGLintptr _2, FgGLsizeiptr _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( InvalidateBufferData, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( InvalidateFramebuffer, ( , FgGLenum _1, FgGLsizei _2, const FgGLenum * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( InvalidateSubFramebuffer, ( , FgGLenum _1, FgGLsizei _2, const FgGLenum * _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( MultiDrawArraysIndirect, ( , FgGLenum _1, const void * _2, FgGLsizei _3, FgGLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiDrawElementsIndirect, ( , FgGLenum _1, FgGLenum _2, const void * _3, FgGLsizei _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramInterfaceiv, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_NUM( GetProgramResourceIndex, FgGLuint, ( , FgGLuint _1, FgGLenum _2, const FgGLchar * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramResourceName, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, FgGLsizei * _5, FgGLchar * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramResourceiv, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, const FgGLenum * _5, FgGLsizei _6, FgGLsizei * _7, FgGLint * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_NUM( GetProgramResourceLocation, FgGLint, ( , FgGLuint _1, FgGLenum _2, const FgGLchar * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_NUM( GetProgramResourceLocationIndex, FgGLint, ( , FgGLuint _1, FgGLenum _2, const FgGLchar * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ShaderStorageBlockBinding, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexBufferRange, ( , FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLintptr _4, FgGLsizeiptr _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( TexStorage2DMultisample, ( , FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLboolean _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( TexStorage3DMultisample, ( , FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLboolean _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( TextureView, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLenum _4, FgGLuint _5, FgGLuint _6, FgGLuint _7, FgGLuint _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( BindVertexBuffer, ( , FgGLuint _1, FgGLuint _2, FgGLintptr _3, FgGLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribFormat, ( , FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLboolean _4, FgGLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribIFormat, ( , FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribLFormat, ( , FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribBinding, ( , FgGLuint _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexBindingDivisor, ( , FgGLuint _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DebugMessageControl, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, const FgGLuint * _5, FgGLboolean _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( DebugMessageInsert, ( , FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLenum _4, FgGLsizei _5, const FgGLchar * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( DebugMessageCallback, ( , FgGLDebugProc _1, const void * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( GetDebugMessageLog, FgGLuint, ( , FgGLuint _1, FgGLsizei _2, FgGLenum * _3, FgGLenum * _4, FgGLuint * _5, FgGLenum * _6, FgGLsizei * _7, FgGLchar * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( PushDebugGroup, ( , FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLchar * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( PopDebugGroup, (), () ) \
    FG_GL_FUNCTION_VOID( ObjectLabel, ( , FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLchar * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetObjectLabel, ( , FgGLenum _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLchar * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ObjectPtrLabel, ( , const void * _1, FgGLsizei _2, const FgGLchar * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetObjectPtrLabel, ( , const void * _1, FgGLsizei _2, FgGLsizei * _3, FgGLchar * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_VERSION_4_4 */ \
    FG_GL_FUNCTION_VOID( BufferStorage, ( , FgGLenum _1, FgGLsizeiptr _2, const void * _3, FgGLbitfield _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ClearTexImage, ( , FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLenum _4, const void * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ClearTexSubImage, ( , FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLenum _9, FgGLenum _10, const void * _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG_GL_FUNCTION_VOID( BindBuffersBase, ( , FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( BindBuffersRange, ( , FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLuint * _4, const FgGLintptr * _5, const FgGLsizeiptr * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( BindTextures, ( , FgGLuint _1, FgGLsizei _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( BindSamplers, ( , FgGLuint _1, FgGLsizei _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( BindImageTextures, ( , FgGLuint _1, FgGLsizei _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( BindVertexBuffers, ( , FgGLuint _1, FgGLsizei _2, const FgGLuint * _3, const FgGLintptr * _4, const FgGLsizei * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
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
    FG_GL_FUNCTION_NUM( GetTextureHandleARB, FgGLuint64, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( GetTextureSamplerHandleARB, FgGLuint64, ( , FgGLuint _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MakeTextureHandleResidentARB, ( , FgGLuint64 _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( MakeTextureHandleNonResidentARB, ( , FgGLuint64 _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( GetImageHandleARB, FgGLuint64, ( , FgGLuint _1, FgGLint _2, FgGLboolean _3, FgGLint _4, FgGLenum _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( MakeImageHandleResidentARB, ( , FgGLuint64 _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MakeImageHandleNonResidentARB, ( , FgGLuint64 _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( UniformHandleui64ARB, ( , FgGLint _1, FgGLuint64 _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( UniformHandleui64vARB, ( , FgGLint _1, FgGLsizei _2, const FgGLuint64 * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformHandleui64ARB, ( , FgGLuint _1, FgGLint _2, FgGLuint64 _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformHandleui64vARB, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint64 * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_NUM( IsTextureHandleResidentARB, FgGLboolean, ( , FgGLuint64 _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( IsImageHandleResidentARB, FgGLboolean, ( , FgGLuint64 _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1ui64ARB, ( , FgGLuint _1, FgGLuint64EXT _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1ui64vARB, ( , FgGLuint _1, const FgGLuint64EXT * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribLui64vARB, ( , FgGLuint _1, FgGLenum _2, FgGLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_ARB_blend_func_extended */ \
\
    /* GL_ARB_buffer_storage */ \
\
    /* GL_ARB_cl_event */ \
    FG_GL_FUNCTION_PTR( CreateSyncFromCLeventARB, FgGLsync, ( , FgGLclcontext _1, FgGLclevent _2, FgGLbitfield _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_ARB_clear_buffer_object */ \
\
    /* GL_ARB_clear_texture */ \
\
    /* GL_ARB_color_buffer_float */ \
    FG_GL_FUNCTION_VOID( ClampColorARB, ( , FgGLenum _1, FgGLenum _2 ), ( , _1, _2 ) ) \
\
    /* GL_ARB_compatibility */ \
\
    /* GL_ARB_compressed_texture_pixel_storage */ \
\
    /* GL_ARB_compute_shader */ \
\
    /* GL_ARB_compute_variable_group_size */ \
    FG_GL_FUNCTION_VOID( DispatchComputeGroupSizeARB, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_ARB_conservative_depth */ \
\
    /* GL_ARB_copy_buffer */ \
\
    /* GL_ARB_copy_image */ \
\
    /* GL_ARB_debug_output */ \
    FG_GL_FUNCTION_VOID( DebugMessageControlARB, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, const FgGLuint * _5, FgGLboolean _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( DebugMessageInsertARB, ( , FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLenum _4, FgGLsizei _5, const FgGLchar * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( DebugMessageCallbackARB, ( , FgGLDebugProcARB _1, const void * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( GetDebugMessageLogARB, FgGLuint, ( , FgGLuint _1, FgGLsizei _2, FgGLenum * _3, FgGLenum * _4, FgGLuint * _5, FgGLenum * _6, FgGLsizei * _7, FgGLchar * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
\
    /* GL_ARB_depth_buffer_float */ \
\
    /* GL_ARB_depth_clamp */ \
\
    /* GL_ARB_depth_texture */ \
\
    /* GL_ARB_draw_buffers */ \
    FG_GL_FUNCTION_VOID( DrawBuffersARB, ( , FgGLsizei _1, const FgGLenum * _2 ), ( , _1, _2 ) ) \
\
    /* GL_ARB_draw_buffers_blend */ \
    FG_GL_FUNCTION_VOID( BlendEquationiARB, ( , FgGLuint _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( BlendEquationSeparateiARB, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( BlendFunciARB, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( BlendFuncSeparateiARB, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLenum _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_ARB_draw_elements_base_vertex */ \
\
    /* GL_ARB_draw_indirect */ \
\
    /* GL_ARB_draw_instanced */ \
    FG_GL_FUNCTION_VOID( DrawArraysInstancedARB, ( , FgGLenum _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( DrawElementsInstancedARB, ( , FgGLenum _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
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
    FG_GL_FUNCTION_VOID( ProgramStringARB, ( , FgGLenum _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( BindProgramARB, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DeleteProgramsARB, ( , FgGLsizei _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GenProgramsARB, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameter4dARB, ( , FgGLenum _1, FgGLuint _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameter4dvARB, ( , FgGLenum _1, FgGLuint _2, const FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameter4fARB, ( , FgGLenum _1, FgGLuint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameter4fvARB, ( , FgGLenum _1, FgGLuint _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameter4dARB, ( , FgGLenum _1, FgGLuint _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameter4dvARB, ( , FgGLenum _1, FgGLuint _2, const FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameter4fARB, ( , FgGLenum _1, FgGLuint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameter4fvARB, ( , FgGLenum _1, FgGLuint _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramEnvParameterdvARB, ( , FgGLenum _1, FgGLuint _2, FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramEnvParameterfvARB, ( , FgGLenum _1, FgGLuint _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramLocalParameterdvARB, ( , FgGLenum _1, FgGLuint _2, FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramLocalParameterfvARB, ( , FgGLenum _1, FgGLuint _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramivARB, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramStringARB, ( , FgGLenum _1, FgGLenum _2, FgGLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_NUM( IsProgramARB, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
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
    FG_GL_FUNCTION_VOID( ProgramParameteriARB, ( , FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( FramebufferTextureARB, ( , FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( FramebufferTextureLayerARB, ( , FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( FramebufferTextureFaceARB, ( , FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLenum _5 ), ( , _1, _2, _3, _4, _5 ) ) \
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
    FG_GL_FUNCTION_VOID( ColorTable, ( , FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLenum _5, const FgGLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ColorTableParameterfv, ( , FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ColorTableParameteriv, ( , FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( CopyColorTable, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetColorTable, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetColorTableParameterfv, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetColorTableParameteriv, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ColorSubTable, ( , FgGLenum _1, FgGLsizei _2, FgGLsizei _3, FgGLenum _4, FgGLenum _5, const FgGLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( CopyColorSubTable, ( , FgGLenum _1, FgGLsizei _2, FgGLint _3, FgGLint _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ConvolutionFilter1D, ( , FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLenum _5, const FgGLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ConvolutionFilter2D, ( , FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, const FgGLvoid * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameterf, ( , FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameterfv, ( , FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameteri, ( , FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameteriv, ( , FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( CopyConvolutionFilter1D, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( CopyConvolutionFilter2D, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( GetConvolutionFilter, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetConvolutionParameterfv, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetConvolutionParameteriv, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetSeparableFilter, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4, FgGLvoid * _5, FgGLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( SeparableFilter2D, ( , FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, const FgGLvoid * _7, const FgGLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( GetHistogram, ( , FgGLenum _1, FgGLboolean _2, FgGLenum _3, FgGLenum _4, FgGLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetHistogramParameterfv, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetHistogramParameteriv, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetMinmax, ( , FgGLenum _1, FgGLboolean _2, FgGLenum _3, FgGLenum _4, FgGLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetMinmaxParameterfv, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetMinmaxParameteriv, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Histogram, ( , FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLboolean _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Minmax, ( , FgGLenum _1, FgGLenum _2, FgGLboolean _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ResetHistogram, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ResetMinmax, ( , FgGLenum _1 ), ( , _1 ) ) \
\
    /* GL_ARB_indirect_parameters */ \
    FG_GL_FUNCTION_VOID( MultiDrawArraysIndirectCountARB, ( , FgGLenum _1, FgGLintptr _2, FgGLintptr _3, FgGLsizei _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( MultiDrawElementsIndirectCountARB, ( , FgGLenum _1, FgGLenum _2, FgGLintptr _3, FgGLintptr _4, FgGLsizei _5, FgGLsizei _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_ARB_instanced_arrays */ \
    FG_GL_FUNCTION_VOID( VertexAttribDivisorARB, ( , FgGLuint _1, FgGLuint _2 ), ( , _1, _2 ) ) \
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
    FG_GL_FUNCTION_VOID( CurrentPaletteMatrixARB, ( , FgGLint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( MatrixIndexubvARB, ( , FgGLint _1, const FgGLubyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MatrixIndexusvARB, ( , FgGLint _1, const FgGLushort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MatrixIndexuivARB, ( , FgGLint _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MatrixIndexPointerARB, ( , FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_ARB_multi_bind */ \
\
    /* GL_ARB_multi_draw_indirect */ \
\
    /* GL_ARB_multisample */ \
    FG_GL_FUNCTION_VOID( SampleCoverageARB, ( , FgGLfloat _1, FgGLboolean _2 ), ( , _1, _2 ) ) \
\
    /* GL_ARB_multitexture */ \
    FG_GL_FUNCTION_VOID( ActiveTextureARB, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ClientActiveTextureARB, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1dARB, ( , FgGLenum _1, FgGLdouble _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1dvARB, ( , FgGLenum _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1fARB, ( , FgGLenum _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1fvARB, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1iARB, ( , FgGLenum _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1ivARB, ( , FgGLenum _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1sARB, ( , FgGLenum _1, FgGLshort _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1svARB, ( , FgGLenum _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2dARB, ( , FgGLenum _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2dvARB, ( , FgGLenum _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2fARB, ( , FgGLenum _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2fvARB, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2iARB, ( , FgGLenum _1, FgGLint _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2ivARB, ( , FgGLenum _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2sARB, ( , FgGLenum _1, FgGLshort _2, FgGLshort _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2svARB, ( , FgGLenum _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3dARB, ( , FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3dvARB, ( , FgGLenum _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3fARB, ( , FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3fvARB, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3iARB, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3ivARB, ( , FgGLenum _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3sARB, ( , FgGLenum _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3svARB, ( , FgGLenum _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4dARB, ( , FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4dvARB, ( , FgGLenum _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4fARB, ( , FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4fvARB, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4iARB, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4ivARB, ( , FgGLenum _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4sARB, ( , FgGLenum _1, FgGLshort _2, FgGLshort _3, FgGLshort _4, FgGLshort _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4svARB, ( , FgGLenum _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
\
    /* GL_ARB_occlusion_query */ \
    FG_GL_FUNCTION_VOID( GenQueriesARB, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DeleteQueriesARB, ( , FgGLsizei _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( IsQueryARB, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( BeginQueryARB, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( EndQueryARB, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GetQueryivARB, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetQueryObjectivARB, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetQueryObjectuivARB, ( , FgGLuint _1, FgGLenum _2, FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_ARB_occlusion_query2 */ \
\
    /* GL_ARB_pixel_buffer_object */ \
\
    /* GL_ARB_point_parameters */ \
    FG_GL_FUNCTION_VOID( PointParameterfARB, ( , FgGLenum _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( PointParameterfvARB, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
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
    FG_GL_FUNCTION_NUM( GetGraphicsResetStatusARB, FgGLenum, (), () ) \
    FG_GL_FUNCTION_VOID( GetnTexImageARB, ( , FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLenum _4, FgGLsizei _5, FgGLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ReadnPixelsARB, ( , FgGLint _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, FgGLsizei _7, FgGLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( GetnCompressedTexImageARB, ( , FgGLenum _1, FgGLint _2, FgGLsizei _3, FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetnUniformfvARB, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetnUniformivARB, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetnUniformuivARB, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetnUniformdvARB, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetnMapdvARB, ( , FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetnMapfvARB, ( , FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetnMapivARB, ( , FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetnPixelMapfvARB, ( , FgGLenum _1, FgGLsizei _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetnPixelMapuivARB, ( , FgGLenum _1, FgGLsizei _2, FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetnPixelMapusvARB, ( , FgGLenum _1, FgGLsizei _2, FgGLushort * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetnPolygonStippleARB, ( , FgGLsizei _1, FgGLubyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetnColorTableARB, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, FgGLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetnConvolutionFilterARB, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, FgGLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetnSeparableFilterARB, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, FgGLvoid * _5, FgGLsizei _6, FgGLvoid * _7, FgGLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( GetnHistogramARB, ( , FgGLenum _1, FgGLboolean _2, FgGLenum _3, FgGLenum _4, FgGLsizei _5, FgGLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( GetnMinmaxARB, ( , FgGLenum _1, FgGLboolean _2, FgGLenum _3, FgGLenum _4, FgGLsizei _5, FgGLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_ARB_robustness_isolation */ \
\
    /* GL_ARB_sample_shading */ \
    FG_GL_FUNCTION_VOID( MinSampleShadingARB, ( , FgGLfloat _1 ), ( , _1 ) ) \
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
    FG_GL_FUNCTION_VOID( DeleteObjectARB, ( , FgGLhandleARB _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( GetHandleARB, FgGLhandleARB, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( DetachObjectARB, ( , FgGLhandleARB _1, FgGLhandleARB _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( CreateShaderObjectARB, FgGLhandleARB, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ShaderSourceARB, ( , FgGLhandleARB _1, FgGLsizei _2, const FgGLcharARB ** _3, const FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( CompileShaderARB, ( , FgGLhandleARB _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( CreateProgramObjectARB, FgGLhandleARB, (), () ) \
    FG_GL_FUNCTION_VOID( AttachObjectARB, ( , FgGLhandleARB _1, FgGLhandleARB _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( LinkProgramARB, ( , FgGLhandleARB _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( UseProgramObjectARB, ( , FgGLhandleARB _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ValidateProgramARB, ( , FgGLhandleARB _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Uniform1fARB, ( , FgGLint _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Uniform2fARB, ( , FgGLint _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform3fARB, ( , FgGLint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Uniform4fARB, ( , FgGLint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( Uniform1iARB, ( , FgGLint _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Uniform2iARB, ( , FgGLint _1, FgGLint _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform3iARB, ( , FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Uniform4iARB, ( , FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( Uniform1fvARB, ( , FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform2fvARB, ( , FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform3fvARB, ( , FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform4fvARB, ( , FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform1ivARB, ( , FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform2ivARB, ( , FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform3ivARB, ( , FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform4ivARB, ( , FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( UniformMatrix2fvARB, ( , FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( UniformMatrix3fvARB, ( , FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( UniformMatrix4fvARB, ( , FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetObjectParameterfvARB, ( , FgGLhandleARB _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetObjectParameterivARB, ( , FgGLhandleARB _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetInfoLogARB, ( , FgGLhandleARB _1, FgGLsizei _2, FgGLsizei * _3, FgGLcharARB * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetAttachedObjectsARB, ( , FgGLhandleARB _1, FgGLsizei _2, FgGLsizei * _3, FgGLhandleARB * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_NUM( GetUniformLocationARB, FgGLint, ( , FgGLhandleARB _1, const FgGLcharARB * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetActiveUniformARB, ( , FgGLhandleARB _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLint * _5, FgGLenum * _6, FgGLcharARB * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( GetUniformfvARB, ( , FgGLhandleARB _1, FgGLint _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetUniformivARB, ( , FgGLhandleARB _1, FgGLint _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetShaderSourceARB, ( , FgGLhandleARB _1, FgGLsizei _2, FgGLsizei * _3, FgGLcharARB * _4 ), ( , _1, _2, _3, _4 ) ) \
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
    FG_GL_FUNCTION_VOID( NamedStringARB, ( , FgGLenum _1, FgGLint _2, const FgGLchar * _3, FgGLint _4, const FgGLchar * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( DeleteNamedStringARB, ( , FgGLint _1, const FgGLchar * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( CompileShaderIncludeARB, ( , FgGLuint _1, FgGLsizei _2, const FgGLchar *const* _3, const FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_NUM( IsNamedStringARB, FgGLboolean, ( , FgGLint _1, const FgGLchar * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetNamedStringARB, ( , FgGLint _1, const FgGLchar * _2, FgGLsizei _3, FgGLint * _4, FgGLchar * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetNamedStringivARB, ( , FgGLint _1, const FgGLchar * _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_ARB_shading_language_packing */ \
\
    /* GL_ARB_shadow */ \
\
    /* GL_ARB_shadow_ambient */ \
\
    /* GL_ARB_sparse_texture */ \
    FG_GL_FUNCTION_VOID( TexPageCommitmentARB, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLboolean _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
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
    FG_GL_FUNCTION_VOID( TexBufferARB, ( , FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_ARB_texture_buffer_object_rgb32 */ \
\
    /* GL_ARB_texture_buffer_range */ \
\
    /* GL_ARB_texture_compression */ \
    FG_GL_FUNCTION_VOID( CompressedTexImage3DARB, ( , FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLsizei _8, const FgGLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION_VOID( CompressedTexImage2DARB, ( , FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLint _6, FgGLsizei _7, const FgGLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( CompressedTexImage1DARB, ( , FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLint _5, FgGLsizei _6, const FgGLvoid * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( CompressedTexSubImage3DARB, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLenum _9, FgGLsizei _10, const FgGLvoid * _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG_GL_FUNCTION_VOID( CompressedTexSubImage2DARB, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLenum _7, FgGLsizei _8, const FgGLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION_VOID( CompressedTexSubImage1DARB, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLenum _5, FgGLsizei _6, const FgGLvoid * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( GetCompressedTexImageARB, ( , FgGLenum _1, FgGLint _2, FgGLvoid * _3 ), ( , _1, _2, _3 ) ) \
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
    FG_GL_FUNCTION_VOID( LoadTransposeMatrixfARB, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( LoadTransposeMatrixdARB, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( MultTransposeMatrixfARB, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( MultTransposeMatrixdARB, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
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
    FG_GL_FUNCTION_VOID( WeightbvARB, ( , FgGLint _1, const FgGLbyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( WeightsvARB, ( , FgGLint _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( WeightivARB, ( , FgGLint _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( WeightfvARB, ( , FgGLint _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( WeightdvARB, ( , FgGLint _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( WeightubvARB, ( , FgGLint _1, const FgGLubyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( WeightusvARB, ( , FgGLint _1, const FgGLushort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( WeightuivARB, ( , FgGLint _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( WeightPointerARB, ( , FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexBlendARB, ( , FgGLint _1 ), ( , _1 ) ) \
\
    /* GL_ARB_vertex_buffer_object */ \
    FG_GL_FUNCTION_VOID( BindBufferARB, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DeleteBuffersARB, ( , FgGLsizei _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GenBuffersARB, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( IsBufferARB, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( BufferDataARB, ( , FgGLenum _1, FgGLsizeiptrARB _2, const FgGLvoid * _3, FgGLenum _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( BufferSubDataARB, ( , FgGLenum _1, FgGLintptrARB _2, FgGLsizeiptrARB _3, const FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetBufferSubDataARB, ( , FgGLenum _1, FgGLintptrARB _2, FgGLsizeiptrARB _3, FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_PTR( MapBufferARB, void *, ( , FgGLenum _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( UnmapBufferARB, FgGLboolean, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GetBufferParameterivARB, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetBufferPointervARB, ( , FgGLenum _1, FgGLenum _2, FgGLvoid ** _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_ARB_vertex_program */ \
    FG_GL_FUNCTION_VOID( VertexAttrib1dARB, ( , FgGLuint _1, FgGLdouble _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1dvARB, ( , FgGLuint _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1fARB, ( , FgGLuint _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1fvARB, ( , FgGLuint _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1sARB, ( , FgGLuint _1, FgGLshort _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1svARB, ( , FgGLuint _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2dARB, ( , FgGLuint _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2dvARB, ( , FgGLuint _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2fARB, ( , FgGLuint _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2fvARB, ( , FgGLuint _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2sARB, ( , FgGLuint _1, FgGLshort _2, FgGLshort _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2svARB, ( , FgGLuint _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3dARB, ( , FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3dvARB, ( , FgGLuint _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3fARB, ( , FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3fvARB, ( , FgGLuint _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3sARB, ( , FgGLuint _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3svARB, ( , FgGLuint _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4NbvARB, ( , FgGLuint _1, const FgGLbyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4NivARB, ( , FgGLuint _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4NsvARB, ( , FgGLuint _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4NubARB, ( , FgGLuint _1, FgGLubyte _2, FgGLubyte _3, FgGLubyte _4, FgGLubyte _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4NubvARB, ( , FgGLuint _1, const FgGLubyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4NuivARB, ( , FgGLuint _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4NusvARB, ( , FgGLuint _1, const FgGLushort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4bvARB, ( , FgGLuint _1, const FgGLbyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4dARB, ( , FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4dvARB, ( , FgGLuint _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4fARB, ( , FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4fvARB, ( , FgGLuint _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4ivARB, ( , FgGLuint _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4sARB, ( , FgGLuint _1, FgGLshort _2, FgGLshort _3, FgGLshort _4, FgGLshort _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4svARB, ( , FgGLuint _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4ubvARB, ( , FgGLuint _1, const FgGLubyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4uivARB, ( , FgGLuint _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4usvARB, ( , FgGLuint _1, const FgGLushort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribPointerARB, ( , FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLboolean _4, FgGLsizei _5, const FgGLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( EnableVertexAttribArrayARB, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( DisableVertexAttribArrayARB, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribdvARB, ( , FgGLuint _1, FgGLenum _2, FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribfvARB, ( , FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribivARB, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribPointervARB, ( , FgGLuint _1, FgGLenum _2, FgGLvoid ** _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_ARB_vertex_shader */ \
    FG_GL_FUNCTION_VOID( BindAttribLocationARB, ( , FgGLhandleARB _1, FgGLuint _2, const FgGLcharARB * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetActiveAttribARB, ( , FgGLhandleARB _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLint * _5, FgGLenum * _6, FgGLcharARB * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_NUM( GetAttribLocationARB, FgGLint, ( , FgGLhandleARB _1, const FgGLcharARB * _2 ), ( , _1, _2 ) ) \
\
    /* GL_ARB_vertex_type_10f_11f_11f_rev */ \
\
    /* GL_ARB_vertex_type_2_10_10_10_rev */ \
\
    /* GL_ARB_viewport_array */ \
\
    /* GL_ARB_window_pos */ \
    FG_GL_FUNCTION_VOID( WindowPos2dARB, ( , FgGLdouble _1, FgGLdouble _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos2dvARB, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos2fARB, ( , FgGLfloat _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos2fvARB, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos2iARB, ( , FgGLint _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos2ivARB, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos2sARB, ( , FgGLshort _1, FgGLshort _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos2svARB, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3dARB, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3dvARB, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3fARB, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3fvARB, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3iARB, ( , FgGLint _1, FgGLint _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3ivARB, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3sARB, ( , FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3svARB, ( , const FgGLshort * _1 ), ( , _1 ) ) \
\
    /* GL_KHR_debug */ \
\
    /* GL_KHR_texture_compression_astc_ldr */ \
\
    /* GL_OES_byte_coordinates */ \
    FG_GL_FUNCTION_VOID( MultiTexCoord1bOES, ( , FgGLenum _1, FgGLbyte _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1bvOES, ( , FgGLenum _1, const FgGLbyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2bOES, ( , FgGLenum _1, FgGLbyte _2, FgGLbyte _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2bvOES, ( , FgGLenum _1, const FgGLbyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3bOES, ( , FgGLenum _1, FgGLbyte _2, FgGLbyte _3, FgGLbyte _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3bvOES, ( , FgGLenum _1, const FgGLbyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4bOES, ( , FgGLenum _1, FgGLbyte _2, FgGLbyte _3, FgGLbyte _4, FgGLbyte _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4bvOES, ( , FgGLenum _1, const FgGLbyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord1bOES, ( , FgGLbyte _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord1bvOES, ( , const FgGLbyte * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2bOES, ( , FgGLbyte _1, FgGLbyte _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2bvOES, ( , const FgGLbyte * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord3bOES, ( , FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord3bvOES, ( , const FgGLbyte * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord4bOES, ( , FgGLbyte _1, FgGLbyte _2, FgGLbyte _3, FgGLbyte _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord4bvOES, ( , const FgGLbyte * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Vertex2bOES, ( , FgGLbyte _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Vertex2bvOES, ( , const FgGLbyte * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Vertex3bOES, ( , FgGLbyte _1, FgGLbyte _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Vertex3bvOES, ( , const FgGLbyte * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Vertex4bOES, ( , FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Vertex4bvOES, ( , const FgGLbyte * _1 ), ( , _1 ) ) \
\
    /* GL_OES_compressed_paletted_texture */ \
\
    /* GL_OES_fixed_point */ \
    FG_GL_FUNCTION_VOID( AlphaFuncxOES, ( , FgGLenum _1, FgGLfixed _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( ClearColorxOES, ( , FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ClearDepthxOES, ( , FgGLfixed _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ClipPlanexOES, ( , FgGLenum _1, const FgGLfixed * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Color4xOES, ( , FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( DepthRangexOES, ( , FgGLfixed _1, FgGLfixed _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( FogxOES, ( , FgGLenum _1, FgGLfixed _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( FogxvOES, ( , FgGLenum _1, const FgGLfixed * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( FrustumxOES, ( , FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4, FgGLfixed _5, FgGLfixed _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( GetClipPlanexOES, ( , FgGLenum _1, FgGLfixed * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetFixedvOES, ( , FgGLenum _1, FgGLfixed * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetTexEnvxvOES, ( , FgGLenum _1, FgGLenum _2, FgGLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetTexParameterxvOES, ( , FgGLenum _1, FgGLenum _2, FgGLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( LightModelxOES, ( , FgGLenum _1, FgGLfixed _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( LightModelxvOES, ( , FgGLenum _1, const FgGLfixed * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( LightxOES, ( , FgGLenum _1, FgGLenum _2, FgGLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( LightxvOES, ( , FgGLenum _1, FgGLenum _2, const FgGLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( LineWidthxOES, ( , FgGLfixed _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( LoadMatrixxOES, ( , const FgGLfixed * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( MaterialxOES, ( , FgGLenum _1, FgGLenum _2, FgGLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MaterialxvOES, ( , FgGLenum _1, FgGLenum _2, const FgGLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MultMatrixxOES, ( , const FgGLfixed * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4xOES, ( , FgGLenum _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4, FgGLfixed _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( Normal3xOES, ( , FgGLfixed _1, FgGLfixed _2, FgGLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( OrthoxOES, ( , FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4, FgGLfixed _5, FgGLfixed _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( PointParameterxvOES, ( , FgGLenum _1, const FgGLfixed * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( PointSizexOES, ( , FgGLfixed _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( PolygonOffsetxOES, ( , FgGLfixed _1, FgGLfixed _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( RotatexOES, ( , FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( SampleCoverageOES, ( , FgGLfixed _1, FgGLboolean _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( ScalexOES, ( , FgGLfixed _1, FgGLfixed _2, FgGLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexEnvxOES, ( , FgGLenum _1, FgGLenum _2, FgGLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexEnvxvOES, ( , FgGLenum _1, FgGLenum _2, const FgGLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexParameterxOES, ( , FgGLenum _1, FgGLenum _2, FgGLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexParameterxvOES, ( , FgGLenum _1, FgGLenum _2, const FgGLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TranslatexOES, ( , FgGLfixed _1, FgGLfixed _2, FgGLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( AccumxOES, ( , FgGLenum _1, FgGLfixed _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( BitmapxOES, ( , FgGLsizei _1, FgGLsizei _2, FgGLfixed _3, FgGLfixed _4, FgGLfixed _5, FgGLfixed _6, const FgGLubyte * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( BlendColorxOES, ( , FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ClearAccumxOES, ( , FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Color3xOES, ( , FgGLfixed _1, FgGLfixed _2, FgGLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Color3xvOES, ( , const FgGLfixed * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Color4xvOES, ( , const FgGLfixed * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameterxOES, ( , FgGLenum _1, FgGLenum _2, FgGLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameterxvOES, ( , FgGLenum _1, FgGLenum _2, const FgGLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( EvalCoord1xOES, ( , FgGLfixed _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( EvalCoord1xvOES, ( , const FgGLfixed * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( EvalCoord2xOES, ( , FgGLfixed _1, FgGLfixed _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( EvalCoord2xvOES, ( , const FgGLfixed * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( FeedbackBufferxOES, ( , FgGLsizei _1, FgGLenum _2, const FgGLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetConvolutionParameterxvOES, ( , FgGLenum _1, FgGLenum _2, FgGLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetHistogramParameterxvOES, ( , FgGLenum _1, FgGLenum _2, FgGLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetLightxOES, ( , FgGLenum _1, FgGLenum _2, FgGLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetMapxvOES, ( , FgGLenum _1, FgGLenum _2, FgGLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetMaterialxOES, ( , FgGLenum _1, FgGLenum _2, FgGLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetPixelMapxv, ( , FgGLenum _1, FgGLint _2, FgGLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetTexGenxvOES, ( , FgGLenum _1, FgGLenum _2, FgGLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetTexLevelParameterxvOES, ( , FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLfixed * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( IndexxOES, ( , FgGLfixed _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( IndexxvOES, ( , const FgGLfixed * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( LoadTransposeMatrixxOES, ( , const FgGLfixed * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Map1xOES, ( , FgGLenum _1, FgGLfixed _2, FgGLfixed _3, FgGLint _4, FgGLint _5, FgGLfixed _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( Map2xOES, ( , FgGLenum _1, FgGLfixed _2, FgGLfixed _3, FgGLint _4, FgGLint _5, FgGLfixed _6, FgGLfixed _7, FgGLint _8, FgGLint _9, FgGLfixed _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION_VOID( MapGrid1xOES, ( , FgGLint _1, FgGLfixed _2, FgGLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MapGrid2xOES, ( , FgGLint _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4, FgGLfixed _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( MultTransposeMatrixxOES, ( , const FgGLfixed * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1xOES, ( , FgGLenum _1, FgGLfixed _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1xvOES, ( , FgGLenum _1, const FgGLfixed * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2xOES, ( , FgGLenum _1, FgGLfixed _2, FgGLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2xvOES, ( , FgGLenum _1, const FgGLfixed * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3xOES, ( , FgGLenum _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3xvOES, ( , FgGLenum _1, const FgGLfixed * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4xvOES, ( , FgGLenum _1, const FgGLfixed * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Normal3xvOES, ( , const FgGLfixed * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( PassThroughxOES, ( , FgGLfixed _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( PixelMapx, ( , FgGLenum _1, FgGLint _2, const FgGLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( PixelStorex, ( , FgGLenum _1, FgGLfixed _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( PixelTransferxOES, ( , FgGLenum _1, FgGLfixed _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( PixelZoomxOES, ( , FgGLfixed _1, FgGLfixed _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( PrioritizeTexturesxOES, ( , FgGLsizei _1, const FgGLuint * _2, const FgGLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos2xOES, ( , FgGLfixed _1, FgGLfixed _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos2xvOES, ( , const FgGLfixed * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos3xOES, ( , FgGLfixed _1, FgGLfixed _2, FgGLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos3xvOES, ( , const FgGLfixed * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos4xOES, ( , FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( RasterPos4xvOES, ( , const FgGLfixed * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( RectxOES, ( , FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( RectxvOES, ( , const FgGLfixed * _1, const FgGLfixed * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord1xOES, ( , FgGLfixed _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord1xvOES, ( , const FgGLfixed * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2xOES, ( , FgGLfixed _1, FgGLfixed _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2xvOES, ( , const FgGLfixed * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord3xOES, ( , FgGLfixed _1, FgGLfixed _2, FgGLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord3xvOES, ( , const FgGLfixed * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord4xOES, ( , FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord4xvOES, ( , const FgGLfixed * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexGenxOES, ( , FgGLenum _1, FgGLenum _2, FgGLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexGenxvOES, ( , FgGLenum _1, FgGLenum _2, const FgGLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Vertex2xOES, ( , FgGLfixed _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Vertex2xvOES, ( , const FgGLfixed * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Vertex3xOES, ( , FgGLfixed _1, FgGLfixed _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Vertex3xvOES, ( , const FgGLfixed * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Vertex4xOES, ( , FgGLfixed _1, FgGLfixed _2, FgGLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Vertex4xvOES, ( , const FgGLfixed * _1 ), ( , _1 ) ) \
\
    /* GL_OES_query_matrix */ \
    FG_GL_FUNCTION_NUM( QueryMatrixxOES, FgGLbitfield, ( , FgGLfixed * _1, FgGLint * _2 ), ( , _1, _2 ) ) \
\
    /* GL_OES_read_format */ \
\
    /* GL_OES_single_precision */ \
    FG_GL_FUNCTION_VOID( ClearDepthfOES, ( , FgGLclampf _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ClipPlanefOES, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DepthRangefOES, ( , FgGLclampf _1, FgGLclampf _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( FrustumfOES, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( GetClipPlanefOES, ( , FgGLenum _1, FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( OrthofOES, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_3DFX_multisample */ \
\
    /* GL_3DFX_tbuffer */ \
    FG_GL_FUNCTION_VOID( TbufferMask3DFX, ( , FgGLuint _1 ), ( , _1 ) ) \
\
    /* GL_3DFX_texture_compression_FXT1 */ \
\
    /* GL_AMD_blend_minmax_factor */ \
\
    /* GL_AMD_conservative_depth */ \
\
    /* GL_AMD_debug_output */ \
    FG_GL_FUNCTION_VOID( DebugMessageEnableAMD, ( , FgGLenum _1, FgGLenum _2, FgGLsizei _3, const FgGLuint * _4, FgGLboolean _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( DebugMessageInsertAMD, ( , FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, const FgGLchar * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( DebugMessageCallbackAMD, ( , FgGLDebugProcAMD _1, void * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( GetDebugMessageLogAMD, FgGLuint, ( , FgGLuint _1, FgGLsizei _2, FgGLenum * _3, FgGLuint * _4, FgGLuint * _5, FgGLsizei * _6, FgGLchar * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
\
    /* GL_AMD_depth_clamp_separate */ \
\
    /* GL_AMD_draw_buffers_blend */ \
    FG_GL_FUNCTION_VOID( BlendFuncIndexedAMD, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( BlendFuncSeparateIndexedAMD, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLenum _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( BlendEquationIndexedAMD, ( , FgGLuint _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( BlendEquationSeparateIndexedAMD, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_AMD_interleaved_elements */ \
    FG_GL_FUNCTION_VOID( VertexAttribParameteriAMD, ( , FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_AMD_multi_draw_indirect */ \
    FG_GL_FUNCTION_VOID( MultiDrawArraysIndirectAMD, ( , FgGLenum _1, const FgGLvoid * _2, FgGLsizei _3, FgGLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiDrawElementsIndirectAMD, ( , FgGLenum _1, FgGLenum _2, const FgGLvoid * _3, FgGLsizei _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_AMD_name_gen_delete */ \
    FG_GL_FUNCTION_VOID( GenNamesAMD, ( , FgGLenum _1, FgGLuint _2, FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( DeleteNamesAMD, ( , FgGLenum _1, FgGLuint _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_NUM( IsNameAMD, FgGLboolean, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
\
    /* GL_AMD_performance_monitor */ \
    FG_GL_FUNCTION_VOID( GetPerfMonitorGroupsAMD, ( , FgGLint * _1, FgGLsizei _2, FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetPerfMonitorCountersAMD, ( , FgGLuint _1, FgGLint * _2, FgGLint * _3, FgGLsizei _4, FgGLuint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetPerfMonitorGroupStringAMD, ( , FgGLuint _1, FgGLsizei _2, FgGLsizei * _3, FgGLchar * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetPerfMonitorCounterStringAMD, ( , FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLchar * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetPerfMonitorCounterInfoAMD, ( , FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GenPerfMonitorsAMD, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DeletePerfMonitorsAMD, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( SelectPerfMonitorCountersAMD, ( , FgGLuint _1, FgGLboolean _2, FgGLuint _3, FgGLint _4, FgGLuint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( BeginPerfMonitorAMD, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( EndPerfMonitorAMD, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GetPerfMonitorCounterDataAMD, ( , FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLuint * _4, FgGLint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_AMD_pinned_memory */ \
\
    /* GL_AMD_query_buffer_object */ \
\
    /* GL_AMD_sample_positions */ \
    FG_GL_FUNCTION_VOID( SetMultisamplefvAMD, ( , FgGLenum _1, FgGLuint _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
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
    FG_GL_FUNCTION_VOID( TexStorageSparseAMD, ( , FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLbitfield _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( TextureStorageSparseAMD, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLbitfield _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
\
    /* GL_AMD_stencil_operation_extended */ \
    FG_GL_FUNCTION_VOID( StencilOpValueAMD, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
\
    /* GL_AMD_texture_texture4 */ \
\
    /* GL_AMD_transform_feedback3_lines_triangles */ \
\
    /* GL_AMD_vertex_shader_layer */ \
\
    /* GL_AMD_vertex_shader_tessellator */ \
    FG_GL_FUNCTION_VOID( TessellationFactorAMD, ( , FgGLfloat _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TessellationModeAMD, ( , FgGLenum _1 ), ( , _1 ) ) \
\
    /* GL_AMD_vertex_shader_viewport_index */ \
\
    /* GL_APPLE_aux_depth_stencil */ \
\
    /* GL_APPLE_client_storage */ \
\
    /* GL_APPLE_element_array */ \
    FG_GL_FUNCTION_VOID( ElementPointerAPPLE, ( , FgGLenum _1, const FgGLvoid * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DrawElementArrayAPPLE, ( , FgGLenum _1, FgGLint _2, FgGLsizei _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( DrawRangeElementArrayAPPLE, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLint _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( MultiDrawElementArrayAPPLE, ( , FgGLenum _1, const FgGLint * _2, const FgGLsizei * _3, FgGLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiDrawRangeElementArrayAPPLE, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, const FgGLint * _4, const FgGLsizei * _5, FgGLsizei _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_APPLE_fence */ \
    FG_GL_FUNCTION_VOID( GenFencesAPPLE, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DeleteFencesAPPLE, ( , FgGLsizei _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( SetFenceAPPLE, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( IsFenceAPPLE, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( TestFenceAPPLE, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( FinishFenceAPPLE, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( TestObjectAPPLE, FgGLboolean, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( FinishObjectAPPLE, ( , FgGLenum _1, FgGLint _2 ), ( , _1, _2 ) ) \
\
    /* GL_APPLE_float_pixels */ \
\
    /* GL_APPLE_flush_buffer_range */ \
    FG_GL_FUNCTION_VOID( BufferParameteriAPPLE, ( , FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( FlushMappedBufferRangeAPPLE, ( , FgGLenum _1, FgGLintptr _2, FgGLsizeiptr _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_APPLE_object_purgeable */ \
    FG_GL_FUNCTION_NUM( ObjectPurgeableAPPLE, FgGLenum, ( , FgGLenum _1, FgGLuint _2, FgGLenum _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_NUM( ObjectUnpurgeableAPPLE, FgGLenum, ( , FgGLenum _1, FgGLuint _2, FgGLenum _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetObjectParameterivAPPLE, ( , FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_APPLE_rgb_422 */ \
\
    /* GL_APPLE_row_bytes */ \
\
    /* GL_APPLE_specular_vector */ \
\
    /* GL_APPLE_texture_range */ \
    FG_GL_FUNCTION_VOID( TextureRangeAPPLE, ( , FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetTexParameterPointervAPPLE, ( , FgGLenum _1, FgGLenum _2, FgGLvoid ** _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_APPLE_transform_hint */ \
\
    /* GL_APPLE_vertex_array_object */ \
    FG_GL_FUNCTION_VOID( BindVertexArrayAPPLE, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( DeleteVertexArraysAPPLE, ( , FgGLsizei _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GenVertexArraysAPPLE, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( IsVertexArrayAPPLE, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
\
    /* GL_APPLE_vertex_array_range */ \
    FG_GL_FUNCTION_VOID( VertexArrayRangeAPPLE, ( , FgGLsizei _1, FgGLvoid * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( FlushVertexArrayRangeAPPLE, ( , FgGLsizei _1, FgGLvoid * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexArrayParameteriAPPLE, ( , FgGLenum _1, FgGLint _2 ), ( , _1, _2 ) ) \
\
    /* GL_APPLE_vertex_program_evaluators */ \
    FG_GL_FUNCTION_VOID( EnableVertexAttribAPPLE, ( , FgGLuint _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DisableVertexAttribAPPLE, ( , FgGLuint _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( IsVertexAttribEnabledAPPLE, FgGLboolean, ( , FgGLuint _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MapVertexAttrib1dAPPLE, ( , FgGLuint _1, FgGLuint _2, FgGLdouble _3, FgGLdouble _4, FgGLint _5, FgGLint _6, const FgGLdouble * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( MapVertexAttrib1fAPPLE, ( , FgGLuint _1, FgGLuint _2, FgGLfloat _3, FgGLfloat _4, FgGLint _5, FgGLint _6, const FgGLfloat * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( MapVertexAttrib2dAPPLE, ( , FgGLuint _1, FgGLuint _2, FgGLdouble _3, FgGLdouble _4, FgGLint _5, FgGLint _6, FgGLdouble _7, FgGLdouble _8, FgGLint _9, FgGLint _10, const FgGLdouble * _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG_GL_FUNCTION_VOID( MapVertexAttrib2fAPPLE, ( , FgGLuint _1, FgGLuint _2, FgGLfloat _3, FgGLfloat _4, FgGLint _5, FgGLint _6, FgGLfloat _7, FgGLfloat _8, FgGLint _9, FgGLint _10, const FgGLfloat * _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
\
    /* GL_APPLE_ycbcr_422 */ \
\
    /* GL_ATI_draw_buffers */ \
    FG_GL_FUNCTION_VOID( DrawBuffersATI, ( , FgGLsizei _1, const FgGLenum * _2 ), ( , _1, _2 ) ) \
\
    /* GL_ATI_element_array */ \
    FG_GL_FUNCTION_VOID( ElementPointerATI, ( , FgGLenum _1, const FgGLvoid * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DrawElementArrayATI, ( , FgGLenum _1, FgGLsizei _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DrawRangeElementArrayATI, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_ATI_envmap_bumpmap */ \
    FG_GL_FUNCTION_VOID( TexBumpParameterivATI, ( , FgGLenum _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexBumpParameterfvATI, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetTexBumpParameterivATI, ( , FgGLenum _1, FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetTexBumpParameterfvATI, ( , FgGLenum _1, FgGLfloat * _2 ), ( , _1, _2 ) ) \
\
    /* GL_ATI_fragment_shader */ \
    FG_GL_FUNCTION_NUM( GenFragmentShadersATI, FgGLuint, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( BindFragmentShaderATI, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( DeleteFragmentShaderATI, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( BeginFragmentShaderATI, (), () ) \
    FG_GL_FUNCTION_VOID( EndFragmentShaderATI, (), () ) \
    FG_GL_FUNCTION_VOID( PassTexCoordATI, ( , FgGLuint _1, FgGLuint _2, FgGLenum _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SampleMapATI, ( , FgGLuint _1, FgGLuint _2, FgGLenum _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ColorFragmentOp1ATI, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6, FgGLuint _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( ColorFragmentOp2ATI, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6, FgGLuint _7, FgGLuint _8, FgGLuint _9, FgGLuint _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION_VOID( ColorFragmentOp3ATI, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6, FgGLuint _7, FgGLuint _8, FgGLuint _9, FgGLuint _10, FgGLuint _11, FgGLuint _12, FgGLuint _13 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 ) ) \
    FG_GL_FUNCTION_VOID( AlphaFragmentOp1ATI, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( AlphaFragmentOp2ATI, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6, FgGLuint _7, FgGLuint _8, FgGLuint _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION_VOID( AlphaFragmentOp3ATI, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6, FgGLuint _7, FgGLuint _8, FgGLuint _9, FgGLuint _10, FgGLuint _11, FgGLuint _12 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FG_GL_FUNCTION_VOID( SetFragmentShaderConstantATI, ( , FgGLuint _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
\
    /* GL_ATI_map_object_buffer */ \
    FG_GL_FUNCTION_PTR( MapObjectBufferATI, void *, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( UnmapObjectBufferATI, ( , FgGLuint _1 ), ( , _1 ) ) \
\
    /* GL_ATI_meminfo */ \
\
    /* GL_ATI_pixel_format_float */ \
\
    /* GL_ATI_pn_triangles */ \
    FG_GL_FUNCTION_VOID( PNTrianglesiATI, ( , FgGLenum _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( PNTrianglesfATI, ( , FgGLenum _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
\
    /* GL_ATI_separate_stencil */ \
    FG_GL_FUNCTION_VOID( StencilOpSeparateATI, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( StencilFuncSeparateATI, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
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
    FG_GL_FUNCTION_NUM( NewObjectBufferATI, FgGLuint, ( , FgGLsizei _1, const FgGLvoid * _2, FgGLenum _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_NUM( IsObjectBufferATI, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( UpdateObjectBufferATI, ( , FgGLuint _1, FgGLuint _2, FgGLsizei _3, const FgGLvoid * _4, FgGLenum _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetObjectBufferfvATI, ( , FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetObjectBufferivATI, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( FreeObjectBufferATI, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ArrayObjectATI, ( , FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLuint _5, FgGLuint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( GetArrayObjectfvATI, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetArrayObjectivATI, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VariantArrayObjectATI, ( , FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLuint _4, FgGLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetVariantArrayObjectfvATI, ( , FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVariantArrayObjectivATI, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_ATI_vertex_attrib_array_object */ \
    FG_GL_FUNCTION_VOID( VertexAttribArrayObjectATI, ( , FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLboolean _4, FgGLsizei _5, FgGLuint _6, FgGLuint _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribArrayObjectfvATI, ( , FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribArrayObjectivATI, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_ATI_vertex_streams */ \
    FG_GL_FUNCTION_VOID( VertexStream1sATI, ( , FgGLenum _1, FgGLshort _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream1svATI, ( , FgGLenum _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream1iATI, ( , FgGLenum _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream1ivATI, ( , FgGLenum _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream1fATI, ( , FgGLenum _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream1fvATI, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream1dATI, ( , FgGLenum _1, FgGLdouble _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream1dvATI, ( , FgGLenum _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream2sATI, ( , FgGLenum _1, FgGLshort _2, FgGLshort _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream2svATI, ( , FgGLenum _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream2iATI, ( , FgGLenum _1, FgGLint _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream2ivATI, ( , FgGLenum _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream2fATI, ( , FgGLenum _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream2fvATI, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream2dATI, ( , FgGLenum _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream2dvATI, ( , FgGLenum _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream3sATI, ( , FgGLenum _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream3svATI, ( , FgGLenum _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream3iATI, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream3ivATI, ( , FgGLenum _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream3fATI, ( , FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream3fvATI, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream3dATI, ( , FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream3dvATI, ( , FgGLenum _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream4sATI, ( , FgGLenum _1, FgGLshort _2, FgGLshort _3, FgGLshort _4, FgGLshort _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream4svATI, ( , FgGLenum _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream4iATI, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream4ivATI, ( , FgGLenum _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream4fATI, ( , FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream4fvATI, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream4dATI, ( , FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexStream4dvATI, ( , FgGLenum _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( NormalStream3bATI, ( , FgGLenum _1, FgGLbyte _2, FgGLbyte _3, FgGLbyte _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( NormalStream3bvATI, ( , FgGLenum _1, const FgGLbyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( NormalStream3sATI, ( , FgGLenum _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( NormalStream3svATI, ( , FgGLenum _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( NormalStream3iATI, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( NormalStream3ivATI, ( , FgGLenum _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( NormalStream3fATI, ( , FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( NormalStream3fvATI, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( NormalStream3dATI, ( , FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( NormalStream3dvATI, ( , FgGLenum _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( ClientActiveVertexStreamATI, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( VertexBlendEnviATI, ( , FgGLenum _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexBlendEnvfATI, ( , FgGLenum _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_422_pixels */ \
\
    /* GL_EXT_abgr */ \
\
    /* GL_EXT_bgra */ \
\
    /* GL_EXT_bindable_uniform */ \
    FG_GL_FUNCTION_VOID( UniformBufferEXT, ( , FgGLuint _1, FgGLint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_NUM( GetUniformBufferSizeEXT, FgGLint, ( , FgGLuint _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( GetUniformOffsetEXT, FgGLintptr, ( , FgGLuint _1, FgGLint _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_blend_color */ \
    FG_GL_FUNCTION_VOID( BlendColorEXT, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_blend_equation_separate */ \
    FG_GL_FUNCTION_VOID( BlendEquationSeparateEXT, ( , FgGLenum _1, FgGLenum _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_blend_func_separate */ \
    FG_GL_FUNCTION_VOID( BlendFuncSeparateEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_blend_logic_op */ \
\
    /* GL_EXT_blend_minmax */ \
    FG_GL_FUNCTION_VOID( BlendEquationEXT, ( , FgGLenum _1 ), ( , _1 ) ) \
\
    /* GL_EXT_blend_subtract */ \
\
    /* GL_EXT_clip_volume_hint */ \
\
    /* GL_EXT_cmyka */ \
\
    /* GL_EXT_color_subtable */ \
    FG_GL_FUNCTION_VOID( ColorSubTableEXT, ( , FgGLenum _1, FgGLsizei _2, FgGLsizei _3, FgGLenum _4, FgGLenum _5, const FgGLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( CopyColorSubTableEXT, ( , FgGLenum _1, FgGLsizei _2, FgGLint _3, FgGLint _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_compiled_vertex_array */ \
    FG_GL_FUNCTION_VOID( LockArraysEXT, ( , FgGLint _1, FgGLsizei _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( UnlockArraysEXT, (), () ) \
\
    /* GL_EXT_convolution */ \
    FG_GL_FUNCTION_VOID( ConvolutionFilter1DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLenum _5, const FgGLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ConvolutionFilter2DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, const FgGLvoid * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameterfEXT, ( , FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameterfvEXT, ( , FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameteriEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameterivEXT, ( , FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( CopyConvolutionFilter1DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( CopyConvolutionFilter2DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( GetConvolutionFilterEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetConvolutionParameterfvEXT, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetConvolutionParameterivEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetSeparableFilterEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4, FgGLvoid * _5, FgGLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( SeparableFilter2DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, const FgGLvoid * _7, const FgGLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
\
    /* GL_EXT_coordinate_frame */ \
    FG_GL_FUNCTION_VOID( Tangent3bEXT, ( , FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Tangent3bvEXT, ( , const FgGLbyte * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Tangent3dEXT, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Tangent3dvEXT, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Tangent3fEXT, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Tangent3fvEXT, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Tangent3iEXT, ( , FgGLint _1, FgGLint _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Tangent3ivEXT, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Tangent3sEXT, ( , FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Tangent3svEXT, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Binormal3bEXT, ( , FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Binormal3bvEXT, ( , const FgGLbyte * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Binormal3dEXT, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Binormal3dvEXT, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Binormal3fEXT, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Binormal3fvEXT, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Binormal3iEXT, ( , FgGLint _1, FgGLint _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Binormal3ivEXT, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Binormal3sEXT, ( , FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Binormal3svEXT, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TangentPointerEXT, ( , FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( BinormalPointerEXT, ( , FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_copy_texture */ \
    FG_GL_FUNCTION_VOID( CopyTexImage1DEXT, ( , FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLint _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( CopyTexImage2DEXT, ( , FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLint _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( CopyTexSubImage1DEXT, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( CopyTexSubImage2DEXT, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( CopyTexSubImage3DEXT, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLsizei _8, FgGLsizei _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
\
    /* GL_EXT_cull_vertex */ \
    FG_GL_FUNCTION_VOID( CullParameterdvEXT, ( , FgGLenum _1, FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( CullParameterfvEXT, ( , FgGLenum _1, FgGLfloat * _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_depth_bounds_test */ \
    FG_GL_FUNCTION_VOID( DepthBoundsEXT, ( , FgGLclampd _1, FgGLclampd _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_direct_state_access */ \
    FG_GL_FUNCTION_VOID( MatrixLoadfEXT, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MatrixLoaddEXT, ( , FgGLenum _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MatrixMultfEXT, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MatrixMultdEXT, ( , FgGLenum _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MatrixLoadIdentityEXT, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( MatrixRotatefEXT, ( , FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( MatrixRotatedEXT, ( , FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( MatrixScalefEXT, ( , FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MatrixScaledEXT, ( , FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MatrixTranslatefEXT, ( , FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MatrixTranslatedEXT, ( , FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MatrixFrustumEXT, ( , FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6, FgGLdouble _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( MatrixOrthoEXT, ( , FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6, FgGLdouble _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( MatrixPopEXT, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( MatrixPushEXT, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ClientAttribDefaultEXT, ( , FgGLbitfield _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( PushClientAttribDefaultEXT, ( , FgGLbitfield _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TextureParameterfEXT, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( TextureParameterfvEXT, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( TextureParameteriEXT, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( TextureParameterivEXT, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, const FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( TextureImage1DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLint _6, FgGLenum _7, FgGLenum _8, const FgGLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION_VOID( TextureImage2DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLenum _8, FgGLenum _9, const FgGLvoid * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION_VOID( TextureSubImage1DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLenum _6, FgGLenum _7, const FgGLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( TextureSubImage2DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLenum _8, FgGLenum _9, const FgGLvoid * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION_VOID( CopyTextureImage1DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLint _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( CopyTextureImage2DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8, FgGLint _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION_VOID( CopyTextureSubImage1DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( CopyTextureSubImage2DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLsizei _8, FgGLsizei _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION_VOID( GetTextureImageEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLenum _5, FgGLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( GetTextureParameterfvEXT, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetTextureParameterivEXT, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetTextureLevelParameterfvEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetTextureLevelParameterivEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( TextureImage3DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLint _8, FgGLenum _9, FgGLenum _10, const FgGLvoid * _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG_GL_FUNCTION_VOID( TextureSubImage3DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8, FgGLsizei _9, FgGLenum _10, FgGLenum _11, const FgGLvoid * _12 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FG_GL_FUNCTION_VOID( CopyTextureSubImage3DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLint _8, FgGLsizei _9, FgGLsizei _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION_VOID( BindMultiTextureEXT, ( , FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordPointerEXT, ( , FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, const FgGLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexEnvfEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexEnvfvEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexEnviEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexEnvivEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexGendEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexGendvEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexGenfEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexGenfvEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexGeniEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexGenivEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetMultiTexEnvfvEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetMultiTexEnvivEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetMultiTexGendvEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetMultiTexGenfvEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetMultiTexGenivEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexParameteriEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexParameterivEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexParameterfEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexParameterfvEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexImage1DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLint _6, FgGLenum _7, FgGLenum _8, const FgGLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexImage2DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLenum _8, FgGLenum _9, const FgGLvoid * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexSubImage1DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLenum _6, FgGLenum _7, const FgGLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexSubImage2DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLenum _8, FgGLenum _9, const FgGLvoid * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION_VOID( CopyMultiTexImage1DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLint _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( CopyMultiTexImage2DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8, FgGLint _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION_VOID( CopyMultiTexSubImage1DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( CopyMultiTexSubImage2DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLsizei _8, FgGLsizei _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION_VOID( GetMultiTexImageEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLenum _5, FgGLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( GetMultiTexParameterfvEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetMultiTexParameterivEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetMultiTexLevelParameterfvEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetMultiTexLevelParameterivEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexImage3DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLint _8, FgGLenum _9, FgGLenum _10, const FgGLvoid * _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexSubImage3DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8, FgGLsizei _9, FgGLenum _10, FgGLenum _11, const FgGLvoid * _12 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FG_GL_FUNCTION_VOID( CopyMultiTexSubImage3DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLint _8, FgGLsizei _9, FgGLsizei _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION_VOID( EnableClientStateIndexedEXT, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DisableClientStateIndexedEXT, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetFloatIndexedvEXT, ( , FgGLenum _1, FgGLuint _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetDoubleIndexedvEXT, ( , FgGLenum _1, FgGLuint _2, FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetPointerIndexedvEXT, ( , FgGLenum _1, FgGLuint _2, FgGLvoid ** _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( EnableIndexedEXT, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DisableIndexedEXT, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( IsEnabledIndexedEXT, FgGLboolean, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetIntegerIndexedvEXT, ( , FgGLenum _1, FgGLuint _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetBooleanIndexedvEXT, ( , FgGLenum _1, FgGLuint _2, FgGLboolean * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( CompressedTextureImage3DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLint _8, FgGLsizei _9, const FgGLvoid * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION_VOID( CompressedTextureImage2DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLsizei _8, const FgGLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION_VOID( CompressedTextureImage1DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLint _6, FgGLsizei _7, const FgGLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( CompressedTextureSubImage3DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8, FgGLsizei _9, FgGLenum _10, FgGLsizei _11, const FgGLvoid * _12 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FG_GL_FUNCTION_VOID( CompressedTextureSubImage2DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLenum _8, FgGLsizei _9, const FgGLvoid * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION_VOID( CompressedTextureSubImage1DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLenum _6, FgGLsizei _7, const FgGLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( GetCompressedTextureImageEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( CompressedMultiTexImage3DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLint _8, FgGLsizei _9, const FgGLvoid * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION_VOID( CompressedMultiTexImage2DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLsizei _8, const FgGLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION_VOID( CompressedMultiTexImage1DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLint _6, FgGLsizei _7, const FgGLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( CompressedMultiTexSubImage3DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8, FgGLsizei _9, FgGLenum _10, FgGLsizei _11, const FgGLvoid * _12 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FG_GL_FUNCTION_VOID( CompressedMultiTexSubImage2DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLenum _8, FgGLsizei _9, const FgGLvoid * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION_VOID( CompressedMultiTexSubImage1DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLenum _6, FgGLsizei _7, const FgGLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( GetCompressedMultiTexImageEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MatrixLoadTransposefEXT, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MatrixLoadTransposedEXT, ( , FgGLenum _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MatrixMultTransposefEXT, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MatrixMultTransposedEXT, ( , FgGLenum _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( NamedBufferDataEXT, ( , FgGLuint _1, FgGLsizeiptr _2, const FgGLvoid * _3, FgGLenum _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( NamedBufferSubDataEXT, ( , FgGLuint _1, FgGLintptr _2, FgGLsizeiptr _3, const FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_PTR( MapNamedBufferEXT, void *, ( , FgGLuint _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( UnmapNamedBufferEXT, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GetNamedBufferParameterivEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetNamedBufferPointervEXT, ( , FgGLuint _1, FgGLenum _2, FgGLvoid ** _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetNamedBufferSubDataEXT, ( , FgGLuint _1, FgGLintptr _2, FgGLsizeiptr _3, FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1fEXT, ( , FgGLuint _1, FgGLint _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2fEXT, ( , FgGLuint _1, FgGLint _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3fEXT, ( , FgGLuint _1, FgGLint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4fEXT, ( , FgGLuint _1, FgGLint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1iEXT, ( , FgGLuint _1, FgGLint _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2iEXT, ( , FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3iEXT, ( , FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4iEXT, ( , FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1fvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2fvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3fvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4fvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1ivEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2ivEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3ivEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4ivEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2fvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3fvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4fvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x3fvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x2fvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x4fvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x2fvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x4fvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x3fvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( TextureBufferEXT, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexBufferEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( TextureParameterIivEXT, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, const FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( TextureParameterIuivEXT, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, const FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetTextureParameterIivEXT, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetTextureParameterIuivEXT, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexParameterIivEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexParameterIuivEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetMultiTexParameterIivEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetMultiTexParameterIuivEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1uiEXT, ( , FgGLuint _1, FgGLint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2uiEXT, ( , FgGLuint _1, FgGLint _2, FgGLuint _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3uiEXT, ( , FgGLuint _1, FgGLint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4uiEXT, ( , FgGLuint _1, FgGLint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1uivEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2uivEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3uivEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4uivEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameters4fvEXT, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, const FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameterI4iEXT, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameterI4ivEXT, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, const FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParametersI4ivEXT, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, const FgGLint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameterI4uiEXT, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6, FgGLuint _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameterI4uivEXT, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, const FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParametersI4uivEXT, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, const FgGLuint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetNamedProgramLocalParameterIivEXT, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetNamedProgramLocalParameterIuivEXT, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( EnableClientStateiEXT, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DisableClientStateiEXT, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetFloati_vEXT, ( , FgGLenum _1, FgGLuint _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetDoublei_vEXT, ( , FgGLenum _1, FgGLuint _2, FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetPointeri_vEXT, ( , FgGLenum _1, FgGLuint _2, FgGLvoid ** _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( NamedProgramStringEXT, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, const FgGLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameter4dEXT, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6, FgGLdouble _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameter4dvEXT, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, const FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameter4fEXT, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameter4fvEXT, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetNamedProgramLocalParameterdvEXT, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetNamedProgramLocalParameterfvEXT, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetNamedProgramivEXT, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetNamedProgramStringEXT, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( NamedRenderbufferStorageEXT, ( , FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetNamedRenderbufferParameterivEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( NamedRenderbufferStorageMultisampleEXT, ( , FgGLuint _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( NamedRenderbufferStorageMultisampleCoverageEXT, ( , FgGLuint _1, FgGLsizei _2, FgGLsizei _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_NUM( CheckNamedFramebufferStatusEXT, FgGLenum, ( , FgGLuint _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferTexture1DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferTexture2DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferTexture3DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5, FgGLint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferRenderbufferEXT, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetNamedFramebufferAttachmentParameterivEXT, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GenerateTextureMipmapEXT, ( , FgGLuint _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GenerateMultiTexMipmapEXT, ( , FgGLenum _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( FramebufferDrawBufferEXT, ( , FgGLuint _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( FramebufferDrawBuffersEXT, ( , FgGLuint _1, FgGLsizei _2, const FgGLenum * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( FramebufferReadBufferEXT, ( , FgGLuint _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetFramebufferParameterivEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( NamedCopyBufferSubDataEXT, ( , FgGLuint _1, FgGLuint _2, FgGLintptr _3, FgGLintptr _4, FgGLsizeiptr _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferTextureEXT, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferTextureLayerEXT, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferTextureFaceEXT, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLenum _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( TextureRenderbufferEXT, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexRenderbufferEXT, ( , FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexOffsetEXT, ( , FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLintptr _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( VertexArrayColorOffsetEXT, ( , FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLintptr _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( VertexArrayEdgeFlagOffsetEXT, ( , FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLintptr _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexArrayIndexOffsetEXT, ( , FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLsizei _4, FgGLintptr _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexArrayNormalOffsetEXT, ( , FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLsizei _4, FgGLintptr _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexArrayTexCoordOffsetEXT, ( , FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLintptr _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( VertexArrayMultiTexCoordOffsetEXT, ( , FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLint _4, FgGLenum _5, FgGLsizei _6, FgGLintptr _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( VertexArrayFogCoordOffsetEXT, ( , FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLsizei _4, FgGLintptr _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexArraySecondaryColorOffsetEXT, ( , FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLintptr _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribOffsetEXT, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLint _4, FgGLenum _5, FgGLboolean _6, FgGLsizei _7, FgGLintptr _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribIOffsetEXT, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLint _4, FgGLenum _5, FgGLsizei _6, FgGLintptr _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( EnableVertexArrayEXT, ( , FgGLuint _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DisableVertexArrayEXT, ( , FgGLuint _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( EnableVertexArrayAttribEXT, ( , FgGLuint _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DisableVertexArrayAttribEXT, ( , FgGLuint _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexArrayIntegervEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexArrayPointervEXT, ( , FgGLuint _1, FgGLenum _2, FgGLvoid ** _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexArrayIntegeri_vEXT, ( , FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexArrayPointeri_vEXT, ( , FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLvoid ** _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_PTR( MapNamedBufferRangeEXT, void *, ( , FgGLuint _1, FgGLintptr _2, FgGLsizeiptr _3, FgGLbitfield _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( FlushMappedNamedBufferRangeEXT, ( , FgGLuint _1, FgGLintptr _2, FgGLsizeiptr _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( NamedBufferStorageEXT, ( , FgGLuint _1, FgGLsizeiptr _2, const void * _3, FgGLbitfield _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ClearNamedBufferDataEXT, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, const void * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ClearNamedBufferSubDataEXT, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLsizeiptr _5, FgGLsizeiptr _6, const void * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferParameteriEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetNamedFramebufferParameterivEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1dEXT, ( , FgGLuint _1, FgGLint _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2dEXT, ( , FgGLuint _1, FgGLint _2, FgGLdouble _3, FgGLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3dEXT, ( , FgGLuint _1, FgGLint _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4dEXT, ( , FgGLuint _1, FgGLint _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1dvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2dvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3dvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4dvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2dvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3dvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4dvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x3dvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x4dvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x2dvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x4dvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x2dvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x3dvEXT, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( TextureBufferRangeEXT, ( , FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLintptr _5, FgGLsizeiptr _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( TextureStorage1DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( TextureStorage2DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( TextureStorage3DEXT, ( , FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( TextureStorage2DMultisampleEXT, ( , FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6, FgGLboolean _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( TextureStorage3DMultisampleEXT, ( , FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLboolean _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( VertexArrayBindVertexBufferEXT, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLintptr _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribFormatEXT, ( , FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLenum _4, FgGLboolean _5, FgGLuint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribIFormatEXT, ( , FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLenum _4, FgGLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribLFormatEXT, ( , FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLenum _4, FgGLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribBindingEXT, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexBindingDivisorEXT, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribLOffsetEXT, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLint _4, FgGLenum _5, FgGLsizei _6, FgGLintptr _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( TexturePageCommitmentEXT, ( , FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLboolean _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribDivisorEXT, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_draw_buffers2 */ \
    FG_GL_FUNCTION_VOID( ColorMaskIndexedEXT, ( , FgGLuint _1, FgGLboolean _2, FgGLboolean _3, FgGLboolean _4, FgGLboolean _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_draw_instanced */ \
    FG_GL_FUNCTION_VOID( DrawArraysInstancedEXT, ( , FgGLenum _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( DrawElementsInstancedEXT, ( , FgGLenum _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_draw_range_elements */ \
    FG_GL_FUNCTION_VOID( DrawRangeElementsEXT, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4, FgGLenum _5, const FgGLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_EXT_fog_coord */ \
    FG_GL_FUNCTION_VOID( FogCoordfEXT, ( , FgGLfloat _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( FogCoordfvEXT, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( FogCoorddEXT, ( , FgGLdouble _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( FogCoorddvEXT, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( FogCoordPointerEXT, ( , FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_framebuffer_blit */ \
    FG_GL_FUNCTION_VOID( BlitFramebufferEXT, ( , FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLint _8, FgGLbitfield _9, FgGLenum _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
\
    /* GL_EXT_framebuffer_multisample */ \
    FG_GL_FUNCTION_VOID( RenderbufferStorageMultisampleEXT, ( , FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_framebuffer_multisample_blit_scaled */ \
\
    /* GL_EXT_framebuffer_object */ \
    FG_GL_FUNCTION_NUM( IsRenderbufferEXT, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( BindRenderbufferEXT, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DeleteRenderbuffersEXT, ( , FgGLsizei _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GenRenderbuffersEXT, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( RenderbufferStorageEXT, ( , FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetRenderbufferParameterivEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_NUM( IsFramebufferEXT, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( BindFramebufferEXT, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DeleteFramebuffersEXT, ( , FgGLsizei _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GenFramebuffersEXT, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( CheckFramebufferStatusEXT, FgGLenum, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( FramebufferTexture1DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( FramebufferTexture2DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( FramebufferTexture3DEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5, FgGLint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( FramebufferRenderbufferEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetFramebufferAttachmentParameterivEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GenerateMipmapEXT, ( , FgGLenum _1 ), ( , _1 ) ) \
\
    /* GL_EXT_framebuffer_sRGB */ \
\
    /* GL_EXT_geometry_shader4 */ \
    FG_GL_FUNCTION_VOID( ProgramParameteriEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_gpu_program_parameters */ \
    FG_GL_FUNCTION_VOID( ProgramEnvParameters4fvEXT, ( , FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameters4fvEXT, ( , FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_gpu_shader4 */ \
    FG_GL_FUNCTION_VOID( GetUniformuivEXT, ( , FgGLuint _1, FgGLint _2, FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( BindFragDataLocationEXT, ( , FgGLuint _1, FgGLuint _2, const FgGLchar * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_NUM( GetFragDataLocationEXT, FgGLint, ( , FgGLuint _1, const FgGLchar * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Uniform1uiEXT, ( , FgGLint _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Uniform2uiEXT, ( , FgGLint _1, FgGLuint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform3uiEXT, ( , FgGLint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Uniform4uiEXT, ( , FgGLint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( Uniform1uivEXT, ( , FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform2uivEXT, ( , FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform3uivEXT, ( , FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform4uivEXT, ( , FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_histogram */ \
    FG_GL_FUNCTION_VOID( GetHistogramEXT, ( , FgGLenum _1, FgGLboolean _2, FgGLenum _3, FgGLenum _4, FgGLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetHistogramParameterfvEXT, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetHistogramParameterivEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetMinmaxEXT, ( , FgGLenum _1, FgGLboolean _2, FgGLenum _3, FgGLenum _4, FgGLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetMinmaxParameterfvEXT, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetMinmaxParameterivEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( HistogramEXT, ( , FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLboolean _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MinmaxEXT, ( , FgGLenum _1, FgGLenum _2, FgGLboolean _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ResetHistogramEXT, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ResetMinmaxEXT, ( , FgGLenum _1 ), ( , _1 ) ) \
\
    /* GL_EXT_index_array_formats */ \
\
    /* GL_EXT_index_func */ \
    FG_GL_FUNCTION_VOID( IndexFuncEXT, ( , FgGLenum _1, FgGLclampf _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_index_material */ \
    FG_GL_FUNCTION_VOID( IndexMaterialEXT, ( , FgGLenum _1, FgGLenum _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_index_texture */ \
\
    /* GL_EXT_light_texture */ \
    FG_GL_FUNCTION_VOID( ApplyTextureEXT, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TextureLightEXT, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TextureMaterialEXT, ( , FgGLenum _1, FgGLenum _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_misc_attribute */ \
\
    /* GL_EXT_multi_draw_arrays */ \
    FG_GL_FUNCTION_VOID( MultiDrawArraysEXT, ( , FgGLenum _1, const FgGLint * _2, const FgGLsizei * _3, FgGLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiDrawElementsEXT, ( , FgGLenum _1, const FgGLsizei * _2, FgGLenum _3, const FgGLvoid *const* _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_multisample */ \
    FG_GL_FUNCTION_VOID( SampleMaskEXT, ( , FgGLclampf _1, FgGLboolean _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( SamplePatternEXT, ( , FgGLenum _1 ), ( , _1 ) ) \
\
    /* GL_EXT_packed_depth_stencil */ \
\
    /* GL_EXT_packed_float */ \
\
    /* GL_EXT_packed_pixels */ \
\
    /* GL_EXT_paletted_texture */ \
    FG_GL_FUNCTION_VOID( ColorTableEXT, ( , FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLenum _5, const FgGLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( GetColorTableEXT, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetColorTableParameterivEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetColorTableParameterfvEXT, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_pixel_buffer_object */ \
\
    /* GL_EXT_pixel_transform */ \
    FG_GL_FUNCTION_VOID( PixelTransformParameteriEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( PixelTransformParameterfEXT, ( , FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( PixelTransformParameterivEXT, ( , FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( PixelTransformParameterfvEXT, ( , FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetPixelTransformParameterivEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetPixelTransformParameterfvEXT, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_pixel_transform_color_table */ \
\
    /* GL_EXT_point_parameters */ \
    FG_GL_FUNCTION_VOID( PointParameterfEXT, ( , FgGLenum _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( PointParameterfvEXT, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_polygon_offset */ \
    FG_GL_FUNCTION_VOID( PolygonOffsetEXT, ( , FgGLfloat _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_provoking_vertex */ \
    FG_GL_FUNCTION_VOID( ProvokingVertexEXT, ( , FgGLenum _1 ), ( , _1 ) ) \
\
    /* GL_EXT_rescale_normal */ \
\
    /* GL_EXT_secondary_color */ \
    FG_GL_FUNCTION_VOID( SecondaryColor3bEXT, ( , FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3bvEXT, ( , const FgGLbyte * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3dEXT, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3dvEXT, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3fEXT, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3fvEXT, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3iEXT, ( , FgGLint _1, FgGLint _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3ivEXT, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3sEXT, ( , FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3svEXT, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3ubEXT, ( , FgGLubyte _1, FgGLubyte _2, FgGLubyte _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3ubvEXT, ( , const FgGLubyte * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3uiEXT, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3uivEXT, ( , const FgGLuint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3usEXT, ( , FgGLushort _1, FgGLushort _2, FgGLushort _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3usvEXT, ( , const FgGLushort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColorPointerEXT, ( , FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_separate_shader_objects */ \
    FG_GL_FUNCTION_VOID( UseShaderProgramEXT, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( ActiveProgramEXT, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( CreateShaderProgramEXT, FgGLuint, ( , FgGLenum _1, const FgGLchar * _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_separate_specular_color */ \
\
    /* GL_EXT_shader_image_load_store */ \
    FG_GL_FUNCTION_VOID( BindImageTextureEXT, ( , FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLboolean _4, FgGLint _5, FgGLenum _6, FgGLint _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( MemoryBarrierEXT, ( , FgGLbitfield _1 ), ( , _1 ) ) \
\
    /* GL_EXT_shadow_funcs */ \
\
    /* GL_EXT_shared_texture_palette */ \
\
    /* GL_EXT_stencil_clear_tag */ \
    FG_GL_FUNCTION_VOID( StencilClearTagEXT, ( , FgGLsizei _1, FgGLuint _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_stencil_two_side */ \
    FG_GL_FUNCTION_VOID( ActiveStencilFaceEXT, ( , FgGLenum _1 ), ( , _1 ) ) \
\
    /* GL_EXT_stencil_wrap */ \
\
    /* GL_EXT_subtexture */ \
    FG_GL_FUNCTION_VOID( TexSubImage1DEXT, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, const FgGLvoid * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( TexSubImage2DEXT, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLenum _7, FgGLenum _8, const FgGLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
\
    /* GL_EXT_texture */ \
\
    /* GL_EXT_texture3D */ \
    FG_GL_FUNCTION_VOID( TexImage3DEXT, ( , FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLenum _8, FgGLenum _9, const FgGLvoid * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION_VOID( TexSubImage3DEXT, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLenum _9, FgGLenum _10, const FgGLvoid * _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
\
    /* GL_EXT_texture_array */ \
\
    /* GL_EXT_texture_buffer_object */ \
    FG_GL_FUNCTION_VOID( TexBufferEXT, ( , FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
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
    FG_GL_FUNCTION_VOID( TexParameterIivEXT, ( , FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexParameterIuivEXT, ( , FgGLenum _1, FgGLenum _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetTexParameterIivEXT, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetTexParameterIuivEXT, ( , FgGLenum _1, FgGLenum _2, FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ClearColorIiEXT, ( , FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ClearColorIuiEXT, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_texture_lod_bias */ \
\
    /* GL_EXT_texture_mirror_clamp */ \
\
    /* GL_EXT_texture_object */ \
    FG_GL_FUNCTION_NUM( AreTexturesResidentEXT, FgGLboolean, ( , FgGLsizei _1, const FgGLuint * _2, FgGLboolean * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( BindTextureEXT, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DeleteTexturesEXT, ( , FgGLsizei _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GenTexturesEXT, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( IsTextureEXT, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( PrioritizeTexturesEXT, ( , FgGLsizei _1, const FgGLuint * _2, const FgGLclampf * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_texture_perturb_normal */ \
    FG_GL_FUNCTION_VOID( TextureNormalEXT, ( , FgGLenum _1 ), ( , _1 ) ) \
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
    FG_GL_FUNCTION_VOID( GetQueryObjecti64vEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint64 * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetQueryObjectui64vEXT, ( , FgGLuint _1, FgGLenum _2, FgGLuint64 * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_transform_feedback */ \
    FG_GL_FUNCTION_VOID( BeginTransformFeedbackEXT, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( EndTransformFeedbackEXT, (), () ) \
    FG_GL_FUNCTION_VOID( BindBufferRangeEXT, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLintptr _4, FgGLsizeiptr _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( BindBufferOffsetEXT, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLintptr _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( BindBufferBaseEXT, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TransformFeedbackVaryingsEXT, ( , FgGLuint _1, FgGLsizei _2, const FgGLchar *const* _3, FgGLenum _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetTransformFeedbackVaryingEXT, ( , FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLsizei * _5, FgGLenum * _6, FgGLchar * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
\
    /* GL_EXT_vertex_array */ \
    FG_GL_FUNCTION_VOID( ArrayElementEXT, ( , FgGLint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ColorPointerEXT, ( , FgGLint _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, const FgGLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( DrawArraysEXT, ( , FgGLenum _1, FgGLint _2, FgGLsizei _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( EdgeFlagPointerEXT, ( , FgGLsizei _1, FgGLsizei _2, const FgGLboolean * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetPointervEXT, ( , FgGLenum _1, FgGLvoid ** _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( IndexPointerEXT, ( , FgGLenum _1, FgGLsizei _2, FgGLsizei _3, const FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( NormalPointerEXT, ( , FgGLenum _1, FgGLsizei _2, FgGLsizei _3, const FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( TexCoordPointerEXT, ( , FgGLint _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, const FgGLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexPointerEXT, ( , FgGLint _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, const FgGLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_vertex_array_bgra */ \
\
    /* GL_EXT_vertex_attrib_64bit */ \
    FG_GL_FUNCTION_VOID( VertexAttribL1dEXT, ( , FgGLuint _1, FgGLdouble _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2dEXT, ( , FgGLuint _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3dEXT, ( , FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4dEXT, ( , FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1dvEXT, ( , FgGLuint _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2dvEXT, ( , FgGLuint _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3dvEXT, ( , FgGLuint _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4dvEXT, ( , FgGLuint _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribLPointerEXT, ( , FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, const FgGLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribLdvEXT, ( , FgGLuint _1, FgGLenum _2, FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_vertex_shader */ \
    FG_GL_FUNCTION_VOID( BeginVertexShaderEXT, (), () ) \
    FG_GL_FUNCTION_VOID( EndVertexShaderEXT, (), () ) \
    FG_GL_FUNCTION_VOID( BindVertexShaderEXT, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( GenVertexShadersEXT, FgGLuint, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( DeleteVertexShaderEXT, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ShaderOp1EXT, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ShaderOp2EXT, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ShaderOp3EXT, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( SwizzleEXT, ( , FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLenum _4, FgGLenum _5, FgGLenum _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( WriteMaskEXT, ( , FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLenum _4, FgGLenum _5, FgGLenum _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( InsertComponentEXT, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ExtractComponentEXT, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_NUM( GenSymbolsEXT, FgGLuint, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( SetInvariantEXT, ( , FgGLuint _1, FgGLenum _2, const FgGLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SetLocalConstantEXT, ( , FgGLuint _1, FgGLenum _2, const FgGLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VariantbvEXT, ( , FgGLuint _1, const FgGLbyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VariantsvEXT, ( , FgGLuint _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VariantivEXT, ( , FgGLuint _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VariantfvEXT, ( , FgGLuint _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VariantdvEXT, ( , FgGLuint _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VariantubvEXT, ( , FgGLuint _1, const FgGLubyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VariantusvEXT, ( , FgGLuint _1, const FgGLushort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VariantuivEXT, ( , FgGLuint _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VariantPointerEXT, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3, const FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( EnableVariantClientStateEXT, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( DisableVariantClientStateEXT, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( BindLightParameterEXT, FgGLuint, ( , FgGLenum _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( BindMaterialParameterEXT, FgGLuint, ( , FgGLenum _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( BindTexGenParameterEXT, FgGLuint, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_NUM( BindTextureUnitParameterEXT, FgGLuint, ( , FgGLenum _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( BindParameterEXT, FgGLuint, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( IsVariantEnabledEXT, FgGLboolean, ( , FgGLuint _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetVariantBooleanvEXT, ( , FgGLuint _1, FgGLenum _2, FgGLboolean * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVariantIntegervEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVariantFloatvEXT, ( , FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVariantPointervEXT, ( , FgGLuint _1, FgGLenum _2, FgGLvoid ** _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetInvariantBooleanvEXT, ( , FgGLuint _1, FgGLenum _2, FgGLboolean * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetInvariantIntegervEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetInvariantFloatvEXT, ( , FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetLocalConstantBooleanvEXT, ( , FgGLuint _1, FgGLenum _2, FgGLboolean * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetLocalConstantIntegervEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetLocalConstantFloatvEXT, ( , FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_vertex_weighting */ \
    FG_GL_FUNCTION_VOID( VertexWeightfEXT, ( , FgGLfloat _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( VertexWeightfvEXT, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( VertexWeightPointerEXT, ( , FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_x11_sync_object */ \
    FG_GL_FUNCTION_PTR( ImportSyncEXT, FgGLsync, ( , FgGLenum _1, FgGLintptr _2, FgGLbitfield _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_GREMEDY_frame_terminator */ \
    FG_GL_FUNCTION_VOID( FrameTerminatorGREMEDY, (), () ) \
\
    /* GL_GREMEDY_string_marker */ \
    FG_GL_FUNCTION_VOID( StringMarkerGREMEDY, ( , FgGLsizei _1, const FgGLvoid * _2 ), ( , _1, _2 ) ) \
\
    /* GL_HP_convolution_border_modes */ \
\
    /* GL_HP_image_transform */ \
    FG_GL_FUNCTION_VOID( ImageTransformParameteriHP, ( , FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ImageTransformParameterfHP, ( , FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ImageTransformParameterivHP, ( , FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ImageTransformParameterfvHP, ( , FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetImageTransformParameterivHP, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetImageTransformParameterfvHP, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_HP_occlusion_test */ \
\
    /* GL_HP_texture_lighting */ \
\
    /* GL_IBM_cull_vertex */ \
\
    /* GL_IBM_multimode_draw_arrays */ \
    FG_GL_FUNCTION_VOID( MultiModeDrawArraysIBM, ( , const FgGLenum * _1, const FgGLint * _2, const FgGLsizei * _3, FgGLsizei _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( MultiModeDrawElementsIBM, ( , const FgGLenum * _1, const FgGLsizei * _2, FgGLenum _3, const FgGLvoid *const* _4, FgGLsizei _5, FgGLint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_IBM_rasterpos_clip */ \
\
    /* GL_IBM_static_data */ \
    FG_GL_FUNCTION_VOID( FlushStaticDataIBM, ( , FgGLenum _1 ), ( , _1 ) ) \
\
    /* GL_IBM_texture_mirrored_repeat */ \
\
    /* GL_IBM_vertex_array_lists */ \
    FG_GL_FUNCTION_VOID( ColorPointerListIBM, ( , FgGLint _1, FgGLenum _2, FgGLint _3, const FgGLvoid ** _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColorPointerListIBM, ( , FgGLint _1, FgGLenum _2, FgGLint _3, const FgGLvoid ** _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( EdgeFlagPointerListIBM, ( , FgGLint _1, const FgGLboolean ** _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( FogCoordPointerListIBM, ( , FgGLenum _1, FgGLint _2, const FgGLvoid ** _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( IndexPointerListIBM, ( , FgGLenum _1, FgGLint _2, const FgGLvoid ** _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( NormalPointerListIBM, ( , FgGLenum _1, FgGLint _2, const FgGLvoid ** _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( TexCoordPointerListIBM, ( , FgGLint _1, FgGLenum _2, FgGLint _3, const FgGLvoid ** _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexPointerListIBM, ( , FgGLint _1, FgGLenum _2, FgGLint _3, const FgGLvoid ** _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_INGR_blend_func_separate */ \
    FG_GL_FUNCTION_VOID( BlendFuncSeparateINGR, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_INGR_color_clamp */ \
\
    /* GL_INGR_interlace_read */ \
\
    /* GL_INTEL_map_texture */ \
    FG_GL_FUNCTION_VOID( SyncTextureINTEL, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( UnmapTexture2DINTEL, ( , FgGLuint _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_PTR( MapTexture2DINTEL, void *, ( , FgGLuint _1, FgGLint _2, FgGLbitfield _3, const FgGLint * _4, const FgGLenum * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_INTEL_parallel_arrays */ \
    FG_GL_FUNCTION_VOID( VertexPointervINTEL, ( , FgGLint _1, FgGLenum _2, const FgGLvoid ** _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( NormalPointervINTEL, ( , FgGLenum _1, const FgGLvoid ** _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( ColorPointervINTEL, ( , FgGLint _1, FgGLenum _2, const FgGLvoid ** _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexCoordPointervINTEL, ( , FgGLint _1, FgGLenum _2, const FgGLvoid ** _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_MESAX_texture_stack */ \
\
    /* GL_MESA_pack_invert */ \
\
    /* GL_MESA_resize_buffers */ \
    FG_GL_FUNCTION_VOID( ResizeBuffersMESA, (), () ) \
\
    /* GL_MESA_window_pos */ \
    FG_GL_FUNCTION_VOID( WindowPos2dMESA, ( , FgGLdouble _1, FgGLdouble _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos2dvMESA, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos2fMESA, ( , FgGLfloat _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos2fvMESA, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos2iMESA, ( , FgGLint _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos2ivMESA, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos2sMESA, ( , FgGLshort _1, FgGLshort _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos2svMESA, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3dMESA, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3dvMESA, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3fMESA, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3fvMESA, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3iMESA, ( , FgGLint _1, FgGLint _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3ivMESA, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3sMESA, ( , FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos3svMESA, ( , const FgGLshort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos4dMESA, ( , FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos4dvMESA, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos4fMESA, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos4fvMESA, ( , const FgGLfloat * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos4iMESA, ( , FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos4ivMESA, ( , const FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos4sMESA, ( , FgGLshort _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( WindowPos4svMESA, ( , const FgGLshort * _1 ), ( , _1 ) ) \
\
    /* GL_MESA_ycbcr_texture */ \
\
    /* GL_NVX_conditional_render */ \
    FG_GL_FUNCTION_VOID( BeginConditionalRenderNVX, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( EndConditionalRenderNVX, (), () ) \
\
    /* GL_NV_bindless_multi_draw_indirect */ \
    FG_GL_FUNCTION_VOID( MultiDrawArraysIndirectBindlessNV, ( , FgGLenum _1, const FgGLvoid * _2, FgGLsizei _3, FgGLsizei _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( MultiDrawElementsIndirectBindlessNV, ( , FgGLenum _1, FgGLenum _2, const FgGLvoid * _3, FgGLsizei _4, FgGLsizei _5, FgGLint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_NV_bindless_texture */ \
    FG_GL_FUNCTION_NUM( GetTextureHandleNV, FgGLuint64, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( GetTextureSamplerHandleNV, FgGLuint64, ( , FgGLuint _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MakeTextureHandleResidentNV, ( , FgGLuint64 _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( MakeTextureHandleNonResidentNV, ( , FgGLuint64 _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( GetImageHandleNV, FgGLuint64, ( , FgGLuint _1, FgGLint _2, FgGLboolean _3, FgGLint _4, FgGLenum _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( MakeImageHandleResidentNV, ( , FgGLuint64 _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MakeImageHandleNonResidentNV, ( , FgGLuint64 _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( UniformHandleui64NV, ( , FgGLint _1, FgGLuint64 _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( UniformHandleui64vNV, ( , FgGLint _1, FgGLsizei _2, const FgGLuint64 * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformHandleui64NV, ( , FgGLuint _1, FgGLint _2, FgGLuint64 _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformHandleui64vNV, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint64 * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_NUM( IsTextureHandleResidentNV, FgGLboolean, ( , FgGLuint64 _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( IsImageHandleResidentNV, FgGLboolean, ( , FgGLuint64 _1 ), ( , _1 ) ) \
\
    /* GL_NV_blend_equation_advanced */ \
    FG_GL_FUNCTION_VOID( BlendParameteriNV, ( , FgGLenum _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( BlendBarrierNV, (), () ) \
\
    /* GL_NV_blend_equation_advanced_coherent */ \
\
    /* GL_NV_blend_square */ \
\
    /* GL_NV_compute_program5 */ \
\
    /* GL_NV_conditional_render */ \
    FG_GL_FUNCTION_VOID( BeginConditionalRenderNV, ( , FgGLuint _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( EndConditionalRenderNV, (), () ) \
\
    /* GL_NV_copy_depth_to_color */ \
\
    /* GL_NV_copy_image */ \
    FG_GL_FUNCTION_VOID( CopyImageSubDataNV, ( , FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLuint _7, FgGLenum _8, FgGLint _9, FgGLint _10, FgGLint _11, FgGLint _12, FgGLsizei _13, FgGLsizei _14, FgGLsizei _15 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15 ) ) \
\
    /* GL_NV_deep_texture3D */ \
\
    /* GL_NV_depth_buffer_float */ \
    FG_GL_FUNCTION_VOID( DepthRangedNV, ( , FgGLdouble _1, FgGLdouble _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( ClearDepthdNV, ( , FgGLdouble _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( DepthBoundsdNV, ( , FgGLdouble _1, FgGLdouble _2 ), ( , _1, _2 ) ) \
\
    /* GL_NV_depth_clamp */ \
\
    /* GL_NV_draw_texture */ \
    FG_GL_FUNCTION_VOID( DrawTextureNV, ( , FgGLuint _1, FgGLuint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9, FgGLfloat _10, FgGLfloat _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
\
    /* GL_NV_evaluators */ \
    FG_GL_FUNCTION_VOID( MapControlPointsNV, ( , FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLint _6, FgGLint _7, FgGLboolean _8, const FgGLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION_VOID( MapParameterivNV, ( , FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MapParameterfvNV, ( , FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetMapControlPointsNV, ( , FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLboolean _6, FgGLvoid * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( GetMapParameterivNV, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetMapParameterfvNV, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetMapAttribParameterivNV, ( , FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetMapAttribParameterfvNV, ( , FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( EvalMapsNV, ( , FgGLenum _1, FgGLenum _2 ), ( , _1, _2 ) ) \
\
    /* GL_NV_explicit_multisample */ \
    FG_GL_FUNCTION_VOID( GetMultisamplefvNV, ( , FgGLenum _1, FgGLuint _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SampleMaskIndexedNV, ( , FgGLuint _1, FgGLbitfield _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexRenderbufferNV, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
\
    /* GL_NV_fence */ \
    FG_GL_FUNCTION_VOID( DeleteFencesNV, ( , FgGLsizei _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GenFencesNV, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( IsFenceNV, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( TestFenceNV, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GetFenceivNV, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( FinishFenceNV, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( SetFenceNV, ( , FgGLuint _1, FgGLenum _2 ), ( , _1, _2 ) ) \
\
    /* GL_NV_float_buffer */ \
\
    /* GL_NV_fog_distance */ \
\
    /* GL_NV_fragment_program */ \
    FG_GL_FUNCTION_VOID( ProgramNamedParameter4fNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( ProgramNamedParameter4fvNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramNamedParameter4dNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6, FgGLdouble _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( ProgramNamedParameter4dvNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3, const FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramNamedParameterfvNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3, FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramNamedParameterdvNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3, FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_NV_fragment_program2 */ \
\
    /* GL_NV_fragment_program4 */ \
\
    /* GL_NV_fragment_program_option */ \
\
    /* GL_NV_framebuffer_multisample_coverage */ \
    FG_GL_FUNCTION_VOID( RenderbufferStorageMultisampleCoverageNV, ( , FgGLenum _1, FgGLsizei _2, FgGLsizei _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_NV_geometry_program4 */ \
    FG_GL_FUNCTION_VOID( ProgramVertexLimitNV, ( , FgGLenum _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( FramebufferTextureEXT, ( , FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( FramebufferTextureLayerEXT, ( , FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( FramebufferTextureFaceEXT, ( , FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLenum _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_NV_geometry_shader4 */ \
\
    /* GL_NV_gpu_program4 */ \
    FG_GL_FUNCTION_VOID( ProgramLocalParameterI4iNV, ( , FgGLenum _1, FgGLuint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameterI4ivNV, ( , FgGLenum _1, FgGLuint _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParametersI4ivNV, ( , FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameterI4uiNV, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameterI4uivNV, ( , FgGLenum _1, FgGLuint _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParametersI4uivNV, ( , FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameterI4iNV, ( , FgGLenum _1, FgGLuint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameterI4ivNV, ( , FgGLenum _1, FgGLuint _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParametersI4ivNV, ( , FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameterI4uiNV, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameterI4uivNV, ( , FgGLenum _1, FgGLuint _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParametersI4uivNV, ( , FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramLocalParameterIivNV, ( , FgGLenum _1, FgGLuint _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramLocalParameterIuivNV, ( , FgGLenum _1, FgGLuint _2, FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramEnvParameterIivNV, ( , FgGLenum _1, FgGLuint _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramEnvParameterIuivNV, ( , FgGLenum _1, FgGLuint _2, FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_NV_gpu_program5 */ \
    FG_GL_FUNCTION_VOID( ProgramSubroutineParametersuivNV, ( , FgGLenum _1, FgGLsizei _2, const FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramSubroutineParameteruivNV, ( , FgGLenum _1, FgGLuint _2, FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_NV_gpu_program5_mem_extended */ \
\
    /* GL_NV_gpu_shader5 */ \
    FG_GL_FUNCTION_VOID( Uniform1i64NV, ( , FgGLint _1, FgGLint64EXT _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Uniform2i64NV, ( , FgGLint _1, FgGLint64EXT _2, FgGLint64EXT _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform3i64NV, ( , FgGLint _1, FgGLint64EXT _2, FgGLint64EXT _3, FgGLint64EXT _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Uniform4i64NV, ( , FgGLint _1, FgGLint64EXT _2, FgGLint64EXT _3, FgGLint64EXT _4, FgGLint64EXT _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( Uniform1i64vNV, ( , FgGLint _1, FgGLsizei _2, const FgGLint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform2i64vNV, ( , FgGLint _1, FgGLsizei _2, const FgGLint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform3i64vNV, ( , FgGLint _1, FgGLsizei _2, const FgGLint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform4i64vNV, ( , FgGLint _1, FgGLsizei _2, const FgGLint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform1ui64NV, ( , FgGLint _1, FgGLuint64EXT _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Uniform2ui64NV, ( , FgGLint _1, FgGLuint64EXT _2, FgGLuint64EXT _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform3ui64NV, ( , FgGLint _1, FgGLuint64EXT _2, FgGLuint64EXT _3, FgGLuint64EXT _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Uniform4ui64NV, ( , FgGLint _1, FgGLuint64EXT _2, FgGLuint64EXT _3, FgGLuint64EXT _4, FgGLuint64EXT _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( Uniform1ui64vNV, ( , FgGLint _1, FgGLsizei _2, const FgGLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform2ui64vNV, ( , FgGLint _1, FgGLsizei _2, const FgGLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform3ui64vNV, ( , FgGLint _1, FgGLsizei _2, const FgGLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Uniform4ui64vNV, ( , FgGLint _1, FgGLsizei _2, const FgGLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetUniformi64vNV, ( , FgGLuint _1, FgGLint _2, FgGLint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1i64NV, ( , FgGLuint _1, FgGLint _2, FgGLint64EXT _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2i64NV, ( , FgGLuint _1, FgGLint _2, FgGLint64EXT _3, FgGLint64EXT _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3i64NV, ( , FgGLuint _1, FgGLint _2, FgGLint64EXT _3, FgGLint64EXT _4, FgGLint64EXT _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4i64NV, ( , FgGLuint _1, FgGLint _2, FgGLint64EXT _3, FgGLint64EXT _4, FgGLint64EXT _5, FgGLint64EXT _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1i64vNV, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint64EXT * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2i64vNV, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint64EXT * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3i64vNV, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint64EXT * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4i64vNV, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint64EXT * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1ui64NV, ( , FgGLuint _1, FgGLint _2, FgGLuint64EXT _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2ui64NV, ( , FgGLuint _1, FgGLint _2, FgGLuint64EXT _3, FgGLuint64EXT _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3ui64NV, ( , FgGLuint _1, FgGLint _2, FgGLuint64EXT _3, FgGLuint64EXT _4, FgGLuint64EXT _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4ui64NV, ( , FgGLuint _1, FgGLint _2, FgGLuint64EXT _3, FgGLuint64EXT _4, FgGLuint64EXT _5, FgGLuint64EXT _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1ui64vNV, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint64EXT * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2ui64vNV, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint64EXT * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3ui64vNV, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint64EXT * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4ui64vNV, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint64EXT * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_NV_half_float */ \
    FG_GL_FUNCTION_VOID( Vertex2hNV, ( , FgGLhalfNV _1, FgGLhalfNV _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Vertex2hvNV, ( , const FgGLhalfNV * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Vertex3hNV, ( , FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Vertex3hvNV, ( , const FgGLhalfNV * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Vertex4hNV, ( , FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3, FgGLhalfNV _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Vertex4hvNV, ( , const FgGLhalfNV * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Normal3hNV, ( , FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Normal3hvNV, ( , const FgGLhalfNV * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Color3hNV, ( , FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( Color3hvNV, ( , const FgGLhalfNV * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( Color4hNV, ( , FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3, FgGLhalfNV _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( Color4hvNV, ( , const FgGLhalfNV * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord1hNV, ( , FgGLhalfNV _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord1hvNV, ( , const FgGLhalfNV * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2hNV, ( , FgGLhalfNV _1, FgGLhalfNV _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2hvNV, ( , const FgGLhalfNV * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord3hNV, ( , FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord3hvNV, ( , const FgGLhalfNV * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord4hNV, ( , FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3, FgGLhalfNV _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord4hvNV, ( , const FgGLhalfNV * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1hNV, ( , FgGLenum _1, FgGLhalfNV _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1hvNV, ( , FgGLenum _1, const FgGLhalfNV * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2hNV, ( , FgGLenum _1, FgGLhalfNV _2, FgGLhalfNV _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2hvNV, ( , FgGLenum _1, const FgGLhalfNV * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3hNV, ( , FgGLenum _1, FgGLhalfNV _2, FgGLhalfNV _3, FgGLhalfNV _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3hvNV, ( , FgGLenum _1, const FgGLhalfNV * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4hNV, ( , FgGLenum _1, FgGLhalfNV _2, FgGLhalfNV _3, FgGLhalfNV _4, FgGLhalfNV _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4hvNV, ( , FgGLenum _1, const FgGLhalfNV * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( FogCoordhNV, ( , FgGLhalfNV _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( FogCoordhvNV, ( , const FgGLhalfNV * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3hNV, ( , FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3hvNV, ( , const FgGLhalfNV * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( VertexWeighthNV, ( , FgGLhalfNV _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( VertexWeighthvNV, ( , const FgGLhalfNV * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1hNV, ( , FgGLuint _1, FgGLhalfNV _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1hvNV, ( , FgGLuint _1, const FgGLhalfNV * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2hNV, ( , FgGLuint _1, FgGLhalfNV _2, FgGLhalfNV _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2hvNV, ( , FgGLuint _1, const FgGLhalfNV * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3hNV, ( , FgGLuint _1, FgGLhalfNV _2, FgGLhalfNV _3, FgGLhalfNV _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3hvNV, ( , FgGLuint _1, const FgGLhalfNV * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4hNV, ( , FgGLuint _1, FgGLhalfNV _2, FgGLhalfNV _3, FgGLhalfNV _4, FgGLhalfNV _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4hvNV, ( , FgGLuint _1, const FgGLhalfNV * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribs1hvNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLhalfNV * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribs2hvNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLhalfNV * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribs3hvNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLhalfNV * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribs4hvNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLhalfNV * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_NV_light_max_exponent */ \
\
    /* GL_NV_multisample_coverage */ \
\
    /* GL_NV_multisample_filter_hint */ \
\
    /* GL_NV_occlusion_query */ \
    FG_GL_FUNCTION_VOID( GenOcclusionQueriesNV, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DeleteOcclusionQueriesNV, ( , FgGLsizei _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( IsOcclusionQueryNV, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( BeginOcclusionQueryNV, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( EndOcclusionQueryNV, (), () ) \
    FG_GL_FUNCTION_VOID( GetOcclusionQueryivNV, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetOcclusionQueryuivNV, ( , FgGLuint _1, FgGLenum _2, FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_NV_packed_depth_stencil */ \
\
    /* GL_NV_parameter_buffer_object */ \
    FG_GL_FUNCTION_VOID( ProgramBufferParametersfvNV, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4, const FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramBufferParametersIivNV, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4, const FgGLint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( ProgramBufferParametersIuivNV, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4, const FgGLuint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_NV_parameter_buffer_object2 */ \
\
    /* GL_NV_path_rendering */ \
    FG_GL_FUNCTION_NUM( GenPathsNV, FgGLuint, ( , FgGLsizei _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( DeletePathsNV, ( , FgGLuint _1, FgGLsizei _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( IsPathNV, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( PathCommandsNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3, FgGLsizei _4, FgGLenum _5, const FgGLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( PathCoordsNV, ( , FgGLuint _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( PathSubCommandsNV, ( , FgGLuint _1, FgGLsizei _2, FgGLsizei _3, FgGLsizei _4, const FgGLubyte * _5, FgGLsizei _6, FgGLenum _7, const FgGLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( PathSubCoordsNV, ( , FgGLuint _1, FgGLsizei _2, FgGLsizei _3, FgGLenum _4, const FgGLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( PathStringNV, ( , FgGLuint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( PathGlyphsNV, ( , FgGLuint _1, FgGLenum _2, const FgGLvoid * _3, FgGLbitfield _4, FgGLsizei _5, FgGLenum _6, const FgGLvoid * _7, FgGLenum _8, FgGLuint _9, FgGLfloat _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION_VOID( PathGlyphRangeNV, ( , FgGLuint _1, FgGLenum _2, const FgGLvoid * _3, FgGLbitfield _4, FgGLuint _5, FgGLsizei _6, FgGLenum _7, FgGLuint _8, FgGLfloat _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION_VOID( WeightPathsNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLuint * _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( CopyPathNV, ( , FgGLuint _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( InterpolatePathsNV, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( TransformPathNV, ( , FgGLuint _1, FgGLuint _2, FgGLenum _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( PathParameterivNV, ( , FgGLuint _1, FgGLenum _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( PathParameteriNV, ( , FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( PathParameterfvNV, ( , FgGLuint _1, FgGLenum _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( PathParameterfNV, ( , FgGLuint _1, FgGLenum _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( PathDashArrayNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( PathStencilFuncNV, ( , FgGLenum _1, FgGLint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( PathStencilDepthOffsetNV, ( , FgGLfloat _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( StencilFillPathNV, ( , FgGLuint _1, FgGLenum _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( StencilStrokePathNV, ( , FgGLuint _1, FgGLint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( StencilFillPathInstancedNV, ( , FgGLsizei _1, FgGLenum _2, const FgGLvoid * _3, FgGLuint _4, FgGLenum _5, FgGLuint _6, FgGLenum _7, const FgGLfloat * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( StencilStrokePathInstancedNV, ( , FgGLsizei _1, FgGLenum _2, const FgGLvoid * _3, FgGLuint _4, FgGLint _5, FgGLuint _6, FgGLenum _7, const FgGLfloat * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( PathCoverDepthFuncNV, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( PathColorGenNV, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( PathTexGenNV, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( PathFogGenNV, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( CoverFillPathNV, ( , FgGLuint _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( CoverStrokePathNV, ( , FgGLuint _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( CoverFillPathInstancedNV, ( , FgGLsizei _1, FgGLenum _2, const FgGLvoid * _3, FgGLuint _4, FgGLenum _5, FgGLenum _6, const FgGLfloat * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( CoverStrokePathInstancedNV, ( , FgGLsizei _1, FgGLenum _2, const FgGLvoid * _3, FgGLuint _4, FgGLenum _5, FgGLenum _6, const FgGLfloat * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( GetPathParameterivNV, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetPathParameterfvNV, ( , FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetPathCommandsNV, ( , FgGLuint _1, FgGLubyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetPathCoordsNV, ( , FgGLuint _1, FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetPathDashArrayNV, ( , FgGLuint _1, FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetPathMetricsNV, ( , FgGLbitfield _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4, FgGLuint _5, FgGLsizei _6, FgGLfloat * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( GetPathMetricRangeNV, ( , FgGLbitfield _1, FgGLuint _2, FgGLsizei _3, FgGLsizei _4, FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetPathSpacingNV, ( , FgGLenum _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4, FgGLuint _5, FgGLfloat _6, FgGLfloat _7, FgGLenum _8, FgGLfloat * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION_VOID( GetPathColorGenivNV, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetPathColorGenfvNV, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetPathTexGenivNV, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetPathTexGenfvNV, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_NUM( IsPointInFillPathNV, FgGLboolean, ( , FgGLuint _1, FgGLuint _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_NUM( IsPointInStrokePathNV, FgGLboolean, ( , FgGLuint _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_NUM( GetPathLengthNV, FgGLfloat, ( , FgGLuint _1, FgGLsizei _2, FgGLsizei _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_NUM( PointAlongPathNV, FgGLboolean, ( , FgGLuint _1, FgGLsizei _2, FgGLsizei _3, FgGLfloat _4, FgGLfloat * _5, FgGLfloat * _6, FgGLfloat * _7, FgGLfloat * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
\
    /* GL_NV_pixel_data_range */ \
    FG_GL_FUNCTION_VOID( PixelDataRangeNV, ( , FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( FlushPixelDataRangeNV, ( , FgGLenum _1 ), ( , _1 ) ) \
\
    /* GL_NV_point_sprite */ \
    FG_GL_FUNCTION_VOID( PointParameteriNV, ( , FgGLenum _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( PointParameterivNV, ( , FgGLenum _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
\
    /* GL_NV_present_video */ \
    FG_GL_FUNCTION_VOID( PresentFrameKeyedNV, ( , FgGLuint _1, FgGLuint64EXT _2, FgGLuint _3, FgGLuint _4, FgGLenum _5, FgGLenum _6, FgGLuint _7, FgGLuint _8, FgGLenum _9, FgGLuint _10, FgGLuint _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG_GL_FUNCTION_VOID( PresentFrameDualFillNV, ( , FgGLuint _1, FgGLuint64EXT _2, FgGLuint _3, FgGLuint _4, FgGLenum _5, FgGLenum _6, FgGLuint _7, FgGLenum _8, FgGLuint _9, FgGLenum _10, FgGLuint _11, FgGLenum _12, FgGLuint _13 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 ) ) \
    FG_GL_FUNCTION_VOID( GetVideoivNV, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVideouivNV, ( , FgGLuint _1, FgGLenum _2, FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVideoi64vNV, ( , FgGLuint _1, FgGLenum _2, FgGLint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVideoui64vNV, ( , FgGLuint _1, FgGLenum _2, FgGLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_NV_primitive_restart */ \
    FG_GL_FUNCTION_VOID( PrimitiveRestartNV, (), () ) \
    FG_GL_FUNCTION_VOID( PrimitiveRestartIndexNV, ( , FgGLuint _1 ), ( , _1 ) ) \
\
    /* GL_NV_register_combiners */ \
    FG_GL_FUNCTION_VOID( CombinerParameterfvNV, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( CombinerParameterfNV, ( , FgGLenum _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( CombinerParameterivNV, ( , FgGLenum _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( CombinerParameteriNV, ( , FgGLenum _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( CombinerInputNV, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLenum _5, FgGLenum _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( CombinerOutputNV, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLenum _5, FgGLenum _6, FgGLenum _7, FgGLboolean _8, FgGLboolean _9, FgGLboolean _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION_VOID( FinalCombinerInputNV, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetCombinerInputParameterfvNV, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetCombinerInputParameterivNV, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetCombinerOutputParameterfvNV, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetCombinerOutputParameterivNV, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetFinalCombinerInputParameterfvNV, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetFinalCombinerInputParameterivNV, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_NV_register_combiners2 */ \
    FG_GL_FUNCTION_VOID( CombinerStageParameterfvNV, ( , FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetCombinerStageParameterfvNV, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_NV_shader_atomic_counters */ \
\
    /* GL_NV_shader_atomic_float */ \
\
    /* GL_NV_shader_buffer_load */ \
    FG_GL_FUNCTION_VOID( MakeBufferResidentNV, ( , FgGLenum _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MakeBufferNonResidentNV, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( IsBufferResidentNV, FgGLboolean, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( MakeNamedBufferResidentNV, ( , FgGLuint _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( MakeNamedBufferNonResidentNV, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( IsNamedBufferResidentNV, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GetBufferParameterui64vNV, ( , FgGLenum _1, FgGLenum _2, FgGLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetNamedBufferParameterui64vNV, ( , FgGLuint _1, FgGLenum _2, FgGLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetIntegerui64vNV, ( , FgGLenum _1, FgGLuint64EXT * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Uniformui64NV, ( , FgGLint _1, FgGLuint64EXT _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Uniformui64vNV, ( , FgGLint _1, FgGLsizei _2, const FgGLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetUniformui64vNV, ( , FgGLuint _1, FgGLint _2, FgGLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformui64NV, ( , FgGLuint _1, FgGLint _2, FgGLuint64EXT _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramUniformui64vNV, ( , FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint64EXT * _4 ), ( , _1, _2, _3, _4 ) ) \
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
    FG_GL_FUNCTION_VOID( TextureBarrierNV, (), () ) \
\
    /* GL_NV_texture_compression_vtc */ \
\
    /* GL_NV_texture_env_combine4 */ \
\
    /* GL_NV_texture_expand_normal */ \
\
    /* GL_NV_texture_multisample */ \
    FG_GL_FUNCTION_VOID( TexImage2DMultisampleCoverageNV, ( , FgGLenum _1, FgGLsizei _2, FgGLsizei _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLboolean _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( TexImage3DMultisampleCoverageNV, ( , FgGLenum _1, FgGLsizei _2, FgGLsizei _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLboolean _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( TextureImage2DMultisampleNV, ( , FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLboolean _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( TextureImage3DMultisampleNV, ( , FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLboolean _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( TextureImage2DMultisampleCoverageNV, ( , FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLboolean _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( TextureImage3DMultisampleCoverageNV, ( , FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLboolean _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
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
    FG_GL_FUNCTION_VOID( BeginTransformFeedbackNV, ( , FgGLenum _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( EndTransformFeedbackNV, (), () ) \
    FG_GL_FUNCTION_VOID( TransformFeedbackAttribsNV, ( , FgGLuint _1, const FgGLint * _2, FgGLenum _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( BindBufferRangeNV, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLintptr _4, FgGLsizeiptr _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( BindBufferOffsetNV, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLintptr _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( BindBufferBaseNV, ( , FgGLenum _1, FgGLuint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TransformFeedbackVaryingsNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLint * _3, FgGLenum _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ActiveVaryingNV, ( , FgGLuint _1, const FgGLchar * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( GetVaryingLocationNV, FgGLint, ( , FgGLuint _1, const FgGLchar * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetActiveVaryingNV, ( , FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLsizei * _5, FgGLenum * _6, FgGLchar * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( GetTransformFeedbackVaryingNV, ( , FgGLuint _1, FgGLuint _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TransformFeedbackStreamAttribsNV, ( , FgGLsizei _1, const FgGLint * _2, FgGLsizei _3, const FgGLint * _4, FgGLenum _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_NV_transform_feedback2 */ \
    FG_GL_FUNCTION_VOID( BindTransformFeedbackNV, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DeleteTransformFeedbacksNV, ( , FgGLsizei _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GenTransformFeedbacksNV, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( IsTransformFeedbackNV, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( PauseTransformFeedbackNV, (), () ) \
    FG_GL_FUNCTION_VOID( ResumeTransformFeedbackNV, (), () ) \
    FG_GL_FUNCTION_VOID( DrawTransformFeedbackNV, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
\
    /* GL_NV_vdpau_interop */ \
    FG_GL_FUNCTION_VOID( VDPAUInitNV, ( , const FgGLvoid * _1, const FgGLvoid * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VDPAUFiniNV, (), () ) \
    FG_GL_FUNCTION_NUM( VDPAURegisterVideoSurfaceNV, FgGLvdpauSurfaceNV, ( , const FgGLvoid * _1, FgGLenum _2, FgGLsizei _3, const FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_NUM( VDPAURegisterOutputSurfaceNV, FgGLvdpauSurfaceNV, ( , const FgGLvoid * _1, FgGLenum _2, FgGLsizei _3, const FgGLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VDPAUIsSurfaceNV, ( , FgGLvdpauSurfaceNV _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( VDPAUUnregisterSurfaceNV, ( , FgGLvdpauSurfaceNV _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( VDPAUGetSurfaceivNV, ( , FgGLvdpauSurfaceNV _1, FgGLenum _2, FgGLsizei _3, FgGLsizei * _4, FgGLint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VDPAUSurfaceAccessNV, ( , FgGLvdpauSurfaceNV _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VDPAUMapSurfacesNV, ( , FgGLsizei _1, const FgGLvdpauSurfaceNV * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VDPAUUnmapSurfacesNV, ( , FgGLsizei _1, const FgGLvdpauSurfaceNV * _2 ), ( , _1, _2 ) ) \
\
    /* GL_NV_vertex_array_range */ \
    FG_GL_FUNCTION_VOID( FlushVertexArrayRangeNV, (), () ) \
    FG_GL_FUNCTION_VOID( VertexArrayRangeNV, ( , FgGLsizei _1, const FgGLvoid * _2 ), ( , _1, _2 ) ) \
\
    /* GL_NV_vertex_array_range2 */ \
\
    /* GL_NV_vertex_attrib_integer_64bit */ \
    FG_GL_FUNCTION_VOID( VertexAttribL1i64NV, ( , FgGLuint _1, FgGLint64EXT _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2i64NV, ( , FgGLuint _1, FgGLint64EXT _2, FgGLint64EXT _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3i64NV, ( , FgGLuint _1, FgGLint64EXT _2, FgGLint64EXT _3, FgGLint64EXT _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4i64NV, ( , FgGLuint _1, FgGLint64EXT _2, FgGLint64EXT _3, FgGLint64EXT _4, FgGLint64EXT _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1i64vNV, ( , FgGLuint _1, const FgGLint64EXT * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2i64vNV, ( , FgGLuint _1, const FgGLint64EXT * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3i64vNV, ( , FgGLuint _1, const FgGLint64EXT * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4i64vNV, ( , FgGLuint _1, const FgGLint64EXT * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1ui64NV, ( , FgGLuint _1, FgGLuint64EXT _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2ui64NV, ( , FgGLuint _1, FgGLuint64EXT _2, FgGLuint64EXT _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3ui64NV, ( , FgGLuint _1, FgGLuint64EXT _2, FgGLuint64EXT _3, FgGLuint64EXT _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4ui64NV, ( , FgGLuint _1, FgGLuint64EXT _2, FgGLuint64EXT _3, FgGLuint64EXT _4, FgGLuint64EXT _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1ui64vNV, ( , FgGLuint _1, const FgGLuint64EXT * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2ui64vNV, ( , FgGLuint _1, const FgGLuint64EXT * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3ui64vNV, ( , FgGLuint _1, const FgGLuint64EXT * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4ui64vNV, ( , FgGLuint _1, const FgGLuint64EXT * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribLi64vNV, ( , FgGLuint _1, FgGLenum _2, FgGLint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribLui64vNV, ( , FgGLuint _1, FgGLenum _2, FgGLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribLFormatNV, ( , FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_NV_vertex_buffer_unified_memory */ \
    FG_GL_FUNCTION_VOID( BufferAddressRangeNV, ( , FgGLenum _1, FgGLuint _2, FgGLuint64EXT _3, FgGLsizeiptr _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexFormatNV, ( , FgGLint _1, FgGLenum _2, FgGLsizei _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( NormalFormatNV, ( , FgGLenum _1, FgGLsizei _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( ColorFormatNV, ( , FgGLint _1, FgGLenum _2, FgGLsizei _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( IndexFormatNV, ( , FgGLenum _1, FgGLsizei _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexCoordFormatNV, ( , FgGLint _1, FgGLenum _2, FgGLsizei _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( EdgeFlagFormatNV, ( , FgGLsizei _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( SecondaryColorFormatNV, ( , FgGLint _1, FgGLenum _2, FgGLsizei _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( FogCoordFormatNV, ( , FgGLenum _1, FgGLsizei _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribFormatNV, ( , FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLboolean _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribIFormatNV, ( , FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetIntegerui64i_vNV, ( , FgGLenum _1, FgGLuint _2, FgGLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_NV_vertex_program */ \
    FG_GL_FUNCTION_NUM( AreProgramsResidentNV, FgGLboolean, ( , FgGLsizei _1, const FgGLuint * _2, FgGLboolean * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( BindProgramNV, ( , FgGLenum _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( DeleteProgramsNV, ( , FgGLsizei _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( ExecuteProgramNV, ( , FgGLenum _1, FgGLuint _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GenProgramsNV, ( , FgGLsizei _1, FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramParameterdvNV, ( , FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramParameterfvNV, ( , FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramivNV, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetProgramStringNV, ( , FgGLuint _1, FgGLenum _2, FgGLubyte * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetTrackMatrixivNV, ( , FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribdvNV, ( , FgGLuint _1, FgGLenum _2, FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribfvNV, ( , FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribivNV, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribPointervNV, ( , FgGLuint _1, FgGLenum _2, FgGLvoid ** _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_NUM( IsProgramNV, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( LoadProgramNV, ( , FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLubyte * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramParameter4dNV, ( , FgGLenum _1, FgGLuint _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ProgramParameter4dvNV, ( , FgGLenum _1, FgGLuint _2, const FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramParameter4fNV, ( , FgGLenum _1, FgGLuint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ProgramParameter4fvNV, ( , FgGLenum _1, FgGLuint _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ProgramParameters4dvNV, ( , FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ProgramParameters4fvNV, ( , FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( RequestResidentProgramsNV, ( , FgGLsizei _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TrackMatrixNV, ( , FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLenum _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribPointerNV, ( , FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, const FgGLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1dNV, ( , FgGLuint _1, FgGLdouble _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1dvNV, ( , FgGLuint _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1fNV, ( , FgGLuint _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1fvNV, ( , FgGLuint _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1sNV, ( , FgGLuint _1, FgGLshort _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1svNV, ( , FgGLuint _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2dNV, ( , FgGLuint _1, FgGLdouble _2, FgGLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2dvNV, ( , FgGLuint _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2fNV, ( , FgGLuint _1, FgGLfloat _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2fvNV, ( , FgGLuint _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2sNV, ( , FgGLuint _1, FgGLshort _2, FgGLshort _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2svNV, ( , FgGLuint _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3dNV, ( , FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3dvNV, ( , FgGLuint _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3fNV, ( , FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3fvNV, ( , FgGLuint _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3sNV, ( , FgGLuint _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3svNV, ( , FgGLuint _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4dNV, ( , FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4dvNV, ( , FgGLuint _1, const FgGLdouble * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4fNV, ( , FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4fvNV, ( , FgGLuint _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4sNV, ( , FgGLuint _1, FgGLshort _2, FgGLshort _3, FgGLshort _4, FgGLshort _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4svNV, ( , FgGLuint _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4ubNV, ( , FgGLuint _1, FgGLubyte _2, FgGLubyte _3, FgGLubyte _4, FgGLubyte _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4ubvNV, ( , FgGLuint _1, const FgGLubyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribs1dvNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribs1fvNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribs1svNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLshort * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribs2dvNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribs2fvNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribs2svNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLshort * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribs3dvNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribs3fvNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribs3svNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLshort * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribs4dvNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribs4fvNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribs4svNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLshort * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribs4ubvNV, ( , FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3 ), ( , _1, _2, _3 ) ) \
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
    FG_GL_FUNCTION_VOID( VertexAttribI1iEXT, ( , FgGLuint _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2iEXT, ( , FgGLuint _1, FgGLint _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3iEXT, ( , FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4iEXT, ( , FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI1uiEXT, ( , FgGLuint _1, FgGLuint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2uiEXT, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3uiEXT, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4uiEXT, ( , FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI1ivEXT, ( , FgGLuint _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2ivEXT, ( , FgGLuint _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3ivEXT, ( , FgGLuint _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4ivEXT, ( , FgGLuint _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI1uivEXT, ( , FgGLuint _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2uivEXT, ( , FgGLuint _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3uivEXT, ( , FgGLuint _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4uivEXT, ( , FgGLuint _1, const FgGLuint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4bvEXT, ( , FgGLuint _1, const FgGLbyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4svEXT, ( , FgGLuint _1, const FgGLshort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4ubvEXT, ( , FgGLuint _1, const FgGLubyte * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4usvEXT, ( , FgGLuint _1, const FgGLushort * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( VertexAttribIPointerEXT, ( , FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, const FgGLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribIivEXT, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribIuivEXT, ( , FgGLuint _1, FgGLenum _2, FgGLuint * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_NV_video_capture */ \
    FG_GL_FUNCTION_VOID( BeginVideoCaptureNV, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( BindVideoCaptureStreamBufferNV, ( , FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLintptrARB _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( BindVideoCaptureStreamTextureNV, ( , FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLenum _4, FgGLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( EndVideoCaptureNV, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GetVideoCaptureivNV, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetVideoCaptureStreamivNV, ( , FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetVideoCaptureStreamfvNV, ( , FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetVideoCaptureStreamdvNV, ( , FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_NUM( VideoCaptureNV, FgGLenum, ( , FgGLuint _1, FgGLuint * _2, FgGLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( VideoCaptureStreamParameterivNV, ( , FgGLuint _1, FgGLuint _2, FgGLenum _3, const FgGLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VideoCaptureStreamParameterfvNV, ( , FgGLuint _1, FgGLuint _2, FgGLenum _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( VideoCaptureStreamParameterdvNV, ( , FgGLuint _1, FgGLuint _2, FgGLenum _3, const FgGLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_OML_interlace */ \
\
    /* GL_OML_resample */ \
\
    /* GL_OML_subsample */ \
\
    /* GL_PGI_misc_hints */ \
    FG_GL_FUNCTION_VOID( HintPGI, ( , FgGLenum _1, FgGLint _2 ), ( , _1, _2 ) ) \
\
    /* GL_PGI_vertex_hints */ \
\
    /* GL_REND_screen_coordinates */ \
\
    /* GL_S3_s3tc */ \
\
    /* GL_SGIS_detail_texture */ \
    FG_GL_FUNCTION_VOID( DetailTexFuncSGIS, ( , FgGLenum _1, FgGLsizei _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetDetailTexFuncSGIS, ( , FgGLenum _1, FgGLfloat * _2 ), ( , _1, _2 ) ) \
\
    /* GL_SGIS_fog_function */ \
    FG_GL_FUNCTION_VOID( FogFuncSGIS, ( , FgGLsizei _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetFogFuncSGIS, ( , FgGLfloat * _1 ), ( , _1 ) ) \
\
    /* GL_SGIS_generate_mipmap */ \
\
    /* GL_SGIS_multisample */ \
    FG_GL_FUNCTION_VOID( SampleMaskSGIS, ( , FgGLclampf _1, FgGLboolean _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( SamplePatternSGIS, ( , FgGLenum _1 ), ( , _1 ) ) \
\
    /* GL_SGIS_pixel_texture */ \
    FG_GL_FUNCTION_VOID( PixelTexGenParameteriSGIS, ( , FgGLenum _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( PixelTexGenParameterivSGIS, ( , FgGLenum _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( PixelTexGenParameterfSGIS, ( , FgGLenum _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( PixelTexGenParameterfvSGIS, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetPixelTexGenParameterivSGIS, ( , FgGLenum _1, FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( GetPixelTexGenParameterfvSGIS, ( , FgGLenum _1, FgGLfloat * _2 ), ( , _1, _2 ) ) \
\
    /* GL_SGIS_point_line_texgen */ \
\
    /* GL_SGIS_point_parameters */ \
    FG_GL_FUNCTION_VOID( PointParameterfSGIS, ( , FgGLenum _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( PointParameterfvSGIS, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
\
    /* GL_SGIS_sharpen_texture */ \
    FG_GL_FUNCTION_VOID( SharpenTexFuncSGIS, ( , FgGLenum _1, FgGLsizei _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetSharpenTexFuncSGIS, ( , FgGLenum _1, FgGLfloat * _2 ), ( , _1, _2 ) ) \
\
    /* GL_SGIS_texture4D */ \
    FG_GL_FUNCTION_VOID( TexImage4DSGIS, ( , FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLint _8, FgGLenum _9, FgGLenum _10, const FgGLvoid * _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG_GL_FUNCTION_VOID( TexSubImage4DSGIS, ( , FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8, FgGLsizei _9, FgGLsizei _10, FgGLenum _11, FgGLenum _12, const FgGLvoid * _13 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 ) ) \
\
    /* GL_SGIS_texture_border_clamp */ \
\
    /* GL_SGIS_texture_color_mask */ \
    FG_GL_FUNCTION_VOID( TextureColorMaskSGIS, ( , FgGLboolean _1, FgGLboolean _2, FgGLboolean _3, FgGLboolean _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_SGIS_texture_edge_clamp */ \
\
    /* GL_SGIS_texture_filter4 */ \
    FG_GL_FUNCTION_VOID( GetTexFilterFuncSGIS, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexFilterFuncSGIS, ( , FgGLenum _1, FgGLenum _2, FgGLsizei _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_SGIS_texture_lod */ \
\
    /* GL_SGIS_texture_select */ \
\
    /* GL_SGIX_async */ \
    FG_GL_FUNCTION_VOID( AsyncMarkerSGIX, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( FinishAsyncSGIX, FgGLint, ( , FgGLuint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( PollAsyncSGIX, FgGLint, ( , FgGLuint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_NUM( GenAsyncMarkersSGIX, FgGLuint, ( , FgGLsizei _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( DeleteAsyncMarkersSGIX, ( , FgGLuint _1, FgGLsizei _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( IsAsyncMarkerSGIX, FgGLboolean, ( , FgGLuint _1 ), ( , _1 ) ) \
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
    FG_GL_FUNCTION_VOID( FlushRasterSGIX, (), () ) \
\
    /* GL_SGIX_fog_offset */ \
\
    /* GL_SGIX_fragment_lighting */ \
    FG_GL_FUNCTION_VOID( FragmentColorMaterialSGIX, ( , FgGLenum _1, FgGLenum _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( FragmentLightfSGIX, ( , FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( FragmentLightfvSGIX, ( , FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( FragmentLightiSGIX, ( , FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( FragmentLightivSGIX, ( , FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( FragmentLightModelfSGIX, ( , FgGLenum _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( FragmentLightModelfvSGIX, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( FragmentLightModeliSGIX, ( , FgGLenum _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( FragmentLightModelivSGIX, ( , FgGLenum _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( FragmentMaterialfSGIX, ( , FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( FragmentMaterialfvSGIX, ( , FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( FragmentMaterialiSGIX, ( , FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( FragmentMaterialivSGIX, ( , FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetFragmentLightfvSGIX, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetFragmentLightivSGIX, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetFragmentMaterialfvSGIX, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetFragmentMaterialivSGIX, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( LightEnviSGIX, ( , FgGLenum _1, FgGLint _2 ), ( , _1, _2 ) ) \
\
    /* GL_SGIX_framezoom */ \
    FG_GL_FUNCTION_VOID( FrameZoomSGIX, ( , FgGLint _1 ), ( , _1 ) ) \
\
    /* GL_SGIX_igloo_interface */ \
    FG_GL_FUNCTION_VOID( IglooInterfaceSGIX, ( , FgGLenum _1, const FgGLvoid * _2 ), ( , _1, _2 ) ) \
\
    /* GL_SGIX_instruments */ \
    FG_GL_FUNCTION_NUM( GetInstrumentsSGIX, FgGLint, (), () ) \
    FG_GL_FUNCTION_VOID( InstrumentsBufferSGIX, ( , FgGLsizei _1, FgGLint * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_NUM( PollInstrumentsSGIX, FgGLint, ( , FgGLint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ReadInstrumentsSGIX, ( , FgGLint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( StartInstrumentsSGIX, (), () ) \
    FG_GL_FUNCTION_VOID( StopInstrumentsSGIX, ( , FgGLint _1 ), ( , _1 ) ) \
\
    /* GL_SGIX_interlace */ \
\
    /* GL_SGIX_ir_instrument1 */ \
\
    /* GL_SGIX_list_priority */ \
    FG_GL_FUNCTION_VOID( GetListParameterfvSGIX, ( , FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetListParameterivSGIX, ( , FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ListParameterfSGIX, ( , FgGLuint _1, FgGLenum _2, FgGLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ListParameterfvSGIX, ( , FgGLuint _1, FgGLenum _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ListParameteriSGIX, ( , FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ListParameterivSGIX, ( , FgGLuint _1, FgGLenum _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_SGIX_pixel_texture */ \
    FG_GL_FUNCTION_VOID( PixelTexGenSGIX, ( , FgGLenum _1 ), ( , _1 ) ) \
\
    /* GL_SGIX_pixel_tiles */ \
\
    /* GL_SGIX_polynomial_ffd */ \
    FG_GL_FUNCTION_VOID( DeformationMap3dSGIX, ( , FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLint _4, FgGLint _5, FgGLdouble _6, FgGLdouble _7, FgGLint _8, FgGLint _9, FgGLdouble _10, FgGLdouble _11, FgGLint _12, FgGLint _13, const FgGLdouble * _14 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14 ) ) \
    FG_GL_FUNCTION_VOID( DeformationMap3fSGIX, ( , FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLint _4, FgGLint _5, FgGLfloat _6, FgGLfloat _7, FgGLint _8, FgGLint _9, FgGLfloat _10, FgGLfloat _11, FgGLint _12, FgGLint _13, const FgGLfloat * _14 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14 ) ) \
    FG_GL_FUNCTION_VOID( DeformSGIX, ( , FgGLbitfield _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( LoadIdentityDeformationMapSGIX, ( , FgGLbitfield _1 ), ( , _1 ) ) \
\
    /* GL_SGIX_reference_plane */ \
    FG_GL_FUNCTION_VOID( ReferencePlaneSGIX, ( , const FgGLdouble * _1 ), ( , _1 ) ) \
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
    FG_GL_FUNCTION_VOID( SpriteParameterfSGIX, ( , FgGLenum _1, FgGLfloat _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( SpriteParameterfvSGIX, ( , FgGLenum _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( SpriteParameteriSGIX, ( , FgGLenum _1, FgGLint _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( SpriteParameterivSGIX, ( , FgGLenum _1, const FgGLint * _2 ), ( , _1, _2 ) ) \
\
    /* GL_SGIX_subsample */ \
\
    /* GL_SGIX_tag_sample_buffer */ \
    FG_GL_FUNCTION_VOID( TagSampleBufferSGIX, (), () ) \
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
    FG_GL_FUNCTION_VOID( ColorTableSGI, ( , FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLenum _5, const FgGLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ColorTableParameterfvSGI, ( , FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ColorTableParameterivSGI, ( , FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( CopyColorTableSGI, ( , FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( GetColorTableSGI, ( , FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( GetColorTableParameterfvSGI, ( , FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( GetColorTableParameterivSGI, ( , FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_SGI_texture_color_table */ \
\
    /* GL_SUNX_constant_data */ \
    FG_GL_FUNCTION_VOID( FinishTextureSUNX, (), () ) \
\
    /* GL_SUN_convolution_border_modes */ \
\
    /* GL_SUN_global_alpha */ \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactorbSUN, ( , FgGLbyte _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactorsSUN, ( , FgGLshort _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactoriSUN, ( , FgGLint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactorfSUN, ( , FgGLfloat _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactordSUN, ( , FgGLdouble _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactorubSUN, ( , FgGLubyte _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactorusSUN, ( , FgGLushort _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactoruiSUN, ( , FgGLuint _1 ), ( , _1 ) ) \
\
    /* GL_SUN_mesh_array */ \
    FG_GL_FUNCTION_VOID( DrawMeshArraysSUN, ( , FgGLenum _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_SUN_slice_accum */ \
\
    /* GL_SUN_triangle_list */ \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiSUN, ( , FgGLuint _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeusSUN, ( , FgGLushort _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeubSUN, ( , FgGLubyte _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuivSUN, ( , const FgGLuint * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeusvSUN, ( , const FgGLushort * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeubvSUN, ( , const FgGLubyte * _1 ), ( , _1 ) ) \
    FG_GL_FUNCTION_VOID( ReplacementCodePointerSUN, ( , FgGLenum _1, FgGLsizei _2, const FgGLvoid ** _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_SUN_vertex */ \
    FG_GL_FUNCTION_VOID( Color4ubVertex2fSUN, ( , FgGLubyte _1, FgGLubyte _2, FgGLubyte _3, FgGLubyte _4, FgGLfloat _5, FgGLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( Color4ubVertex2fvSUN, ( , const FgGLubyte * _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Color4ubVertex3fSUN, ( , FgGLubyte _1, FgGLubyte _2, FgGLubyte _3, FgGLubyte _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( Color4ubVertex3fvSUN, ( , const FgGLubyte * _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Color3fVertex3fSUN, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( Color3fVertex3fvSUN, ( , const FgGLfloat * _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Normal3fVertex3fSUN, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( Normal3fVertex3fvSUN, ( , const FgGLfloat * _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( Color4fNormal3fVertex3fSUN, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9, FgGLfloat _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG_GL_FUNCTION_VOID( Color4fNormal3fVertex3fvSUN, ( , const FgGLfloat * _1, const FgGLfloat * _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2fVertex3fSUN, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2fVertex3fvSUN, ( , const FgGLfloat * _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord4fVertex4fSUN, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord4fVertex4fvSUN, ( , const FgGLfloat * _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2fColor4ubVertex3fSUN, ( , FgGLfloat _1, FgGLfloat _2, FgGLubyte _3, FgGLubyte _4, FgGLubyte _5, FgGLubyte _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2fColor4ubVertex3fvSUN, ( , const FgGLfloat * _1, const FgGLubyte * _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2fColor3fVertex3fSUN, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2fColor3fVertex3fvSUN, ( , const FgGLfloat * _1, const FgGLfloat * _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2fNormal3fVertex3fSUN, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2fNormal3fVertex3fvSUN, ( , const FgGLfloat * _1, const FgGLfloat * _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2fColor4fNormal3fVertex3fSUN, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9, FgGLfloat _10, FgGLfloat _11, FgGLfloat _12 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord2fColor4fNormal3fVertex3fvSUN, ( , const FgGLfloat * _1, const FgGLfloat * _2, const FgGLfloat * _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord4fColor4fNormal3fVertex4fSUN, ( , FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9, FgGLfloat _10, FgGLfloat _11, FgGLfloat _12, FgGLfloat _13, FgGLfloat _14, FgGLfloat _15 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15 ) ) \
    FG_GL_FUNCTION_VOID( TexCoord4fColor4fNormal3fVertex4fvSUN, ( , const FgGLfloat * _1, const FgGLfloat * _2, const FgGLfloat * _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiVertex3fSUN, ( , FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiVertex3fvSUN, ( , const FgGLuint * _1, const FgGLfloat * _2 ), ( , _1, _2 ) ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiColor4ubVertex3fSUN, ( , FgGLuint _1, FgGLubyte _2, FgGLubyte _3, FgGLubyte _4, FgGLubyte _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiColor4ubVertex3fvSUN, ( , const FgGLuint * _1, const FgGLubyte * _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiColor3fVertex3fSUN, ( , FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiColor3fVertex3fvSUN, ( , const FgGLuint * _1, const FgGLfloat * _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiNormal3fVertex3fSUN, ( , FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiNormal3fVertex3fvSUN, ( , const FgGLuint * _1, const FgGLfloat * _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiColor4fNormal3fVertex3fSUN, ( , FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9, FgGLfloat _10, FgGLfloat _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiColor4fNormal3fVertex3fvSUN, ( , const FgGLuint * _1, const FgGLfloat * _2, const FgGLfloat * _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fVertex3fSUN, ( , FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fVertex3fvSUN, ( , const FgGLuint * _1, const FgGLfloat * _2, const FgGLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN, ( , FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN, ( , const FgGLuint * _1, const FgGLfloat * _2, const FgGLfloat * _3, const FgGLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN, ( , FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9, FgGLfloat _10, FgGLfloat _11, FgGLfloat _12, FgGLfloat _13 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 ) ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN, ( , const FgGLuint * _1, const FgGLfloat * _2, const FgGLfloat * _3, const FgGLfloat * _4, const FgGLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_WIN_phong_shading */ \
\
    /* GL_WIN_specular_fog */ \

#endif  // FG_TYPE_GL_FUNCTIONS_H
