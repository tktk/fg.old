#ifndef FG_GL_FUNCTIONS_H
#define FG_GL_FUNCTIONS_H

#include "fg/gl/types.h"
#include "fg/util/import.h"

#define FG_GL_FUNCTIONS \
    /* GL_VERSION_1_0 */ \
    FG_GL_FUNCTION( 0, FgGLenum, GetError, (), () ) \
    FG_GL_VOID_FUNCTION( Begin, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( End, (), () ) \
    FG_GL_VOID_FUNCTION( EdgeFlag, ( FgGLboolean _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( EdgeFlagv, ( const FgGLboolean * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex2s, ( FgGLshort _1, FgGLshort _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex2i, ( FgGLint _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex2f, ( FgGLfloat _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex2d, ( FgGLdouble _1, FgGLdouble _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex3s, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex3i, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex3f, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex3d, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex4s, ( FgGLshort _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex4i, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex4f, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex4d, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex2sv, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex2iv, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex2fv, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex2dv, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex3sv, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex3iv, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex3fv, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex3dv, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex4sv, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex4iv, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex4fv, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex4dv, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord1s, ( FgGLshort _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord1i, ( FgGLint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord1f, ( FgGLfloat _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord1d, ( FgGLdouble _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2s, ( FgGLshort _1, FgGLshort _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2i, ( FgGLint _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2f, ( FgGLfloat _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2d, ( FgGLdouble _1, FgGLdouble _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord3s, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord3i, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord3f, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord3d, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord4s, ( FgGLshort _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord4i, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord4f, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord4d, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord1sv, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord1iv, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord1fv, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord1dv, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2sv, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2iv, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2fv, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2dv, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord3sv, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord3iv, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord3fv, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord3dv, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord4sv, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord4iv, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord4fv, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord4dv, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Normal3b, ( FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Normal3s, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Normal3i, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Normal3f, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Normal3d, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Normal3bv, ( const FgGLbyte * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Normal3sv, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Normal3iv, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Normal3fv, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Normal3dv, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Color3b, ( FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Color3s, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Color3i, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Color3f, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Color3d, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Color3ub, ( FgGLubyte _1, FgGLubyte _2, FgGLubyte _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Color3us, ( FgGLushort _1, FgGLushort _2, FgGLushort _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Color3ui, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4b, ( FgGLbyte _1, FgGLbyte _2, FgGLbyte _3, FgGLbyte _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4s, ( FgGLshort _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4i, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4f, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4d, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4ub, ( FgGLubyte _1, FgGLubyte _2, FgGLubyte _3, FgGLubyte _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4us, ( FgGLushort _1, FgGLushort _2, FgGLushort _3, FgGLushort _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4ui, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Color3bv, ( const FgGLbyte * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Color3sv, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Color3iv, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Color3fv, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Color3dv, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Color3ubv, ( const FgGLubyte * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Color3usv, ( const FgGLushort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Color3uiv, ( const FgGLuint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4bv, ( const FgGLbyte * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4sv, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4iv, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4fv, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4dv, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4ubv, ( const FgGLubyte * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4usv, ( const FgGLushort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4uiv, ( const FgGLuint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Indexs, ( FgGLshort _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Indexi, ( FgGLint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Indexf, ( FgGLfloat _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Indexd, ( FgGLdouble _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Indexsv, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Indexiv, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Indexfv, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Indexdv, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Rects, ( FgGLshort _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Recti, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Rectf, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Rectd, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Rectsv, ( const FgGLshort * _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Rectiv, ( const FgGLint * _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Rectfv, ( const FgGLfloat * _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Rectdv, ( const FgGLdouble * _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DepthRange, ( FgGLclampd _1, FgGLclampd _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Viewport, ( FgGLint _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixMode, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( LoadMatrixf, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( LoadMatrixd, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( MultMatrixf, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( MultMatrixd, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( LoadIdentity, (), () ) \
    FG_GL_VOID_FUNCTION( Rotatef, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Rotated, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Translatef, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Translated, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Scalef, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Scaled, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Frustum, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( Ortho, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( PushMatrix, (), () ) \
    FG_GL_VOID_FUNCTION( PopMatrix, (), () ) \
    FG_GL_VOID_FUNCTION( Enable, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Disable, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexGeni, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexGenf, ( FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexGend, ( FgGLenum _1, FgGLenum _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexGeniv, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexGenfv, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexGendv, ( FgGLenum _1, FgGLenum _2, const FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ClipPlane, ( FgGLenum _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos2s, ( FgGLshort _1, FgGLshort _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos2i, ( FgGLint _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos2f, ( FgGLfloat _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos2d, ( FgGLdouble _1, FgGLdouble _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos2sv, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos2iv, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos2fv, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos2dv, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos3s, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos3i, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos3f, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos3d, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos3sv, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos3iv, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos3fv, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos3dv, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos4s, ( FgGLshort _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos4i, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos4f, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos4d, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos4sv, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos4iv, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos4fv, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos4dv, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( FrontFace, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Materiali, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Materialf, ( FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Materialiv, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Materialfv, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Lighti, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Lightf, ( FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Lightiv, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Lightfv, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( LightModeli, ( FgGLenum _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( LightModelf, ( FgGLenum _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( LightModeliv, ( FgGLenum _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( LightModelfv, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( ColorMaterial, ( FgGLenum _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( ShadeModel, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( PointSize, ( FgGLfloat _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( LineWidth, ( FgGLfloat _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( LineStipple, ( FgGLint _1, FgGLushort _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( CullFace, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( PolygonStipple, ( const FgGLubyte * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( PolygonMode, ( FgGLenum _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( PixelStorei, ( FgGLenum _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( PixelStoref, ( FgGLenum _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( PixelTransferi, ( FgGLenum _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( PixelTransferf, ( FgGLenum _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( PixelMapuiv, ( FgGLenum _1, FgGLsizei _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( PixelMapusv, ( FgGLenum _1, FgGLsizei _2, const FgGLushort * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( PixelMapfv, ( FgGLenum _1, FgGLsizei _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( DrawPixels, ( FgGLsizei _1, FgGLsizei _2, FgGLenum _3, FgGLenum _4, const FgGLvoid * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( PixelZoom, ( FgGLfloat _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Bitmap, ( FgGLsizei _1, FgGLsizei _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, const FgGLubyte * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( TexImage1D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLint _5, FgGLenum _6, FgGLenum _7, const FgGLvoid * _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( TexImage2D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLsizei _5, FgGLint _6, FgGLenum _7, FgGLenum _8, const FgGLvoid * _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
    FG_GL_VOID_FUNCTION( TexParameteri, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexParameterf, ( FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexParameteriv, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexParameterfv, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexEnvi, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexEnvf, ( FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexEnviv, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexEnvfv, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Fogi, ( FgGLenum _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Fogf, ( FgGLenum _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Fogiv, ( FgGLenum _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Fogfv, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Scissor, ( FgGLint _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( AlphaFunc, ( FgGLenum _1, FgGLclampf _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( StencilFunc, ( FgGLenum _1, FgGLint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( StencilOp, ( FgGLenum _1, FgGLenum _2, FgGLenum _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( DepthFunc, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( BlendFunc, ( FgGLenum _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( LogicOp, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( DrawBuffer, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( IndexMask, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ColorMask, ( FgGLboolean _1, FgGLboolean _2, FgGLboolean _3, FgGLboolean _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( DepthMask, ( FgGLboolean _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( StencilMask, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Clear, ( FgGLbitfield _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ClearColor, ( FgGLclampf _1, FgGLclampf _2, FgGLclampf _3, FgGLclampf _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ClearIndex, ( FgGLfloat _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ClearDepth, ( FgGLclampd _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ClearStencil, ( FgGLint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ClearAccum, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Accum, ( FgGLenum _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( ReadPixels, ( FgGLint _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, FgGLvoid * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( ReadBuffer, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyPixels, ( FgGLint _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4, FgGLenum _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( Map1f, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLint _4, FgGLint _5, const FgGLfloat * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( Map1d, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLint _4, FgGLint _5, const FgGLdouble * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( Map2f, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLint _4, FgGLint _5, FgGLfloat _6, FgGLfloat _7, FgGLint _8, FgGLint _9, const FgGLfloat * _10 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ) ) ) \
    FG_GL_VOID_FUNCTION( Map2d, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLint _4, FgGLint _5, FgGLdouble _6, FgGLdouble _7, FgGLint _8, FgGLint _9, const FgGLdouble * _10 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ) ) ) \
    FG_GL_VOID_FUNCTION( EvalCoord1f, ( FgGLfloat _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( EvalCoord1d, ( FgGLdouble _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( EvalCoord2f, ( FgGLfloat _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( EvalCoord2d, ( FgGLdouble _1, FgGLdouble _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( EvalCoord1fv, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( EvalCoord1dv, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( EvalCoord2fv, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( EvalCoord2dv, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( MapGrid1f, ( FgGLint _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MapGrid1d, ( FgGLint _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MapGrid2f, ( FgGLint _1, FgGLfloat _2, FgGLfloat _3, FgGLint _4, FgGLfloat _5, FgGLfloat _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( MapGrid2d, ( FgGLint _1, FgGLdouble _2, FgGLdouble _3, FgGLint _4, FgGLdouble _5, FgGLdouble _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( EvalMesh1, ( FgGLenum _1, FgGLint _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( EvalMesh2, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( EvalPoint1, ( FgGLint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( EvalPoint2, ( FgGLint _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( InitNames, (), () ) \
    FG_GL_VOID_FUNCTION( PopName, (), () ) \
    FG_GL_VOID_FUNCTION( PushName, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( LoadName, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLint, RenderMode, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( SelectBuffer, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( FeedbackBuffer, ( FgGLsizei _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( PassThrough, ( FgGLfloat _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( NewList, ( FgGLuint _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( EndList, (), () ) \
    FG_GL_VOID_FUNCTION( CallList, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( CallLists, ( FgGLsizei _1, FgGLenum _2, const FgGLvoid * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ListBase, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, GenLists, ( FgGLsizei _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsList, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteLists, ( FgGLuint _1, FgGLsizei _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Flush, (), () ) \
    FG_GL_VOID_FUNCTION( Finish, (), () ) \
    FG_GL_VOID_FUNCTION( Hint, ( FgGLenum _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetBooleanv, ( FgGLenum _1, FgGLboolean * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetIntegerv, ( FgGLenum _1, FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetFloatv, ( FgGLenum _1, FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetDoublev, ( FgGLenum _1, FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsEnabled, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GetClipPlane, ( FgGLenum _1, FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetLightiv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetLightfv, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMaterialiv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMaterialfv, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTexEnviv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTexEnvfv, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTexGeniv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTexGenfv, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTexParameteriv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTexParameterfv, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTexLevelParameteriv, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTexLevelParameterfv, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPixelMapuiv, ( FgGLenum _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPixelMapusv, ( FgGLenum _1, FgGLushort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPixelMapfv, ( FgGLenum _1, FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMapiv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMapfv, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMapdv, ( FgGLenum _1, FgGLenum _2, FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTexImage, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLenum _4, FgGLvoid * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPolygonStipple, ( FgGLubyte * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( NULL, const FgGLubyte *, GetString, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( PushAttrib, ( FgGLbitfield _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( PopAttrib, (), () ) \
\
    /* GL_VERSION_1_1 */ \
    FG_GL_VOID_FUNCTION( Indexub, ( FgGLubyte _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Indexubv, ( const FgGLubyte * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( EdgeFlagPointer, ( FgGLsizei _1, const FgGLvoid * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoordPointer, ( FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ColorPointer, ( FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( IndexPointer, ( FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( NormalPointer, ( FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexPointer, ( FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( EnableClientState, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( DisableClientState, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ArrayElement, ( FgGLint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( DrawArrays, ( FgGLenum _1, FgGLint _2, FgGLsizei _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( DrawElements, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( InterleavedArrays, ( FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( PolygonOffset, ( FgGLfloat _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyTexImage1D, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLint _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyTexImage2D, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLint _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( TexSubImage1D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, const FgGLvoid * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( TexSubImage2D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLenum _7, FgGLenum _8, const FgGLvoid * _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyTexSubImage1D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyTexSubImage2D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( BindTexture, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteTextures, ( FgGLsizei _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GenTextures, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, AreTexturesResident, ( FgGLsizei _1, const FgGLuint * _2, FgGLboolean * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( PrioritizeTextures, ( FgGLsizei _1, const FgGLuint * _2, const FgGLclampf * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsTexture, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPointerv, ( FgGLenum _1, FgGLvoid ** _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( PushClientAttrib, ( FgGLbitfield _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( PopClientAttrib, (), () ) \
\
    /* GL_VERSION_1_2 */ \
    FG_GL_VOID_FUNCTION( DrawRangeElements, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4, FgGLenum _5, const FgGLvoid * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( TexImage3D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLenum _8, FgGLenum _9, const FgGLvoid * _10 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ) ) ) \
    FG_GL_VOID_FUNCTION( TexSubImage3D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLenum _9, FgGLenum _10, const FgGLvoid * _11 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyTexSubImage3D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLsizei _8, FgGLsizei _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
\
    /* GL_VERSION_1_3 */ \
    FG_GL_VOID_FUNCTION( ActiveTexture, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( SampleCoverage, ( FgGLfloat _1, FgGLboolean _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedTexImage3D, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLsizei _8, const FgGLvoid * _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedTexImage2D, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLint _6, FgGLsizei _7, const FgGLvoid * _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedTexImage1D, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLint _5, FgGLsizei _6, const FgGLvoid * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedTexSubImage3D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLenum _9, FgGLsizei _10, const FgGLvoid * _11 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedTexSubImage2D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLenum _7, FgGLsizei _8, const FgGLvoid * _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedTexSubImage1D, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLenum _5, FgGLsizei _6, const FgGLvoid * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( GetCompressedTexImage, ( FgGLenum _1, FgGLint _2, FgGLvoid * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ClientActiveTexture, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord1d, ( FgGLenum _1, FgGLdouble _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord1dv, ( FgGLenum _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord1f, ( FgGLenum _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord1fv, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord1i, ( FgGLenum _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord1iv, ( FgGLenum _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord1s, ( FgGLenum _1, FgGLshort _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord1sv, ( FgGLenum _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord2d, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord2dv, ( FgGLenum _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord2f, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord2fv, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord2i, ( FgGLenum _1, FgGLint _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord2iv, ( FgGLenum _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord2s, ( FgGLenum _1, FgGLshort _2, FgGLshort _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord2sv, ( FgGLenum _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord3d, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord3dv, ( FgGLenum _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord3f, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord3fv, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord3i, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord3iv, ( FgGLenum _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord3s, ( FgGLenum _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord3sv, ( FgGLenum _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord4d, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord4dv, ( FgGLenum _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord4f, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord4fv, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord4i, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord4iv, ( FgGLenum _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord4s, ( FgGLenum _1, FgGLshort _2, FgGLshort _3, FgGLshort _4, FgGLshort _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord4sv, ( FgGLenum _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( LoadTransposeMatrixf, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( LoadTransposeMatrixd, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( MultTransposeMatrixf, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( MultTransposeMatrixd, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_VERSION_1_4 */ \
    FG_GL_VOID_FUNCTION( BlendFuncSeparate, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiDrawArrays, ( FgGLenum _1, const FgGLint * _2, const FgGLsizei * _3, FgGLsizei _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiDrawElements, ( FgGLenum _1, const FgGLsizei * _2, FgGLenum _3, const FgGLvoid *const* _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( PointParameterf, ( FgGLenum _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( PointParameterfv, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( PointParameteri, ( FgGLenum _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( PointParameteriv, ( FgGLenum _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( FogCoordf, ( FgGLfloat _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( FogCoordfv, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( FogCoordd, ( FgGLdouble _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( FogCoorddv, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( FogCoordPointer, ( FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3b, ( FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3bv, ( const FgGLbyte * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3d, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3dv, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3f, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3fv, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3i, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3iv, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3s, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3sv, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3ub, ( FgGLubyte _1, FgGLubyte _2, FgGLubyte _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3ubv, ( const FgGLubyte * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3ui, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3uiv, ( const FgGLuint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3us, ( FgGLushort _1, FgGLushort _2, FgGLushort _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3usv, ( const FgGLushort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColorPointer, ( FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos2d, ( FgGLdouble _1, FgGLdouble _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos2dv, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos2f, ( FgGLfloat _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos2fv, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos2i, ( FgGLint _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos2iv, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos2s, ( FgGLshort _1, FgGLshort _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos2sv, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3d, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3dv, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3f, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3fv, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3i, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3iv, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3s, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3sv, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( BlendColor, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( BlendEquation, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_VERSION_1_5 */ \
    FG_GL_VOID_FUNCTION( GenQueries, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteQueries, ( FgGLsizei _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsQuery, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( BeginQuery, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( EndQuery, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GetQueryiv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetQueryObjectiv, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetQueryObjectuiv, ( FgGLuint _1, FgGLenum _2, FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( BindBuffer, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteBuffers, ( FgGLsizei _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GenBuffers, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsBuffer, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( BufferData, ( FgGLenum _1, FgGLsizeiptr _2, const FgGLvoid * _3, FgGLenum _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( BufferSubData, ( FgGLenum _1, FgGLintptr _2, FgGLsizeiptr _3, const FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetBufferSubData, ( FgGLenum _1, FgGLintptr _2, FgGLsizeiptr _3, FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_FUNCTION( NULL, void *, MapBuffer, ( FgGLenum _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, UnmapBuffer, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GetBufferParameteriv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetBufferPointerv, ( FgGLenum _1, FgGLenum _2, FgGLvoid ** _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_VERSION_2_0 */ \
    FG_GL_VOID_FUNCTION( BlendEquationSeparate, ( FgGLenum _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DrawBuffers, ( FgGLsizei _1, const FgGLenum * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( StencilOpSeparate, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( StencilFuncSeparate, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( StencilMaskSeparate, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( AttachShader, ( FgGLuint _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( BindAttribLocation, ( FgGLuint _1, FgGLuint _2, const FgGLchar * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( CompileShader, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, CreateProgram, ( ), ( ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, CreateShader, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteProgram, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteShader, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( DetachShader, ( FgGLuint _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DisableVertexAttribArray, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( EnableVertexAttribArray, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GetActiveAttrib, ( FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLint * _5, FgGLenum * _6, FgGLchar * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( GetActiveUniform, ( FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLint * _5, FgGLenum * _6, FgGLchar * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( GetAttachedShaders, ( FgGLuint _1, FgGLsizei _2, FgGLsizei * _3, FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetAttribLocation, ( FgGLuint _1, const FgGLchar * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramiv, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramInfoLog, ( FgGLuint _1, FgGLsizei _2, FgGLsizei * _3, FgGLchar * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetShaderiv, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetShaderInfoLog, ( FgGLuint _1, FgGLsizei _2, FgGLsizei * _3, FgGLchar * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetShaderSource, ( FgGLuint _1, FgGLsizei _2, FgGLsizei * _3, FgGLchar * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetUniformLocation, ( FgGLuint _1, const FgGLchar * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetUniformfv, ( FgGLuint _1, FgGLint _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetUniformiv, ( FgGLuint _1, FgGLint _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribdv, ( FgGLuint _1, FgGLenum _2, FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribfv, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribiv, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribPointerv, ( FgGLuint _1, FgGLenum _2, FgGLvoid ** _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsProgram, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsShader, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( LinkProgram, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ShaderSource, ( FgGLuint _1, FgGLsizei _2, const FgGLchar *const* _3, const FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( UseProgram, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform1f, ( FgGLint _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform2f, ( FgGLint _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform3f, ( FgGLint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform4f, ( FgGLint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform1i, ( FgGLint _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform2i, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform3i, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform4i, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform1fv, ( FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform2fv, ( FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform3fv, ( FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform4fv, ( FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform1iv, ( FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform2iv, ( FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform3iv, ( FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform4iv, ( FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformMatrix2fv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformMatrix3fv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformMatrix4fv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ValidateProgram, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib1d, ( FgGLuint _1, FgGLdouble _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib1dv, ( FgGLuint _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib1f, ( FgGLuint _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib1fv, ( FgGLuint _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib1s, ( FgGLuint _1, FgGLshort _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib1sv, ( FgGLuint _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib2d, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib2dv, ( FgGLuint _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib2f, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib2fv, ( FgGLuint _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib2s, ( FgGLuint _1, FgGLshort _2, FgGLshort _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib2sv, ( FgGLuint _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib3d, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib3dv, ( FgGLuint _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib3f, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib3fv, ( FgGLuint _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib3s, ( FgGLuint _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib3sv, ( FgGLuint _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4Nbv, ( FgGLuint _1, const FgGLbyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4Niv, ( FgGLuint _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4Nsv, ( FgGLuint _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4Nub, ( FgGLuint _1, FgGLubyte _2, FgGLubyte _3, FgGLubyte _4, FgGLubyte _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4Nubv, ( FgGLuint _1, const FgGLubyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4Nuiv, ( FgGLuint _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4Nusv, ( FgGLuint _1, const FgGLushort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4bv, ( FgGLuint _1, const FgGLbyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4d, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4dv, ( FgGLuint _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4f, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4fv, ( FgGLuint _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4iv, ( FgGLuint _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4s, ( FgGLuint _1, FgGLshort _2, FgGLshort _3, FgGLshort _4, FgGLshort _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4sv, ( FgGLuint _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4ubv, ( FgGLuint _1, const FgGLubyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4uiv, ( FgGLuint _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4usv, ( FgGLuint _1, const FgGLushort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribPointer, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLboolean _4, FgGLsizei _5, const FgGLvoid * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
\
    /* GL_VERSION_2_1 */ \
    FG_GL_VOID_FUNCTION( UniformMatrix2x3fv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformMatrix3x2fv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformMatrix2x4fv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformMatrix4x2fv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformMatrix3x4fv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformMatrix4x3fv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
\
    /* GL_VERSION_3_0 */ \
    FG_GL_VOID_FUNCTION( ColorMaski, ( FgGLuint _1, FgGLboolean _2, FgGLboolean _3, FgGLboolean _4, FgGLboolean _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetBooleani_v, ( FgGLenum _1, FgGLuint _2, FgGLboolean * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetIntegeri_v, ( FgGLenum _1, FgGLuint _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Enablei, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Disablei, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsEnabledi, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( BeginTransformFeedback, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( EndTransformFeedback, ( ), ( ) ) \
    FG_GL_VOID_FUNCTION( BindBufferRange, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLintptr _4, FgGLsizeiptr _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( BindBufferBase, ( FgGLenum _1, FgGLuint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TransformFeedbackVaryings, ( FgGLuint _1, FgGLsizei _2, const FgGLchar *const* _3, FgGLenum _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTransformFeedbackVarying, ( FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLsizei * _5, FgGLenum * _6, FgGLchar * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( ClampColor, ( FgGLenum _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( BeginConditionalRender, ( FgGLuint _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( EndConditionalRender, ( ), ( ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribIPointer, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, const FgGLvoid * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribIiv, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribIuiv, ( FgGLuint _1, FgGLenum _2, FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI1i, ( FgGLuint _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI2i, ( FgGLuint _1, FgGLint _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI3i, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI4i, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI1ui, ( FgGLuint _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI2ui, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI3ui, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI4ui, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI1iv, ( FgGLuint _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI2iv, ( FgGLuint _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI3iv, ( FgGLuint _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI4iv, ( FgGLuint _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI1uiv, ( FgGLuint _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI2uiv, ( FgGLuint _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI3uiv, ( FgGLuint _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI4uiv, ( FgGLuint _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI4bv, ( FgGLuint _1, const FgGLbyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI4sv, ( FgGLuint _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI4ubv, ( FgGLuint _1, const FgGLubyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI4usv, ( FgGLuint _1, const FgGLushort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetUniformuiv, ( FgGLuint _1, FgGLint _2, FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( BindFragDataLocation, ( FgGLuint _1, FgGLuint _2, const FgGLchar * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetFragDataLocation, ( FgGLuint _1, const FgGLchar * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform1ui, ( FgGLint _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform2ui, ( FgGLint _1, FgGLuint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform3ui, ( FgGLint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform4ui, ( FgGLint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform1uiv, ( FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform2uiv, ( FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform3uiv, ( FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform4uiv, ( FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexParameterIiv, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexParameterIuiv, ( FgGLenum _1, FgGLenum _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTexParameterIiv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTexParameterIuiv, ( FgGLenum _1, FgGLenum _2, FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ClearBufferiv, ( FgGLenum _1, FgGLint _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ClearBufferuiv, ( FgGLenum _1, FgGLint _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ClearBufferfv, ( FgGLenum _1, FgGLint _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ClearBufferfi, ( FgGLenum _1, FgGLint _2, FgGLfloat _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_FUNCTION( NULL, const FgGLubyte *, GetStringi, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsRenderbuffer, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( BindRenderbuffer, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteRenderbuffers, ( FgGLsizei _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GenRenderbuffers, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( RenderbufferStorage, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetRenderbufferParameteriv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsFramebuffer, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( BindFramebuffer, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteFramebuffers, ( FgGLsizei _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GenFramebuffers, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLenum, CheckFramebufferStatus, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( FramebufferTexture1D, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( FramebufferTexture2D, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( FramebufferTexture3D, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5, FgGLint _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( FramebufferRenderbuffer, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetFramebufferAttachmentParameteriv, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GenerateMipmap, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( BlitFramebuffer, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLint _8, FgGLbitfield _9, FgGLenum _10 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ) ) ) \
    FG_GL_VOID_FUNCTION( RenderbufferStorageMultisample, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( FramebufferTextureLayer, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_FUNCTION( NULL, void *, MapBufferRange, ( FgGLenum _1, FgGLintptr _2, FgGLsizeiptr _3, FgGLbitfield _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( FlushMappedBufferRange, ( FgGLenum _1, FgGLintptr _2, FgGLsizeiptr _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( BindVertexArray, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteVertexArrays, ( FgGLsizei _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GenVertexArrays, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsVertexArray, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_VERSION_3_1 */ \
    FG_GL_VOID_FUNCTION( DrawArraysInstanced, ( FgGLenum _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( DrawElementsInstanced, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( TexBuffer, ( FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( PrimitiveRestartIndex, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyBufferSubData, ( FgGLenum _1, FgGLenum _2, FgGLintptr _3, FgGLintptr _4, FgGLsizeiptr _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetUniformIndices, ( FgGLuint _1, FgGLsizei _2, const FgGLchar *const* _3, FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetActiveUniformsiv, ( FgGLuint _1, FgGLsizei _2, const FgGLuint * _3, FgGLenum _4, FgGLint * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetActiveUniformName, ( FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLchar * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, GetUniformBlockIndex, ( FgGLuint _1, const FgGLchar * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetActiveUniformBlockiv, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetActiveUniformBlockName, ( FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLchar * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformBlockBinding, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_VERSION_3_2 */ \
    FG_GL_VOID_FUNCTION( DrawElementsBaseVertex, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( DrawRangeElementsBaseVertex, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4, FgGLenum _5, const FgGLvoid * _6, FgGLint _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( DrawElementsInstancedBaseVertex, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4, FgGLsizei _5, FgGLint _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiDrawElementsBaseVertex, ( FgGLenum _1, const FgGLsizei * _2, FgGLenum _3, const FgGLvoid *const* _4, FgGLsizei _5, const FgGLint * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ProvokingVertex, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( NULL, FgGLsync, FenceSync, ( FgGLenum _1, FgGLbitfield _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsSync, ( FgGLsync _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteSync, ( FgGLsync _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLenum, ClientWaitSync, ( FgGLsync _1, FgGLbitfield _2, FgGLuint64 _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( WaitSync, ( FgGLsync _1, FgGLbitfield _2, FgGLuint64 _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetInteger64v, ( FgGLenum _1, FgGLint64 * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetSynciv, ( FgGLsync _1, FgGLenum _2, FgGLsizei _3, FgGLsizei * _4, FgGLint * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetInteger64i_v, ( FgGLenum _1, FgGLuint _2, FgGLint64 * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetBufferParameteri64v, ( FgGLenum _1, FgGLenum _2, FgGLint64 * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( FramebufferTexture, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( TexImage2DMultisample, ( FgGLenum _1, FgGLsizei _2, FgGLint _3, FgGLsizei _4, FgGLsizei _5, FgGLboolean _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( TexImage3DMultisample, ( FgGLenum _1, FgGLsizei _2, FgGLint _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLboolean _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMultisamplefv, ( FgGLenum _1, FgGLuint _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SampleMaski, ( FgGLuint _1, FgGLbitfield _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_VERSION_3_3 */ \
    FG_GL_VOID_FUNCTION( BindFragDataLocationIndexed, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, const FgGLchar * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetFragDataIndex, ( FgGLuint _1, const FgGLchar * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GenSamplers, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteSamplers, ( FgGLsizei _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsSampler, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( BindSampler, ( FgGLuint _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( SamplerParameteri, ( FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SamplerParameteriv, ( FgGLuint _1, FgGLenum _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SamplerParameterf, ( FgGLuint _1, FgGLenum _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SamplerParameterfv, ( FgGLuint _1, FgGLenum _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SamplerParameterIiv, ( FgGLuint _1, FgGLenum _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SamplerParameterIuiv, ( FgGLuint _1, FgGLenum _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetSamplerParameteriv, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetSamplerParameterIiv, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetSamplerParameterfv, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetSamplerParameterIuiv, ( FgGLuint _1, FgGLenum _2, FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( QueryCounter, ( FgGLuint _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetQueryObjecti64v, ( FgGLuint _1, FgGLenum _2, FgGLint64 * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetQueryObjectui64v, ( FgGLuint _1, FgGLenum _2, FgGLuint64 * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribDivisor, ( FgGLuint _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribP1ui, ( FgGLuint _1, FgGLenum _2, FgGLboolean _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribP1uiv, ( FgGLuint _1, FgGLenum _2, FgGLboolean _3, const FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribP2ui, ( FgGLuint _1, FgGLenum _2, FgGLboolean _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribP2uiv, ( FgGLuint _1, FgGLenum _2, FgGLboolean _3, const FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribP3ui, ( FgGLuint _1, FgGLenum _2, FgGLboolean _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribP3uiv, ( FgGLuint _1, FgGLenum _2, FgGLboolean _3, const FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribP4ui, ( FgGLuint _1, FgGLenum _2, FgGLboolean _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribP4uiv, ( FgGLuint _1, FgGLenum _2, FgGLboolean _3, const FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexP2ui, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexP2uiv, ( FgGLenum _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexP3ui, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexP3uiv, ( FgGLenum _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexP4ui, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexP4uiv, ( FgGLenum _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoordP1ui, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoordP1uiv, ( FgGLenum _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoordP2ui, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoordP2uiv, ( FgGLenum _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoordP3ui, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoordP3uiv, ( FgGLenum _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoordP4ui, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoordP4uiv, ( FgGLenum _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoordP1ui, ( FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoordP1uiv, ( FgGLenum _1, FgGLenum _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoordP2ui, ( FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoordP2uiv, ( FgGLenum _1, FgGLenum _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoordP3ui, ( FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoordP3uiv, ( FgGLenum _1, FgGLenum _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoordP4ui, ( FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoordP4uiv, ( FgGLenum _1, FgGLenum _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( NormalP3ui, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( NormalP3uiv, ( FgGLenum _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( ColorP3ui, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( ColorP3uiv, ( FgGLenum _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( ColorP4ui, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( ColorP4uiv, ( FgGLenum _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColorP3ui, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColorP3uiv, ( FgGLenum _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_VERSION_4_0 */ \
    FG_GL_VOID_FUNCTION( MinSampleShading, ( FgGLfloat _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( BlendEquationi, ( FgGLuint _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( BlendEquationSeparatei, ( FgGLuint _1, FgGLenum _2, FgGLenum _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( BlendFunci, ( FgGLuint _1, FgGLenum _2, FgGLenum _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( BlendFuncSeparatei, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLenum _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( DrawArraysIndirect, ( FgGLenum _1, const FgGLvoid * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DrawElementsIndirect, ( FgGLenum _1, FgGLenum _2, const FgGLvoid * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform1d, ( FgGLint _1, FgGLdouble _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform2d, ( FgGLint _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform3d, ( FgGLint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform4d, ( FgGLint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform1dv, ( FgGLint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform2dv, ( FgGLint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform3dv, ( FgGLint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform4dv, ( FgGLint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformMatrix2dv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformMatrix3dv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformMatrix4dv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformMatrix2x3dv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformMatrix2x4dv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformMatrix3x2dv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformMatrix3x4dv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformMatrix4x2dv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformMatrix4x3dv, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetUniformdv, ( FgGLuint _1, FgGLint _2, FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetSubroutineUniformLocation, ( FgGLuint _1, FgGLenum _2, const FgGLchar * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, GetSubroutineIndex, ( FgGLuint _1, FgGLenum _2, const FgGLchar * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetActiveSubroutineUniformiv, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLenum _4, FgGLint * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetActiveSubroutineUniformName, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, FgGLsizei * _5, FgGLchar * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( GetActiveSubroutineName, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, FgGLsizei * _5, FgGLchar * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformSubroutinesuiv, ( FgGLenum _1, FgGLsizei _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetUniformSubroutineuiv, ( FgGLenum _1, FgGLint _2, FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramStageiv, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( PatchParameteri, ( FgGLenum _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( PatchParameterfv, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( BindTransformFeedback, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteTransformFeedbacks, ( FgGLsizei _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GenTransformFeedbacks, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsTransformFeedback, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( PauseTransformFeedback, ( ), ( ) ) \
    FG_GL_VOID_FUNCTION( ResumeTransformFeedback, ( ), ( ) ) \
    FG_GL_VOID_FUNCTION( DrawTransformFeedback, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DrawTransformFeedbackStream, ( FgGLenum _1, FgGLuint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( BeginQueryIndexed, ( FgGLenum _1, FgGLuint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( EndQueryIndexed, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetQueryIndexediv, ( FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
\
    /* GL_VERSION_4_1 */ \
    FG_GL_VOID_FUNCTION( ReleaseShaderCompiler, ( ), ( ) ) \
    FG_GL_VOID_FUNCTION( ShaderBinary, ( FgGLsizei _1, const FgGLuint * _2, FgGLenum _3, const FgGLvoid * _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetShaderPrecisionFormat, ( FgGLenum _1, FgGLenum _2, FgGLint * _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( DepthRangef, ( FgGLfloat _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( ClearDepthf, ( FgGLfloat _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramBinary, ( FgGLuint _1, FgGLsizei _2, FgGLsizei * _3, FgGLenum * _4, FgGLvoid * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramBinary, ( FgGLuint _1, FgGLenum _2, const FgGLvoid * _3, FgGLsizei _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramParameteri, ( FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( UseProgramStages, ( FgGLuint _1, FgGLbitfield _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ActiveShaderProgram, ( FgGLuint _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, CreateShaderProgramv, ( FgGLenum _1, FgGLsizei _2, const FgGLchar *const* _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( BindProgramPipeline, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteProgramPipelines, ( FgGLsizei _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GenProgramPipelines, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsProgramPipeline, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramPipelineiv, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform1i, ( FgGLuint _1, FgGLint _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform1iv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform1f, ( FgGLuint _1, FgGLint _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform1fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform1d, ( FgGLuint _1, FgGLint _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform1dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform1ui, ( FgGLuint _1, FgGLint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform1uiv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform2i, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform2iv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform2f, ( FgGLuint _1, FgGLint _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform2fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform2d, ( FgGLuint _1, FgGLint _2, FgGLdouble _3, FgGLdouble _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform2dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform2ui, ( FgGLuint _1, FgGLint _2, FgGLuint _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform2uiv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform3i, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform3iv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform3f, ( FgGLuint _1, FgGLint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform3fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform3d, ( FgGLuint _1, FgGLint _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform3dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform3ui, ( FgGLuint _1, FgGLint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform3uiv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform4i, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform4iv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform4f, ( FgGLuint _1, FgGLint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform4fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform4d, ( FgGLuint _1, FgGLint _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform4dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform4ui, ( FgGLuint _1, FgGLint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform4uiv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix2fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix3fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix4fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix2dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix3dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix4dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix2x3fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix3x2fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix2x4fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix4x2fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix3x4fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix4x3fv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix2x3dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix3x2dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix2x4dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix4x2dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix3x4dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix4x3dv, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ValidateProgramPipeline, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramPipelineInfoLog, ( FgGLuint _1, FgGLsizei _2, FgGLsizei * _3, FgGLchar * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL1d, ( FgGLuint _1, FgGLdouble _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL2d, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL3d, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL4d, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL1dv, ( FgGLuint _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL2dv, ( FgGLuint _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL3dv, ( FgGLuint _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL4dv, ( FgGLuint _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribLPointer, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, const FgGLvoid * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribLdv, ( FgGLuint _1, FgGLenum _2, FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ViewportArrayv, ( FgGLuint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ViewportIndexedf, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ViewportIndexedfv, ( FgGLuint _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( ScissorArrayv, ( FgGLuint _1, FgGLsizei _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ScissorIndexed, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ScissorIndexedv, ( FgGLuint _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DepthRangeArrayv, ( FgGLuint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( DepthRangeIndexed, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetFloati_v, ( FgGLenum _1, FgGLuint _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetDoublei_v, ( FgGLenum _1, FgGLuint _2, FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_VERSION_4_2 */ \
    FG_GL_VOID_FUNCTION( DrawArraysInstancedBaseInstance, ( FgGLenum _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4, FgGLuint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( DrawElementsInstancedBaseInstance, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, const void * _4, FgGLsizei _5, FgGLuint _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( DrawElementsInstancedBaseVertexBaseInstance, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, const void * _4, FgGLsizei _5, FgGLint _6, FgGLuint _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( GetInternalformativ, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, FgGLint * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetActiveAtomicCounterBufferiv, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( BindImageTexture, ( FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLboolean _4, FgGLint _5, FgGLenum _6, FgGLenum _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( MemoryBarrier, ( FgGLbitfield _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexStorage1D, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( TexStorage2D, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( TexStorage3D, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( DrawTransformFeedbackInstanced, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( DrawTransformFeedbackStreamInstanced, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
\
    /* GL_VERSION_4_3 */ \
    FG_GL_VOID_FUNCTION( ClearBufferData, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, const void * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ClearBufferSubData, ( FgGLenum _1, FgGLenum _2, FgGLintptr _3, FgGLsizeiptr _4, FgGLenum _5, FgGLenum _6, const void * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( DispatchCompute, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( DispatchComputeIndirect, ( FgGLintptr _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyImageSubData, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLuint _7, FgGLenum _8, FgGLint _9, FgGLint _10, FgGLint _11, FgGLint _12, FgGLsizei _13, FgGLsizei _14, FgGLsizei _15 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ), FG_GL_ARG( _12 ), FG_GL_ARG( _13 ), FG_GL_ARG( _14 ), FG_GL_ARG( _15 ) ) ) \
    FG_GL_VOID_FUNCTION( FramebufferParameteri, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetFramebufferParameteriv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetInternalformati64v, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, FgGLint64 * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( InvalidateTexSubImage, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( InvalidateTexImage, ( FgGLuint _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( InvalidateBufferSubData, ( FgGLuint _1, FgGLintptr _2, FgGLsizeiptr _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( InvalidateBufferData, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( InvalidateFramebuffer, ( FgGLenum _1, FgGLsizei _2, const FgGLenum * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( InvalidateSubFramebuffer, ( FgGLenum _1, FgGLsizei _2, const FgGLenum * _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiDrawArraysIndirect, ( FgGLenum _1, const void * _2, FgGLsizei _3, FgGLsizei _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiDrawElementsIndirect, ( FgGLenum _1, FgGLenum _2, const void * _3, FgGLsizei _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramInterfaceiv, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, GetProgramResourceIndex, ( FgGLuint _1, FgGLenum _2, const FgGLchar * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramResourceName, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, FgGLsizei * _5, FgGLchar * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramResourceiv, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, const FgGLenum * _5, FgGLsizei _6, FgGLsizei * _7, FgGLint * _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetProgramResourceLocation, ( FgGLuint _1, FgGLenum _2, const FgGLchar * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetProgramResourceLocationIndex, ( FgGLuint _1, FgGLenum _2, const FgGLchar * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ShaderStorageBlockBinding, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexBufferRange, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLintptr _4, FgGLsizeiptr _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( TexStorage2DMultisample, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLboolean _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( TexStorage3DMultisample, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLboolean _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureView, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLenum _4, FgGLuint _5, FgGLuint _6, FgGLuint _7, FgGLuint _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( BindVertexBuffer, ( FgGLuint _1, FgGLuint _2, FgGLintptr _3, FgGLsizei _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribFormat, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLboolean _4, FgGLuint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribIFormat, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribLFormat, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribBinding, ( FgGLuint _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexBindingDivisor, ( FgGLuint _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DebugMessageControl, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, const FgGLuint * _5, FgGLboolean _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( DebugMessageInsert, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLenum _4, FgGLsizei _5, const FgGLchar * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( DebugMessageCallback, ( FgGLDebugProc _1, const void * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, GetDebugMessageLog, ( FgGLuint _1, FgGLsizei _2, FgGLenum * _3, FgGLenum * _4, FgGLuint * _5, FgGLenum * _6, FgGLsizei * _7, FgGLchar * _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( PushDebugGroup, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLchar * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( PopDebugGroup, ( ), ( ) ) \
    FG_GL_VOID_FUNCTION( ObjectLabel, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLchar * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetObjectLabel, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLchar * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ObjectPtrLabel, ( const void * _1, FgGLsizei _2, const FgGLchar * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetObjectPtrLabel, ( const void * _1, FgGLsizei _2, FgGLsizei * _3, FgGLchar * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
\
    /* GL_VERSION_4_4 */ \
    FG_GL_VOID_FUNCTION( BufferStorage, ( FgGLenum _1, FgGLsizeiptr _2, const void * _3, FgGLbitfield _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ClearTexImage, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLenum _4, const void * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ClearTexSubImage, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLenum _9, FgGLenum _10, const void * _11 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ) ) ) \
    FG_GL_VOID_FUNCTION( BindBuffersBase, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( BindBuffersRange, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLuint * _4, const FgGLintptr * _5, const FgGLsizeiptr * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( BindTextures, ( FgGLuint _1, FgGLsizei _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( BindSamplers, ( FgGLuint _1, FgGLsizei _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( BindImageTextures, ( FgGLuint _1, FgGLsizei _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( BindVertexBuffers, ( FgGLuint _1, FgGLsizei _2, const FgGLuint * _3, const FgGLintptr * _4, const FgGLsizei * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
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
    FG_GL_FUNCTION( 0, FgGLuint64, GetTextureHandleARB, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLuint64, GetTextureSamplerHandleARB, ( FgGLuint _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MakeTextureHandleResidentARB, ( FgGLuint64 _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( MakeTextureHandleNonResidentARB, ( FgGLuint64 _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLuint64, GetImageHandleARB, ( FgGLuint _1, FgGLint _2, FgGLboolean _3, FgGLint _4, FgGLenum _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( MakeImageHandleResidentARB, ( FgGLuint64 _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MakeImageHandleNonResidentARB, ( FgGLuint64 _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformHandleui64ARB, ( FgGLint _1, FgGLuint64 _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformHandleui64vARB, ( FgGLint _1, FgGLsizei _2, const FgGLuint64 * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformHandleui64ARB, ( FgGLuint _1, FgGLint _2, FgGLuint64 _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformHandleui64vARB, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint64 * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsTextureHandleResidentARB, ( FgGLuint64 _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsImageHandleResidentARB, ( FgGLuint64 _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL1ui64ARB, ( FgGLuint _1, FgGLuint64EXT _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL1ui64vARB, ( FgGLuint _1, const FgGLuint64EXT * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribLui64vARB, ( FgGLuint _1, FgGLenum _2, FgGLuint64EXT * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_ARB_blend_func_extended */ \
\
    /* GL_ARB_buffer_storage */ \
\
    /* GL_ARB_cl_event */ \
    FG_GL_FUNCTION( NULL, FgGLsync, CreateSyncFromCLeventARB, ( struct _cl_context * _1, struct _cl_event * _2, FgGLbitfield _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_ARB_clear_buffer_object */ \
\
    /* GL_ARB_clear_texture */ \
\
    /* GL_ARB_color_buffer_float */ \
    FG_GL_VOID_FUNCTION( ClampColorARB, ( FgGLenum _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_ARB_compatibility */ \
\
    /* GL_ARB_compressed_texture_pixel_storage */ \
\
    /* GL_ARB_compute_shader */ \
\
    /* GL_ARB_compute_variable_group_size */ \
    FG_GL_VOID_FUNCTION( DispatchComputeGroupSizeARB, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
\
    /* GL_ARB_conservative_depth */ \
\
    /* GL_ARB_copy_buffer */ \
\
    /* GL_ARB_copy_image */ \
\
    /* GL_ARB_debug_output */ \
    FG_GL_VOID_FUNCTION( DebugMessageControlARB, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, const FgGLuint * _5, FgGLboolean _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( DebugMessageInsertARB, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLenum _4, FgGLsizei _5, const FgGLchar * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( DebugMessageCallbackARB, ( FgGLDebugProcARB _1, const void * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, GetDebugMessageLogARB, ( FgGLuint _1, FgGLsizei _2, FgGLenum * _3, FgGLenum * _4, FgGLuint * _5, FgGLenum * _6, FgGLsizei * _7, FgGLchar * _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
\
    /* GL_ARB_depth_buffer_float */ \
\
    /* GL_ARB_depth_clamp */ \
\
    /* GL_ARB_depth_texture */ \
\
    /* GL_ARB_draw_buffers */ \
    FG_GL_VOID_FUNCTION( DrawBuffersARB, ( FgGLsizei _1, const FgGLenum * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_ARB_draw_buffers_blend */ \
    FG_GL_VOID_FUNCTION( BlendEquationiARB, ( FgGLuint _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( BlendEquationSeparateiARB, ( FgGLuint _1, FgGLenum _2, FgGLenum _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( BlendFunciARB, ( FgGLuint _1, FgGLenum _2, FgGLenum _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( BlendFuncSeparateiARB, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLenum _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
\
    /* GL_ARB_draw_elements_base_vertex */ \
\
    /* GL_ARB_draw_indirect */ \
\
    /* GL_ARB_draw_instanced */ \
    FG_GL_VOID_FUNCTION( DrawArraysInstancedARB, ( FgGLenum _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( DrawElementsInstancedARB, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
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
    FG_GL_VOID_FUNCTION( ProgramStringARB, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( BindProgramARB, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteProgramsARB, ( FgGLsizei _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GenProgramsARB, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramEnvParameter4dARB, ( FgGLenum _1, FgGLuint _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramEnvParameter4dvARB, ( FgGLenum _1, FgGLuint _2, const FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramEnvParameter4fARB, ( FgGLenum _1, FgGLuint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramEnvParameter4fvARB, ( FgGLenum _1, FgGLuint _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramLocalParameter4dARB, ( FgGLenum _1, FgGLuint _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramLocalParameter4dvARB, ( FgGLenum _1, FgGLuint _2, const FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramLocalParameter4fARB, ( FgGLenum _1, FgGLuint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramLocalParameter4fvARB, ( FgGLenum _1, FgGLuint _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramEnvParameterdvARB, ( FgGLenum _1, FgGLuint _2, FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramEnvParameterfvARB, ( FgGLenum _1, FgGLuint _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramLocalParameterdvARB, ( FgGLenum _1, FgGLuint _2, FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramLocalParameterfvARB, ( FgGLenum _1, FgGLuint _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramivARB, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramStringARB, ( FgGLenum _1, FgGLenum _2, FgGLvoid * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsProgramARB, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
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
    FG_GL_VOID_FUNCTION( ProgramParameteriARB, ( FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( FramebufferTextureARB, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( FramebufferTextureLayerARB, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( FramebufferTextureFaceARB, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLenum _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
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
    FG_GL_VOID_FUNCTION( ColorTable, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLenum _5, const FgGLvoid * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ColorTableParameterfv, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ColorTableParameteriv, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyColorTable, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetColorTable, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetColorTableParameterfv, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetColorTableParameteriv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ColorSubTable, ( FgGLenum _1, FgGLsizei _2, FgGLsizei _3, FgGLenum _4, FgGLenum _5, const FgGLvoid * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyColorSubTable, ( FgGLenum _1, FgGLsizei _2, FgGLint _3, FgGLint _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ConvolutionFilter1D, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLenum _5, const FgGLvoid * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ConvolutionFilter2D, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, const FgGLvoid * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( ConvolutionParameterf, ( FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ConvolutionParameterfv, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ConvolutionParameteri, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ConvolutionParameteriv, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyConvolutionFilter1D, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyConvolutionFilter2D, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( GetConvolutionFilter, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetConvolutionParameterfv, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetConvolutionParameteriv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetSeparableFilter, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4, FgGLvoid * _5, FgGLvoid * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( SeparableFilter2D, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, const FgGLvoid * _7, const FgGLvoid * _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( GetHistogram, ( FgGLenum _1, FgGLboolean _2, FgGLenum _3, FgGLenum _4, FgGLvoid * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetHistogramParameterfv, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetHistogramParameteriv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMinmax, ( FgGLenum _1, FgGLboolean _2, FgGLenum _3, FgGLenum _4, FgGLvoid * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMinmaxParameterfv, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMinmaxParameteriv, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Histogram, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLboolean _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Minmax, ( FgGLenum _1, FgGLenum _2, FgGLboolean _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ResetHistogram, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ResetMinmax, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_ARB_indirect_parameters */ \
    FG_GL_VOID_FUNCTION( MultiDrawArraysIndirectCountARB, ( FgGLenum _1, FgGLintptr _2, FgGLintptr _3, FgGLsizei _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiDrawElementsIndirectCountARB, ( FgGLenum _1, FgGLenum _2, FgGLintptr _3, FgGLintptr _4, FgGLsizei _5, FgGLsizei _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
\
    /* GL_ARB_instanced_arrays */ \
    FG_GL_VOID_FUNCTION( VertexAttribDivisorARB, ( FgGLuint _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
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
    FG_GL_VOID_FUNCTION( CurrentPaletteMatrixARB, ( FgGLint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixIndexubvARB, ( FgGLint _1, const FgGLubyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixIndexusvARB, ( FgGLint _1, const FgGLushort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixIndexuivARB, ( FgGLint _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixIndexPointerARB, ( FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
\
    /* GL_ARB_multi_bind */ \
\
    /* GL_ARB_multi_draw_indirect */ \
\
    /* GL_ARB_multisample */ \
    FG_GL_VOID_FUNCTION( SampleCoverageARB, ( FgGLfloat _1, FgGLboolean _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_ARB_multitexture */ \
    FG_GL_VOID_FUNCTION( ActiveTextureARB, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ClientActiveTextureARB, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord1dARB, ( FgGLenum _1, FgGLdouble _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord1dvARB, ( FgGLenum _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord1fARB, ( FgGLenum _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord1fvARB, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord1iARB, ( FgGLenum _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord1ivARB, ( FgGLenum _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord1sARB, ( FgGLenum _1, FgGLshort _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord1svARB, ( FgGLenum _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord2dARB, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord2dvARB, ( FgGLenum _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord2fARB, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord2fvARB, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord2iARB, ( FgGLenum _1, FgGLint _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord2ivARB, ( FgGLenum _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord2sARB, ( FgGLenum _1, FgGLshort _2, FgGLshort _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord2svARB, ( FgGLenum _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord3dARB, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord3dvARB, ( FgGLenum _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord3fARB, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord3fvARB, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord3iARB, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord3ivARB, ( FgGLenum _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord3sARB, ( FgGLenum _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord3svARB, ( FgGLenum _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord4dARB, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord4dvARB, ( FgGLenum _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord4fARB, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord4fvARB, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord4iARB, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord4ivARB, ( FgGLenum _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord4sARB, ( FgGLenum _1, FgGLshort _2, FgGLshort _3, FgGLshort _4, FgGLshort _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord4svARB, ( FgGLenum _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_ARB_occlusion_query */ \
    FG_GL_VOID_FUNCTION( GenQueriesARB, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteQueriesARB, ( FgGLsizei _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsQueryARB, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( BeginQueryARB, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( EndQueryARB, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GetQueryivARB, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetQueryObjectivARB, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetQueryObjectuivARB, ( FgGLuint _1, FgGLenum _2, FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_ARB_occlusion_query2 */ \
\
    /* GL_ARB_pixel_buffer_object */ \
\
    /* GL_ARB_point_parameters */ \
    FG_GL_VOID_FUNCTION( PointParameterfARB, ( FgGLenum _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( PointParameterfvARB, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
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
    FG_GL_VOID_FUNCTION( GetnTexImageARB, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLenum _4, FgGLsizei _5, FgGLvoid * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ReadnPixelsARB, ( FgGLint _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, FgGLsizei _7, FgGLvoid * _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( GetnCompressedTexImageARB, ( FgGLenum _1, FgGLint _2, FgGLsizei _3, FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetnUniformfvARB, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetnUniformivARB, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetnUniformuivARB, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetnUniformdvARB, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetnMapdvARB, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetnMapfvARB, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetnMapivARB, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetnPixelMapfvARB, ( FgGLenum _1, FgGLsizei _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetnPixelMapuivARB, ( FgGLenum _1, FgGLsizei _2, FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetnPixelMapusvARB, ( FgGLenum _1, FgGLsizei _2, FgGLushort * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetnPolygonStippleARB, ( FgGLsizei _1, FgGLubyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetnColorTableARB, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, FgGLvoid * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetnConvolutionFilterARB, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, FgGLvoid * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetnSeparableFilterARB, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, FgGLvoid * _5, FgGLsizei _6, FgGLvoid * _7, FgGLvoid * _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( GetnHistogramARB, ( FgGLenum _1, FgGLboolean _2, FgGLenum _3, FgGLenum _4, FgGLsizei _5, FgGLvoid * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( GetnMinmaxARB, ( FgGLenum _1, FgGLboolean _2, FgGLenum _3, FgGLenum _4, FgGLsizei _5, FgGLvoid * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
\
    /* GL_ARB_robustness_isolation */ \
\
    /* GL_ARB_sample_shading */ \
    FG_GL_VOID_FUNCTION( MinSampleShadingARB, ( FgGLfloat _1 ), ( FG_GL_ARG( _1 ) ) ) \
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
    FG_GL_VOID_FUNCTION( DeleteObjectARB, ( FgGLhandleARB _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLhandleARB, GetHandleARB, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( DetachObjectARB, ( FgGLhandleARB _1, FgGLhandleARB _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLhandleARB, CreateShaderObjectARB, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ShaderSourceARB, ( FgGLhandleARB _1, FgGLsizei _2, const FgGLcharARB ** _3, const FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( CompileShaderARB, ( FgGLhandleARB _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLhandleARB, CreateProgramObjectARB, ( ), ( ) ) \
    FG_GL_VOID_FUNCTION( AttachObjectARB, ( FgGLhandleARB _1, FgGLhandleARB _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( LinkProgramARB, ( FgGLhandleARB _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( UseProgramObjectARB, ( FgGLhandleARB _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ValidateProgramARB, ( FgGLhandleARB _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform1fARB, ( FgGLint _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform2fARB, ( FgGLint _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform3fARB, ( FgGLint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform4fARB, ( FgGLint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform1iARB, ( FgGLint _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform2iARB, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform3iARB, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform4iARB, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform1fvARB, ( FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform2fvARB, ( FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform3fvARB, ( FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform4fvARB, ( FgGLint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform1ivARB, ( FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform2ivARB, ( FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform3ivARB, ( FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform4ivARB, ( FgGLint _1, FgGLsizei _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformMatrix2fvARB, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformMatrix3fvARB, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformMatrix4fvARB, ( FgGLint _1, FgGLsizei _2, FgGLboolean _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetObjectParameterfvARB, ( FgGLhandleARB _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetObjectParameterivARB, ( FgGLhandleARB _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetInfoLogARB, ( FgGLhandleARB _1, FgGLsizei _2, FgGLsizei * _3, FgGLcharARB * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetAttachedObjectsARB, ( FgGLhandleARB _1, FgGLsizei _2, FgGLsizei * _3, FgGLhandleARB * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetUniformLocationARB, ( FgGLhandleARB _1, const FgGLcharARB * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetActiveUniformARB, ( FgGLhandleARB _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLint * _5, FgGLenum * _6, FgGLcharARB * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( GetUniformfvARB, ( FgGLhandleARB _1, FgGLint _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetUniformivARB, ( FgGLhandleARB _1, FgGLint _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetShaderSourceARB, ( FgGLhandleARB _1, FgGLsizei _2, FgGLsizei * _3, FgGLcharARB * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
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
    FG_GL_VOID_FUNCTION( NamedStringARB, ( FgGLenum _1, FgGLint _2, const FgGLchar * _3, FgGLint _4, const FgGLchar * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteNamedStringARB, ( FgGLint _1, const FgGLchar * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( CompileShaderIncludeARB, ( FgGLuint _1, FgGLsizei _2, const FgGLchar *const* _3, const FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsNamedStringARB, ( FgGLint _1, const FgGLchar * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetNamedStringARB, ( FgGLint _1, const FgGLchar * _2, FgGLsizei _3, FgGLint * _4, FgGLchar * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetNamedStringivARB, ( FgGLint _1, const FgGLchar * _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
\
    /* GL_ARB_shading_language_packing */ \
\
    /* GL_ARB_shadow */ \
\
    /* GL_ARB_shadow_ambient */ \
\
    /* GL_ARB_sparse_texture */ \
    FG_GL_VOID_FUNCTION( TexPageCommitmentARB, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLboolean _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
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
    FG_GL_VOID_FUNCTION( TexBufferARB, ( FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_ARB_texture_buffer_object_rgb32 */ \
\
    /* GL_ARB_texture_buffer_range */ \
\
    /* GL_ARB_texture_compression */ \
    FG_GL_VOID_FUNCTION( CompressedTexImage3DARB, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLsizei _8, const FgGLvoid * _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedTexImage2DARB, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLint _6, FgGLsizei _7, const FgGLvoid * _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedTexImage1DARB, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLint _5, FgGLsizei _6, const FgGLvoid * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedTexSubImage3DARB, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLenum _9, FgGLsizei _10, const FgGLvoid * _11 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedTexSubImage2DARB, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLenum _7, FgGLsizei _8, const FgGLvoid * _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedTexSubImage1DARB, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLenum _5, FgGLsizei _6, const FgGLvoid * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( GetCompressedTexImageARB, ( FgGLenum _1, FgGLint _2, FgGLvoid * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
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
    FG_GL_VOID_FUNCTION( LoadTransposeMatrixfARB, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( LoadTransposeMatrixdARB, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( MultTransposeMatrixfARB, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( MultTransposeMatrixdARB, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
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
    FG_GL_VOID_FUNCTION( WeightbvARB, ( FgGLint _1, const FgGLbyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( WeightsvARB, ( FgGLint _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( WeightivARB, ( FgGLint _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( WeightfvARB, ( FgGLint _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( WeightdvARB, ( FgGLint _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( WeightubvARB, ( FgGLint _1, const FgGLubyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( WeightusvARB, ( FgGLint _1, const FgGLushort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( WeightuivARB, ( FgGLint _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( WeightPointerARB, ( FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexBlendARB, ( FgGLint _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_ARB_vertex_buffer_object */ \
    FG_GL_VOID_FUNCTION( BindBufferARB, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteBuffersARB, ( FgGLsizei _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GenBuffersARB, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsBufferARB, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( BufferDataARB, ( FgGLenum _1, FgGLsizeiptrARB _2, const FgGLvoid * _3, FgGLenum _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( BufferSubDataARB, ( FgGLenum _1, FgGLintptrARB _2, FgGLsizeiptrARB _3, const FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetBufferSubDataARB, ( FgGLenum _1, FgGLintptrARB _2, FgGLsizeiptrARB _3, FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_FUNCTION( NULL, void *, MapBufferARB, ( FgGLenum _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, UnmapBufferARB, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GetBufferParameterivARB, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetBufferPointervARB, ( FgGLenum _1, FgGLenum _2, FgGLvoid ** _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_ARB_vertex_program */ \
    FG_GL_VOID_FUNCTION( VertexAttrib1dARB, ( FgGLuint _1, FgGLdouble _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib1dvARB, ( FgGLuint _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib1fARB, ( FgGLuint _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib1fvARB, ( FgGLuint _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib1sARB, ( FgGLuint _1, FgGLshort _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib1svARB, ( FgGLuint _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib2dARB, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib2dvARB, ( FgGLuint _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib2fARB, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib2fvARB, ( FgGLuint _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib2sARB, ( FgGLuint _1, FgGLshort _2, FgGLshort _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib2svARB, ( FgGLuint _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib3dARB, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib3dvARB, ( FgGLuint _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib3fARB, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib3fvARB, ( FgGLuint _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib3sARB, ( FgGLuint _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib3svARB, ( FgGLuint _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4NbvARB, ( FgGLuint _1, const FgGLbyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4NivARB, ( FgGLuint _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4NsvARB, ( FgGLuint _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4NubARB, ( FgGLuint _1, FgGLubyte _2, FgGLubyte _3, FgGLubyte _4, FgGLubyte _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4NubvARB, ( FgGLuint _1, const FgGLubyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4NuivARB, ( FgGLuint _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4NusvARB, ( FgGLuint _1, const FgGLushort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4bvARB, ( FgGLuint _1, const FgGLbyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4dARB, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4dvARB, ( FgGLuint _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4fARB, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4fvARB, ( FgGLuint _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4ivARB, ( FgGLuint _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4sARB, ( FgGLuint _1, FgGLshort _2, FgGLshort _3, FgGLshort _4, FgGLshort _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4svARB, ( FgGLuint _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4ubvARB, ( FgGLuint _1, const FgGLubyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4uivARB, ( FgGLuint _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4usvARB, ( FgGLuint _1, const FgGLushort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribPointerARB, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLboolean _4, FgGLsizei _5, const FgGLvoid * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( EnableVertexAttribArrayARB, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( DisableVertexAttribArrayARB, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribdvARB, ( FgGLuint _1, FgGLenum _2, FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribfvARB, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribivARB, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribPointervARB, ( FgGLuint _1, FgGLenum _2, FgGLvoid ** _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_ARB_vertex_shader */ \
    FG_GL_VOID_FUNCTION( BindAttribLocationARB, ( FgGLhandleARB _1, FgGLuint _2, const FgGLcharARB * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetActiveAttribARB, ( FgGLhandleARB _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLint * _5, FgGLenum * _6, FgGLcharARB * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetAttribLocationARB, ( FgGLhandleARB _1, const FgGLcharARB * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_ARB_vertex_type_10f_11f_11f_rev */ \
\
    /* GL_ARB_vertex_type_2_10_10_10_rev */ \
\
    /* GL_ARB_viewport_array */ \
\
    /* GL_ARB_window_pos */ \
    FG_GL_VOID_FUNCTION( WindowPos2dARB, ( FgGLdouble _1, FgGLdouble _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos2dvARB, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos2fARB, ( FgGLfloat _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos2fvARB, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos2iARB, ( FgGLint _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos2ivARB, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos2sARB, ( FgGLshort _1, FgGLshort _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos2svARB, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3dARB, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3dvARB, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3fARB, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3fvARB, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3iARB, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3ivARB, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3sARB, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3svARB, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_KHR_debug */ \
\
    /* GL_KHR_texture_compression_astc_ldr */ \
\
    /* GL_OES_byte_coordinates */ \
    FG_GL_VOID_FUNCTION( MultiTexCoord1bOES, ( FgGLenum _1, FgGLbyte _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord1bvOES, ( FgGLenum _1, const FgGLbyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord2bOES, ( FgGLenum _1, FgGLbyte _2, FgGLbyte _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord2bvOES, ( FgGLenum _1, const FgGLbyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord3bOES, ( FgGLenum _1, FgGLbyte _2, FgGLbyte _3, FgGLbyte _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord3bvOES, ( FgGLenum _1, const FgGLbyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord4bOES, ( FgGLenum _1, FgGLbyte _2, FgGLbyte _3, FgGLbyte _4, FgGLbyte _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord4bvOES, ( FgGLenum _1, const FgGLbyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord1bOES, ( FgGLbyte _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord1bvOES, ( const FgGLbyte * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2bOES, ( FgGLbyte _1, FgGLbyte _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2bvOES, ( const FgGLbyte * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord3bOES, ( FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord3bvOES, ( const FgGLbyte * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord4bOES, ( FgGLbyte _1, FgGLbyte _2, FgGLbyte _3, FgGLbyte _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord4bvOES, ( const FgGLbyte * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex2bOES, ( FgGLbyte _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex2bvOES, ( const FgGLbyte * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex3bOES, ( FgGLbyte _1, FgGLbyte _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex3bvOES, ( const FgGLbyte * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex4bOES, ( FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex4bvOES, ( const FgGLbyte * _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_OES_compressed_paletted_texture */ \
\
    /* GL_OES_fixed_point */ \
    FG_GL_VOID_FUNCTION( AlphaFuncxOES, ( FgGLenum _1, FgGLfixed _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( ClearColorxOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ClearDepthxOES, ( FgGLfixed _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ClipPlanexOES, ( FgGLenum _1, const FgGLfixed * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4xOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( DepthRangexOES, ( FgGLfixed _1, FgGLfixed _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( FogxOES, ( FgGLenum _1, FgGLfixed _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( FogxvOES, ( FgGLenum _1, const FgGLfixed * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( FrustumxOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4, FgGLfixed _5, FgGLfixed _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( GetClipPlanexOES, ( FgGLenum _1, FgGLfixed * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetFixedvOES, ( FgGLenum _1, FgGLfixed * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTexEnvxvOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTexParameterxvOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( LightModelxOES, ( FgGLenum _1, FgGLfixed _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( LightModelxvOES, ( FgGLenum _1, const FgGLfixed * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( LightxOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( LightxvOES, ( FgGLenum _1, FgGLenum _2, const FgGLfixed * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( LineWidthxOES, ( FgGLfixed _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( LoadMatrixxOES, ( const FgGLfixed * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( MaterialxOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MaterialxvOES, ( FgGLenum _1, FgGLenum _2, const FgGLfixed * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MultMatrixxOES, ( const FgGLfixed * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord4xOES, ( FgGLenum _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4, FgGLfixed _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( Normal3xOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( OrthoxOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4, FgGLfixed _5, FgGLfixed _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( PointParameterxvOES, ( FgGLenum _1, const FgGLfixed * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( PointSizexOES, ( FgGLfixed _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( PolygonOffsetxOES, ( FgGLfixed _1, FgGLfixed _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( RotatexOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( SampleCoverageOES, ( FgGLfixed _1, FgGLboolean _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( ScalexOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexEnvxOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexEnvxvOES, ( FgGLenum _1, FgGLenum _2, const FgGLfixed * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexParameterxOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexParameterxvOES, ( FgGLenum _1, FgGLenum _2, const FgGLfixed * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TranslatexOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( AccumxOES, ( FgGLenum _1, FgGLfixed _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( BitmapxOES, ( FgGLsizei _1, FgGLsizei _2, FgGLfixed _3, FgGLfixed _4, FgGLfixed _5, FgGLfixed _6, const FgGLubyte * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( BlendColorxOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ClearAccumxOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Color3xOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Color3xvOES, ( const FgGLfixed * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4xvOES, ( const FgGLfixed * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ConvolutionParameterxOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ConvolutionParameterxvOES, ( FgGLenum _1, FgGLenum _2, const FgGLfixed * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( EvalCoord1xOES, ( FgGLfixed _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( EvalCoord1xvOES, ( const FgGLfixed * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( EvalCoord2xOES, ( FgGLfixed _1, FgGLfixed _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( EvalCoord2xvOES, ( const FgGLfixed * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( FeedbackBufferxOES, ( FgGLsizei _1, FgGLenum _2, const FgGLfixed * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetConvolutionParameterxvOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetHistogramParameterxvOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetLightxOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMapxvOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMaterialxOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPixelMapxv, ( FgGLenum _1, FgGLint _2, FgGLfixed * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTexGenxvOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTexLevelParameterxvOES, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLfixed * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( IndexxOES, ( FgGLfixed _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( IndexxvOES, ( const FgGLfixed * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( LoadTransposeMatrixxOES, ( const FgGLfixed * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Map1xOES, ( FgGLenum _1, FgGLfixed _2, FgGLfixed _3, FgGLint _4, FgGLint _5, FgGLfixed _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( Map2xOES, ( FgGLenum _1, FgGLfixed _2, FgGLfixed _3, FgGLint _4, FgGLint _5, FgGLfixed _6, FgGLfixed _7, FgGLint _8, FgGLint _9, FgGLfixed _10 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ) ) ) \
    FG_GL_VOID_FUNCTION( MapGrid1xOES, ( FgGLint _1, FgGLfixed _2, FgGLfixed _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MapGrid2xOES, ( FgGLint _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4, FgGLfixed _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( MultTransposeMatrixxOES, ( const FgGLfixed * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord1xOES, ( FgGLenum _1, FgGLfixed _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord1xvOES, ( FgGLenum _1, const FgGLfixed * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord2xOES, ( FgGLenum _1, FgGLfixed _2, FgGLfixed _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord2xvOES, ( FgGLenum _1, const FgGLfixed * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord3xOES, ( FgGLenum _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord3xvOES, ( FgGLenum _1, const FgGLfixed * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord4xvOES, ( FgGLenum _1, const FgGLfixed * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Normal3xvOES, ( const FgGLfixed * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( PassThroughxOES, ( FgGLfixed _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( PixelMapx, ( FgGLenum _1, FgGLint _2, const FgGLfixed * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( PixelStorex, ( FgGLenum _1, FgGLfixed _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( PixelTransferxOES, ( FgGLenum _1, FgGLfixed _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( PixelZoomxOES, ( FgGLfixed _1, FgGLfixed _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( PrioritizeTexturesxOES, ( FgGLsizei _1, const FgGLuint * _2, const FgGLfixed * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos2xOES, ( FgGLfixed _1, FgGLfixed _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos2xvOES, ( const FgGLfixed * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos3xOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos3xvOES, ( const FgGLfixed * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos4xOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( RasterPos4xvOES, ( const FgGLfixed * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( RectxOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( RectxvOES, ( const FgGLfixed * _1, const FgGLfixed * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord1xOES, ( FgGLfixed _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord1xvOES, ( const FgGLfixed * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2xOES, ( FgGLfixed _1, FgGLfixed _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2xvOES, ( const FgGLfixed * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord3xOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord3xvOES, ( const FgGLfixed * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord4xOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3, FgGLfixed _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord4xvOES, ( const FgGLfixed * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexGenxOES, ( FgGLenum _1, FgGLenum _2, FgGLfixed _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexGenxvOES, ( FgGLenum _1, FgGLenum _2, const FgGLfixed * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex2xOES, ( FgGLfixed _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex2xvOES, ( const FgGLfixed * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex3xOES, ( FgGLfixed _1, FgGLfixed _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex3xvOES, ( const FgGLfixed * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex4xOES, ( FgGLfixed _1, FgGLfixed _2, FgGLfixed _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex4xvOES, ( const FgGLfixed * _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_OES_query_matrix */ \
    FG_GL_FUNCTION( 0, FgGLbitfield, QueryMatrixxOES, ( FgGLfixed * _1, FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_OES_read_format */ \
\
    /* GL_OES_single_precision */ \
    FG_GL_VOID_FUNCTION( ClearDepthfOES, ( FgGLclampf _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ClipPlanefOES, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DepthRangefOES, ( FgGLclampf _1, FgGLclampf _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( FrustumfOES, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( GetClipPlanefOES, ( FgGLenum _1, FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( OrthofOES, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
\
    /* GL_3DFX_multisample */ \
\
    /* GL_3DFX_tbuffer */ \
    FG_GL_VOID_FUNCTION( TbufferMask3DFX, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_3DFX_texture_compression_FXT1 */ \
\
    /* GL_AMD_blend_minmax_factor */ \
\
    /* GL_AMD_conservative_depth */ \
\
    /* GL_AMD_debug_output */ \
    FG_GL_VOID_FUNCTION( DebugMessageEnableAMD, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, const FgGLuint * _4, FgGLboolean _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( DebugMessageInsertAMD, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, const FgGLchar * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( DebugMessageCallbackAMD, ( FgGLDebugProcAMD _1, void * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, GetDebugMessageLogAMD, ( FgGLuint _1, FgGLsizei _2, FgGLenum * _3, FgGLuint * _4, FgGLuint * _5, FgGLsizei * _6, FgGLchar * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
\
    /* GL_AMD_depth_clamp_separate */ \
\
    /* GL_AMD_draw_buffers_blend */ \
    FG_GL_VOID_FUNCTION( BlendFuncIndexedAMD, ( FgGLuint _1, FgGLenum _2, FgGLenum _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( BlendFuncSeparateIndexedAMD, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLenum _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( BlendEquationIndexedAMD, ( FgGLuint _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( BlendEquationSeparateIndexedAMD, ( FgGLuint _1, FgGLenum _2, FgGLenum _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_AMD_interleaved_elements */ \
    FG_GL_VOID_FUNCTION( VertexAttribParameteriAMD, ( FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_AMD_multi_draw_indirect */ \
    FG_GL_VOID_FUNCTION( MultiDrawArraysIndirectAMD, ( FgGLenum _1, const FgGLvoid * _2, FgGLsizei _3, FgGLsizei _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiDrawElementsIndirectAMD, ( FgGLenum _1, FgGLenum _2, const FgGLvoid * _3, FgGLsizei _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
\
    /* GL_AMD_name_gen_delete */ \
    FG_GL_VOID_FUNCTION( GenNamesAMD, ( FgGLenum _1, FgGLuint _2, FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteNamesAMD, ( FgGLenum _1, FgGLuint _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsNameAMD, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_AMD_performance_monitor */ \
    FG_GL_VOID_FUNCTION( GetPerfMonitorGroupsAMD, ( FgGLint * _1, FgGLsizei _2, FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPerfMonitorCountersAMD, ( FgGLuint _1, FgGLint * _2, FgGLint * _3, FgGLsizei _4, FgGLuint * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPerfMonitorGroupStringAMD, ( FgGLuint _1, FgGLsizei _2, FgGLsizei * _3, FgGLchar * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPerfMonitorCounterStringAMD, ( FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLchar * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPerfMonitorCounterInfoAMD, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GenPerfMonitorsAMD, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DeletePerfMonitorsAMD, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( SelectPerfMonitorCountersAMD, ( FgGLuint _1, FgGLboolean _2, FgGLuint _3, FgGLint _4, FgGLuint * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( BeginPerfMonitorAMD, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( EndPerfMonitorAMD, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPerfMonitorCounterDataAMD, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLuint * _4, FgGLint * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
\
    /* GL_AMD_pinned_memory */ \
\
    /* GL_AMD_query_buffer_object */ \
\
    /* GL_AMD_sample_positions */ \
    FG_GL_VOID_FUNCTION( SetMultisamplefvAMD, ( FgGLenum _1, FgGLuint _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
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
    FG_GL_VOID_FUNCTION( TexStorageSparseAMD, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLbitfield _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureStorageSparseAMD, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLbitfield _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
\
    /* GL_AMD_stencil_operation_extended */ \
    FG_GL_VOID_FUNCTION( StencilOpValueAMD, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_AMD_texture_texture4 */ \
\
    /* GL_AMD_transform_feedback3_lines_triangles */ \
\
    /* GL_AMD_vertex_shader_layer */ \
\
    /* GL_AMD_vertex_shader_tessellator */ \
    FG_GL_VOID_FUNCTION( TessellationFactorAMD, ( FgGLfloat _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TessellationModeAMD, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_AMD_vertex_shader_viewport_index */ \
\
    /* GL_APPLE_aux_depth_stencil */ \
\
    /* GL_APPLE_client_storage */ \
\
    /* GL_APPLE_element_array */ \
    FG_GL_VOID_FUNCTION( ElementPointerAPPLE, ( FgGLenum _1, const FgGLvoid * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DrawElementArrayAPPLE, ( FgGLenum _1, FgGLint _2, FgGLsizei _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( DrawRangeElementArrayAPPLE, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLint _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiDrawElementArrayAPPLE, ( FgGLenum _1, const FgGLint * _2, const FgGLsizei * _3, FgGLsizei _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiDrawRangeElementArrayAPPLE, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, const FgGLint * _4, const FgGLsizei * _5, FgGLsizei _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
\
    /* GL_APPLE_fence */ \
    FG_GL_VOID_FUNCTION( GenFencesAPPLE, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteFencesAPPLE, ( FgGLsizei _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( SetFenceAPPLE, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsFenceAPPLE, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, TestFenceAPPLE, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( FinishFenceAPPLE, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, TestObjectAPPLE, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( FinishObjectAPPLE, ( FgGLenum _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_APPLE_float_pixels */ \
\
    /* GL_APPLE_flush_buffer_range */ \
    FG_GL_VOID_FUNCTION( BufferParameteriAPPLE, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( FlushMappedBufferRangeAPPLE, ( FgGLenum _1, FgGLintptr _2, FgGLsizeiptr _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_APPLE_object_purgeable */ \
    FG_GL_FUNCTION( 0, FgGLenum, ObjectPurgeableAPPLE, ( FgGLenum _1, FgGLuint _2, FgGLenum _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLenum, ObjectUnpurgeableAPPLE, ( FgGLenum _1, FgGLuint _2, FgGLenum _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetObjectParameterivAPPLE, ( FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
\
    /* GL_APPLE_rgb_422 */ \
\
    /* GL_APPLE_row_bytes */ \
\
    /* GL_APPLE_specular_vector */ \
\
    /* GL_APPLE_texture_range */ \
    FG_GL_VOID_FUNCTION( TextureRangeAPPLE, ( FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTexParameterPointervAPPLE, ( FgGLenum _1, FgGLenum _2, FgGLvoid ** _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_APPLE_transform_hint */ \
\
    /* GL_APPLE_vertex_array_object */ \
    FG_GL_VOID_FUNCTION( BindVertexArrayAPPLE, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteVertexArraysAPPLE, ( FgGLsizei _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GenVertexArraysAPPLE, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsVertexArrayAPPLE, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_APPLE_vertex_array_range */ \
    FG_GL_VOID_FUNCTION( VertexArrayRangeAPPLE, ( FgGLsizei _1, FgGLvoid * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( FlushVertexArrayRangeAPPLE, ( FgGLsizei _1, FgGLvoid * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexArrayParameteriAPPLE, ( FgGLenum _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_APPLE_vertex_program_evaluators */ \
    FG_GL_VOID_FUNCTION( EnableVertexAttribAPPLE, ( FgGLuint _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DisableVertexAttribAPPLE, ( FgGLuint _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsVertexAttribEnabledAPPLE, ( FgGLuint _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MapVertexAttrib1dAPPLE, ( FgGLuint _1, FgGLuint _2, FgGLdouble _3, FgGLdouble _4, FgGLint _5, FgGLint _6, const FgGLdouble * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( MapVertexAttrib1fAPPLE, ( FgGLuint _1, FgGLuint _2, FgGLfloat _3, FgGLfloat _4, FgGLint _5, FgGLint _6, const FgGLfloat * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( MapVertexAttrib2dAPPLE, ( FgGLuint _1, FgGLuint _2, FgGLdouble _3, FgGLdouble _4, FgGLint _5, FgGLint _6, FgGLdouble _7, FgGLdouble _8, FgGLint _9, FgGLint _10, const FgGLdouble * _11 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ) ) ) \
    FG_GL_VOID_FUNCTION( MapVertexAttrib2fAPPLE, ( FgGLuint _1, FgGLuint _2, FgGLfloat _3, FgGLfloat _4, FgGLint _5, FgGLint _6, FgGLfloat _7, FgGLfloat _8, FgGLint _9, FgGLint _10, const FgGLfloat * _11 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ) ) ) \
\
    /* GL_APPLE_ycbcr_422 */ \
\
    /* GL_ATI_draw_buffers */ \
    FG_GL_VOID_FUNCTION( DrawBuffersATI, ( FgGLsizei _1, const FgGLenum * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_ATI_element_array */ \
    FG_GL_VOID_FUNCTION( ElementPointerATI, ( FgGLenum _1, const FgGLvoid * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DrawElementArrayATI, ( FgGLenum _1, FgGLsizei _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DrawRangeElementArrayATI, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
\
    /* GL_ATI_envmap_bumpmap */ \
    FG_GL_VOID_FUNCTION( TexBumpParameterivATI, ( FgGLenum _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexBumpParameterfvATI, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTexBumpParameterivATI, ( FgGLenum _1, FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTexBumpParameterfvATI, ( FgGLenum _1, FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_ATI_fragment_shader */ \
    FG_GL_FUNCTION( 0, FgGLuint, GenFragmentShadersATI, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( BindFragmentShaderATI, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteFragmentShaderATI, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( BeginFragmentShaderATI, ( ), ( ) ) \
    FG_GL_VOID_FUNCTION( EndFragmentShaderATI, ( ), ( ) ) \
    FG_GL_VOID_FUNCTION( PassTexCoordATI, ( FgGLuint _1, FgGLuint _2, FgGLenum _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SampleMapATI, ( FgGLuint _1, FgGLuint _2, FgGLenum _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ColorFragmentOp1ATI, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6, FgGLuint _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( ColorFragmentOp2ATI, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6, FgGLuint _7, FgGLuint _8, FgGLuint _9, FgGLuint _10 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ) ) ) \
    FG_GL_VOID_FUNCTION( ColorFragmentOp3ATI, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6, FgGLuint _7, FgGLuint _8, FgGLuint _9, FgGLuint _10, FgGLuint _11, FgGLuint _12, FgGLuint _13 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ), FG_GL_ARG( _12 ), FG_GL_ARG( _13 ) ) ) \
    FG_GL_VOID_FUNCTION( AlphaFragmentOp1ATI, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( AlphaFragmentOp2ATI, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6, FgGLuint _7, FgGLuint _8, FgGLuint _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
    FG_GL_VOID_FUNCTION( AlphaFragmentOp3ATI, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6, FgGLuint _7, FgGLuint _8, FgGLuint _9, FgGLuint _10, FgGLuint _11, FgGLuint _12 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ), FG_GL_ARG( _12 ) ) ) \
    FG_GL_VOID_FUNCTION( SetFragmentShaderConstantATI, ( FgGLuint _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_ATI_map_object_buffer */ \
    FG_GL_FUNCTION( NULL, void *, MapObjectBufferATI, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( UnmapObjectBufferATI, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_ATI_meminfo */ \
\
    /* GL_ATI_pixel_format_float */ \
\
    /* GL_ATI_pn_triangles */ \
    FG_GL_VOID_FUNCTION( PNTrianglesiATI, ( FgGLenum _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( PNTrianglesfATI, ( FgGLenum _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_ATI_separate_stencil */ \
    FG_GL_VOID_FUNCTION( StencilOpSeparateATI, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( StencilFuncSeparateATI, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
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
    FG_GL_FUNCTION( 0, FgGLuint, NewObjectBufferATI, ( FgGLsizei _1, const FgGLvoid * _2, FgGLenum _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsObjectBufferATI, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( UpdateObjectBufferATI, ( FgGLuint _1, FgGLuint _2, FgGLsizei _3, const FgGLvoid * _4, FgGLenum _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetObjectBufferfvATI, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetObjectBufferivATI, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( FreeObjectBufferATI, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ArrayObjectATI, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLuint _5, FgGLuint _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( GetArrayObjectfvATI, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetArrayObjectivATI, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VariantArrayObjectATI, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLuint _4, FgGLuint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVariantArrayObjectfvATI, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVariantArrayObjectivATI, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_ATI_vertex_attrib_array_object */ \
    FG_GL_VOID_FUNCTION( VertexAttribArrayObjectATI, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLboolean _4, FgGLsizei _5, FgGLuint _6, FgGLuint _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribArrayObjectfvATI, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribArrayObjectivATI, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_ATI_vertex_streams */ \
    FG_GL_VOID_FUNCTION( VertexStream1sATI, ( FgGLenum _1, FgGLshort _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream1svATI, ( FgGLenum _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream1iATI, ( FgGLenum _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream1ivATI, ( FgGLenum _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream1fATI, ( FgGLenum _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream1fvATI, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream1dATI, ( FgGLenum _1, FgGLdouble _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream1dvATI, ( FgGLenum _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream2sATI, ( FgGLenum _1, FgGLshort _2, FgGLshort _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream2svATI, ( FgGLenum _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream2iATI, ( FgGLenum _1, FgGLint _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream2ivATI, ( FgGLenum _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream2fATI, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream2fvATI, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream2dATI, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream2dvATI, ( FgGLenum _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream3sATI, ( FgGLenum _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream3svATI, ( FgGLenum _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream3iATI, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream3ivATI, ( FgGLenum _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream3fATI, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream3fvATI, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream3dATI, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream3dvATI, ( FgGLenum _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream4sATI, ( FgGLenum _1, FgGLshort _2, FgGLshort _3, FgGLshort _4, FgGLshort _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream4svATI, ( FgGLenum _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream4iATI, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream4ivATI, ( FgGLenum _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream4fATI, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream4fvATI, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream4dATI, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexStream4dvATI, ( FgGLenum _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( NormalStream3bATI, ( FgGLenum _1, FgGLbyte _2, FgGLbyte _3, FgGLbyte _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( NormalStream3bvATI, ( FgGLenum _1, const FgGLbyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( NormalStream3sATI, ( FgGLenum _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( NormalStream3svATI, ( FgGLenum _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( NormalStream3iATI, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( NormalStream3ivATI, ( FgGLenum _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( NormalStream3fATI, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( NormalStream3fvATI, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( NormalStream3dATI, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( NormalStream3dvATI, ( FgGLenum _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( ClientActiveVertexStreamATI, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexBlendEnviATI, ( FgGLenum _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexBlendEnvfATI, ( FgGLenum _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_EXT_422_pixels */ \
\
    /* GL_EXT_abgr */ \
\
    /* GL_EXT_bgra */ \
\
    /* GL_EXT_bindable_uniform */ \
    FG_GL_VOID_FUNCTION( UniformBufferEXT, ( FgGLuint _1, FgGLint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetUniformBufferSizeEXT, ( FgGLuint _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLintptr, GetUniformOffsetEXT, ( FgGLuint _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_EXT_blend_color */ \
    FG_GL_VOID_FUNCTION( BlendColorEXT, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
\
    /* GL_EXT_blend_equation_separate */ \
    FG_GL_VOID_FUNCTION( BlendEquationSeparateEXT, ( FgGLenum _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_EXT_blend_func_separate */ \
    FG_GL_VOID_FUNCTION( BlendFuncSeparateEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
\
    /* GL_EXT_blend_logic_op */ \
\
    /* GL_EXT_blend_minmax */ \
    FG_GL_VOID_FUNCTION( BlendEquationEXT, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_EXT_blend_subtract */ \
\
    /* GL_EXT_clip_volume_hint */ \
\
    /* GL_EXT_cmyka */ \
\
    /* GL_EXT_color_subtable */ \
    FG_GL_VOID_FUNCTION( ColorSubTableEXT, ( FgGLenum _1, FgGLsizei _2, FgGLsizei _3, FgGLenum _4, FgGLenum _5, const FgGLvoid * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyColorSubTableEXT, ( FgGLenum _1, FgGLsizei _2, FgGLint _3, FgGLint _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
\
    /* GL_EXT_compiled_vertex_array */ \
    FG_GL_VOID_FUNCTION( LockArraysEXT, ( FgGLint _1, FgGLsizei _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( UnlockArraysEXT, ( ), ( ) ) \
\
    /* GL_EXT_convolution */ \
    FG_GL_VOID_FUNCTION( ConvolutionFilter1DEXT, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLenum _5, const FgGLvoid * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ConvolutionFilter2DEXT, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, const FgGLvoid * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( ConvolutionParameterfEXT, ( FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ConvolutionParameterfvEXT, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ConvolutionParameteriEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ConvolutionParameterivEXT, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyConvolutionFilter1DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyConvolutionFilter2DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( GetConvolutionFilterEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetConvolutionParameterfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetConvolutionParameterivEXT, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetSeparableFilterEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4, FgGLvoid * _5, FgGLvoid * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( SeparableFilter2DEXT, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, const FgGLvoid * _7, const FgGLvoid * _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
\
    /* GL_EXT_coordinate_frame */ \
    FG_GL_VOID_FUNCTION( Tangent3bEXT, ( FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Tangent3bvEXT, ( const FgGLbyte * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Tangent3dEXT, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Tangent3dvEXT, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Tangent3fEXT, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Tangent3fvEXT, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Tangent3iEXT, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Tangent3ivEXT, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Tangent3sEXT, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Tangent3svEXT, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Binormal3bEXT, ( FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Binormal3bvEXT, ( const FgGLbyte * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Binormal3dEXT, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Binormal3dvEXT, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Binormal3fEXT, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Binormal3fvEXT, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Binormal3iEXT, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Binormal3ivEXT, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Binormal3sEXT, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Binormal3svEXT, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TangentPointerEXT, ( FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( BinormalPointerEXT, ( FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_EXT_copy_texture */ \
    FG_GL_VOID_FUNCTION( CopyTexImage1DEXT, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLint _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyTexImage2DEXT, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLint _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyTexSubImage1DEXT, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyTexSubImage2DEXT, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyTexSubImage3DEXT, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLsizei _8, FgGLsizei _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
\
    /* GL_EXT_cull_vertex */ \
    FG_GL_VOID_FUNCTION( CullParameterdvEXT, ( FgGLenum _1, FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( CullParameterfvEXT, ( FgGLenum _1, FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_EXT_depth_bounds_test */ \
    FG_GL_VOID_FUNCTION( DepthBoundsEXT, ( FgGLclampd _1, FgGLclampd _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_EXT_direct_state_access */ \
    FG_GL_VOID_FUNCTION( MatrixLoadfEXT, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixLoaddEXT, ( FgGLenum _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixMultfEXT, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixMultdEXT, ( FgGLenum _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixLoadIdentityEXT, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixRotatefEXT, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixRotatedEXT, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixScalefEXT, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixScaledEXT, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixTranslatefEXT, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixTranslatedEXT, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixFrustumEXT, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6, FgGLdouble _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixOrthoEXT, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6, FgGLdouble _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixPopEXT, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixPushEXT, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ClientAttribDefaultEXT, ( FgGLbitfield _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( PushClientAttribDefaultEXT, ( FgGLbitfield _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureParameterfEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureParameterfvEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureParameteriEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureParameterivEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, const FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureImage1DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLint _6, FgGLenum _7, FgGLenum _8, const FgGLvoid * _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureImage2DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLenum _8, FgGLenum _9, const FgGLvoid * _10 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureSubImage1DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLenum _6, FgGLenum _7, const FgGLvoid * _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureSubImage2DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLenum _8, FgGLenum _9, const FgGLvoid * _10 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyTextureImage1DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLint _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyTextureImage2DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8, FgGLint _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyTextureSubImage1DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyTextureSubImage2DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLsizei _8, FgGLsizei _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTextureImageEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLenum _5, FgGLvoid * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTextureParameterfvEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTextureParameterivEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTextureLevelParameterfvEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTextureLevelParameterivEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLint * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureImage3DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLint _8, FgGLenum _9, FgGLenum _10, const FgGLvoid * _11 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureSubImage3DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8, FgGLsizei _9, FgGLenum _10, FgGLenum _11, const FgGLvoid * _12 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ), FG_GL_ARG( _12 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyTextureSubImage3DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLint _8, FgGLsizei _9, FgGLsizei _10 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ) ) ) \
    FG_GL_VOID_FUNCTION( BindMultiTextureEXT, ( FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoordPointerEXT, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, const FgGLvoid * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexEnvfEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexEnvfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexEnviEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexEnvivEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexGendEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLdouble _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexGendvEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexGenfEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexGenfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexGeniEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexGenivEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMultiTexEnvfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMultiTexEnvivEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMultiTexGendvEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMultiTexGenfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMultiTexGenivEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexParameteriEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexParameterivEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexParameterfEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexParameterfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexImage1DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLint _6, FgGLenum _7, FgGLenum _8, const FgGLvoid * _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexImage2DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLenum _8, FgGLenum _9, const FgGLvoid * _10 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexSubImage1DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLenum _6, FgGLenum _7, const FgGLvoid * _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexSubImage2DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLenum _8, FgGLenum _9, const FgGLvoid * _10 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyMultiTexImage1DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLint _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyMultiTexImage2DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8, FgGLint _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyMultiTexSubImage1DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyMultiTexSubImage2DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLsizei _8, FgGLsizei _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMultiTexImageEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLenum _5, FgGLvoid * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMultiTexParameterfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMultiTexParameterivEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMultiTexLevelParameterfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMultiTexLevelParameterivEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLint * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexImage3DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLint _8, FgGLenum _9, FgGLenum _10, const FgGLvoid * _11 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexSubImage3DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8, FgGLsizei _9, FgGLenum _10, FgGLenum _11, const FgGLvoid * _12 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ), FG_GL_ARG( _12 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyMultiTexSubImage3DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLint _8, FgGLsizei _9, FgGLsizei _10 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ) ) ) \
    FG_GL_VOID_FUNCTION( EnableClientStateIndexedEXT, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DisableClientStateIndexedEXT, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetFloatIndexedvEXT, ( FgGLenum _1, FgGLuint _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetDoubleIndexedvEXT, ( FgGLenum _1, FgGLuint _2, FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPointerIndexedvEXT, ( FgGLenum _1, FgGLuint _2, FgGLvoid ** _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( EnableIndexedEXT, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DisableIndexedEXT, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsEnabledIndexedEXT, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetIntegerIndexedvEXT, ( FgGLenum _1, FgGLuint _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetBooleanIndexedvEXT, ( FgGLenum _1, FgGLuint _2, FgGLboolean * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedTextureImage3DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLint _8, FgGLsizei _9, const FgGLvoid * _10 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedTextureImage2DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLsizei _8, const FgGLvoid * _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedTextureImage1DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLint _6, FgGLsizei _7, const FgGLvoid * _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedTextureSubImage3DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8, FgGLsizei _9, FgGLenum _10, FgGLsizei _11, const FgGLvoid * _12 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ), FG_GL_ARG( _12 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedTextureSubImage2DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLenum _8, FgGLsizei _9, const FgGLvoid * _10 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedTextureSubImage1DEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLenum _6, FgGLsizei _7, const FgGLvoid * _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( GetCompressedTextureImageEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedMultiTexImage3DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLint _8, FgGLsizei _9, const FgGLvoid * _10 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedMultiTexImage2DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLsizei _8, const FgGLvoid * _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedMultiTexImage1DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLint _6, FgGLsizei _7, const FgGLvoid * _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedMultiTexSubImage3DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8, FgGLsizei _9, FgGLenum _10, FgGLsizei _11, const FgGLvoid * _12 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ), FG_GL_ARG( _12 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedMultiTexSubImage2DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLenum _8, FgGLsizei _9, const FgGLvoid * _10 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ) ) ) \
    FG_GL_VOID_FUNCTION( CompressedMultiTexSubImage1DEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLenum _6, FgGLsizei _7, const FgGLvoid * _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( GetCompressedMultiTexImageEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixLoadTransposefEXT, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixLoadTransposedEXT, ( FgGLenum _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixMultTransposefEXT, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MatrixMultTransposedEXT, ( FgGLenum _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedBufferDataEXT, ( FgGLuint _1, FgGLsizeiptr _2, const FgGLvoid * _3, FgGLenum _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedBufferSubDataEXT, ( FgGLuint _1, FgGLintptr _2, FgGLsizeiptr _3, const FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_FUNCTION( NULL, void *, MapNamedBufferEXT, ( FgGLuint _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, UnmapNamedBufferEXT, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GetNamedBufferParameterivEXT, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetNamedBufferPointervEXT, ( FgGLuint _1, FgGLenum _2, FgGLvoid ** _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetNamedBufferSubDataEXT, ( FgGLuint _1, FgGLintptr _2, FgGLsizeiptr _3, FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform1fEXT, ( FgGLuint _1, FgGLint _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform2fEXT, ( FgGLuint _1, FgGLint _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform3fEXT, ( FgGLuint _1, FgGLint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform4fEXT, ( FgGLuint _1, FgGLint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform1iEXT, ( FgGLuint _1, FgGLint _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform2iEXT, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform3iEXT, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform4iEXT, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform1fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform2fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform3fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform4fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform1ivEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform2ivEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform3ivEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform4ivEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix2fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix3fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix4fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix2x3fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix3x2fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix2x4fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix4x2fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix3x4fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix4x3fvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureBufferEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexBufferEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureParameterIivEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, const FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureParameterIuivEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, const FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTextureParameterIivEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTextureParameterIuivEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexParameterIivEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexParameterIuivEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMultiTexParameterIivEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMultiTexParameterIuivEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform1uiEXT, ( FgGLuint _1, FgGLint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform2uiEXT, ( FgGLuint _1, FgGLint _2, FgGLuint _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform3uiEXT, ( FgGLuint _1, FgGLint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform4uiEXT, ( FgGLuint _1, FgGLint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform1uivEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform2uivEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform3uivEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform4uivEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedProgramLocalParameters4fvEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, const FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedProgramLocalParameterI4iEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedProgramLocalParameterI4ivEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, const FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedProgramLocalParametersI4ivEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, const FgGLint * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedProgramLocalParameterI4uiEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6, FgGLuint _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedProgramLocalParameterI4uivEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, const FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedProgramLocalParametersI4uivEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLsizei _4, const FgGLuint * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetNamedProgramLocalParameterIivEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetNamedProgramLocalParameterIuivEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( EnableClientStateiEXT, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DisableClientStateiEXT, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetFloati_vEXT, ( FgGLenum _1, FgGLuint _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetDoublei_vEXT, ( FgGLenum _1, FgGLuint _2, FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPointeri_vEXT, ( FgGLenum _1, FgGLuint _2, FgGLvoid ** _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedProgramStringEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLsizei _4, const FgGLvoid * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedProgramLocalParameter4dEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6, FgGLdouble _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedProgramLocalParameter4dvEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, const FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedProgramLocalParameter4fEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedProgramLocalParameter4fvEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetNamedProgramLocalParameterdvEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetNamedProgramLocalParameterfvEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetNamedProgramivEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetNamedProgramStringEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedRenderbufferStorageEXT, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetNamedRenderbufferParameterivEXT, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedRenderbufferStorageMultisampleEXT, ( FgGLuint _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedRenderbufferStorageMultisampleCoverageEXT, ( FgGLuint _1, FgGLsizei _2, FgGLsizei _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLenum, CheckNamedFramebufferStatusEXT, ( FgGLuint _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedFramebufferTexture1DEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedFramebufferTexture2DEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedFramebufferTexture3DEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5, FgGLint _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedFramebufferRenderbufferEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetNamedFramebufferAttachmentParameterivEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GenerateTextureMipmapEXT, ( FgGLuint _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GenerateMultiTexMipmapEXT, ( FgGLenum _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( FramebufferDrawBufferEXT, ( FgGLuint _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( FramebufferDrawBuffersEXT, ( FgGLuint _1, FgGLsizei _2, const FgGLenum * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( FramebufferReadBufferEXT, ( FgGLuint _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetFramebufferParameterivEXT, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedCopyBufferSubDataEXT, ( FgGLuint _1, FgGLuint _2, FgGLintptr _3, FgGLintptr _4, FgGLsizeiptr _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedFramebufferTextureEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedFramebufferTextureLayerEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedFramebufferTextureFaceEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLenum _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureRenderbufferEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexRenderbufferEXT, ( FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexArrayVertexOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLintptr _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexArrayColorOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLintptr _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexArrayEdgeFlagOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLintptr _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexArrayIndexOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLsizei _4, FgGLintptr _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexArrayNormalOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLsizei _4, FgGLintptr _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexArrayTexCoordOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLintptr _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexArrayMultiTexCoordOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLint _4, FgGLenum _5, FgGLsizei _6, FgGLintptr _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexArrayFogCoordOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLsizei _4, FgGLintptr _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexArraySecondaryColorOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLenum _4, FgGLsizei _5, FgGLintptr _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexArrayVertexAttribOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLint _4, FgGLenum _5, FgGLboolean _6, FgGLsizei _7, FgGLintptr _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexArrayVertexAttribIOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLint _4, FgGLenum _5, FgGLsizei _6, FgGLintptr _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( EnableVertexArrayEXT, ( FgGLuint _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DisableVertexArrayEXT, ( FgGLuint _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( EnableVertexArrayAttribEXT, ( FgGLuint _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DisableVertexArrayAttribEXT, ( FgGLuint _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexArrayIntegervEXT, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexArrayPointervEXT, ( FgGLuint _1, FgGLenum _2, FgGLvoid ** _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexArrayIntegeri_vEXT, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexArrayPointeri_vEXT, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLvoid ** _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_FUNCTION( NULL, void *, MapNamedBufferRangeEXT, ( FgGLuint _1, FgGLintptr _2, FgGLsizeiptr _3, FgGLbitfield _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( FlushMappedNamedBufferRangeEXT, ( FgGLuint _1, FgGLintptr _2, FgGLsizeiptr _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedBufferStorageEXT, ( FgGLuint _1, FgGLsizeiptr _2, const void * _3, FgGLbitfield _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ClearNamedBufferDataEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, const void * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ClearNamedBufferSubDataEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLsizeiptr _5, FgGLsizeiptr _6, const void * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( NamedFramebufferParameteriEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetNamedFramebufferParameterivEXT, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform1dEXT, ( FgGLuint _1, FgGLint _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform2dEXT, ( FgGLuint _1, FgGLint _2, FgGLdouble _3, FgGLdouble _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform3dEXT, ( FgGLuint _1, FgGLint _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform4dEXT, ( FgGLuint _1, FgGLint _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform1dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform2dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform3dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform4dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix2dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix3dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix4dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix2x3dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix2x4dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix3x2dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix3x4dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix4x2dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformMatrix4x3dvEXT, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, FgGLboolean _4, const FgGLdouble * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureBufferRangeEXT, ( FgGLuint _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLintptr _5, FgGLsizeiptr _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureStorage1DEXT, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureStorage2DEXT, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureStorage3DEXT, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureStorage2DMultisampleEXT, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6, FgGLboolean _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureStorage3DMultisampleEXT, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLboolean _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexArrayBindVertexBufferEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLintptr _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexArrayVertexAttribFormatEXT, ( FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLenum _4, FgGLboolean _5, FgGLuint _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexArrayVertexAttribIFormatEXT, ( FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLenum _4, FgGLuint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexArrayVertexAttribLFormatEXT, ( FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLenum _4, FgGLuint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexArrayVertexAttribBindingEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexArrayVertexBindingDivisorEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexArrayVertexAttribLOffsetEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLint _4, FgGLenum _5, FgGLsizei _6, FgGLintptr _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( TexturePageCommitmentEXT, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLboolean _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexArrayVertexAttribDivisorEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_EXT_draw_buffers2 */ \
    FG_GL_VOID_FUNCTION( ColorMaskIndexedEXT, ( FgGLuint _1, FgGLboolean _2, FgGLboolean _3, FgGLboolean _4, FgGLboolean _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
\
    /* GL_EXT_draw_instanced */ \
    FG_GL_VOID_FUNCTION( DrawArraysInstancedEXT, ( FgGLenum _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( DrawElementsInstancedEXT, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
\
    /* GL_EXT_draw_range_elements */ \
    FG_GL_VOID_FUNCTION( DrawRangeElementsEXT, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4, FgGLenum _5, const FgGLvoid * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
\
    /* GL_EXT_fog_coord */ \
    FG_GL_VOID_FUNCTION( FogCoordfEXT, ( FgGLfloat _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( FogCoordfvEXT, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( FogCoorddEXT, ( FgGLdouble _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( FogCoorddvEXT, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( FogCoordPointerEXT, ( FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_EXT_framebuffer_blit */ \
    FG_GL_VOID_FUNCTION( BlitFramebufferEXT, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLint _7, FgGLint _8, FgGLbitfield _9, FgGLenum _10 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ) ) ) \
\
    /* GL_EXT_framebuffer_multisample */ \
    FG_GL_VOID_FUNCTION( RenderbufferStorageMultisampleEXT, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
\
    /* GL_EXT_framebuffer_multisample_blit_scaled */ \
\
    /* GL_EXT_framebuffer_object */ \
    FG_GL_FUNCTION( 0, FgGLboolean, IsRenderbufferEXT, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( BindRenderbufferEXT, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteRenderbuffersEXT, ( FgGLsizei _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GenRenderbuffersEXT, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( RenderbufferStorageEXT, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetRenderbufferParameterivEXT, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsFramebufferEXT, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( BindFramebufferEXT, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteFramebuffersEXT, ( FgGLsizei _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GenFramebuffersEXT, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLenum, CheckFramebufferStatusEXT, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( FramebufferTexture1DEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( FramebufferTexture2DEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( FramebufferTexture3DEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4, FgGLint _5, FgGLint _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( FramebufferRenderbufferEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetFramebufferAttachmentParameterivEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GenerateMipmapEXT, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_EXT_framebuffer_sRGB */ \
\
    /* GL_EXT_geometry_shader4 */ \
    FG_GL_VOID_FUNCTION( ProgramParameteriEXT, ( FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_EXT_gpu_program_parameters */ \
    FG_GL_VOID_FUNCTION( ProgramEnvParameters4fvEXT, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramLocalParameters4fvEXT, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
\
    /* GL_EXT_gpu_shader4 */ \
    FG_GL_VOID_FUNCTION( GetUniformuivEXT, ( FgGLuint _1, FgGLint _2, FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( BindFragDataLocationEXT, ( FgGLuint _1, FgGLuint _2, const FgGLchar * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetFragDataLocationEXT, ( FgGLuint _1, const FgGLchar * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform1uiEXT, ( FgGLint _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform2uiEXT, ( FgGLint _1, FgGLuint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform3uiEXT, ( FgGLint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform4uiEXT, ( FgGLint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform1uivEXT, ( FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform2uivEXT, ( FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform3uivEXT, ( FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform4uivEXT, ( FgGLint _1, FgGLsizei _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_EXT_histogram */ \
    FG_GL_VOID_FUNCTION( GetHistogramEXT, ( FgGLenum _1, FgGLboolean _2, FgGLenum _3, FgGLenum _4, FgGLvoid * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetHistogramParameterfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetHistogramParameterivEXT, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMinmaxEXT, ( FgGLenum _1, FgGLboolean _2, FgGLenum _3, FgGLenum _4, FgGLvoid * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMinmaxParameterfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMinmaxParameterivEXT, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( HistogramEXT, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, FgGLboolean _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MinmaxEXT, ( FgGLenum _1, FgGLenum _2, FgGLboolean _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ResetHistogramEXT, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ResetMinmaxEXT, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_EXT_index_array_formats */ \
\
    /* GL_EXT_index_func */ \
    FG_GL_VOID_FUNCTION( IndexFuncEXT, ( FgGLenum _1, FgGLclampf _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_EXT_index_material */ \
    FG_GL_VOID_FUNCTION( IndexMaterialEXT, ( FgGLenum _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_EXT_index_texture */ \
\
    /* GL_EXT_light_texture */ \
    FG_GL_VOID_FUNCTION( ApplyTextureEXT, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureLightEXT, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureMaterialEXT, ( FgGLenum _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_EXT_misc_attribute */ \
\
    /* GL_EXT_multi_draw_arrays */ \
    FG_GL_VOID_FUNCTION( MultiDrawArraysEXT, ( FgGLenum _1, const FgGLint * _2, const FgGLsizei * _3, FgGLsizei _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiDrawElementsEXT, ( FgGLenum _1, const FgGLsizei * _2, FgGLenum _3, const FgGLvoid *const* _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
\
    /* GL_EXT_multisample */ \
    FG_GL_VOID_FUNCTION( SampleMaskEXT, ( FgGLclampf _1, FgGLboolean _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( SamplePatternEXT, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_EXT_packed_depth_stencil */ \
\
    /* GL_EXT_packed_float */ \
\
    /* GL_EXT_packed_pixels */ \
\
    /* GL_EXT_paletted_texture */ \
    FG_GL_VOID_FUNCTION( ColorTableEXT, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLenum _5, const FgGLvoid * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( GetColorTableEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetColorTableParameterivEXT, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetColorTableParameterfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_EXT_pixel_buffer_object */ \
\
    /* GL_EXT_pixel_transform */ \
    FG_GL_VOID_FUNCTION( PixelTransformParameteriEXT, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( PixelTransformParameterfEXT, ( FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( PixelTransformParameterivEXT, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( PixelTransformParameterfvEXT, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPixelTransformParameterivEXT, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPixelTransformParameterfvEXT, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_EXT_pixel_transform_color_table */ \
\
    /* GL_EXT_point_parameters */ \
    FG_GL_VOID_FUNCTION( PointParameterfEXT, ( FgGLenum _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( PointParameterfvEXT, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_EXT_polygon_offset */ \
    FG_GL_VOID_FUNCTION( PolygonOffsetEXT, ( FgGLfloat _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_EXT_provoking_vertex */ \
    FG_GL_VOID_FUNCTION( ProvokingVertexEXT, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_EXT_rescale_normal */ \
\
    /* GL_EXT_secondary_color */ \
    FG_GL_VOID_FUNCTION( SecondaryColor3bEXT, ( FgGLbyte _1, FgGLbyte _2, FgGLbyte _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3bvEXT, ( const FgGLbyte * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3dEXT, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3dvEXT, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3fEXT, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3fvEXT, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3iEXT, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3ivEXT, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3sEXT, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3svEXT, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3ubEXT, ( FgGLubyte _1, FgGLubyte _2, FgGLubyte _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3ubvEXT, ( const FgGLubyte * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3uiEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3uivEXT, ( const FgGLuint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3usEXT, ( FgGLushort _1, FgGLushort _2, FgGLushort _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3usvEXT, ( const FgGLushort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColorPointerEXT, ( FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
\
    /* GL_EXT_separate_shader_objects */ \
    FG_GL_VOID_FUNCTION( UseShaderProgramEXT, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( ActiveProgramEXT, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, CreateShaderProgramEXT, ( FgGLenum _1, const FgGLchar * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_EXT_separate_specular_color */ \
\
    /* GL_EXT_shader_image_load_store */ \
    FG_GL_VOID_FUNCTION( BindImageTextureEXT, ( FgGLuint _1, FgGLuint _2, FgGLint _3, FgGLboolean _4, FgGLint _5, FgGLenum _6, FgGLint _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( MemoryBarrierEXT, ( FgGLbitfield _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_EXT_shadow_funcs */ \
\
    /* GL_EXT_shared_texture_palette */ \
\
    /* GL_EXT_stencil_clear_tag */ \
    FG_GL_VOID_FUNCTION( StencilClearTagEXT, ( FgGLsizei _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_EXT_stencil_two_side */ \
    FG_GL_VOID_FUNCTION( ActiveStencilFaceEXT, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_EXT_stencil_wrap */ \
\
    /* GL_EXT_subtexture */ \
    FG_GL_VOID_FUNCTION( TexSubImage1DEXT, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLsizei _4, FgGLenum _5, FgGLenum _6, const FgGLvoid * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( TexSubImage2DEXT, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLenum _7, FgGLenum _8, const FgGLvoid * _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
\
    /* GL_EXT_texture */ \
\
    /* GL_EXT_texture3D */ \
    FG_GL_VOID_FUNCTION( TexImage3DEXT, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLint _7, FgGLenum _8, FgGLenum _9, const FgGLvoid * _10 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ) ) ) \
    FG_GL_VOID_FUNCTION( TexSubImage3DEXT, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLenum _9, FgGLenum _10, const FgGLvoid * _11 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ) ) ) \
\
    /* GL_EXT_texture_array */ \
\
    /* GL_EXT_texture_buffer_object */ \
    FG_GL_VOID_FUNCTION( TexBufferEXT, ( FgGLenum _1, FgGLenum _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
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
    FG_GL_VOID_FUNCTION( TexParameterIivEXT, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexParameterIuivEXT, ( FgGLenum _1, FgGLenum _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTexParameterIivEXT, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTexParameterIuivEXT, ( FgGLenum _1, FgGLenum _2, FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ClearColorIiEXT, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ClearColorIuiEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
\
    /* GL_EXT_texture_lod_bias */ \
\
    /* GL_EXT_texture_mirror_clamp */ \
\
    /* GL_EXT_texture_object */ \
    FG_GL_FUNCTION( 0, FgGLboolean, AreTexturesResidentEXT, ( FgGLsizei _1, const FgGLuint * _2, FgGLboolean * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( BindTextureEXT, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteTexturesEXT, ( FgGLsizei _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GenTexturesEXT, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsTextureEXT, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( PrioritizeTexturesEXT, ( FgGLsizei _1, const FgGLuint * _2, const FgGLclampf * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_EXT_texture_perturb_normal */ \
    FG_GL_VOID_FUNCTION( TextureNormalEXT, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
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
    FG_GL_VOID_FUNCTION( GetQueryObjecti64vEXT, ( FgGLuint _1, FgGLenum _2, FgGLint64 * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetQueryObjectui64vEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint64 * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_EXT_transform_feedback */ \
    FG_GL_VOID_FUNCTION( BeginTransformFeedbackEXT, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( EndTransformFeedbackEXT, ( ), ( ) ) \
    FG_GL_VOID_FUNCTION( BindBufferRangeEXT, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLintptr _4, FgGLsizeiptr _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( BindBufferOffsetEXT, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLintptr _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( BindBufferBaseEXT, ( FgGLenum _1, FgGLuint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TransformFeedbackVaryingsEXT, ( FgGLuint _1, FgGLsizei _2, const FgGLchar *const* _3, FgGLenum _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTransformFeedbackVaryingEXT, ( FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLsizei * _5, FgGLenum * _6, FgGLchar * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
\
    /* GL_EXT_vertex_array */ \
    FG_GL_VOID_FUNCTION( ArrayElementEXT, ( FgGLint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ColorPointerEXT, ( FgGLint _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, const FgGLvoid * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( DrawArraysEXT, ( FgGLenum _1, FgGLint _2, FgGLsizei _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( EdgeFlagPointerEXT, ( FgGLsizei _1, FgGLsizei _2, const FgGLboolean * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPointervEXT, ( FgGLenum _1, FgGLvoid ** _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( IndexPointerEXT, ( FgGLenum _1, FgGLsizei _2, FgGLsizei _3, const FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( NormalPointerEXT, ( FgGLenum _1, FgGLsizei _2, FgGLsizei _3, const FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoordPointerEXT, ( FgGLint _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, const FgGLvoid * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexPointerEXT, ( FgGLint _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, const FgGLvoid * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
\
    /* GL_EXT_vertex_array_bgra */ \
\
    /* GL_EXT_vertex_attrib_64bit */ \
    FG_GL_VOID_FUNCTION( VertexAttribL1dEXT, ( FgGLuint _1, FgGLdouble _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL2dEXT, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL3dEXT, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL4dEXT, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL1dvEXT, ( FgGLuint _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL2dvEXT, ( FgGLuint _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL3dvEXT, ( FgGLuint _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL4dvEXT, ( FgGLuint _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribLPointerEXT, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, const FgGLvoid * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribLdvEXT, ( FgGLuint _1, FgGLenum _2, FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_EXT_vertex_shader */ \
    FG_GL_VOID_FUNCTION( BeginVertexShaderEXT, ( ), ( ) ) \
    FG_GL_VOID_FUNCTION( EndVertexShaderEXT, ( ), ( ) ) \
    FG_GL_VOID_FUNCTION( BindVertexShaderEXT, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, GenVertexShadersEXT, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteVertexShaderEXT, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ShaderOp1EXT, ( FgGLenum _1, FgGLuint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ShaderOp2EXT, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ShaderOp3EXT, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( SwizzleEXT, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLenum _4, FgGLenum _5, FgGLenum _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( WriteMaskEXT, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLenum _4, FgGLenum _5, FgGLenum _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( InsertComponentEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ExtractComponentEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, GenSymbolsEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( SetInvariantEXT, ( FgGLuint _1, FgGLenum _2, const FgGLvoid * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SetLocalConstantEXT, ( FgGLuint _1, FgGLenum _2, const FgGLvoid * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VariantbvEXT, ( FgGLuint _1, const FgGLbyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VariantsvEXT, ( FgGLuint _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VariantivEXT, ( FgGLuint _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VariantfvEXT, ( FgGLuint _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VariantdvEXT, ( FgGLuint _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VariantubvEXT, ( FgGLuint _1, const FgGLubyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VariantusvEXT, ( FgGLuint _1, const FgGLushort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VariantuivEXT, ( FgGLuint _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VariantPointerEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint _3, const FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( EnableVariantClientStateEXT, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( DisableVariantClientStateEXT, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, BindLightParameterEXT, ( FgGLenum _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, BindMaterialParameterEXT, ( FgGLenum _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, BindTexGenParameterEXT, ( FgGLenum _1, FgGLenum _2, FgGLenum _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, BindTextureUnitParameterEXT, ( FgGLenum _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, BindParameterEXT, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsVariantEnabledEXT, ( FgGLuint _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVariantBooleanvEXT, ( FgGLuint _1, FgGLenum _2, FgGLboolean * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVariantIntegervEXT, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVariantFloatvEXT, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVariantPointervEXT, ( FgGLuint _1, FgGLenum _2, FgGLvoid ** _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetInvariantBooleanvEXT, ( FgGLuint _1, FgGLenum _2, FgGLboolean * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetInvariantIntegervEXT, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetInvariantFloatvEXT, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetLocalConstantBooleanvEXT, ( FgGLuint _1, FgGLenum _2, FgGLboolean * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetLocalConstantIntegervEXT, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetLocalConstantFloatvEXT, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_EXT_vertex_weighting */ \
    FG_GL_VOID_FUNCTION( VertexWeightfEXT, ( FgGLfloat _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexWeightfvEXT, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexWeightPointerEXT, ( FgGLint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
\
    /* GL_EXT_x11_sync_object */ \
    FG_GL_FUNCTION( NULL, FgGLsync, ImportSyncEXT, ( FgGLenum _1, FgGLintptr _2, FgGLbitfield _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_GREMEDY_frame_terminator */ \
    FG_GL_VOID_FUNCTION( FrameTerminatorGREMEDY, ( ), ( ) ) \
\
    /* GL_GREMEDY_string_marker */ \
    FG_GL_VOID_FUNCTION( StringMarkerGREMEDY, ( FgGLsizei _1, const FgGLvoid * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_HP_convolution_border_modes */ \
\
    /* GL_HP_image_transform */ \
    FG_GL_VOID_FUNCTION( ImageTransformParameteriHP, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ImageTransformParameterfHP, ( FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ImageTransformParameterivHP, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ImageTransformParameterfvHP, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetImageTransformParameterivHP, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetImageTransformParameterfvHP, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_HP_occlusion_test */ \
\
    /* GL_HP_texture_lighting */ \
\
    /* GL_IBM_cull_vertex */ \
\
    /* GL_IBM_multimode_draw_arrays */ \
    FG_GL_VOID_FUNCTION( MultiModeDrawArraysIBM, ( const FgGLenum * _1, const FgGLint * _2, const FgGLsizei * _3, FgGLsizei _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiModeDrawElementsIBM, ( const FgGLenum * _1, const FgGLsizei * _2, FgGLenum _3, const FgGLvoid *const* _4, FgGLsizei _5, FgGLint _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
\
    /* GL_IBM_rasterpos_clip */ \
\
    /* GL_IBM_static_data */ \
    FG_GL_VOID_FUNCTION( FlushStaticDataIBM, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_IBM_texture_mirrored_repeat */ \
\
    /* GL_IBM_vertex_array_lists */ \
    FG_GL_VOID_FUNCTION( ColorPointerListIBM, ( FgGLint _1, FgGLenum _2, FgGLint _3, const FgGLvoid ** _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColorPointerListIBM, ( FgGLint _1, FgGLenum _2, FgGLint _3, const FgGLvoid ** _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( EdgeFlagPointerListIBM, ( FgGLint _1, const FgGLboolean ** _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( FogCoordPointerListIBM, ( FgGLenum _1, FgGLint _2, const FgGLvoid ** _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( IndexPointerListIBM, ( FgGLenum _1, FgGLint _2, const FgGLvoid ** _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( NormalPointerListIBM, ( FgGLenum _1, FgGLint _2, const FgGLvoid ** _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoordPointerListIBM, ( FgGLint _1, FgGLenum _2, FgGLint _3, const FgGLvoid ** _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexPointerListIBM, ( FgGLint _1, FgGLenum _2, FgGLint _3, const FgGLvoid ** _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
\
    /* GL_INGR_blend_func_separate */ \
    FG_GL_VOID_FUNCTION( BlendFuncSeparateINGR, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
\
    /* GL_INGR_color_clamp */ \
\
    /* GL_INGR_interlace_read */ \
\
    /* GL_INTEL_map_texture */ \
    FG_GL_VOID_FUNCTION( SyncTextureINTEL, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( UnmapTexture2DINTEL, ( FgGLuint _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( NULL, void *, MapTexture2DINTEL, ( FgGLuint _1, FgGLint _2, FgGLbitfield _3, const FgGLint * _4, const FgGLenum * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
\
    /* GL_INTEL_parallel_arrays */ \
    FG_GL_VOID_FUNCTION( VertexPointervINTEL, ( FgGLint _1, FgGLenum _2, const FgGLvoid ** _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( NormalPointervINTEL, ( FgGLenum _1, const FgGLvoid ** _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( ColorPointervINTEL, ( FgGLint _1, FgGLenum _2, const FgGLvoid ** _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoordPointervINTEL, ( FgGLint _1, FgGLenum _2, const FgGLvoid ** _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_MESAX_texture_stack */ \
\
    /* GL_MESA_pack_invert */ \
\
    /* GL_MESA_resize_buffers */ \
    FG_GL_VOID_FUNCTION( ResizeBuffersMESA, ( ), ( ) ) \
\
    /* GL_MESA_window_pos */ \
    FG_GL_VOID_FUNCTION( WindowPos2dMESA, ( FgGLdouble _1, FgGLdouble _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos2dvMESA, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos2fMESA, ( FgGLfloat _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos2fvMESA, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos2iMESA, ( FgGLint _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos2ivMESA, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos2sMESA, ( FgGLshort _1, FgGLshort _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos2svMESA, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3dMESA, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3dvMESA, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3fMESA, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3fvMESA, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3iMESA, ( FgGLint _1, FgGLint _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3ivMESA, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3sMESA, ( FgGLshort _1, FgGLshort _2, FgGLshort _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos3svMESA, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos4dMESA, ( FgGLdouble _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos4dvMESA, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos4fMESA, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos4fvMESA, ( const FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos4iMESA, ( FgGLint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos4ivMESA, ( const FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos4sMESA, ( FgGLshort _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( WindowPos4svMESA, ( const FgGLshort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_MESA_ycbcr_texture */ \
\
    /* GL_NVX_conditional_render */ \
    FG_GL_VOID_FUNCTION( BeginConditionalRenderNVX, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( EndConditionalRenderNVX, ( ), ( ) ) \
\
    /* GL_NV_bindless_multi_draw_indirect */ \
    FG_GL_VOID_FUNCTION( MultiDrawArraysIndirectBindlessNV, ( FgGLenum _1, const FgGLvoid * _2, FgGLsizei _3, FgGLsizei _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiDrawElementsIndirectBindlessNV, ( FgGLenum _1, FgGLenum _2, const FgGLvoid * _3, FgGLsizei _4, FgGLsizei _5, FgGLint _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
\
    /* GL_NV_bindless_texture */ \
    FG_GL_FUNCTION( 0, FgGLuint64, GetTextureHandleNV, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLuint64, GetTextureSamplerHandleNV, ( FgGLuint _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MakeTextureHandleResidentNV, ( FgGLuint64 _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( MakeTextureHandleNonResidentNV, ( FgGLuint64 _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLuint64, GetImageHandleNV, ( FgGLuint _1, FgGLint _2, FgGLboolean _3, FgGLint _4, FgGLenum _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( MakeImageHandleResidentNV, ( FgGLuint64 _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MakeImageHandleNonResidentNV, ( FgGLuint64 _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformHandleui64NV, ( FgGLint _1, FgGLuint64 _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( UniformHandleui64vNV, ( FgGLint _1, FgGLsizei _2, const FgGLuint64 * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformHandleui64NV, ( FgGLuint _1, FgGLint _2, FgGLuint64 _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformHandleui64vNV, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint64 * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsTextureHandleResidentNV, ( FgGLuint64 _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsImageHandleResidentNV, ( FgGLuint64 _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_NV_blend_equation_advanced */ \
    FG_GL_VOID_FUNCTION( BlendParameteriNV, ( FgGLenum _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( BlendBarrierNV, ( ), ( ) ) \
\
    /* GL_NV_blend_equation_advanced_coherent */ \
\
    /* GL_NV_blend_square */ \
\
    /* GL_NV_compute_program5 */ \
\
    /* GL_NV_conditional_render */ \
    FG_GL_VOID_FUNCTION( BeginConditionalRenderNV, ( FgGLuint _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( EndConditionalRenderNV, ( ), ( ) ) \
\
    /* GL_NV_copy_depth_to_color */ \
\
    /* GL_NV_copy_image */ \
    FG_GL_VOID_FUNCTION( CopyImageSubDataNV, ( FgGLuint _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLuint _7, FgGLenum _8, FgGLint _9, FgGLint _10, FgGLint _11, FgGLint _12, FgGLsizei _13, FgGLsizei _14, FgGLsizei _15 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ), FG_GL_ARG( _12 ), FG_GL_ARG( _13 ), FG_GL_ARG( _14 ), FG_GL_ARG( _15 ) ) ) \
\
    /* GL_NV_deep_texture3D */ \
\
    /* GL_NV_depth_buffer_float */ \
    FG_GL_VOID_FUNCTION( DepthRangedNV, ( FgGLdouble _1, FgGLdouble _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( ClearDepthdNV, ( FgGLdouble _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( DepthBoundsdNV, ( FgGLdouble _1, FgGLdouble _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_NV_depth_clamp */ \
\
    /* GL_NV_draw_texture */ \
    FG_GL_VOID_FUNCTION( DrawTextureNV, ( FgGLuint _1, FgGLuint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9, FgGLfloat _10, FgGLfloat _11 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ) ) ) \
\
    /* GL_NV_evaluators */ \
    FG_GL_VOID_FUNCTION( MapControlPointsNV, ( FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLint _6, FgGLint _7, FgGLboolean _8, const FgGLvoid * _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
    FG_GL_VOID_FUNCTION( MapParameterivNV, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MapParameterfvNV, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMapControlPointsNV, ( FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLboolean _6, FgGLvoid * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMapParameterivNV, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMapParameterfvNV, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMapAttribParameterivNV, ( FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetMapAttribParameterfvNV, ( FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( EvalMapsNV, ( FgGLenum _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_NV_explicit_multisample */ \
    FG_GL_VOID_FUNCTION( GetMultisamplefvNV, ( FgGLenum _1, FgGLuint _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SampleMaskIndexedNV, ( FgGLuint _1, FgGLbitfield _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexRenderbufferNV, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_NV_fence */ \
    FG_GL_VOID_FUNCTION( DeleteFencesNV, ( FgGLsizei _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GenFencesNV, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsFenceNV, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, TestFenceNV, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GetFenceivNV, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( FinishFenceNV, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( SetFenceNV, ( FgGLuint _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_NV_float_buffer */ \
\
    /* GL_NV_fog_distance */ \
\
    /* GL_NV_fragment_program */ \
    FG_GL_VOID_FUNCTION( ProgramNamedParameter4fNV, ( FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramNamedParameter4fvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramNamedParameter4dNV, ( FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6, FgGLdouble _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramNamedParameter4dvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3, const FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramNamedParameterfvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3, FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramNamedParameterdvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3, FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
\
    /* GL_NV_fragment_program2 */ \
\
    /* GL_NV_fragment_program4 */ \
\
    /* GL_NV_fragment_program_option */ \
\
    /* GL_NV_framebuffer_multisample_coverage */ \
    FG_GL_VOID_FUNCTION( RenderbufferStorageMultisampleCoverageNV, ( FgGLenum _1, FgGLsizei _2, FgGLsizei _3, FgGLenum _4, FgGLsizei _5, FgGLsizei _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
\
    /* GL_NV_geometry_program4 */ \
    FG_GL_VOID_FUNCTION( ProgramVertexLimitNV, ( FgGLenum _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( FramebufferTextureEXT, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( FramebufferTextureLayerEXT, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( FramebufferTextureFaceEXT, ( FgGLenum _1, FgGLenum _2, FgGLuint _3, FgGLint _4, FgGLenum _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
\
    /* GL_NV_geometry_shader4 */ \
\
    /* GL_NV_gpu_program4 */ \
    FG_GL_VOID_FUNCTION( ProgramLocalParameterI4iNV, ( FgGLenum _1, FgGLuint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramLocalParameterI4ivNV, ( FgGLenum _1, FgGLuint _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramLocalParametersI4ivNV, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramLocalParameterI4uiNV, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramLocalParameterI4uivNV, ( FgGLenum _1, FgGLuint _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramLocalParametersI4uivNV, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramEnvParameterI4iNV, ( FgGLenum _1, FgGLuint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramEnvParameterI4ivNV, ( FgGLenum _1, FgGLuint _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramEnvParametersI4ivNV, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramEnvParameterI4uiNV, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5, FgGLuint _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramEnvParameterI4uivNV, ( FgGLenum _1, FgGLuint _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramEnvParametersI4uivNV, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramLocalParameterIivNV, ( FgGLenum _1, FgGLuint _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramLocalParameterIuivNV, ( FgGLenum _1, FgGLuint _2, FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramEnvParameterIivNV, ( FgGLenum _1, FgGLuint _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramEnvParameterIuivNV, ( FgGLenum _1, FgGLuint _2, FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_NV_gpu_program5 */ \
    FG_GL_VOID_FUNCTION( ProgramSubroutineParametersuivNV, ( FgGLenum _1, FgGLsizei _2, const FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramSubroutineParameteruivNV, ( FgGLenum _1, FgGLuint _2, FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_NV_gpu_program5_mem_extended */ \
\
    /* GL_NV_gpu_shader5 */ \
    FG_GL_VOID_FUNCTION( Uniform1i64NV, ( FgGLint _1, FgGLint64EXT _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform2i64NV, ( FgGLint _1, FgGLint64EXT _2, FgGLint64EXT _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform3i64NV, ( FgGLint _1, FgGLint64EXT _2, FgGLint64EXT _3, FgGLint64EXT _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform4i64NV, ( FgGLint _1, FgGLint64EXT _2, FgGLint64EXT _3, FgGLint64EXT _4, FgGLint64EXT _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform1i64vNV, ( FgGLint _1, FgGLsizei _2, const FgGLint64EXT * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform2i64vNV, ( FgGLint _1, FgGLsizei _2, const FgGLint64EXT * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform3i64vNV, ( FgGLint _1, FgGLsizei _2, const FgGLint64EXT * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform4i64vNV, ( FgGLint _1, FgGLsizei _2, const FgGLint64EXT * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform1ui64NV, ( FgGLint _1, FgGLuint64EXT _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform2ui64NV, ( FgGLint _1, FgGLuint64EXT _2, FgGLuint64EXT _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform3ui64NV, ( FgGLint _1, FgGLuint64EXT _2, FgGLuint64EXT _3, FgGLuint64EXT _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform4ui64NV, ( FgGLint _1, FgGLuint64EXT _2, FgGLuint64EXT _3, FgGLuint64EXT _4, FgGLuint64EXT _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform1ui64vNV, ( FgGLint _1, FgGLsizei _2, const FgGLuint64EXT * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform2ui64vNV, ( FgGLint _1, FgGLsizei _2, const FgGLuint64EXT * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform3ui64vNV, ( FgGLint _1, FgGLsizei _2, const FgGLuint64EXT * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniform4ui64vNV, ( FgGLint _1, FgGLsizei _2, const FgGLuint64EXT * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetUniformi64vNV, ( FgGLuint _1, FgGLint _2, FgGLint64EXT * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform1i64NV, ( FgGLuint _1, FgGLint _2, FgGLint64EXT _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform2i64NV, ( FgGLuint _1, FgGLint _2, FgGLint64EXT _3, FgGLint64EXT _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform3i64NV, ( FgGLuint _1, FgGLint _2, FgGLint64EXT _3, FgGLint64EXT _4, FgGLint64EXT _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform4i64NV, ( FgGLuint _1, FgGLint _2, FgGLint64EXT _3, FgGLint64EXT _4, FgGLint64EXT _5, FgGLint64EXT _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform1i64vNV, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint64EXT * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform2i64vNV, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint64EXT * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform3i64vNV, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint64EXT * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform4i64vNV, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLint64EXT * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform1ui64NV, ( FgGLuint _1, FgGLint _2, FgGLuint64EXT _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform2ui64NV, ( FgGLuint _1, FgGLint _2, FgGLuint64EXT _3, FgGLuint64EXT _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform3ui64NV, ( FgGLuint _1, FgGLint _2, FgGLuint64EXT _3, FgGLuint64EXT _4, FgGLuint64EXT _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform4ui64NV, ( FgGLuint _1, FgGLint _2, FgGLuint64EXT _3, FgGLuint64EXT _4, FgGLuint64EXT _5, FgGLuint64EXT _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform1ui64vNV, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint64EXT * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform2ui64vNV, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint64EXT * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform3ui64vNV, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint64EXT * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniform4ui64vNV, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint64EXT * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
\
    /* GL_NV_half_float */ \
    FG_GL_VOID_FUNCTION( Vertex2hNV, ( FgGLhalfNV _1, FgGLhalfNV _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex2hvNV, ( const FgGLhalfNV * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex3hNV, ( FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex3hvNV, ( const FgGLhalfNV * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex4hNV, ( FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3, FgGLhalfNV _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Vertex4hvNV, ( const FgGLhalfNV * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Normal3hNV, ( FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Normal3hvNV, ( const FgGLhalfNV * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Color3hNV, ( FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( Color3hvNV, ( const FgGLhalfNV * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4hNV, ( FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3, FgGLhalfNV _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4hvNV, ( const FgGLhalfNV * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord1hNV, ( FgGLhalfNV _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord1hvNV, ( const FgGLhalfNV * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2hNV, ( FgGLhalfNV _1, FgGLhalfNV _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2hvNV, ( const FgGLhalfNV * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord3hNV, ( FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord3hvNV, ( const FgGLhalfNV * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord4hNV, ( FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3, FgGLhalfNV _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord4hvNV, ( const FgGLhalfNV * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord1hNV, ( FgGLenum _1, FgGLhalfNV _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord1hvNV, ( FgGLenum _1, const FgGLhalfNV * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord2hNV, ( FgGLenum _1, FgGLhalfNV _2, FgGLhalfNV _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord2hvNV, ( FgGLenum _1, const FgGLhalfNV * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord3hNV, ( FgGLenum _1, FgGLhalfNV _2, FgGLhalfNV _3, FgGLhalfNV _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord3hvNV, ( FgGLenum _1, const FgGLhalfNV * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord4hNV, ( FgGLenum _1, FgGLhalfNV _2, FgGLhalfNV _3, FgGLhalfNV _4, FgGLhalfNV _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( MultiTexCoord4hvNV, ( FgGLenum _1, const FgGLhalfNV * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( FogCoordhNV, ( FgGLhalfNV _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( FogCoordhvNV, ( const FgGLhalfNV * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3hNV, ( FgGLhalfNV _1, FgGLhalfNV _2, FgGLhalfNV _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColor3hvNV, ( const FgGLhalfNV * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexWeighthNV, ( FgGLhalfNV _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexWeighthvNV, ( const FgGLhalfNV * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib1hNV, ( FgGLuint _1, FgGLhalfNV _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib1hvNV, ( FgGLuint _1, const FgGLhalfNV * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib2hNV, ( FgGLuint _1, FgGLhalfNV _2, FgGLhalfNV _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib2hvNV, ( FgGLuint _1, const FgGLhalfNV * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib3hNV, ( FgGLuint _1, FgGLhalfNV _2, FgGLhalfNV _3, FgGLhalfNV _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib3hvNV, ( FgGLuint _1, const FgGLhalfNV * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4hNV, ( FgGLuint _1, FgGLhalfNV _2, FgGLhalfNV _3, FgGLhalfNV _4, FgGLhalfNV _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4hvNV, ( FgGLuint _1, const FgGLhalfNV * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribs1hvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLhalfNV * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribs2hvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLhalfNV * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribs3hvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLhalfNV * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribs4hvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLhalfNV * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_NV_light_max_exponent */ \
\
    /* GL_NV_multisample_coverage */ \
\
    /* GL_NV_multisample_filter_hint */ \
\
    /* GL_NV_occlusion_query */ \
    FG_GL_VOID_FUNCTION( GenOcclusionQueriesNV, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteOcclusionQueriesNV, ( FgGLsizei _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsOcclusionQueryNV, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( BeginOcclusionQueryNV, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( EndOcclusionQueryNV, ( ), ( ) ) \
    FG_GL_VOID_FUNCTION( GetOcclusionQueryivNV, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetOcclusionQueryuivNV, ( FgGLuint _1, FgGLenum _2, FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_NV_packed_depth_stencil */ \
\
    /* GL_NV_parameter_buffer_object */ \
    FG_GL_VOID_FUNCTION( ProgramBufferParametersfvNV, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4, const FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramBufferParametersIivNV, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4, const FgGLint * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramBufferParametersIuivNV, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLsizei _4, const FgGLuint * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
\
    /* GL_NV_parameter_buffer_object2 */ \
\
    /* GL_NV_path_rendering */ \
    FG_GL_FUNCTION( 0, FgGLuint, GenPathsNV, ( FgGLsizei _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( DeletePathsNV, ( FgGLuint _1, FgGLsizei _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsPathNV, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( PathCommandsNV, ( FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3, FgGLsizei _4, FgGLenum _5, const FgGLvoid * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( PathCoordsNV, ( FgGLuint _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( PathSubCommandsNV, ( FgGLuint _1, FgGLsizei _2, FgGLsizei _3, FgGLsizei _4, const FgGLubyte * _5, FgGLsizei _6, FgGLenum _7, const FgGLvoid * _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( PathSubCoordsNV, ( FgGLuint _1, FgGLsizei _2, FgGLsizei _3, FgGLenum _4, const FgGLvoid * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( PathStringNV, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, const FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( PathGlyphsNV, ( FgGLuint _1, FgGLenum _2, const FgGLvoid * _3, FgGLbitfield _4, FgGLsizei _5, FgGLenum _6, const FgGLvoid * _7, FgGLenum _8, FgGLuint _9, FgGLfloat _10 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ) ) ) \
    FG_GL_VOID_FUNCTION( PathGlyphRangeNV, ( FgGLuint _1, FgGLenum _2, const FgGLvoid * _3, FgGLbitfield _4, FgGLuint _5, FgGLsizei _6, FgGLenum _7, FgGLuint _8, FgGLfloat _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
    FG_GL_VOID_FUNCTION( WeightPathsNV, ( FgGLuint _1, FgGLsizei _2, const FgGLuint * _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyPathNV, ( FgGLuint _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( InterpolatePathsNV, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( TransformPathNV, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( PathParameterivNV, ( FgGLuint _1, FgGLenum _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( PathParameteriNV, ( FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( PathParameterfvNV, ( FgGLuint _1, FgGLenum _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( PathParameterfNV, ( FgGLuint _1, FgGLenum _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( PathDashArrayNV, ( FgGLuint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( PathStencilFuncNV, ( FgGLenum _1, FgGLint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( PathStencilDepthOffsetNV, ( FgGLfloat _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( StencilFillPathNV, ( FgGLuint _1, FgGLenum _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( StencilStrokePathNV, ( FgGLuint _1, FgGLint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( StencilFillPathInstancedNV, ( FgGLsizei _1, FgGLenum _2, const FgGLvoid * _3, FgGLuint _4, FgGLenum _5, FgGLuint _6, FgGLenum _7, const FgGLfloat * _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( StencilStrokePathInstancedNV, ( FgGLsizei _1, FgGLenum _2, const FgGLvoid * _3, FgGLuint _4, FgGLint _5, FgGLuint _6, FgGLenum _7, const FgGLfloat * _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( PathCoverDepthFuncNV, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( PathColorGenNV, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( PathTexGenNV, ( FgGLenum _1, FgGLenum _2, FgGLint _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( PathFogGenNV, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( CoverFillPathNV, ( FgGLuint _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( CoverStrokePathNV, ( FgGLuint _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( CoverFillPathInstancedNV, ( FgGLsizei _1, FgGLenum _2, const FgGLvoid * _3, FgGLuint _4, FgGLenum _5, FgGLenum _6, const FgGLfloat * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( CoverStrokePathInstancedNV, ( FgGLsizei _1, FgGLenum _2, const FgGLvoid * _3, FgGLuint _4, FgGLenum _5, FgGLenum _6, const FgGLfloat * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPathParameterivNV, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPathParameterfvNV, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPathCommandsNV, ( FgGLuint _1, FgGLubyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPathCoordsNV, ( FgGLuint _1, FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPathDashArrayNV, ( FgGLuint _1, FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPathMetricsNV, ( FgGLbitfield _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4, FgGLuint _5, FgGLsizei _6, FgGLfloat * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPathMetricRangeNV, ( FgGLbitfield _1, FgGLuint _2, FgGLsizei _3, FgGLsizei _4, FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPathSpacingNV, ( FgGLenum _1, FgGLsizei _2, FgGLenum _3, const FgGLvoid * _4, FgGLuint _5, FgGLfloat _6, FgGLfloat _7, FgGLenum _8, FgGLfloat * _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPathColorGenivNV, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPathColorGenfvNV, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPathTexGenivNV, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPathTexGenfvNV, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsPointInFillPathNV, ( FgGLuint _1, FgGLuint _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsPointInStrokePathNV, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLfloat, GetPathLengthNV, ( FgGLuint _1, FgGLsizei _2, FgGLsizei _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, PointAlongPathNV, ( FgGLuint _1, FgGLsizei _2, FgGLsizei _3, FgGLfloat _4, FgGLfloat * _5, FgGLfloat * _6, FgGLfloat * _7, FgGLfloat * _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
\
    /* GL_NV_pixel_data_range */ \
    FG_GL_VOID_FUNCTION( PixelDataRangeNV, ( FgGLenum _1, FgGLsizei _2, const FgGLvoid * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( FlushPixelDataRangeNV, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_NV_point_sprite */ \
    FG_GL_VOID_FUNCTION( PointParameteriNV, ( FgGLenum _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( PointParameterivNV, ( FgGLenum _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_NV_present_video */ \
    FG_GL_VOID_FUNCTION( PresentFrameKeyedNV, ( FgGLuint _1, FgGLuint64EXT _2, FgGLuint _3, FgGLuint _4, FgGLenum _5, FgGLenum _6, FgGLuint _7, FgGLuint _8, FgGLenum _9, FgGLuint _10, FgGLuint _11 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ) ) ) \
    FG_GL_VOID_FUNCTION( PresentFrameDualFillNV, ( FgGLuint _1, FgGLuint64EXT _2, FgGLuint _3, FgGLuint _4, FgGLenum _5, FgGLenum _6, FgGLuint _7, FgGLenum _8, FgGLuint _9, FgGLenum _10, FgGLuint _11, FgGLenum _12, FgGLuint _13 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ), FG_GL_ARG( _12 ), FG_GL_ARG( _13 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVideoivNV, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVideouivNV, ( FgGLuint _1, FgGLenum _2, FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVideoi64vNV, ( FgGLuint _1, FgGLenum _2, FgGLint64EXT * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVideoui64vNV, ( FgGLuint _1, FgGLenum _2, FgGLuint64EXT * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_NV_primitive_restart */ \
    FG_GL_VOID_FUNCTION( PrimitiveRestartNV, ( ), ( ) ) \
    FG_GL_VOID_FUNCTION( PrimitiveRestartIndexNV, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_NV_register_combiners */ \
    FG_GL_VOID_FUNCTION( CombinerParameterfvNV, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( CombinerParameterfNV, ( FgGLenum _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( CombinerParameterivNV, ( FgGLenum _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( CombinerParameteriNV, ( FgGLenum _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( CombinerInputNV, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLenum _5, FgGLenum _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( CombinerOutputNV, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLenum _5, FgGLenum _6, FgGLenum _7, FgGLboolean _8, FgGLboolean _9, FgGLboolean _10 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ) ) ) \
    FG_GL_VOID_FUNCTION( FinalCombinerInputNV, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetCombinerInputParameterfvNV, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetCombinerInputParameterivNV, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLenum _4, FgGLint * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetCombinerOutputParameterfvNV, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetCombinerOutputParameterivNV, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetFinalCombinerInputParameterfvNV, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetFinalCombinerInputParameterivNV, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_NV_register_combiners2 */ \
    FG_GL_VOID_FUNCTION( CombinerStageParameterfvNV, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetCombinerStageParameterfvNV, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_NV_shader_atomic_counters */ \
\
    /* GL_NV_shader_atomic_float */ \
\
    /* GL_NV_shader_buffer_load */ \
    FG_GL_VOID_FUNCTION( MakeBufferResidentNV, ( FgGLenum _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MakeBufferNonResidentNV, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsBufferResidentNV, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( MakeNamedBufferResidentNV, ( FgGLuint _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( MakeNamedBufferNonResidentNV, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsNamedBufferResidentNV, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GetBufferParameterui64vNV, ( FgGLenum _1, FgGLenum _2, FgGLuint64EXT * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetNamedBufferParameterui64vNV, ( FgGLuint _1, FgGLenum _2, FgGLuint64EXT * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetIntegerui64vNV, ( FgGLenum _1, FgGLuint64EXT * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniformui64NV, ( FgGLint _1, FgGLuint64EXT _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Uniformui64vNV, ( FgGLint _1, FgGLsizei _2, const FgGLuint64EXT * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetUniformui64vNV, ( FgGLuint _1, FgGLint _2, FgGLuint64EXT * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformui64NV, ( FgGLuint _1, FgGLint _2, FgGLuint64EXT _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramUniformui64vNV, ( FgGLuint _1, FgGLint _2, FgGLsizei _3, const FgGLuint64EXT * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
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
    FG_GL_VOID_FUNCTION( TextureBarrierNV, ( ), ( ) ) \
\
    /* GL_NV_texture_compression_vtc */ \
\
    /* GL_NV_texture_env_combine4 */ \
\
    /* GL_NV_texture_expand_normal */ \
\
    /* GL_NV_texture_multisample */ \
    FG_GL_VOID_FUNCTION( TexImage2DMultisampleCoverageNV, ( FgGLenum _1, FgGLsizei _2, FgGLsizei _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLboolean _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( TexImage3DMultisampleCoverageNV, ( FgGLenum _1, FgGLsizei _2, FgGLsizei _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLboolean _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureImage2DMultisampleNV, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLboolean _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureImage3DMultisampleNV, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLint _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLboolean _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureImage2DMultisampleCoverageNV, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLboolean _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( TextureImage3DMultisampleCoverageNV, ( FgGLuint _1, FgGLenum _2, FgGLsizei _3, FgGLsizei _4, FgGLint _5, FgGLsizei _6, FgGLsizei _7, FgGLsizei _8, FgGLboolean _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
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
    FG_GL_VOID_FUNCTION( BeginTransformFeedbackNV, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( EndTransformFeedbackNV, ( ), ( ) ) \
    FG_GL_VOID_FUNCTION( TransformFeedbackAttribsNV, ( FgGLuint _1, const FgGLint * _2, FgGLenum _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( BindBufferRangeNV, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLintptr _4, FgGLsizeiptr _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( BindBufferOffsetNV, ( FgGLenum _1, FgGLuint _2, FgGLuint _3, FgGLintptr _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( BindBufferBaseNV, ( FgGLenum _1, FgGLuint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TransformFeedbackVaryingsNV, ( FgGLuint _1, FgGLsizei _2, const FgGLint * _3, FgGLenum _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ActiveVaryingNV, ( FgGLuint _1, const FgGLchar * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLint, GetVaryingLocationNV, ( FgGLuint _1, const FgGLchar * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetActiveVaryingNV, ( FgGLuint _1, FgGLuint _2, FgGLsizei _3, FgGLsizei * _4, FgGLsizei * _5, FgGLenum * _6, FgGLchar * _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTransformFeedbackVaryingNV, ( FgGLuint _1, FgGLuint _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TransformFeedbackStreamAttribsNV, ( FgGLsizei _1, const FgGLint * _2, FgGLsizei _3, const FgGLint * _4, FgGLenum _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
\
    /* GL_NV_transform_feedback2 */ \
    FG_GL_VOID_FUNCTION( BindTransformFeedbackNV, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteTransformFeedbacksNV, ( FgGLsizei _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GenTransformFeedbacksNV, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsTransformFeedbackNV, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( PauseTransformFeedbackNV, ( ), ( ) ) \
    FG_GL_VOID_FUNCTION( ResumeTransformFeedbackNV, ( ), ( ) ) \
    FG_GL_VOID_FUNCTION( DrawTransformFeedbackNV, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_NV_vdpau_interop */ \
    FG_GL_VOID_FUNCTION( VDPAUInitNV, ( const FgGLvoid * _1, const FgGLvoid * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VDPAUFiniNV, ( ), ( ) ) \
    FG_GL_FUNCTION( 0, FgGLvdpauSurfaceNV, VDPAURegisterVideoSurfaceNV, ( const FgGLvoid * _1, FgGLenum _2, FgGLsizei _3, const FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLvdpauSurfaceNV, VDPAURegisterOutputSurfaceNV, ( const FgGLvoid * _1, FgGLenum _2, FgGLsizei _3, const FgGLuint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VDPAUIsSurfaceNV, ( FgGLvdpauSurfaceNV _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( VDPAUUnregisterSurfaceNV, ( FgGLvdpauSurfaceNV _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( VDPAUGetSurfaceivNV, ( FgGLvdpauSurfaceNV _1, FgGLenum _2, FgGLsizei _3, FgGLsizei * _4, FgGLint * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VDPAUSurfaceAccessNV, ( FgGLvdpauSurfaceNV _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VDPAUMapSurfacesNV, ( FgGLsizei _1, const FgGLvdpauSurfaceNV * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VDPAUUnmapSurfacesNV, ( FgGLsizei _1, const FgGLvdpauSurfaceNV * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_NV_vertex_array_range */ \
    FG_GL_VOID_FUNCTION( FlushVertexArrayRangeNV, ( ), ( ) ) \
    FG_GL_VOID_FUNCTION( VertexArrayRangeNV, ( FgGLsizei _1, const FgGLvoid * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_NV_vertex_array_range2 */ \
\
    /* GL_NV_vertex_attrib_integer_64bit */ \
    FG_GL_VOID_FUNCTION( VertexAttribL1i64NV, ( FgGLuint _1, FgGLint64EXT _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL2i64NV, ( FgGLuint _1, FgGLint64EXT _2, FgGLint64EXT _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL3i64NV, ( FgGLuint _1, FgGLint64EXT _2, FgGLint64EXT _3, FgGLint64EXT _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL4i64NV, ( FgGLuint _1, FgGLint64EXT _2, FgGLint64EXT _3, FgGLint64EXT _4, FgGLint64EXT _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL1i64vNV, ( FgGLuint _1, const FgGLint64EXT * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL2i64vNV, ( FgGLuint _1, const FgGLint64EXT * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL3i64vNV, ( FgGLuint _1, const FgGLint64EXT * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL4i64vNV, ( FgGLuint _1, const FgGLint64EXT * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL1ui64NV, ( FgGLuint _1, FgGLuint64EXT _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL2ui64NV, ( FgGLuint _1, FgGLuint64EXT _2, FgGLuint64EXT _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL3ui64NV, ( FgGLuint _1, FgGLuint64EXT _2, FgGLuint64EXT _3, FgGLuint64EXT _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL4ui64NV, ( FgGLuint _1, FgGLuint64EXT _2, FgGLuint64EXT _3, FgGLuint64EXT _4, FgGLuint64EXT _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL1ui64vNV, ( FgGLuint _1, const FgGLuint64EXT * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL2ui64vNV, ( FgGLuint _1, const FgGLuint64EXT * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL3ui64vNV, ( FgGLuint _1, const FgGLuint64EXT * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribL4ui64vNV, ( FgGLuint _1, const FgGLuint64EXT * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribLi64vNV, ( FgGLuint _1, FgGLenum _2, FgGLint64EXT * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribLui64vNV, ( FgGLuint _1, FgGLenum _2, FgGLuint64EXT * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribLFormatNV, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLsizei _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
\
    /* GL_NV_vertex_buffer_unified_memory */ \
    FG_GL_VOID_FUNCTION( BufferAddressRangeNV, ( FgGLenum _1, FgGLuint _2, FgGLuint64EXT _3, FgGLsizeiptr _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexFormatNV, ( FgGLint _1, FgGLenum _2, FgGLsizei _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( NormalFormatNV, ( FgGLenum _1, FgGLsizei _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( ColorFormatNV, ( FgGLint _1, FgGLenum _2, FgGLsizei _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( IndexFormatNV, ( FgGLenum _1, FgGLsizei _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoordFormatNV, ( FgGLint _1, FgGLenum _2, FgGLsizei _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( EdgeFlagFormatNV, ( FgGLsizei _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( SecondaryColorFormatNV, ( FgGLint _1, FgGLenum _2, FgGLsizei _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( FogCoordFormatNV, ( FgGLenum _1, FgGLsizei _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribFormatNV, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLboolean _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribIFormatNV, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLsizei _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetIntegerui64i_vNV, ( FgGLenum _1, FgGLuint _2, FgGLuint64EXT * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_NV_vertex_program */ \
    FG_GL_FUNCTION( 0, FgGLboolean, AreProgramsResidentNV, ( FgGLsizei _1, const FgGLuint * _2, FgGLboolean * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( BindProgramNV, ( FgGLenum _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteProgramsNV, ( FgGLsizei _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( ExecuteProgramNV, ( FgGLenum _1, FgGLuint _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GenProgramsNV, ( FgGLsizei _1, FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramParameterdvNV, ( FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramParameterfvNV, ( FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramivNV, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetProgramStringNV, ( FgGLuint _1, FgGLenum _2, FgGLubyte * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetTrackMatrixivNV, ( FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribdvNV, ( FgGLuint _1, FgGLenum _2, FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribfvNV, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribivNV, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribPointervNV, ( FgGLuint _1, FgGLenum _2, FgGLvoid ** _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsProgramNV, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( LoadProgramNV, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLubyte * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramParameter4dNV, ( FgGLenum _1, FgGLuint _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5, FgGLdouble _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramParameter4dvNV, ( FgGLenum _1, FgGLuint _2, const FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramParameter4fNV, ( FgGLenum _1, FgGLuint _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramParameter4fvNV, ( FgGLenum _1, FgGLuint _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramParameters4dvNV, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ProgramParameters4fvNV, ( FgGLenum _1, FgGLuint _2, FgGLsizei _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( RequestResidentProgramsNV, ( FgGLsizei _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TrackMatrixNV, ( FgGLenum _1, FgGLuint _2, FgGLenum _3, FgGLenum _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribPointerNV, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, const FgGLvoid * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib1dNV, ( FgGLuint _1, FgGLdouble _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib1dvNV, ( FgGLuint _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib1fNV, ( FgGLuint _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib1fvNV, ( FgGLuint _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib1sNV, ( FgGLuint _1, FgGLshort _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib1svNV, ( FgGLuint _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib2dNV, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib2dvNV, ( FgGLuint _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib2fNV, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib2fvNV, ( FgGLuint _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib2sNV, ( FgGLuint _1, FgGLshort _2, FgGLshort _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib2svNV, ( FgGLuint _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib3dNV, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib3dvNV, ( FgGLuint _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib3fNV, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib3fvNV, ( FgGLuint _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib3sNV, ( FgGLuint _1, FgGLshort _2, FgGLshort _3, FgGLshort _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib3svNV, ( FgGLuint _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4dNV, ( FgGLuint _1, FgGLdouble _2, FgGLdouble _3, FgGLdouble _4, FgGLdouble _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4dvNV, ( FgGLuint _1, const FgGLdouble * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4fNV, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4fvNV, ( FgGLuint _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4sNV, ( FgGLuint _1, FgGLshort _2, FgGLshort _3, FgGLshort _4, FgGLshort _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4svNV, ( FgGLuint _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4ubNV, ( FgGLuint _1, FgGLubyte _2, FgGLubyte _3, FgGLubyte _4, FgGLubyte _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttrib4ubvNV, ( FgGLuint _1, const FgGLubyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribs1dvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribs1fvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribs1svNV, ( FgGLuint _1, FgGLsizei _2, const FgGLshort * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribs2dvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribs2fvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribs2svNV, ( FgGLuint _1, FgGLsizei _2, const FgGLshort * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribs3dvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribs3fvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribs3svNV, ( FgGLuint _1, FgGLsizei _2, const FgGLshort * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribs4dvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLdouble * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribs4fvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribs4svNV, ( FgGLuint _1, FgGLsizei _2, const FgGLshort * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribs4ubvNV, ( FgGLuint _1, FgGLsizei _2, const FgGLubyte * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
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
    FG_GL_VOID_FUNCTION( VertexAttribI1iEXT, ( FgGLuint _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI2iEXT, ( FgGLuint _1, FgGLint _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI3iEXT, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI4iEXT, ( FgGLuint _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI1uiEXT, ( FgGLuint _1, FgGLuint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI2uiEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI3uiEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI4uiEXT, ( FgGLuint _1, FgGLuint _2, FgGLuint _3, FgGLuint _4, FgGLuint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI1ivEXT, ( FgGLuint _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI2ivEXT, ( FgGLuint _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI3ivEXT, ( FgGLuint _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI4ivEXT, ( FgGLuint _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI1uivEXT, ( FgGLuint _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI2uivEXT, ( FgGLuint _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI3uivEXT, ( FgGLuint _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI4uivEXT, ( FgGLuint _1, const FgGLuint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI4bvEXT, ( FgGLuint _1, const FgGLbyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI4svEXT, ( FgGLuint _1, const FgGLshort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI4ubvEXT, ( FgGLuint _1, const FgGLubyte * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribI4usvEXT, ( FgGLuint _1, const FgGLushort * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( VertexAttribIPointerEXT, ( FgGLuint _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, const FgGLvoid * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribIivEXT, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVertexAttribIuivEXT, ( FgGLuint _1, FgGLenum _2, FgGLuint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_NV_video_capture */ \
    FG_GL_VOID_FUNCTION( BeginVideoCaptureNV, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( BindVideoCaptureStreamBufferNV, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLintptrARB _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( BindVideoCaptureStreamTextureNV, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLenum _4, FgGLuint _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( EndVideoCaptureNV, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVideoCaptureivNV, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVideoCaptureStreamivNV, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVideoCaptureStreamfvNV, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetVideoCaptureStreamdvNV, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLenum, VideoCaptureNV, ( FgGLuint _1, FgGLuint * _2, FgGLuint64EXT * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( VideoCaptureStreamParameterivNV, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, const FgGLint * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VideoCaptureStreamParameterfvNV, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( VideoCaptureStreamParameterdvNV, ( FgGLuint _1, FgGLuint _2, FgGLenum _3, const FgGLdouble * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
\
    /* GL_OML_interlace */ \
\
    /* GL_OML_resample */ \
\
    /* GL_OML_subsample */ \
\
    /* GL_PGI_misc_hints */ \
    FG_GL_VOID_FUNCTION( HintPGI, ( FgGLenum _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_PGI_vertex_hints */ \
\
    /* GL_REND_screen_coordinates */ \
\
    /* GL_S3_s3tc */ \
\
    /* GL_SGIS_detail_texture */ \
    FG_GL_VOID_FUNCTION( DetailTexFuncSGIS, ( FgGLenum _1, FgGLsizei _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetDetailTexFuncSGIS, ( FgGLenum _1, FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_SGIS_fog_function */ \
    FG_GL_VOID_FUNCTION( FogFuncSGIS, ( FgGLsizei _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetFogFuncSGIS, ( FgGLfloat * _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_SGIS_generate_mipmap */ \
\
    /* GL_SGIS_multisample */ \
    FG_GL_VOID_FUNCTION( SampleMaskSGIS, ( FgGLclampf _1, FgGLboolean _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( SamplePatternSGIS, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_SGIS_pixel_texture */ \
    FG_GL_VOID_FUNCTION( PixelTexGenParameteriSGIS, ( FgGLenum _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( PixelTexGenParameterivSGIS, ( FgGLenum _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( PixelTexGenParameterfSGIS, ( FgGLenum _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( PixelTexGenParameterfvSGIS, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPixelTexGenParameterivSGIS, ( FgGLenum _1, FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( GetPixelTexGenParameterfvSGIS, ( FgGLenum _1, FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_SGIS_point_line_texgen */ \
\
    /* GL_SGIS_point_parameters */ \
    FG_GL_VOID_FUNCTION( PointParameterfSGIS, ( FgGLenum _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( PointParameterfvSGIS, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_SGIS_sharpen_texture */ \
    FG_GL_VOID_FUNCTION( SharpenTexFuncSGIS, ( FgGLenum _1, FgGLsizei _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetSharpenTexFuncSGIS, ( FgGLenum _1, FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_SGIS_texture4D */ \
    FG_GL_VOID_FUNCTION( TexImage4DSGIS, ( FgGLenum _1, FgGLint _2, FgGLenum _3, FgGLsizei _4, FgGLsizei _5, FgGLsizei _6, FgGLsizei _7, FgGLint _8, FgGLenum _9, FgGLenum _10, const FgGLvoid * _11 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ) ) ) \
    FG_GL_VOID_FUNCTION( TexSubImage4DSGIS, ( FgGLenum _1, FgGLint _2, FgGLint _3, FgGLint _4, FgGLint _5, FgGLint _6, FgGLsizei _7, FgGLsizei _8, FgGLsizei _9, FgGLsizei _10, FgGLenum _11, FgGLenum _12, const FgGLvoid * _13 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ), FG_GL_ARG( _12 ), FG_GL_ARG( _13 ) ) ) \
\
    /* GL_SGIS_texture_border_clamp */ \
\
    /* GL_SGIS_texture_color_mask */ \
    FG_GL_VOID_FUNCTION( TextureColorMaskSGIS, ( FgGLboolean _1, FgGLboolean _2, FgGLboolean _3, FgGLboolean _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
\
    /* GL_SGIS_texture_edge_clamp */ \
\
    /* GL_SGIS_texture_filter4 */ \
    FG_GL_VOID_FUNCTION( GetTexFilterFuncSGIS, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexFilterFuncSGIS, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
\
    /* GL_SGIS_texture_lod */ \
\
    /* GL_SGIS_texture_select */ \
\
    /* GL_SGIX_async */ \
    FG_GL_VOID_FUNCTION( AsyncMarkerSGIX, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLint, FinishAsyncSGIX, ( FgGLuint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLint, PollAsyncSGIX, ( FgGLuint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLuint, GenAsyncMarkersSGIX, ( FgGLsizei _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( DeleteAsyncMarkersSGIX, ( FgGLuint _1, FgGLsizei _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLboolean, IsAsyncMarkerSGIX, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
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
    FG_GL_VOID_FUNCTION( FlushRasterSGIX, ( ), ( ) ) \
\
    /* GL_SGIX_fog_offset */ \
\
    /* GL_SGIX_fragment_lighting */ \
    FG_GL_VOID_FUNCTION( FragmentColorMaterialSGIX, ( FgGLenum _1, FgGLenum _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( FragmentLightfSGIX, ( FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( FragmentLightfvSGIX, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( FragmentLightiSGIX, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( FragmentLightivSGIX, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( FragmentLightModelfSGIX, ( FgGLenum _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( FragmentLightModelfvSGIX, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( FragmentLightModeliSGIX, ( FgGLenum _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( FragmentLightModelivSGIX, ( FgGLenum _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( FragmentMaterialfSGIX, ( FgGLenum _1, FgGLenum _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( FragmentMaterialfvSGIX, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( FragmentMaterialiSGIX, ( FgGLenum _1, FgGLenum _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( FragmentMaterialivSGIX, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetFragmentLightfvSGIX, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetFragmentLightivSGIX, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetFragmentMaterialfvSGIX, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetFragmentMaterialivSGIX, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( LightEnviSGIX, ( FgGLenum _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_SGIX_framezoom */ \
    FG_GL_VOID_FUNCTION( FrameZoomSGIX, ( FgGLint _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_SGIX_igloo_interface */ \
    FG_GL_VOID_FUNCTION( IglooInterfaceSGIX, ( FgGLenum _1, const FgGLvoid * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_SGIX_instruments */ \
    FG_GL_FUNCTION( 0, FgGLint, GetInstrumentsSGIX, ( ), ( ) ) \
    FG_GL_VOID_FUNCTION( InstrumentsBufferSGIX, ( FgGLsizei _1, FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_FUNCTION( 0, FgGLint, PollInstrumentsSGIX, ( FgGLint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ReadInstrumentsSGIX, ( FgGLint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( StartInstrumentsSGIX, ( ), ( ) ) \
    FG_GL_VOID_FUNCTION( StopInstrumentsSGIX, ( FgGLint _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_SGIX_interlace */ \
\
    /* GL_SGIX_ir_instrument1 */ \
\
    /* GL_SGIX_list_priority */ \
    FG_GL_VOID_FUNCTION( GetListParameterfvSGIX, ( FgGLuint _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetListParameterivSGIX, ( FgGLuint _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ListParameterfSGIX, ( FgGLuint _1, FgGLenum _2, FgGLfloat _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ListParameterfvSGIX, ( FgGLuint _1, FgGLenum _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ListParameteriSGIX, ( FgGLuint _1, FgGLenum _2, FgGLint _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ListParameterivSGIX, ( FgGLuint _1, FgGLenum _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_SGIX_pixel_texture */ \
    FG_GL_VOID_FUNCTION( PixelTexGenSGIX, ( FgGLenum _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_SGIX_pixel_tiles */ \
\
    /* GL_SGIX_polynomial_ffd */ \
    FG_GL_VOID_FUNCTION( DeformationMap3dSGIX, ( FgGLenum _1, FgGLdouble _2, FgGLdouble _3, FgGLint _4, FgGLint _5, FgGLdouble _6, FgGLdouble _7, FgGLint _8, FgGLint _9, FgGLdouble _10, FgGLdouble _11, FgGLint _12, FgGLint _13, const FgGLdouble * _14 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ), FG_GL_ARG( _12 ), FG_GL_ARG( _13 ), FG_GL_ARG( _14 ) ) ) \
    FG_GL_VOID_FUNCTION( DeformationMap3fSGIX, ( FgGLenum _1, FgGLfloat _2, FgGLfloat _3, FgGLint _4, FgGLint _5, FgGLfloat _6, FgGLfloat _7, FgGLint _8, FgGLint _9, FgGLfloat _10, FgGLfloat _11, FgGLint _12, FgGLint _13, const FgGLfloat * _14 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ), FG_GL_ARG( _12 ), FG_GL_ARG( _13 ), FG_GL_ARG( _14 ) ) ) \
    FG_GL_VOID_FUNCTION( DeformSGIX, ( FgGLbitfield _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( LoadIdentityDeformationMapSGIX, ( FgGLbitfield _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_SGIX_reference_plane */ \
    FG_GL_VOID_FUNCTION( ReferencePlaneSGIX, ( const FgGLdouble * _1 ), ( FG_GL_ARG( _1 ) ) ) \
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
    FG_GL_VOID_FUNCTION( SpriteParameterfSGIX, ( FgGLenum _1, FgGLfloat _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( SpriteParameterfvSGIX, ( FgGLenum _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( SpriteParameteriSGIX, ( FgGLenum _1, FgGLint _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( SpriteParameterivSGIX, ( FgGLenum _1, const FgGLint * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
\
    /* GL_SGIX_subsample */ \
\
    /* GL_SGIX_tag_sample_buffer */ \
    FG_GL_VOID_FUNCTION( TagSampleBufferSGIX, ( ), ( ) ) \
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
    FG_GL_VOID_FUNCTION( ColorTableSGI, ( FgGLenum _1, FgGLenum _2, FgGLsizei _3, FgGLenum _4, FgGLenum _5, const FgGLvoid * _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ColorTableParameterfvSGI, ( FgGLenum _1, FgGLenum _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ColorTableParameterivSGI, ( FgGLenum _1, FgGLenum _2, const FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( CopyColorTableSGI, ( FgGLenum _1, FgGLenum _2, FgGLint _3, FgGLint _4, FgGLsizei _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( GetColorTableSGI, ( FgGLenum _1, FgGLenum _2, FgGLenum _3, FgGLvoid * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( GetColorTableParameterfvSGI, ( FgGLenum _1, FgGLenum _2, FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( GetColorTableParameterivSGI, ( FgGLenum _1, FgGLenum _2, FgGLint * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_SGI_texture_color_table */ \
\
    /* GL_SUNX_constant_data */ \
    FG_GL_VOID_FUNCTION( FinishTextureSUNX, ( ), ( ) ) \
\
    /* GL_SUN_convolution_border_modes */ \
\
    /* GL_SUN_global_alpha */ \
    FG_GL_VOID_FUNCTION( GlobalAlphaFactorbSUN, ( FgGLbyte _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GlobalAlphaFactorsSUN, ( FgGLshort _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GlobalAlphaFactoriSUN, ( FgGLint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GlobalAlphaFactorfSUN, ( FgGLfloat _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GlobalAlphaFactordSUN, ( FgGLdouble _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GlobalAlphaFactorubSUN, ( FgGLubyte _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GlobalAlphaFactorusSUN, ( FgGLushort _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( GlobalAlphaFactoruiSUN, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
\
    /* GL_SUN_mesh_array */ \
    FG_GL_VOID_FUNCTION( DrawMeshArraysSUN, ( FgGLenum _1, FgGLint _2, FgGLsizei _3, FgGLsizei _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
\
    /* GL_SUN_slice_accum */ \
\
    /* GL_SUN_triangle_list */ \
    FG_GL_VOID_FUNCTION( ReplacementCodeuiSUN, ( FgGLuint _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ReplacementCodeusSUN, ( FgGLushort _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ReplacementCodeubSUN, ( FgGLubyte _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ReplacementCodeuivSUN, ( const FgGLuint * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ReplacementCodeusvSUN, ( const FgGLushort * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ReplacementCodeubvSUN, ( const FgGLubyte * _1 ), ( FG_GL_ARG( _1 ) ) ) \
    FG_GL_VOID_FUNCTION( ReplacementCodePointerSUN, ( FgGLenum _1, FgGLsizei _2, const FgGLvoid ** _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
\
    /* GL_SUN_vertex */ \
    FG_GL_VOID_FUNCTION( Color4ubVertex2fSUN, ( FgGLubyte _1, FgGLubyte _2, FgGLubyte _3, FgGLubyte _4, FgGLfloat _5, FgGLfloat _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4ubVertex2fvSUN, ( const FgGLubyte * _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4ubVertex3fSUN, ( FgGLubyte _1, FgGLubyte _2, FgGLubyte _3, FgGLubyte _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4ubVertex3fvSUN, ( const FgGLubyte * _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Color3fVertex3fSUN, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( Color3fVertex3fvSUN, ( const FgGLfloat * _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Normal3fVertex3fSUN, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( Normal3fVertex3fvSUN, ( const FgGLfloat * _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4fNormal3fVertex3fSUN, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9, FgGLfloat _10 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ) ) ) \
    FG_GL_VOID_FUNCTION( Color4fNormal3fVertex3fvSUN, ( const FgGLfloat * _1, const FgGLfloat * _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2fVertex3fSUN, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2fVertex3fvSUN, ( const FgGLfloat * _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord4fVertex4fSUN, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord4fVertex4fvSUN, ( const FgGLfloat * _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2fColor4ubVertex3fSUN, ( FgGLfloat _1, FgGLfloat _2, FgGLubyte _3, FgGLubyte _4, FgGLubyte _5, FgGLubyte _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2fColor4ubVertex3fvSUN, ( const FgGLfloat * _1, const FgGLubyte * _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2fColor3fVertex3fSUN, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2fColor3fVertex3fvSUN, ( const FgGLfloat * _1, const FgGLfloat * _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2fNormal3fVertex3fSUN, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2fNormal3fVertex3fvSUN, ( const FgGLfloat * _1, const FgGLfloat * _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2fColor4fNormal3fVertex3fSUN, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9, FgGLfloat _10, FgGLfloat _11, FgGLfloat _12 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ), FG_GL_ARG( _12 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord2fColor4fNormal3fVertex3fvSUN, ( const FgGLfloat * _1, const FgGLfloat * _2, const FgGLfloat * _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord4fColor4fNormal3fVertex4fSUN, ( FgGLfloat _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9, FgGLfloat _10, FgGLfloat _11, FgGLfloat _12, FgGLfloat _13, FgGLfloat _14, FgGLfloat _15 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ), FG_GL_ARG( _12 ), FG_GL_ARG( _13 ), FG_GL_ARG( _14 ), FG_GL_ARG( _15 ) ) ) \
    FG_GL_VOID_FUNCTION( TexCoord4fColor4fNormal3fVertex4fvSUN, ( const FgGLfloat * _1, const FgGLfloat * _2, const FgGLfloat * _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ReplacementCodeuiVertex3fSUN, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ReplacementCodeuiVertex3fvSUN, ( const FgGLuint * _1, const FgGLfloat * _2 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ) ) ) \
    FG_GL_VOID_FUNCTION( ReplacementCodeuiColor4ubVertex3fSUN, ( FgGLuint _1, FgGLubyte _2, FgGLubyte _3, FgGLubyte _4, FgGLubyte _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ) ) ) \
    FG_GL_VOID_FUNCTION( ReplacementCodeuiColor4ubVertex3fvSUN, ( const FgGLuint * _1, const FgGLubyte * _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ReplacementCodeuiColor3fVertex3fSUN, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( ReplacementCodeuiColor3fVertex3fvSUN, ( const FgGLuint * _1, const FgGLfloat * _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ReplacementCodeuiNormal3fVertex3fSUN, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ) ) ) \
    FG_GL_VOID_FUNCTION( ReplacementCodeuiNormal3fVertex3fvSUN, ( const FgGLuint * _1, const FgGLfloat * _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ReplacementCodeuiColor4fNormal3fVertex3fSUN, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9, FgGLfloat _10, FgGLfloat _11 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ) ) ) \
    FG_GL_VOID_FUNCTION( ReplacementCodeuiColor4fNormal3fVertex3fvSUN, ( const FgGLuint * _1, const FgGLfloat * _2, const FgGLfloat * _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ReplacementCodeuiTexCoord2fVertex3fSUN, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ) ) ) \
    FG_GL_VOID_FUNCTION( ReplacementCodeuiTexCoord2fVertex3fvSUN, ( const FgGLuint * _1, const FgGLfloat * _2, const FgGLfloat * _3 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ) ) ) \
    FG_GL_VOID_FUNCTION( ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ) ) ) \
    FG_GL_VOID_FUNCTION( ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN, ( const FgGLuint * _1, const FgGLfloat * _2, const FgGLfloat * _3, const FgGLfloat * _4 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ) ) ) \
    FG_GL_VOID_FUNCTION( ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN, ( FgGLuint _1, FgGLfloat _2, FgGLfloat _3, FgGLfloat _4, FgGLfloat _5, FgGLfloat _6, FgGLfloat _7, FgGLfloat _8, FgGLfloat _9, FgGLfloat _10, FgGLfloat _11, FgGLfloat _12, FgGLfloat _13 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ), FG_GL_ARG( _6 ), FG_GL_ARG( _7 ), FG_GL_ARG( _8 ), FG_GL_ARG( _9 ), FG_GL_ARG( _10 ), FG_GL_ARG( _11 ), FG_GL_ARG( _12 ), FG_GL_ARG( _13 ) ) ) \
    FG_GL_VOID_FUNCTION( ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN, ( const FgGLuint * _1, const FgGLfloat * _2, const FgGLfloat * _3, const FgGLfloat * _4, const FgGLfloat * _5 ), ( FG_GL_ARG( _1 ), FG_GL_ARG( _2 ), FG_GL_ARG( _3 ), FG_GL_ARG( _4 ), FG_GL_ARG( _5 ) ) ) \
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

#define FG_GL_VOID_FUNCTION( _name, _args, _argValues ) \
    FG_GL_FUNCTION( , void, _name, _args, _argValues )

#define FG_GL_FUNCTION GL_DECLARE_FUNCTION
    FG_GL_FUNCTIONS
#undef  FG_GL_FUNCTION

#undef  FG_GL_VOID_FUNCTION

#undef  GL_DECLARE_FUNCTION

#endif  // FG_GL_FUNCTIONS_H
