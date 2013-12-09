#ifndef FG_GL_FUNCTIONS_H
#define FG_GL_FUNCTIONS_H

#include "fg/gl/types.h"

#define FG_GL_FUNCTIONS \
    /* GL_VERSION_1_0 */ \
    FG_GL_FUNCTION_NUM( GetError, FgGLenum ) \
    FG_GL_FUNCTION_VOID( Begin, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( End ) \
    FG_GL_FUNCTION_VOID( EdgeFlag, , FgGLboolean ) \
    FG_GL_FUNCTION_VOID( EdgeFlagv, , const FgGLboolean * ) \
    FG_GL_FUNCTION_VOID( Vertex2s, , FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( Vertex2i, , FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Vertex2f, , FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Vertex2d, , FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Vertex3s, , FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( Vertex3i, , FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Vertex3f, , FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Vertex3d, , FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Vertex4s, , FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( Vertex4i, , FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Vertex4f, , FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Vertex4d, , FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Vertex2sv, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( Vertex2iv, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Vertex2fv, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Vertex2dv, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Vertex3sv, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( Vertex3iv, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Vertex3fv, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Vertex3dv, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Vertex4sv, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( Vertex4iv, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Vertex4fv, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Vertex4dv, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( TexCoord1s, , FgGLshort ) \
    FG_GL_FUNCTION_VOID( TexCoord1i, , FgGLint ) \
    FG_GL_FUNCTION_VOID( TexCoord1f, , FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexCoord1d, , FgGLdouble ) \
    FG_GL_FUNCTION_VOID( TexCoord2s, , FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( TexCoord2i, , FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( TexCoord2f, , FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexCoord2d, , FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( TexCoord3s, , FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( TexCoord3i, , FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( TexCoord3f, , FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexCoord3d, , FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( TexCoord4s, , FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( TexCoord4i, , FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( TexCoord4f, , FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexCoord4d, , FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( TexCoord1sv, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( TexCoord1iv, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TexCoord1fv, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexCoord1dv, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( TexCoord2sv, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( TexCoord2iv, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TexCoord2fv, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexCoord2dv, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( TexCoord3sv, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( TexCoord3iv, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TexCoord3fv, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexCoord3dv, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( TexCoord4sv, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( TexCoord4iv, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TexCoord4fv, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexCoord4dv, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Normal3b, , FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( Normal3s, , FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( Normal3i, , FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Normal3f, , FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Normal3d, , FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Normal3bv, , const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( Normal3sv, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( Normal3iv, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Normal3fv, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Normal3dv, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Color3b, , FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( Color3s, , FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( Color3i, , FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Color3f, , FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Color3d, , FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Color3ub, , FgGLubyte, FgGLubyte, FgGLubyte ) \
    FG_GL_FUNCTION_VOID( Color3us, , FgGLushort, FgGLushort, FgGLushort ) \
    FG_GL_FUNCTION_VOID( Color3ui, , FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Color4b, , FgGLbyte, FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( Color4s, , FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( Color4i, , FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Color4f, , FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Color4d, , FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Color4ub, , FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte ) \
    FG_GL_FUNCTION_VOID( Color4us, , FgGLushort, FgGLushort, FgGLushort, FgGLushort ) \
    FG_GL_FUNCTION_VOID( Color4ui, , FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Color3bv, , const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( Color3sv, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( Color3iv, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Color3fv, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Color3dv, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Color3ubv, , const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( Color3usv, , const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( Color3uiv, , const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( Color4bv, , const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( Color4sv, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( Color4iv, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Color4fv, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Color4dv, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Color4ubv, , const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( Color4usv, , const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( Color4uiv, , const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( Indexs, , FgGLshort ) \
    FG_GL_FUNCTION_VOID( Indexi, , FgGLint ) \
    FG_GL_FUNCTION_VOID( Indexf, , FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Indexd, , FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Indexsv, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( Indexiv, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Indexfv, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Indexdv, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Rects, , FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( Recti, , FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Rectf, , FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Rectd, , FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Rectsv, , const FgGLshort *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( Rectiv, , const FgGLint *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Rectfv, , const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Rectdv, , const FgGLdouble *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( DepthRange, , FgGLclampd, FgGLclampd ) \
    FG_GL_FUNCTION_VOID( Viewport, , FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( MatrixMode, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( LoadMatrixf, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( LoadMatrixd, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultMatrixf, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultMatrixd, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( LoadIdentity ) \
    FG_GL_FUNCTION_VOID( Rotatef, , FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Rotated, , FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Translatef, , FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Translated, , FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Scalef, , FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Scaled, , FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Frustum, , FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Ortho, , FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( PushMatrix ) \
    FG_GL_FUNCTION_VOID( PopMatrix ) \
    FG_GL_FUNCTION_VOID( Enable, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( Disable, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( TexGeni, , FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( TexGenf, , FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexGend, , FgGLenum, FgGLenum, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( TexGeniv, , FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TexGenfv, , FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexGendv, , FgGLenum, FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ClipPlane, , FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( RasterPos2s, , FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( RasterPos2i, , FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( RasterPos2f, , FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( RasterPos2d, , FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( RasterPos2sv, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( RasterPos2iv, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( RasterPos2fv, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( RasterPos2dv, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( RasterPos3s, , FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( RasterPos3i, , FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( RasterPos3f, , FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( RasterPos3d, , FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( RasterPos3sv, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( RasterPos3iv, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( RasterPos3fv, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( RasterPos3dv, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( RasterPos4s, , FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( RasterPos4i, , FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( RasterPos4f, , FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( RasterPos4d, , FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( RasterPos4sv, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( RasterPos4iv, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( RasterPos4fv, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( RasterPos4dv, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( FrontFace, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( Materiali, , FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( Materialf, , FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Materialiv, , FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Materialfv, , FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Lighti, , FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( Lightf, , FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Lightiv, , FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Lightfv, , FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( LightModeli, , FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( LightModelf, , FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( LightModeliv, , FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( LightModelfv, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ColorMaterial, , FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( ShadeModel, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( PointSize, , FgGLfloat ) \
    FG_GL_FUNCTION_VOID( LineWidth, , FgGLfloat ) \
    FG_GL_FUNCTION_VOID( LineStipple, , FgGLint, FgGLushort ) \
    FG_GL_FUNCTION_VOID( CullFace, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( PolygonStipple, , const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( PolygonMode, , FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( PixelStorei, , FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( PixelStoref, , FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( PixelTransferi, , FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( PixelTransferf, , FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( PixelMapuiv, , FgGLenum, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( PixelMapusv, , FgGLenum, FgGLsizei, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( PixelMapfv, , FgGLenum, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( DrawPixels, , FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( PixelZoom, , FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Bitmap, , FgGLsizei, FgGLsizei, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( TexImage1D, , FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TexImage2D, , FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TexParameteri, , FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( TexParameterf, , FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexParameteriv, , FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TexParameterfv, , FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexEnvi, , FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( TexEnvf, , FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexEnviv, , FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TexEnvfv, , FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Fogi, , FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( Fogf, , FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Fogiv, , FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Fogfv, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Scissor, , FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( AlphaFunc, , FgGLenum, FgGLclampf ) \
    FG_GL_FUNCTION_VOID( StencilFunc, , FgGLenum, FgGLint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( StencilOp, , FgGLenum, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( DepthFunc, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( BlendFunc, , FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( LogicOp, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( DrawBuffer, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( IndexMask, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( ColorMask, , FgGLboolean, FgGLboolean, FgGLboolean, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( DepthMask, , FgGLboolean ) \
    FG_GL_FUNCTION_VOID( StencilMask, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( Clear, , FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( ClearColor, , FgGLclampf, FgGLclampf, FgGLclampf, FgGLclampf ) \
    FG_GL_FUNCTION_VOID( ClearIndex, , FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ClearDepth, , FgGLclampd ) \
    FG_GL_FUNCTION_VOID( ClearStencil, , FgGLint ) \
    FG_GL_FUNCTION_VOID( ClearAccum, , FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Accum, , FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ReadPixels, , FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ReadBuffer, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( CopyPixels, , FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum ) \
    FG_GL_FUNCTION_VOID( Map1f, , FgGLenum, FgGLfloat, FgGLfloat, FgGLint, FgGLint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Map1d, , FgGLenum, FgGLdouble, FgGLdouble, FgGLint, FgGLint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Map2f, , FgGLenum, FgGLfloat, FgGLfloat, FgGLint, FgGLint, FgGLfloat, FgGLfloat, FgGLint, FgGLint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Map2d, , FgGLenum, FgGLdouble, FgGLdouble, FgGLint, FgGLint, FgGLdouble, FgGLdouble, FgGLint, FgGLint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( EvalCoord1f, , FgGLfloat ) \
    FG_GL_FUNCTION_VOID( EvalCoord1d, , FgGLdouble ) \
    FG_GL_FUNCTION_VOID( EvalCoord2f, , FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( EvalCoord2d, , FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( EvalCoord1fv, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( EvalCoord1dv, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( EvalCoord2fv, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( EvalCoord2dv, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MapGrid1f, , FgGLint, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MapGrid1d, , FgGLint, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MapGrid2f, , FgGLint, FgGLfloat, FgGLfloat, FgGLint, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MapGrid2d, , FgGLint, FgGLdouble, FgGLdouble, FgGLint, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( EvalMesh1, , FgGLenum, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( EvalMesh2, , FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( EvalPoint1, , FgGLint ) \
    FG_GL_FUNCTION_VOID( EvalPoint2, , FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( InitNames ) \
    FG_GL_FUNCTION_VOID( PopName ) \
    FG_GL_FUNCTION_VOID( PushName, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( LoadName, , FgGLuint ) \
    FG_GL_FUNCTION_NUM( RenderMode, FgGLint, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( SelectBuffer, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( FeedbackBuffer, , FgGLsizei, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( PassThrough, , FgGLfloat ) \
    FG_GL_FUNCTION_VOID( NewList, , FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( EndList ) \
    FG_GL_FUNCTION_VOID( CallList, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( CallLists, , FgGLsizei, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ListBase, , FgGLuint ) \
    FG_GL_FUNCTION_NUM( GenLists, FgGLuint, , FgGLsizei ) \
    FG_GL_FUNCTION_NUM( IsList, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteLists, , FgGLuint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( Flush ) \
    FG_GL_FUNCTION_VOID( Finish ) \
    FG_GL_FUNCTION_VOID( Hint, , FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetBooleanv, , FgGLenum, FgGLboolean * ) \
    FG_GL_FUNCTION_VOID( GetIntegerv, , FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetFloatv, , FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetDoublev, , FgGLenum, FgGLdouble * ) \
    FG_GL_FUNCTION_NUM( IsEnabled, FgGLboolean, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetClipPlane, , FgGLenum, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetLightiv, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetLightfv, , FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetMaterialiv, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetMaterialfv, , FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetTexEnviv, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetTexEnvfv, , FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetTexGeniv, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetTexGenfv, , FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetTexParameteriv, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetTexParameterfv, , FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetTexLevelParameteriv, , FgGLenum, FgGLint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetTexLevelParameterfv, , FgGLenum, FgGLint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetPixelMapuiv, , FgGLenum, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetPixelMapusv, , FgGLenum, FgGLushort * ) \
    FG_GL_FUNCTION_VOID( GetPixelMapfv, , FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetMapiv, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetMapfv, , FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetMapdv, , FgGLenum, FgGLenum, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetTexImage, , FgGLenum, FgGLint, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetPolygonStipple, , FgGLubyte * ) \
    FG_GL_FUNCTION_PTR( GetString, const FgGLubyte *, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( PushAttrib, , FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( PopAttrib ) \
\
    /* GL_VERSION_1_1 */ \
    FG_GL_FUNCTION_VOID( Indexub, , FgGLubyte ) \
    FG_GL_FUNCTION_VOID( Indexubv, , const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( EdgeFlagPointer, , FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TexCoordPointer, , FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ColorPointer, , FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( IndexPointer, , FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( NormalPointer, , FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( VertexPointer, , FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( EnableClientState, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( DisableClientState, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( ArrayElement, , FgGLint ) \
    FG_GL_FUNCTION_VOID( DrawArrays, , FgGLenum, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( DrawElements, , FgGLenum, FgGLsizei, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( InterleavedArrays, , FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( PolygonOffset, , FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( CopyTexImage1D, , FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLint ) \
    FG_GL_FUNCTION_VOID( CopyTexImage2D, , FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLint ) \
    FG_GL_FUNCTION_VOID( TexSubImage1D, , FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TexSubImage2D, , FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CopyTexSubImage1D, , FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( CopyTexSubImage2D, , FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( BindTexture, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteTextures, , FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenTextures, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( AreTexturesResident, FgGLboolean, , FgGLsizei, const FgGLuint *, FgGLboolean * ) \
    FG_GL_FUNCTION_VOID( PrioritizeTextures, , FgGLsizei, const FgGLuint *, const FgGLclampf * ) \
    FG_GL_FUNCTION_NUM( IsTexture, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetPointerv, , FgGLenum, FgGLvoid ** ) \
    FG_GL_FUNCTION_VOID( PushClientAttrib, , FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( PopClientAttrib ) \
\
    /* GL_VERSION_1_2 */ \
    FG_GL_FUNCTION_VOID( DrawRangeElements, , FgGLenum, FgGLuint, FgGLuint, FgGLsizei, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TexImage3D, , FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TexSubImage3D, , FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CopyTexSubImage3D, , FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
\
    /* GL_VERSION_1_3 */ \
    FG_GL_FUNCTION_VOID( ActiveTexture, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( SampleCoverage, , FgGLfloat, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( CompressedTexImage3D, , FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTexImage2D, , FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTexImage1D, , FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTexSubImage3D, , FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTexSubImage2D, , FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTexSubImage1D, , FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetCompressedTexImage, , FgGLenum, FgGLint, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ClientActiveTexture, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1d, , FgGLenum, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1dv, , FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1f, , FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1fv, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1i, , FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1iv, , FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1s, , FgGLenum, FgGLshort ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1sv, , FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2d, , FgGLenum, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2dv, , FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2f, , FgGLenum, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2fv, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2i, , FgGLenum, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2iv, , FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2s, , FgGLenum, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2sv, , FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3d, , FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3dv, , FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3f, , FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3fv, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3i, , FgGLenum, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3iv, , FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3s, , FgGLenum, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3sv, , FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4d, , FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4dv, , FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4f, , FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4fv, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4i, , FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4iv, , FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4s, , FgGLenum, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4sv, , FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( LoadTransposeMatrixf, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( LoadTransposeMatrixd, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultTransposeMatrixf, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultTransposeMatrixd, , const FgGLdouble * ) \
\
    /* GL_VERSION_1_4 */ \
    FG_GL_FUNCTION_VOID( BlendFuncSeparate, , FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MultiDrawArrays, , FgGLenum, const FgGLint *, const FgGLsizei *, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( MultiDrawElements, , FgGLenum, const FgGLsizei *, FgGLenum, const FgGLvoid *const*, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( PointParameterf, , FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( PointParameterfv, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( PointParameteri, , FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( PointParameteriv, , FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( FogCoordf, , FgGLfloat ) \
    FG_GL_FUNCTION_VOID( FogCoordfv, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( FogCoordd, , FgGLdouble ) \
    FG_GL_FUNCTION_VOID( FogCoorddv, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( FogCoordPointer, , FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3b, , FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3bv, , const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3d, , FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3dv, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3f, , FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3fv, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3i, , FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3iv, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3s, , FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3sv, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3ub, , FgGLubyte, FgGLubyte, FgGLubyte ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3ubv, , const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3ui, , FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3uiv, , const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3us, , FgGLushort, FgGLushort, FgGLushort ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3usv, , const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( SecondaryColorPointer, , FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( WindowPos2d, , FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( WindowPos2dv, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( WindowPos2f, , FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( WindowPos2fv, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( WindowPos2i, , FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( WindowPos2iv, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( WindowPos2s, , FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( WindowPos2sv, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( WindowPos3d, , FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( WindowPos3dv, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( WindowPos3f, , FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( WindowPos3fv, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( WindowPos3i, , FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( WindowPos3iv, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( WindowPos3s, , FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( WindowPos3sv, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( BlendColor, , FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( BlendEquation, , FgGLenum ) \
\
    /* GL_VERSION_1_5 */ \
    FG_GL_FUNCTION_VOID( GenQueries, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( DeleteQueries, , FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsQuery, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( BeginQuery, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( EndQuery, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetQueryiv, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetQueryObjectiv, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetQueryObjectuiv, , FgGLuint, FgGLenum, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( BindBuffer, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteBuffers, , FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenBuffers, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsBuffer, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( BufferData, , FgGLenum, FgGLsizeiptr, const FgGLvoid *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BufferSubData, , FgGLenum, FgGLintptr, FgGLsizeiptr, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetBufferSubData, , FgGLenum, FgGLintptr, FgGLsizeiptr, FgGLvoid * ) \
    FG_GL_FUNCTION_PTR( MapBuffer, void *, , FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_NUM( UnmapBuffer, FgGLboolean, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetBufferParameteriv, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetBufferPointerv, , FgGLenum, FgGLenum, FgGLvoid ** ) \
\
    /* GL_VERSION_2_0 */ \
    FG_GL_FUNCTION_VOID( BlendEquationSeparate, , FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( DrawBuffers, , FgGLsizei, const FgGLenum * ) \
    FG_GL_FUNCTION_VOID( StencilOpSeparate, , FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( StencilFuncSeparate, , FgGLenum, FgGLenum, FgGLint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( StencilMaskSeparate, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( AttachShader, , FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( BindAttribLocation, , FgGLuint, FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( CompileShader, , FgGLuint ) \
    FG_GL_FUNCTION_NUM( CreateProgram, FgGLuint ) \
    FG_GL_FUNCTION_NUM( CreateShader, FgGLuint, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( DeleteProgram, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteShader, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( DetachShader, , FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DisableVertexAttribArray, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( EnableVertexAttribArray, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetActiveAttrib, , FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLint *, FgGLenum *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetActiveUniform, , FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLint *, FgGLenum *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetAttachedShaders, , FgGLuint, FgGLsizei, FgGLsizei *, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( GetAttribLocation, FgGLint, , FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetProgramiv, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetProgramInfoLog, , FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetShaderiv, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetShaderInfoLog, , FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetShaderSource, , FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_NUM( GetUniformLocation, FgGLint, , FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetUniformfv, , FgGLuint, FgGLint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetUniformiv, , FgGLuint, FgGLint, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribdv, , FgGLuint, FgGLenum, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribfv, , FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribiv, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribPointerv, , FgGLuint, FgGLenum, FgGLvoid ** ) \
    FG_GL_FUNCTION_NUM( IsProgram, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_NUM( IsShader, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( LinkProgram, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( ShaderSource, , FgGLuint, FgGLsizei, const FgGLchar *const*, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( UseProgram, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( Uniform1f, , FgGLint, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Uniform2f, , FgGLint, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Uniform3f, , FgGLint, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Uniform4f, , FgGLint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Uniform1i, , FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Uniform2i, , FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Uniform3i, , FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Uniform4i, , FgGLint, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Uniform1fv, , FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Uniform2fv, , FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Uniform3fv, , FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Uniform4fv, , FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Uniform1iv, , FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Uniform2iv, , FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Uniform3iv, , FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Uniform4iv, , FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix2fv, , FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix3fv, , FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix4fv, , FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ValidateProgram, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1d, , FgGLuint, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1dv, , FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1f, , FgGLuint, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1fv, , FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1s, , FgGLuint, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1sv, , FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2d, , FgGLuint, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2dv, , FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2f, , FgGLuint, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2fv, , FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2s, , FgGLuint, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2sv, , FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3d, , FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3dv, , FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3f, , FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3fv, , FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3s, , FgGLuint, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3sv, , FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4Nbv, , FgGLuint, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4Niv, , FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4Nsv, , FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4Nub, , FgGLuint, FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4Nubv, , FgGLuint, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4Nuiv, , FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4Nusv, , FgGLuint, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4bv, , FgGLuint, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4d, , FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4dv, , FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4f, , FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4fv, , FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4iv, , FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4s, , FgGLuint, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4sv, , FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4ubv, , FgGLuint, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4uiv, , FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4usv, , FgGLuint, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( VertexAttribPointer, , FgGLuint, FgGLint, FgGLenum, FgGLboolean, FgGLsizei, const FgGLvoid * ) \
\
    /* GL_VERSION_2_1 */ \
    FG_GL_FUNCTION_VOID( UniformMatrix2x3fv, , FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix3x2fv, , FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix2x4fv, , FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix4x2fv, , FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix3x4fv, , FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix4x3fv, , FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
\
    /* GL_VERSION_3_0 */ \
    FG_GL_FUNCTION_VOID( ColorMaski, , FgGLuint, FgGLboolean, FgGLboolean, FgGLboolean, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( GetBooleani_v, , FgGLenum, FgGLuint, FgGLboolean * ) \
    FG_GL_FUNCTION_VOID( GetIntegeri_v, , FgGLenum, FgGLuint, FgGLint * ) \
    FG_GL_FUNCTION_VOID( Enablei, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Disablei, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_NUM( IsEnabledi, FgGLboolean, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( BeginTransformFeedback, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( EndTransformFeedback ) \
    FG_GL_FUNCTION_VOID( BindBufferRange, , FgGLenum, FgGLuint, FgGLuint, FgGLintptr, FgGLsizeiptr ) \
    FG_GL_FUNCTION_VOID( BindBufferBase, , FgGLenum, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( TransformFeedbackVaryings, , FgGLuint, FgGLsizei, const FgGLchar *const*, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetTransformFeedbackVarying, , FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLsizei *, FgGLenum *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( ClampColor, , FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BeginConditionalRender, , FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( EndConditionalRender ) \
    FG_GL_FUNCTION_VOID( VertexAttribIPointer, , FgGLuint, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribIiv, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribIuiv, , FgGLuint, FgGLenum, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI1i, , FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2i, , FgGLuint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3i, , FgGLuint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4i, , FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI1ui, , FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2ui, , FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3ui, , FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4ui, , FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI1iv, , FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2iv, , FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3iv, , FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4iv, , FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI1uiv, , FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2uiv, , FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3uiv, , FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4uiv, , FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4bv, , FgGLuint, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4sv, , FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4ubv, , FgGLuint, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4usv, , FgGLuint, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( GetUniformuiv, , FgGLuint, FgGLint, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( BindFragDataLocation, , FgGLuint, FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_NUM( GetFragDataLocation, FgGLint, , FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( Uniform1ui, , FgGLint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Uniform2ui, , FgGLint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Uniform3ui, , FgGLint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Uniform4ui, , FgGLint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Uniform1uiv, , FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( Uniform2uiv, , FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( Uniform3uiv, , FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( Uniform4uiv, , FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( TexParameterIiv, , FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TexParameterIuiv, , FgGLenum, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetTexParameterIiv, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetTexParameterIuiv, , FgGLenum, FgGLenum, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ClearBufferiv, , FgGLenum, FgGLint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ClearBufferuiv, , FgGLenum, FgGLint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ClearBufferfv, , FgGLenum, FgGLint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ClearBufferfi, , FgGLenum, FgGLint, FgGLfloat, FgGLint ) \
    FG_GL_FUNCTION_PTR( GetStringi, const FgGLubyte *, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_NUM( IsRenderbuffer, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( BindRenderbuffer, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteRenderbuffers, , FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenRenderbuffers, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( RenderbufferStorage, , FgGLenum, FgGLenum, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetRenderbufferParameteriv, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_NUM( IsFramebuffer, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( BindFramebuffer, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteFramebuffers, , FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenFramebuffers, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( CheckFramebufferStatus, FgGLenum, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( FramebufferTexture1D, , FgGLenum, FgGLenum, FgGLenum, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferTexture2D, , FgGLenum, FgGLenum, FgGLenum, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferTexture3D, , FgGLenum, FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferRenderbuffer, , FgGLenum, FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetFramebufferAttachmentParameteriv, , FgGLenum, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GenerateMipmap, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( BlitFramebuffer, , FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLbitfield, FgGLenum ) \
    FG_GL_FUNCTION_VOID( RenderbufferStorageMultisample, , FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( FramebufferTextureLayer, , FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_PTR( MapBufferRange, void *, , FgGLenum, FgGLintptr, FgGLsizeiptr, FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( FlushMappedBufferRange, , FgGLenum, FgGLintptr, FgGLsizeiptr ) \
    FG_GL_FUNCTION_VOID( BindVertexArray, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteVertexArrays, , FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenVertexArrays, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsVertexArray, FgGLboolean, , FgGLuint ) \
\
    /* GL_VERSION_3_1 */ \
    FG_GL_FUNCTION_VOID( DrawArraysInstanced, , FgGLenum, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( DrawElementsInstanced, , FgGLenum, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( TexBuffer, , FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( PrimitiveRestartIndex, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( CopyBufferSubData, , FgGLenum, FgGLenum, FgGLintptr, FgGLintptr, FgGLsizeiptr ) \
    FG_GL_FUNCTION_VOID( GetUniformIndices, , FgGLuint, FgGLsizei, const FgGLchar *const*, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetActiveUniformsiv, , FgGLuint, FgGLsizei, const FgGLuint *, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetActiveUniformName, , FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_NUM( GetUniformBlockIndex, FgGLuint, , FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetActiveUniformBlockiv, , FgGLuint, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetActiveUniformBlockName, , FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( UniformBlockBinding, , FgGLuint, FgGLuint, FgGLuint ) \
\
    /* GL_VERSION_3_2 */ \
    FG_GL_FUNCTION_VOID( DrawElementsBaseVertex, , FgGLenum, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLint ) \
    FG_GL_FUNCTION_VOID( DrawRangeElementsBaseVertex, , FgGLenum, FgGLuint, FgGLuint, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLint ) \
    FG_GL_FUNCTION_VOID( DrawElementsInstancedBaseVertex, , FgGLenum, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLsizei, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiDrawElementsBaseVertex, , FgGLenum, const FgGLsizei *, FgGLenum, const FgGLvoid *const*, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProvokingVertex, , FgGLenum ) \
    FG_GL_FUNCTION_PTR( FenceSync, FgGLsync, , FgGLenum, FgGLbitfield ) \
    FG_GL_FUNCTION_NUM( IsSync, FgGLboolean, , FgGLsync ) \
    FG_GL_FUNCTION_VOID( DeleteSync, , FgGLsync ) \
    FG_GL_FUNCTION_NUM( ClientWaitSync, FgGLenum, , FgGLsync, FgGLbitfield, FgGLuint64 ) \
    FG_GL_FUNCTION_VOID( WaitSync, , FgGLsync, FgGLbitfield, FgGLuint64 ) \
    FG_GL_FUNCTION_VOID( GetInteger64v, , FgGLenum, FgGLint64 * ) \
    FG_GL_FUNCTION_VOID( GetSynciv, , FgGLsync, FgGLenum, FgGLsizei, FgGLsizei *, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetInteger64i_v, , FgGLenum, FgGLuint, FgGLint64 * ) \
    FG_GL_FUNCTION_VOID( GetBufferParameteri64v, , FgGLenum, FgGLenum, FgGLint64 * ) \
    FG_GL_FUNCTION_VOID( FramebufferTexture, , FgGLenum, FgGLenum, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( TexImage2DMultisample, , FgGLenum, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( TexImage3DMultisample, , FgGLenum, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( GetMultisamplefv, , FgGLenum, FgGLuint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( SampleMaski, , FgGLuint, FgGLbitfield ) \
\
    /* GL_VERSION_3_3 */ \
    FG_GL_FUNCTION_VOID( BindFragDataLocationIndexed, , FgGLuint, FgGLuint, FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_NUM( GetFragDataIndex, FgGLint, , FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GenSamplers, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( DeleteSamplers, , FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsSampler, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( BindSampler, , FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( SamplerParameteri, , FgGLuint, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( SamplerParameteriv, , FgGLuint, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( SamplerParameterf, , FgGLuint, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( SamplerParameterfv, , FgGLuint, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( SamplerParameterIiv, , FgGLuint, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( SamplerParameterIuiv, , FgGLuint, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetSamplerParameteriv, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetSamplerParameterIiv, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetSamplerParameterfv, , FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetSamplerParameterIuiv, , FgGLuint, FgGLenum, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( QueryCounter, , FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetQueryObjecti64v, , FgGLuint, FgGLenum, FgGLint64 * ) \
    FG_GL_FUNCTION_VOID( GetQueryObjectui64v, , FgGLuint, FgGLenum, FgGLuint64 * ) \
    FG_GL_FUNCTION_VOID( VertexAttribDivisor, , FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribP1ui, , FgGLuint, FgGLenum, FgGLboolean, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribP1uiv, , FgGLuint, FgGLenum, FgGLboolean, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribP2ui, , FgGLuint, FgGLenum, FgGLboolean, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribP2uiv, , FgGLuint, FgGLenum, FgGLboolean, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribP3ui, , FgGLuint, FgGLenum, FgGLboolean, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribP3uiv, , FgGLuint, FgGLenum, FgGLboolean, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribP4ui, , FgGLuint, FgGLenum, FgGLboolean, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribP4uiv, , FgGLuint, FgGLenum, FgGLboolean, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexP2ui, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexP2uiv, , FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexP3ui, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexP3uiv, , FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexP4ui, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexP4uiv, , FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( TexCoordP1ui, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( TexCoordP1uiv, , FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( TexCoordP2ui, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( TexCoordP2uiv, , FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( TexCoordP3ui, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( TexCoordP3uiv, , FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( TexCoordP4ui, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( TexCoordP4uiv, , FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP1ui, , FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP1uiv, , FgGLenum, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP2ui, , FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP2uiv, , FgGLenum, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP3ui, , FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP3uiv, , FgGLenum, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP4ui, , FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP4uiv, , FgGLenum, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( NormalP3ui, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( NormalP3uiv, , FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ColorP3ui, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ColorP3uiv, , FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ColorP4ui, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ColorP4uiv, , FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( SecondaryColorP3ui, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( SecondaryColorP3uiv, , FgGLenum, const FgGLuint * ) \
\
    /* GL_VERSION_4_0 */ \
    FG_GL_FUNCTION_VOID( MinSampleShading, , FgGLfloat ) \
    FG_GL_FUNCTION_VOID( BlendEquationi, , FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BlendEquationSeparatei, , FgGLuint, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BlendFunci, , FgGLuint, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BlendFuncSeparatei, , FgGLuint, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( DrawArraysIndirect, , FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( DrawElementsIndirect, , FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( Uniform1d, , FgGLint, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Uniform2d, , FgGLint, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Uniform3d, , FgGLint, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Uniform4d, , FgGLint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Uniform1dv, , FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Uniform2dv, , FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Uniform3dv, , FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Uniform4dv, , FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix2dv, , FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix3dv, , FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix4dv, , FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix2x3dv, , FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix2x4dv, , FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix3x2dv, , FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix3x4dv, , FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix4x2dv, , FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix4x3dv, , FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetUniformdv, , FgGLuint, FgGLint, FgGLdouble * ) \
    FG_GL_FUNCTION_NUM( GetSubroutineUniformLocation, FgGLint, , FgGLuint, FgGLenum, const FgGLchar * ) \
    FG_GL_FUNCTION_NUM( GetSubroutineIndex, FgGLuint, , FgGLuint, FgGLenum, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetActiveSubroutineUniformiv, , FgGLuint, FgGLenum, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetActiveSubroutineUniformName, , FgGLuint, FgGLenum, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetActiveSubroutineName, , FgGLuint, FgGLenum, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( UniformSubroutinesuiv, , FgGLenum, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetUniformSubroutineuiv, , FgGLenum, FgGLint, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetProgramStageiv, , FgGLuint, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( PatchParameteri, , FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( PatchParameterfv, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( BindTransformFeedback, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteTransformFeedbacks, , FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenTransformFeedbacks, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsTransformFeedback, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( PauseTransformFeedback ) \
    FG_GL_FUNCTION_VOID( ResumeTransformFeedback ) \
    FG_GL_FUNCTION_VOID( DrawTransformFeedback, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DrawTransformFeedbackStream, , FgGLenum, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( BeginQueryIndexed, , FgGLenum, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( EndQueryIndexed, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetQueryIndexediv, , FgGLenum, FgGLuint, FgGLenum, FgGLint * ) \
\
    /* GL_VERSION_4_1 */ \
    FG_GL_FUNCTION_VOID( ReleaseShaderCompiler ) \
    FG_GL_FUNCTION_VOID( ShaderBinary, , FgGLsizei, const FgGLuint *, FgGLenum, const FgGLvoid *, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetShaderPrecisionFormat, , FgGLenum, FgGLenum, FgGLint *, FgGLint * ) \
    FG_GL_FUNCTION_VOID( DepthRangef, , FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ClearDepthf, , FgGLfloat ) \
    FG_GL_FUNCTION_VOID( GetProgramBinary, , FgGLuint, FgGLsizei, FgGLsizei *, FgGLenum *, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ProgramBinary, , FgGLuint, FgGLenum, const FgGLvoid *, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( ProgramParameteri, , FgGLuint, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( UseProgramStages, , FgGLuint, FgGLbitfield, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ActiveShaderProgram, , FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_NUM( CreateShaderProgramv, FgGLuint, , FgGLenum, FgGLsizei, const FgGLchar *const* ) \
    FG_GL_FUNCTION_VOID( BindProgramPipeline, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteProgramPipelines, , FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenProgramPipelines, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsProgramPipeline, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetProgramPipelineiv, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1i, , FgGLuint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1iv, , FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1f, , FgGLuint, FgGLint, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1fv, , FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1d, , FgGLuint, FgGLint, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1dv, , FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1ui, , FgGLuint, FgGLint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1uiv, , FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2i, , FgGLuint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2iv, , FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2f, , FgGLuint, FgGLint, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2fv, , FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2d, , FgGLuint, FgGLint, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2dv, , FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2ui, , FgGLuint, FgGLint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2uiv, , FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3i, , FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3iv, , FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3f, , FgGLuint, FgGLint, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3fv, , FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3d, , FgGLuint, FgGLint, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3dv, , FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3ui, , FgGLuint, FgGLint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3uiv, , FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4i, , FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4iv, , FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4f, , FgGLuint, FgGLint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4fv, , FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4d, , FgGLuint, FgGLint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4dv, , FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4ui, , FgGLuint, FgGLint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4uiv, , FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2fv, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3fv, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4fv, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2dv, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3dv, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4dv, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x3fv, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x2fv, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x4fv, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x2fv, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x4fv, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x3fv, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x3dv, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x2dv, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x4dv, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x2dv, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x4dv, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x3dv, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ValidateProgramPipeline, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetProgramPipelineInfoLog, , FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1d, , FgGLuint, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2d, , FgGLuint, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3d, , FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4d, , FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1dv, , FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2dv, , FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3dv, , FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4dv, , FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribLPointer, , FgGLuint, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribLdv, , FgGLuint, FgGLenum, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ViewportArrayv, , FgGLuint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ViewportIndexedf, , FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ViewportIndexedfv, , FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ScissorArrayv, , FgGLuint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ScissorIndexed, , FgGLuint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( ScissorIndexedv, , FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( DepthRangeArrayv, , FgGLuint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( DepthRangeIndexed, , FgGLuint, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( GetFloati_v, , FgGLenum, FgGLuint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetDoublei_v, , FgGLenum, FgGLuint, FgGLdouble * ) \
\
    /* GL_VERSION_4_2 */ \
    FG_GL_FUNCTION_VOID( DrawArraysInstancedBaseInstance, , FgGLenum, FgGLint, FgGLsizei, FgGLsizei, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DrawElementsInstancedBaseInstance, , FgGLenum, FgGLsizei, FgGLenum, const void *, FgGLsizei, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DrawElementsInstancedBaseVertexBaseInstance, , FgGLenum, FgGLsizei, FgGLenum, const void *, FgGLsizei, FgGLint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetInternalformativ, , FgGLenum, FgGLenum, FgGLenum, FgGLsizei, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetActiveAtomicCounterBufferiv, , FgGLuint, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( BindImageTexture, , FgGLuint, FgGLuint, FgGLint, FgGLboolean, FgGLint, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MemoryBarrier, , FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( TexStorage1D, , FgGLenum, FgGLsizei, FgGLenum, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( TexStorage2D, , FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( TexStorage3D, , FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( DrawTransformFeedbackInstanced, , FgGLenum, FgGLuint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( DrawTransformFeedbackStreamInstanced, , FgGLenum, FgGLuint, FgGLuint, FgGLsizei ) \
\
    /* GL_VERSION_4_3 */ \
    FG_GL_FUNCTION_VOID( ClearBufferData, , FgGLenum, FgGLenum, FgGLenum, FgGLenum, const void * ) \
    FG_GL_FUNCTION_VOID( ClearBufferSubData, , FgGLenum, FgGLenum, FgGLintptr, FgGLsizeiptr, FgGLenum, FgGLenum, const void * ) \
    FG_GL_FUNCTION_VOID( DispatchCompute, , FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DispatchComputeIndirect, , FgGLintptr ) \
    FG_GL_FUNCTION_VOID( CopyImageSubData, , FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( FramebufferParameteri, , FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( GetFramebufferParameteriv, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetInternalformati64v, , FgGLenum, FgGLenum, FgGLenum, FgGLsizei, FgGLint64 * ) \
    FG_GL_FUNCTION_VOID( InvalidateTexSubImage, , FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( InvalidateTexImage, , FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( InvalidateBufferSubData, , FgGLuint, FgGLintptr, FgGLsizeiptr ) \
    FG_GL_FUNCTION_VOID( InvalidateBufferData, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( InvalidateFramebuffer, , FgGLenum, FgGLsizei, const FgGLenum * ) \
    FG_GL_FUNCTION_VOID( InvalidateSubFramebuffer, , FgGLenum, FgGLsizei, const FgGLenum *, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( MultiDrawArraysIndirect, , FgGLenum, const void *, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( MultiDrawElementsIndirect, , FgGLenum, FgGLenum, const void *, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetProgramInterfaceiv, , FgGLuint, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_NUM( GetProgramResourceIndex, FgGLuint, , FgGLuint, FgGLenum, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetProgramResourceName, , FgGLuint, FgGLenum, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetProgramResourceiv, , FgGLuint, FgGLenum, FgGLuint, FgGLsizei, const FgGLenum *, FgGLsizei, FgGLsizei *, FgGLint * ) \
    FG_GL_FUNCTION_NUM( GetProgramResourceLocation, FgGLint, , FgGLuint, FgGLenum, const FgGLchar * ) \
    FG_GL_FUNCTION_NUM( GetProgramResourceLocationIndex, FgGLint, , FgGLuint, FgGLenum, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( ShaderStorageBlockBinding, , FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( TexBufferRange, , FgGLenum, FgGLenum, FgGLuint, FgGLintptr, FgGLsizeiptr ) \
    FG_GL_FUNCTION_VOID( TexStorage2DMultisample, , FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( TexStorage3DMultisample, , FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( TextureView, , FgGLuint, FgGLenum, FgGLuint, FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( BindVertexBuffer, , FgGLuint, FgGLuint, FgGLintptr, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( VertexAttribFormat, , FgGLuint, FgGLint, FgGLenum, FgGLboolean, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribIFormat, , FgGLuint, FgGLint, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribLFormat, , FgGLuint, FgGLint, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribBinding, , FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexBindingDivisor, , FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DebugMessageControl, , FgGLenum, FgGLenum, FgGLenum, FgGLsizei, const FgGLuint *, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( DebugMessageInsert, , FgGLenum, FgGLenum, FgGLuint, FgGLenum, FgGLsizei, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( DebugMessageCallback, , FgGLDebugProc, const void * ) \
    FG_GL_FUNCTION_NUM( GetDebugMessageLog, FgGLuint, , FgGLuint, FgGLsizei, FgGLenum *, FgGLenum *, FgGLuint *, FgGLenum *, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( PushDebugGroup, , FgGLenum, FgGLuint, FgGLsizei, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( PopDebugGroup ) \
    FG_GL_FUNCTION_VOID( ObjectLabel, , FgGLenum, FgGLuint, FgGLsizei, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetObjectLabel, , FgGLenum, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( ObjectPtrLabel, , const void *, FgGLsizei, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetObjectPtrLabel, , const void *, FgGLsizei, FgGLsizei *, FgGLchar * ) \
\
    /* GL_VERSION_4_4 */ \
    FG_GL_FUNCTION_VOID( BufferStorage, , FgGLenum, FgGLsizeiptr, const void *, FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( ClearTexImage, , FgGLuint, FgGLint, FgGLenum, FgGLenum, const void * ) \
    FG_GL_FUNCTION_VOID( ClearTexSubImage, , FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const void * ) \
    FG_GL_FUNCTION_VOID( BindBuffersBase, , FgGLenum, FgGLuint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( BindBuffersRange, , FgGLenum, FgGLuint, FgGLsizei, const FgGLuint *, const FgGLintptr *, const FgGLsizeiptr * ) \
    FG_GL_FUNCTION_VOID( BindTextures, , FgGLuint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( BindSamplers, , FgGLuint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( BindImageTextures, , FgGLuint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( BindVertexBuffers, , FgGLuint, FgGLsizei, const FgGLuint *, const FgGLintptr *, const FgGLsizei * ) \
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
    FG_GL_FUNCTION_NUM( GetTextureHandleARB, FgGLuint64, , FgGLuint ) \
    FG_GL_FUNCTION_NUM( GetTextureSamplerHandleARB, FgGLuint64, , FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( MakeTextureHandleResidentARB, , FgGLuint64 ) \
    FG_GL_FUNCTION_VOID( MakeTextureHandleNonResidentARB, , FgGLuint64 ) \
    FG_GL_FUNCTION_NUM( GetImageHandleARB, FgGLuint64, , FgGLuint, FgGLint, FgGLboolean, FgGLint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MakeImageHandleResidentARB, , FgGLuint64, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MakeImageHandleNonResidentARB, , FgGLuint64 ) \
    FG_GL_FUNCTION_VOID( UniformHandleui64ARB, , FgGLint, FgGLuint64 ) \
    FG_GL_FUNCTION_VOID( UniformHandleui64vARB, , FgGLint, FgGLsizei, const FgGLuint64 * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformHandleui64ARB, , FgGLuint, FgGLint, FgGLuint64 ) \
    FG_GL_FUNCTION_VOID( ProgramUniformHandleui64vARB, , FgGLuint, FgGLint, FgGLsizei, const FgGLuint64 * ) \
    FG_GL_FUNCTION_NUM( IsTextureHandleResidentARB, FgGLboolean, , FgGLuint64 ) \
    FG_GL_FUNCTION_NUM( IsImageHandleResidentARB, FgGLboolean, , FgGLuint64 ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1ui64ARB, , FgGLuint, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1ui64vARB, , FgGLuint, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribLui64vARB, , FgGLuint, FgGLenum, FgGLuint64EXT * ) \
\
    /* GL_ARB_blend_func_extended */ \
\
    /* GL_ARB_buffer_storage */ \
\
    /* GL_ARB_cl_event */ \
    FG_GL_FUNCTION_PTR( CreateSyncFromCLeventARB, FgGLsync, , FgGLclcontext, FgGLclevent, FgGLbitfield ) \
\
    /* GL_ARB_clear_buffer_object */ \
\
    /* GL_ARB_clear_texture */ \
\
    /* GL_ARB_color_buffer_float */ \
    FG_GL_FUNCTION_VOID( ClampColorARB, , FgGLenum, FgGLenum ) \
\
    /* GL_ARB_compatibility */ \
\
    /* GL_ARB_compressed_texture_pixel_storage */ \
\
    /* GL_ARB_compute_shader */ \
\
    /* GL_ARB_compute_variable_group_size */ \
    FG_GL_FUNCTION_VOID( DispatchComputeGroupSizeARB, , FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
\
    /* GL_ARB_conservative_depth */ \
\
    /* GL_ARB_copy_buffer */ \
\
    /* GL_ARB_copy_image */ \
\
    /* GL_ARB_debug_output */ \
    FG_GL_FUNCTION_VOID( DebugMessageControlARB, , FgGLenum, FgGLenum, FgGLenum, FgGLsizei, const FgGLuint *, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( DebugMessageInsertARB, , FgGLenum, FgGLenum, FgGLuint, FgGLenum, FgGLsizei, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( DebugMessageCallbackARB, , FgGLDebugProcARB, const void * ) \
    FG_GL_FUNCTION_NUM( GetDebugMessageLogARB, FgGLuint, , FgGLuint, FgGLsizei, FgGLenum *, FgGLenum *, FgGLuint *, FgGLenum *, FgGLsizei *, FgGLchar * ) \
\
    /* GL_ARB_depth_buffer_float */ \
\
    /* GL_ARB_depth_clamp */ \
\
    /* GL_ARB_depth_texture */ \
\
    /* GL_ARB_draw_buffers */ \
    FG_GL_FUNCTION_VOID( DrawBuffersARB, , FgGLsizei, const FgGLenum * ) \
\
    /* GL_ARB_draw_buffers_blend */ \
    FG_GL_FUNCTION_VOID( BlendEquationiARB, , FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BlendEquationSeparateiARB, , FgGLuint, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BlendFunciARB, , FgGLuint, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BlendFuncSeparateiARB, , FgGLuint, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
\
    /* GL_ARB_draw_elements_base_vertex */ \
\
    /* GL_ARB_draw_indirect */ \
\
    /* GL_ARB_draw_instanced */ \
    FG_GL_FUNCTION_VOID( DrawArraysInstancedARB, , FgGLenum, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( DrawElementsInstancedARB, , FgGLenum, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLsizei ) \
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
    FG_GL_FUNCTION_VOID( ProgramStringARB, , FgGLenum, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( BindProgramARB, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteProgramsARB, , FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenProgramsARB, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameter4dARB, , FgGLenum, FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameter4dvARB, , FgGLenum, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameter4fARB, , FgGLenum, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameter4fvARB, , FgGLenum, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameter4dARB, , FgGLenum, FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameter4dvARB, , FgGLenum, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameter4fARB, , FgGLenum, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameter4fvARB, , FgGLenum, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetProgramEnvParameterdvARB, , FgGLenum, FgGLuint, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetProgramEnvParameterfvARB, , FgGLenum, FgGLuint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetProgramLocalParameterdvARB, , FgGLenum, FgGLuint, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetProgramLocalParameterfvARB, , FgGLenum, FgGLuint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetProgramivARB, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetProgramStringARB, , FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_NUM( IsProgramARB, FgGLboolean, , FgGLuint ) \
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
    FG_GL_FUNCTION_VOID( ProgramParameteriARB, , FgGLuint, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferTextureARB, , FgGLenum, FgGLenum, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferTextureLayerARB, , FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferTextureFaceARB, , FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLenum ) \
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
    FG_GL_FUNCTION_VOID( ColorTable, , FgGLenum, FgGLenum, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ColorTableParameterfv, , FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ColorTableParameteriv, , FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( CopyColorTable, , FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetColorTable, , FgGLenum, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetColorTableParameterfv, , FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetColorTableParameteriv, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( ColorSubTable, , FgGLenum, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CopyColorSubTable, , FgGLenum, FgGLsizei, FgGLint, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( ConvolutionFilter1D, , FgGLenum, FgGLenum, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ConvolutionFilter2D, , FgGLenum, FgGLenum, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameterf, , FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameterfv, , FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameteri, , FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameteriv, , FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( CopyConvolutionFilter1D, , FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( CopyConvolutionFilter2D, , FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetConvolutionFilter, , FgGLenum, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetConvolutionParameterfv, , FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetConvolutionParameteriv, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetSeparableFilter, , FgGLenum, FgGLenum, FgGLenum, FgGLvoid *, FgGLvoid *, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( SeparableFilter2D, , FgGLenum, FgGLenum, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid *, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetHistogram, , FgGLenum, FgGLboolean, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetHistogramParameterfv, , FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetHistogramParameteriv, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetMinmax, , FgGLenum, FgGLboolean, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetMinmaxParameterfv, , FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetMinmaxParameteriv, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( Histogram, , FgGLenum, FgGLsizei, FgGLenum, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( Minmax, , FgGLenum, FgGLenum, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( ResetHistogram, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( ResetMinmax, , FgGLenum ) \
\
    /* GL_ARB_indirect_parameters */ \
    FG_GL_FUNCTION_VOID( MultiDrawArraysIndirectCountARB, , FgGLenum, FgGLintptr, FgGLintptr, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( MultiDrawElementsIndirectCountARB, , FgGLenum, FgGLenum, FgGLintptr, FgGLintptr, FgGLsizei, FgGLsizei ) \
\
    /* GL_ARB_instanced_arrays */ \
    FG_GL_FUNCTION_VOID( VertexAttribDivisorARB, , FgGLuint, FgGLuint ) \
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
    FG_GL_FUNCTION_VOID( CurrentPaletteMatrixARB, , FgGLint ) \
    FG_GL_FUNCTION_VOID( MatrixIndexubvARB, , FgGLint, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( MatrixIndexusvARB, , FgGLint, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( MatrixIndexuivARB, , FgGLint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( MatrixIndexPointerARB, , FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
\
    /* GL_ARB_multi_bind */ \
\
    /* GL_ARB_multi_draw_indirect */ \
\
    /* GL_ARB_multisample */ \
    FG_GL_FUNCTION_VOID( SampleCoverageARB, , FgGLfloat, FgGLboolean ) \
\
    /* GL_ARB_multitexture */ \
    FG_GL_FUNCTION_VOID( ActiveTextureARB, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( ClientActiveTextureARB, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1dARB, , FgGLenum, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1dvARB, , FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1fARB, , FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1fvARB, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1iARB, , FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1ivARB, , FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1sARB, , FgGLenum, FgGLshort ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1svARB, , FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2dARB, , FgGLenum, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2dvARB, , FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2fARB, , FgGLenum, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2fvARB, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2iARB, , FgGLenum, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2ivARB, , FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2sARB, , FgGLenum, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2svARB, , FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3dARB, , FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3dvARB, , FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3fARB, , FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3fvARB, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3iARB, , FgGLenum, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3ivARB, , FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3sARB, , FgGLenum, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3svARB, , FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4dARB, , FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4dvARB, , FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4fARB, , FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4fvARB, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4iARB, , FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4ivARB, , FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4sARB, , FgGLenum, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4svARB, , FgGLenum, const FgGLshort * ) \
\
    /* GL_ARB_occlusion_query */ \
    FG_GL_FUNCTION_VOID( GenQueriesARB, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( DeleteQueriesARB, , FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsQueryARB, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( BeginQueryARB, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( EndQueryARB, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetQueryivARB, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetQueryObjectivARB, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetQueryObjectuivARB, , FgGLuint, FgGLenum, FgGLuint * ) \
\
    /* GL_ARB_occlusion_query2 */ \
\
    /* GL_ARB_pixel_buffer_object */ \
\
    /* GL_ARB_point_parameters */ \
    FG_GL_FUNCTION_VOID( PointParameterfARB, , FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( PointParameterfvARB, , FgGLenum, const FgGLfloat * ) \
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
    FG_GL_FUNCTION_NUM( GetGraphicsResetStatusARB, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetnTexImageARB, , FgGLenum, FgGLint, FgGLenum, FgGLenum, FgGLsizei, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ReadnPixelsARB, , FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, FgGLsizei, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetnCompressedTexImageARB, , FgGLenum, FgGLint, FgGLsizei, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetnUniformfvARB, , FgGLuint, FgGLint, FgGLsizei, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetnUniformivARB, , FgGLuint, FgGLint, FgGLsizei, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetnUniformuivARB, , FgGLuint, FgGLint, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetnUniformdvARB, , FgGLuint, FgGLint, FgGLsizei, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetnMapdvARB, , FgGLenum, FgGLenum, FgGLsizei, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetnMapfvARB, , FgGLenum, FgGLenum, FgGLsizei, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetnMapivARB, , FgGLenum, FgGLenum, FgGLsizei, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetnPixelMapfvARB, , FgGLenum, FgGLsizei, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetnPixelMapuivARB, , FgGLenum, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetnPixelMapusvARB, , FgGLenum, FgGLsizei, FgGLushort * ) \
    FG_GL_FUNCTION_VOID( GetnPolygonStippleARB, , FgGLsizei, FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( GetnColorTableARB, , FgGLenum, FgGLenum, FgGLenum, FgGLsizei, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetnConvolutionFilterARB, , FgGLenum, FgGLenum, FgGLenum, FgGLsizei, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetnSeparableFilterARB, , FgGLenum, FgGLenum, FgGLenum, FgGLsizei, FgGLvoid *, FgGLsizei, FgGLvoid *, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetnHistogramARB, , FgGLenum, FgGLboolean, FgGLenum, FgGLenum, FgGLsizei, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetnMinmaxARB, , FgGLenum, FgGLboolean, FgGLenum, FgGLenum, FgGLsizei, FgGLvoid * ) \
\
    /* GL_ARB_robustness_isolation */ \
\
    /* GL_ARB_sample_shading */ \
    FG_GL_FUNCTION_VOID( MinSampleShadingARB, , FgGLfloat ) \
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
    FG_GL_FUNCTION_VOID( DeleteObjectARB, , FgGLhandleARB ) \
    FG_GL_FUNCTION_NUM( GetHandleARB, FgGLhandleARB, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( DetachObjectARB, , FgGLhandleARB, FgGLhandleARB ) \
    FG_GL_FUNCTION_NUM( CreateShaderObjectARB, FgGLhandleARB, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( ShaderSourceARB, , FgGLhandleARB, FgGLsizei, const FgGLcharARB **, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( CompileShaderARB, , FgGLhandleARB ) \
    FG_GL_FUNCTION_NUM( CreateProgramObjectARB, FgGLhandleARB ) \
    FG_GL_FUNCTION_VOID( AttachObjectARB, , FgGLhandleARB, FgGLhandleARB ) \
    FG_GL_FUNCTION_VOID( LinkProgramARB, , FgGLhandleARB ) \
    FG_GL_FUNCTION_VOID( UseProgramObjectARB, , FgGLhandleARB ) \
    FG_GL_FUNCTION_VOID( ValidateProgramARB, , FgGLhandleARB ) \
    FG_GL_FUNCTION_VOID( Uniform1fARB, , FgGLint, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Uniform2fARB, , FgGLint, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Uniform3fARB, , FgGLint, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Uniform4fARB, , FgGLint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Uniform1iARB, , FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Uniform2iARB, , FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Uniform3iARB, , FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Uniform4iARB, , FgGLint, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Uniform1fvARB, , FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Uniform2fvARB, , FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Uniform3fvARB, , FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Uniform4fvARB, , FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Uniform1ivARB, , FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Uniform2ivARB, , FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Uniform3ivARB, , FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Uniform4ivARB, , FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix2fvARB, , FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix3fvARB, , FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix4fvARB, , FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetObjectParameterfvARB, , FgGLhandleARB, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetObjectParameterivARB, , FgGLhandleARB, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetInfoLogARB, , FgGLhandleARB, FgGLsizei, FgGLsizei *, FgGLcharARB * ) \
    FG_GL_FUNCTION_VOID( GetAttachedObjectsARB, , FgGLhandleARB, FgGLsizei, FgGLsizei *, FgGLhandleARB * ) \
    FG_GL_FUNCTION_NUM( GetUniformLocationARB, FgGLint, , FgGLhandleARB, const FgGLcharARB * ) \
    FG_GL_FUNCTION_VOID( GetActiveUniformARB, , FgGLhandleARB, FgGLuint, FgGLsizei, FgGLsizei *, FgGLint *, FgGLenum *, FgGLcharARB * ) \
    FG_GL_FUNCTION_VOID( GetUniformfvARB, , FgGLhandleARB, FgGLint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetUniformivARB, , FgGLhandleARB, FgGLint, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetShaderSourceARB, , FgGLhandleARB, FgGLsizei, FgGLsizei *, FgGLcharARB * ) \
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
    FG_GL_FUNCTION_VOID( NamedStringARB, , FgGLenum, FgGLint, const FgGLchar *, FgGLint, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( DeleteNamedStringARB, , FgGLint, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( CompileShaderIncludeARB, , FgGLuint, FgGLsizei, const FgGLchar *const*, const FgGLint * ) \
    FG_GL_FUNCTION_NUM( IsNamedStringARB, FgGLboolean, , FgGLint, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetNamedStringARB, , FgGLint, const FgGLchar *, FgGLsizei, FgGLint *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetNamedStringivARB, , FgGLint, const FgGLchar *, FgGLenum, FgGLint * ) \
\
    /* GL_ARB_shading_language_packing */ \
\
    /* GL_ARB_shadow */ \
\
    /* GL_ARB_shadow_ambient */ \
\
    /* GL_ARB_sparse_texture */ \
    FG_GL_FUNCTION_VOID( TexPageCommitmentARB, , FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) \
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
    FG_GL_FUNCTION_VOID( TexBufferARB, , FgGLenum, FgGLenum, FgGLuint ) \
\
    /* GL_ARB_texture_buffer_object_rgb32 */ \
\
    /* GL_ARB_texture_buffer_range */ \
\
    /* GL_ARB_texture_compression */ \
    FG_GL_FUNCTION_VOID( CompressedTexImage3DARB, , FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTexImage2DARB, , FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTexImage1DARB, , FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTexSubImage3DARB, , FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTexSubImage2DARB, , FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTexSubImage1DARB, , FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetCompressedTexImageARB, , FgGLenum, FgGLint, FgGLvoid * ) \
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
    FG_GL_FUNCTION_VOID( LoadTransposeMatrixfARB, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( LoadTransposeMatrixdARB, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultTransposeMatrixfARB, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultTransposeMatrixdARB, , const FgGLdouble * ) \
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
    FG_GL_FUNCTION_VOID( WeightbvARB, , FgGLint, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( WeightsvARB, , FgGLint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( WeightivARB, , FgGLint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( WeightfvARB, , FgGLint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( WeightdvARB, , FgGLint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( WeightubvARB, , FgGLint, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( WeightusvARB, , FgGLint, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( WeightuivARB, , FgGLint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( WeightPointerARB, , FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( VertexBlendARB, , FgGLint ) \
\
    /* GL_ARB_vertex_buffer_object */ \
    FG_GL_FUNCTION_VOID( BindBufferARB, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteBuffersARB, , FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenBuffersARB, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsBufferARB, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( BufferDataARB, , FgGLenum, FgGLsizeiptrARB, const FgGLvoid *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BufferSubDataARB, , FgGLenum, FgGLintptrARB, FgGLsizeiptrARB, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetBufferSubDataARB, , FgGLenum, FgGLintptrARB, FgGLsizeiptrARB, FgGLvoid * ) \
    FG_GL_FUNCTION_PTR( MapBufferARB, void *, , FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_NUM( UnmapBufferARB, FgGLboolean, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetBufferParameterivARB, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetBufferPointervARB, , FgGLenum, FgGLenum, FgGLvoid ** ) \
\
    /* GL_ARB_vertex_program */ \
    FG_GL_FUNCTION_VOID( VertexAttrib1dARB, , FgGLuint, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1dvARB, , FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1fARB, , FgGLuint, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1fvARB, , FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1sARB, , FgGLuint, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1svARB, , FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2dARB, , FgGLuint, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2dvARB, , FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2fARB, , FgGLuint, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2fvARB, , FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2sARB, , FgGLuint, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2svARB, , FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3dARB, , FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3dvARB, , FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3fARB, , FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3fvARB, , FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3sARB, , FgGLuint, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3svARB, , FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4NbvARB, , FgGLuint, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4NivARB, , FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4NsvARB, , FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4NubARB, , FgGLuint, FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4NubvARB, , FgGLuint, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4NuivARB, , FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4NusvARB, , FgGLuint, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4bvARB, , FgGLuint, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4dARB, , FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4dvARB, , FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4fARB, , FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4fvARB, , FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4ivARB, , FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4sARB, , FgGLuint, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4svARB, , FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4ubvARB, , FgGLuint, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4uivARB, , FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4usvARB, , FgGLuint, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( VertexAttribPointerARB, , FgGLuint, FgGLint, FgGLenum, FgGLboolean, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( EnableVertexAttribArrayARB, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( DisableVertexAttribArrayARB, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribdvARB, , FgGLuint, FgGLenum, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribfvARB, , FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribivARB, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribPointervARB, , FgGLuint, FgGLenum, FgGLvoid ** ) \
\
    /* GL_ARB_vertex_shader */ \
    FG_GL_FUNCTION_VOID( BindAttribLocationARB, , FgGLhandleARB, FgGLuint, const FgGLcharARB * ) \
    FG_GL_FUNCTION_VOID( GetActiveAttribARB, , FgGLhandleARB, FgGLuint, FgGLsizei, FgGLsizei *, FgGLint *, FgGLenum *, FgGLcharARB * ) \
    FG_GL_FUNCTION_NUM( GetAttribLocationARB, FgGLint, , FgGLhandleARB, const FgGLcharARB * ) \
\
    /* GL_ARB_vertex_type_10f_11f_11f_rev */ \
\
    /* GL_ARB_vertex_type_2_10_10_10_rev */ \
\
    /* GL_ARB_viewport_array */ \
\
    /* GL_ARB_window_pos */ \
    FG_GL_FUNCTION_VOID( WindowPos2dARB, , FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( WindowPos2dvARB, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( WindowPos2fARB, , FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( WindowPos2fvARB, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( WindowPos2iARB, , FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( WindowPos2ivARB, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( WindowPos2sARB, , FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( WindowPos2svARB, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( WindowPos3dARB, , FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( WindowPos3dvARB, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( WindowPos3fARB, , FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( WindowPos3fvARB, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( WindowPos3iARB, , FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( WindowPos3ivARB, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( WindowPos3sARB, , FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( WindowPos3svARB, , const FgGLshort * ) \
\
    /* GL_KHR_debug */ \
\
    /* GL_KHR_texture_compression_astc_ldr */ \
\
    /* GL_OES_byte_coordinates */ \
    FG_GL_FUNCTION_VOID( MultiTexCoord1bOES, , FgGLenum, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1bvOES, , FgGLenum, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2bOES, , FgGLenum, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2bvOES, , FgGLenum, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3bOES, , FgGLenum, FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3bvOES, , FgGLenum, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4bOES, , FgGLenum, FgGLbyte, FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4bvOES, , FgGLenum, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( TexCoord1bOES, , FgGLbyte ) \
    FG_GL_FUNCTION_VOID( TexCoord1bvOES, , const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( TexCoord2bOES, , FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( TexCoord2bvOES, , const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( TexCoord3bOES, , FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( TexCoord3bvOES, , const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( TexCoord4bOES, , FgGLbyte, FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( TexCoord4bvOES, , const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( Vertex2bOES, , FgGLbyte ) \
    FG_GL_FUNCTION_VOID( Vertex2bvOES, , const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( Vertex3bOES, , FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( Vertex3bvOES, , const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( Vertex4bOES, , FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( Vertex4bvOES, , const FgGLbyte * ) \
\
    /* GL_OES_compressed_paletted_texture */ \
\
    /* GL_OES_fixed_point */ \
    FG_GL_FUNCTION_VOID( AlphaFuncxOES, , FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( ClearColorxOES, , FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( ClearDepthxOES, , FgGLfixed ) \
    FG_GL_FUNCTION_VOID( ClipPlanexOES, , FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( Color4xOES, , FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( DepthRangexOES, , FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( FogxOES, , FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( FogxvOES, , FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( FrustumxOES, , FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( GetClipPlanexOES, , FgGLenum, FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( GetFixedvOES, , FgGLenum, FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( GetTexEnvxvOES, , FgGLenum, FgGLenum, FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( GetTexParameterxvOES, , FgGLenum, FgGLenum, FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( LightModelxOES, , FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( LightModelxvOES, , FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( LightxOES, , FgGLenum, FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( LightxvOES, , FgGLenum, FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( LineWidthxOES, , FgGLfixed ) \
    FG_GL_FUNCTION_VOID( LoadMatrixxOES, , const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( MaterialxOES, , FgGLenum, FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( MaterialxvOES, , FgGLenum, FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( MultMatrixxOES, , const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4xOES, , FgGLenum, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( Normal3xOES, , FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( OrthoxOES, , FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( PointParameterxvOES, , FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( PointSizexOES, , FgGLfixed ) \
    FG_GL_FUNCTION_VOID( PolygonOffsetxOES, , FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( RotatexOES, , FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( SampleCoverageOES, , FgGLfixed, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( ScalexOES, , FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( TexEnvxOES, , FgGLenum, FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( TexEnvxvOES, , FgGLenum, FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( TexParameterxOES, , FgGLenum, FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( TexParameterxvOES, , FgGLenum, FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( TranslatexOES, , FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( AccumxOES, , FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( BitmapxOES, , FgGLsizei, FgGLsizei, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( BlendColorxOES, , FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( ClearAccumxOES, , FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( Color3xOES, , FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( Color3xvOES, , const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( Color4xvOES, , const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameterxOES, , FgGLenum, FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameterxvOES, , FgGLenum, FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( EvalCoord1xOES, , FgGLfixed ) \
    FG_GL_FUNCTION_VOID( EvalCoord1xvOES, , const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( EvalCoord2xOES, , FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( EvalCoord2xvOES, , const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( FeedbackBufferxOES, , FgGLsizei, FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( GetConvolutionParameterxvOES, , FgGLenum, FgGLenum, FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( GetHistogramParameterxvOES, , FgGLenum, FgGLenum, FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( GetLightxOES, , FgGLenum, FgGLenum, FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( GetMapxvOES, , FgGLenum, FgGLenum, FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( GetMaterialxOES, , FgGLenum, FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( GetPixelMapxv, , FgGLenum, FgGLint, FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( GetTexGenxvOES, , FgGLenum, FgGLenum, FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( GetTexLevelParameterxvOES, , FgGLenum, FgGLint, FgGLenum, FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( IndexxOES, , FgGLfixed ) \
    FG_GL_FUNCTION_VOID( IndexxvOES, , const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( LoadTransposeMatrixxOES, , const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( Map1xOES, , FgGLenum, FgGLfixed, FgGLfixed, FgGLint, FgGLint, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( Map2xOES, , FgGLenum, FgGLfixed, FgGLfixed, FgGLint, FgGLint, FgGLfixed, FgGLfixed, FgGLint, FgGLint, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( MapGrid1xOES, , FgGLint, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( MapGrid2xOES, , FgGLint, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( MultTransposeMatrixxOES, , const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1xOES, , FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1xvOES, , FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2xOES, , FgGLenum, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2xvOES, , FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3xOES, , FgGLenum, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3xvOES, , FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4xvOES, , FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( Normal3xvOES, , const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( PassThroughxOES, , FgGLfixed ) \
    FG_GL_FUNCTION_VOID( PixelMapx, , FgGLenum, FgGLint, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( PixelStorex, , FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( PixelTransferxOES, , FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( PixelZoomxOES, , FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( PrioritizeTexturesxOES, , FgGLsizei, const FgGLuint *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( RasterPos2xOES, , FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( RasterPos2xvOES, , const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( RasterPos3xOES, , FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( RasterPos3xvOES, , const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( RasterPos4xOES, , FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( RasterPos4xvOES, , const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( RectxOES, , FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( RectxvOES, , const FgGLfixed *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( TexCoord1xOES, , FgGLfixed ) \
    FG_GL_FUNCTION_VOID( TexCoord1xvOES, , const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( TexCoord2xOES, , FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( TexCoord2xvOES, , const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( TexCoord3xOES, , FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( TexCoord3xvOES, , const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( TexCoord4xOES, , FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( TexCoord4xvOES, , const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( TexGenxOES, , FgGLenum, FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( TexGenxvOES, , FgGLenum, FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( Vertex2xOES, , FgGLfixed ) \
    FG_GL_FUNCTION_VOID( Vertex2xvOES, , const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( Vertex3xOES, , FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( Vertex3xvOES, , const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( Vertex4xOES, , FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( Vertex4xvOES, , const FgGLfixed * ) \
\
    /* GL_OES_query_matrix */ \
    FG_GL_FUNCTION_NUM( QueryMatrixxOES, FgGLbitfield, , FgGLfixed *, FgGLint * ) \
\
    /* GL_OES_read_format */ \
\
    /* GL_OES_single_precision */ \
    FG_GL_FUNCTION_VOID( ClearDepthfOES, , FgGLclampf ) \
    FG_GL_FUNCTION_VOID( ClipPlanefOES, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( DepthRangefOES, , FgGLclampf, FgGLclampf ) \
    FG_GL_FUNCTION_VOID( FrustumfOES, , FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( GetClipPlanefOES, , FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( OrthofOES, , FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
\
    /* GL_3DFX_multisample */ \
\
    /* GL_3DFX_tbuffer */ \
    FG_GL_FUNCTION_VOID( TbufferMask3DFX, , FgGLuint ) \
\
    /* GL_3DFX_texture_compression_FXT1 */ \
\
    /* GL_AMD_blend_minmax_factor */ \
\
    /* GL_AMD_conservative_depth */ \
\
    /* GL_AMD_debug_output */ \
    FG_GL_FUNCTION_VOID( DebugMessageEnableAMD, , FgGLenum, FgGLenum, FgGLsizei, const FgGLuint *, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( DebugMessageInsertAMD, , FgGLenum, FgGLenum, FgGLuint, FgGLsizei, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( DebugMessageCallbackAMD, , FgGLDebugProcAMD, void * ) \
    FG_GL_FUNCTION_NUM( GetDebugMessageLogAMD, FgGLuint, , FgGLuint, FgGLsizei, FgGLenum *, FgGLuint *, FgGLuint *, FgGLsizei *, FgGLchar * ) \
\
    /* GL_AMD_depth_clamp_separate */ \
\
    /* GL_AMD_draw_buffers_blend */ \
    FG_GL_FUNCTION_VOID( BlendFuncIndexedAMD, , FgGLuint, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BlendFuncSeparateIndexedAMD, , FgGLuint, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BlendEquationIndexedAMD, , FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BlendEquationSeparateIndexedAMD, , FgGLuint, FgGLenum, FgGLenum ) \
\
    /* GL_AMD_interleaved_elements */ \
    FG_GL_FUNCTION_VOID( VertexAttribParameteriAMD, , FgGLuint, FgGLenum, FgGLint ) \
\
    /* GL_AMD_multi_draw_indirect */ \
    FG_GL_FUNCTION_VOID( MultiDrawArraysIndirectAMD, , FgGLenum, const FgGLvoid *, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( MultiDrawElementsIndirectAMD, , FgGLenum, FgGLenum, const FgGLvoid *, FgGLsizei, FgGLsizei ) \
\
    /* GL_AMD_name_gen_delete */ \
    FG_GL_FUNCTION_VOID( GenNamesAMD, , FgGLenum, FgGLuint, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( DeleteNamesAMD, , FgGLenum, FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsNameAMD, FgGLboolean, , FgGLenum, FgGLuint ) \
\
    /* GL_AMD_performance_monitor */ \
    FG_GL_FUNCTION_VOID( GetPerfMonitorGroupsAMD, , FgGLint *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetPerfMonitorCountersAMD, , FgGLuint, FgGLint *, FgGLint *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetPerfMonitorGroupStringAMD, , FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetPerfMonitorCounterStringAMD, , FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetPerfMonitorCounterInfoAMD, , FgGLuint, FgGLuint, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GenPerfMonitorsAMD, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( DeletePerfMonitorsAMD, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( SelectPerfMonitorCountersAMD, , FgGLuint, FgGLboolean, FgGLuint, FgGLint, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( BeginPerfMonitorAMD, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( EndPerfMonitorAMD, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetPerfMonitorCounterDataAMD, , FgGLuint, FgGLenum, FgGLsizei, FgGLuint *, FgGLint * ) \
\
    /* GL_AMD_pinned_memory */ \
\
    /* GL_AMD_query_buffer_object */ \
\
    /* GL_AMD_sample_positions */ \
    FG_GL_FUNCTION_VOID( SetMultisamplefvAMD, , FgGLenum, FgGLuint, const FgGLfloat * ) \
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
    FG_GL_FUNCTION_VOID( TexStorageSparseAMD, , FgGLenum, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLsizei, FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( TextureStorageSparseAMD, , FgGLuint, FgGLenum, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLsizei, FgGLbitfield ) \
\
    /* GL_AMD_stencil_operation_extended */ \
    FG_GL_FUNCTION_VOID( StencilOpValueAMD, , FgGLenum, FgGLuint ) \
\
    /* GL_AMD_texture_texture4 */ \
\
    /* GL_AMD_transform_feedback3_lines_triangles */ \
\
    /* GL_AMD_vertex_shader_layer */ \
\
    /* GL_AMD_vertex_shader_tessellator */ \
    FG_GL_FUNCTION_VOID( TessellationFactorAMD, , FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TessellationModeAMD, , FgGLenum ) \
\
    /* GL_AMD_vertex_shader_viewport_index */ \
\
    /* GL_APPLE_aux_depth_stencil */ \
\
    /* GL_APPLE_client_storage */ \
\
    /* GL_APPLE_element_array */ \
    FG_GL_FUNCTION_VOID( ElementPointerAPPLE, , FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( DrawElementArrayAPPLE, , FgGLenum, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( DrawRangeElementArrayAPPLE, , FgGLenum, FgGLuint, FgGLuint, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( MultiDrawElementArrayAPPLE, , FgGLenum, const FgGLint *, const FgGLsizei *, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( MultiDrawRangeElementArrayAPPLE, , FgGLenum, FgGLuint, FgGLuint, const FgGLint *, const FgGLsizei *, FgGLsizei ) \
\
    /* GL_APPLE_fence */ \
    FG_GL_FUNCTION_VOID( GenFencesAPPLE, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( DeleteFencesAPPLE, , FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( SetFenceAPPLE, , FgGLuint ) \
    FG_GL_FUNCTION_NUM( IsFenceAPPLE, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_NUM( TestFenceAPPLE, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( FinishFenceAPPLE, , FgGLuint ) \
    FG_GL_FUNCTION_NUM( TestObjectAPPLE, FgGLboolean, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( FinishObjectAPPLE, , FgGLenum, FgGLint ) \
\
    /* GL_APPLE_float_pixels */ \
\
    /* GL_APPLE_flush_buffer_range */ \
    FG_GL_FUNCTION_VOID( BufferParameteriAPPLE, , FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( FlushMappedBufferRangeAPPLE, , FgGLenum, FgGLintptr, FgGLsizeiptr ) \
\
    /* GL_APPLE_object_purgeable */ \
    FG_GL_FUNCTION_NUM( ObjectPurgeableAPPLE, FgGLenum, , FgGLenum, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_NUM( ObjectUnpurgeableAPPLE, FgGLenum, , FgGLenum, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetObjectParameterivAPPLE, , FgGLenum, FgGLuint, FgGLenum, FgGLint * ) \
\
    /* GL_APPLE_rgb_422 */ \
\
    /* GL_APPLE_row_bytes */ \
\
    /* GL_APPLE_specular_vector */ \
\
    /* GL_APPLE_texture_range */ \
    FG_GL_FUNCTION_VOID( TextureRangeAPPLE, , FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetTexParameterPointervAPPLE, , FgGLenum, FgGLenum, FgGLvoid ** ) \
\
    /* GL_APPLE_transform_hint */ \
\
    /* GL_APPLE_vertex_array_object */ \
    FG_GL_FUNCTION_VOID( BindVertexArrayAPPLE, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteVertexArraysAPPLE, , FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenVertexArraysAPPLE, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsVertexArrayAPPLE, FgGLboolean, , FgGLuint ) \
\
    /* GL_APPLE_vertex_array_range */ \
    FG_GL_FUNCTION_VOID( VertexArrayRangeAPPLE, , FgGLsizei, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( FlushVertexArrayRangeAPPLE, , FgGLsizei, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( VertexArrayParameteriAPPLE, , FgGLenum, FgGLint ) \
\
    /* GL_APPLE_vertex_program_evaluators */ \
    FG_GL_FUNCTION_VOID( EnableVertexAttribAPPLE, , FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( DisableVertexAttribAPPLE, , FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_NUM( IsVertexAttribEnabledAPPLE, FgGLboolean, , FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MapVertexAttrib1dAPPLE, , FgGLuint, FgGLuint, FgGLdouble, FgGLdouble, FgGLint, FgGLint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MapVertexAttrib1fAPPLE, , FgGLuint, FgGLuint, FgGLfloat, FgGLfloat, FgGLint, FgGLint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MapVertexAttrib2dAPPLE, , FgGLuint, FgGLuint, FgGLdouble, FgGLdouble, FgGLint, FgGLint, FgGLdouble, FgGLdouble, FgGLint, FgGLint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MapVertexAttrib2fAPPLE, , FgGLuint, FgGLuint, FgGLfloat, FgGLfloat, FgGLint, FgGLint, FgGLfloat, FgGLfloat, FgGLint, FgGLint, const FgGLfloat * ) \
\
    /* GL_APPLE_ycbcr_422 */ \
\
    /* GL_ATI_draw_buffers */ \
    FG_GL_FUNCTION_VOID( DrawBuffersATI, , FgGLsizei, const FgGLenum * ) \
\
    /* GL_ATI_element_array */ \
    FG_GL_FUNCTION_VOID( ElementPointerATI, , FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( DrawElementArrayATI, , FgGLenum, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( DrawRangeElementArrayATI, , FgGLenum, FgGLuint, FgGLuint, FgGLsizei ) \
\
    /* GL_ATI_envmap_bumpmap */ \
    FG_GL_FUNCTION_VOID( TexBumpParameterivATI, , FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TexBumpParameterfvATI, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetTexBumpParameterivATI, , FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetTexBumpParameterfvATI, , FgGLenum, FgGLfloat * ) \
\
    /* GL_ATI_fragment_shader */ \
    FG_GL_FUNCTION_NUM( GenFragmentShadersATI, FgGLuint, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( BindFragmentShaderATI, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteFragmentShaderATI, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( BeginFragmentShaderATI ) \
    FG_GL_FUNCTION_VOID( EndFragmentShaderATI ) \
    FG_GL_FUNCTION_VOID( PassTexCoordATI, , FgGLuint, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( SampleMapATI, , FgGLuint, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( ColorFragmentOp1ATI, , FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ColorFragmentOp2ATI, , FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ColorFragmentOp3ATI, , FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( AlphaFragmentOp1ATI, , FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( AlphaFragmentOp2ATI, , FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( AlphaFragmentOp3ATI, , FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( SetFragmentShaderConstantATI, , FgGLuint, const FgGLfloat * ) \
\
    /* GL_ATI_map_object_buffer */ \
    FG_GL_FUNCTION_PTR( MapObjectBufferATI, void *, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( UnmapObjectBufferATI, , FgGLuint ) \
\
    /* GL_ATI_meminfo */ \
\
    /* GL_ATI_pixel_format_float */ \
\
    /* GL_ATI_pn_triangles */ \
    FG_GL_FUNCTION_VOID( PNTrianglesiATI, , FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( PNTrianglesfATI, , FgGLenum, FgGLfloat ) \
\
    /* GL_ATI_separate_stencil */ \
    FG_GL_FUNCTION_VOID( StencilOpSeparateATI, , FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( StencilFuncSeparateATI, , FgGLenum, FgGLenum, FgGLint, FgGLuint ) \
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
    FG_GL_FUNCTION_NUM( NewObjectBufferATI, FgGLuint, , FgGLsizei, const FgGLvoid *, FgGLenum ) \
    FG_GL_FUNCTION_NUM( IsObjectBufferATI, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( UpdateObjectBufferATI, , FgGLuint, FgGLuint, FgGLsizei, const FgGLvoid *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetObjectBufferfvATI, , FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetObjectBufferivATI, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( FreeObjectBufferATI, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( ArrayObjectATI, , FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetArrayObjectfvATI, , FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetArrayObjectivATI, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( VariantArrayObjectATI, , FgGLuint, FgGLenum, FgGLsizei, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetVariantArrayObjectfvATI, , FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetVariantArrayObjectivATI, , FgGLuint, FgGLenum, FgGLint * ) \
\
    /* GL_ATI_vertex_attrib_array_object */ \
    FG_GL_FUNCTION_VOID( VertexAttribArrayObjectATI, , FgGLuint, FgGLint, FgGLenum, FgGLboolean, FgGLsizei, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribArrayObjectfvATI, , FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribArrayObjectivATI, , FgGLuint, FgGLenum, FgGLint * ) \
\
    /* GL_ATI_vertex_streams */ \
    FG_GL_FUNCTION_VOID( VertexStream1sATI, , FgGLenum, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexStream1svATI, , FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexStream1iATI, , FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexStream1ivATI, , FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexStream1fATI, , FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexStream1fvATI, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexStream1dATI, , FgGLenum, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexStream1dvATI, , FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexStream2sATI, , FgGLenum, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexStream2svATI, , FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexStream2iATI, , FgGLenum, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexStream2ivATI, , FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexStream2fATI, , FgGLenum, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexStream2fvATI, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexStream2dATI, , FgGLenum, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexStream2dvATI, , FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexStream3sATI, , FgGLenum, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexStream3svATI, , FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexStream3iATI, , FgGLenum, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexStream3ivATI, , FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexStream3fATI, , FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexStream3fvATI, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexStream3dATI, , FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexStream3dvATI, , FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexStream4sATI, , FgGLenum, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexStream4svATI, , FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexStream4iATI, , FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexStream4ivATI, , FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexStream4fATI, , FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexStream4fvATI, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexStream4dATI, , FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexStream4dvATI, , FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( NormalStream3bATI, , FgGLenum, FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( NormalStream3bvATI, , FgGLenum, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( NormalStream3sATI, , FgGLenum, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( NormalStream3svATI, , FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( NormalStream3iATI, , FgGLenum, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( NormalStream3ivATI, , FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( NormalStream3fATI, , FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( NormalStream3fvATI, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( NormalStream3dATI, , FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( NormalStream3dvATI, , FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ClientActiveVertexStreamATI, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( VertexBlendEnviATI, , FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexBlendEnvfATI, , FgGLenum, FgGLfloat ) \
\
    /* GL_EXT_422_pixels */ \
\
    /* GL_EXT_abgr */ \
\
    /* GL_EXT_bgra */ \
\
    /* GL_EXT_bindable_uniform */ \
    FG_GL_FUNCTION_VOID( UniformBufferEXT, , FgGLuint, FgGLint, FgGLuint ) \
    FG_GL_FUNCTION_NUM( GetUniformBufferSizeEXT, FgGLint, , FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_NUM( GetUniformOffsetEXT, FgGLintptr, , FgGLuint, FgGLint ) \
\
    /* GL_EXT_blend_color */ \
    FG_GL_FUNCTION_VOID( BlendColorEXT, , FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
\
    /* GL_EXT_blend_equation_separate */ \
    FG_GL_FUNCTION_VOID( BlendEquationSeparateEXT, , FgGLenum, FgGLenum ) \
\
    /* GL_EXT_blend_func_separate */ \
    FG_GL_FUNCTION_VOID( BlendFuncSeparateEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
\
    /* GL_EXT_blend_logic_op */ \
\
    /* GL_EXT_blend_minmax */ \
    FG_GL_FUNCTION_VOID( BlendEquationEXT, , FgGLenum ) \
\
    /* GL_EXT_blend_subtract */ \
\
    /* GL_EXT_clip_volume_hint */ \
\
    /* GL_EXT_cmyka */ \
\
    /* GL_EXT_color_subtable */ \
    FG_GL_FUNCTION_VOID( ColorSubTableEXT, , FgGLenum, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CopyColorSubTableEXT, , FgGLenum, FgGLsizei, FgGLint, FgGLint, FgGLsizei ) \
\
    /* GL_EXT_compiled_vertex_array */ \
    FG_GL_FUNCTION_VOID( LockArraysEXT, , FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( UnlockArraysEXT ) \
\
    /* GL_EXT_convolution */ \
    FG_GL_FUNCTION_VOID( ConvolutionFilter1DEXT, , FgGLenum, FgGLenum, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ConvolutionFilter2DEXT, , FgGLenum, FgGLenum, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameterfEXT, , FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameterfvEXT, , FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameteriEXT, , FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameterivEXT, , FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( CopyConvolutionFilter1DEXT, , FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( CopyConvolutionFilter2DEXT, , FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetConvolutionFilterEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetConvolutionParameterfvEXT, , FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetConvolutionParameterivEXT, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetSeparableFilterEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLvoid *, FgGLvoid *, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( SeparableFilter2DEXT, , FgGLenum, FgGLenum, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid *, const FgGLvoid * ) \
\
    /* GL_EXT_coordinate_frame */ \
    FG_GL_FUNCTION_VOID( Tangent3bEXT, , FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( Tangent3bvEXT, , const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( Tangent3dEXT, , FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Tangent3dvEXT, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Tangent3fEXT, , FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Tangent3fvEXT, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Tangent3iEXT, , FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Tangent3ivEXT, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Tangent3sEXT, , FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( Tangent3svEXT, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( Binormal3bEXT, , FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( Binormal3bvEXT, , const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( Binormal3dEXT, , FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Binormal3dvEXT, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Binormal3fEXT, , FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Binormal3fvEXT, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Binormal3iEXT, , FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Binormal3ivEXT, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Binormal3sEXT, , FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( Binormal3svEXT, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( TangentPointerEXT, , FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( BinormalPointerEXT, , FgGLenum, FgGLsizei, const FgGLvoid * ) \
\
    /* GL_EXT_copy_texture */ \
    FG_GL_FUNCTION_VOID( CopyTexImage1DEXT, , FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLint ) \
    FG_GL_FUNCTION_VOID( CopyTexImage2DEXT, , FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLint ) \
    FG_GL_FUNCTION_VOID( CopyTexSubImage1DEXT, , FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( CopyTexSubImage2DEXT, , FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( CopyTexSubImage3DEXT, , FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
\
    /* GL_EXT_cull_vertex */ \
    FG_GL_FUNCTION_VOID( CullParameterdvEXT, , FgGLenum, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( CullParameterfvEXT, , FgGLenum, FgGLfloat * ) \
\
    /* GL_EXT_depth_bounds_test */ \
    FG_GL_FUNCTION_VOID( DepthBoundsEXT, , FgGLclampd, FgGLclampd ) \
\
    /* GL_EXT_direct_state_access */ \
    FG_GL_FUNCTION_VOID( MatrixLoadfEXT, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MatrixLoaddEXT, , FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MatrixMultfEXT, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MatrixMultdEXT, , FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MatrixLoadIdentityEXT, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( MatrixRotatefEXT, , FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MatrixRotatedEXT, , FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MatrixScalefEXT, , FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MatrixScaledEXT, , FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MatrixTranslatefEXT, , FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MatrixTranslatedEXT, , FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MatrixFrustumEXT, , FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MatrixOrthoEXT, , FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MatrixPopEXT, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( MatrixPushEXT, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( ClientAttribDefaultEXT, , FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( PushClientAttribDefaultEXT, , FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( TextureParameterfEXT, , FgGLuint, FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TextureParameterfvEXT, , FgGLuint, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TextureParameteriEXT, , FgGLuint, FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( TextureParameterivEXT, , FgGLuint, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TextureImage1DEXT, , FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TextureImage2DEXT, , FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TextureSubImage1DEXT, , FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TextureSubImage2DEXT, , FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CopyTextureImage1DEXT, , FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLint ) \
    FG_GL_FUNCTION_VOID( CopyTextureImage2DEXT, , FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLint ) \
    FG_GL_FUNCTION_VOID( CopyTextureSubImage1DEXT, , FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( CopyTextureSubImage2DEXT, , FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetTextureImageEXT, , FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetTextureParameterfvEXT, , FgGLuint, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetTextureParameterivEXT, , FgGLuint, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetTextureLevelParameterfvEXT, , FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetTextureLevelParameterivEXT, , FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( TextureImage3DEXT, , FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TextureSubImage3DEXT, , FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CopyTextureSubImage3DEXT, , FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( BindMultiTextureEXT, , FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordPointerEXT, , FgGLenum, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( MultiTexEnvfEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MultiTexEnvfvEXT, , FgGLenum, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultiTexEnviEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiTexEnvivEXT, , FgGLenum, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexGendEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MultiTexGendvEXT, , FgGLenum, FgGLenum, FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultiTexGenfEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MultiTexGenfvEXT, , FgGLenum, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultiTexGeniEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiTexGenivEXT, , FgGLenum, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetMultiTexEnvfvEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetMultiTexEnvivEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetMultiTexGendvEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetMultiTexGenfvEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetMultiTexGenivEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexParameteriEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiTexParameterivEXT, , FgGLenum, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexParameterfEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MultiTexParameterfvEXT, , FgGLenum, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultiTexImage1DEXT, , FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( MultiTexImage2DEXT, , FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( MultiTexSubImage1DEXT, , FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( MultiTexSubImage2DEXT, , FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CopyMultiTexImage1DEXT, , FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLint ) \
    FG_GL_FUNCTION_VOID( CopyMultiTexImage2DEXT, , FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLint ) \
    FG_GL_FUNCTION_VOID( CopyMultiTexSubImage1DEXT, , FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( CopyMultiTexSubImage2DEXT, , FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetMultiTexImageEXT, , FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetMultiTexParameterfvEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetMultiTexParameterivEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetMultiTexLevelParameterfvEXT, , FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetMultiTexLevelParameterivEXT, , FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexImage3DEXT, , FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( MultiTexSubImage3DEXT, , FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CopyMultiTexSubImage3DEXT, , FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( EnableClientStateIndexedEXT, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DisableClientStateIndexedEXT, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetFloatIndexedvEXT, , FgGLenum, FgGLuint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetDoubleIndexedvEXT, , FgGLenum, FgGLuint, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetPointerIndexedvEXT, , FgGLenum, FgGLuint, FgGLvoid ** ) \
    FG_GL_FUNCTION_VOID( EnableIndexedEXT, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DisableIndexedEXT, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_NUM( IsEnabledIndexedEXT, FgGLboolean, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetIntegerIndexedvEXT, , FgGLenum, FgGLuint, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetBooleanIndexedvEXT, , FgGLenum, FgGLuint, FgGLboolean * ) \
    FG_GL_FUNCTION_VOID( CompressedTextureImage3DEXT, , FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTextureImage2DEXT, , FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTextureImage1DEXT, , FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTextureSubImage3DEXT, , FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTextureSubImage2DEXT, , FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTextureSubImage1DEXT, , FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetCompressedTextureImageEXT, , FgGLuint, FgGLenum, FgGLint, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedMultiTexImage3DEXT, , FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedMultiTexImage2DEXT, , FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedMultiTexImage1DEXT, , FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedMultiTexSubImage3DEXT, , FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedMultiTexSubImage2DEXT, , FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedMultiTexSubImage1DEXT, , FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetCompressedMultiTexImageEXT, , FgGLenum, FgGLenum, FgGLint, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( MatrixLoadTransposefEXT, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MatrixLoadTransposedEXT, , FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MatrixMultTransposefEXT, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MatrixMultTransposedEXT, , FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( NamedBufferDataEXT, , FgGLuint, FgGLsizeiptr, const FgGLvoid *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( NamedBufferSubDataEXT, , FgGLuint, FgGLintptr, FgGLsizeiptr, const FgGLvoid * ) \
    FG_GL_FUNCTION_PTR( MapNamedBufferEXT, void *, , FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_NUM( UnmapNamedBufferEXT, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetNamedBufferParameterivEXT, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetNamedBufferPointervEXT, , FgGLuint, FgGLenum, FgGLvoid ** ) \
    FG_GL_FUNCTION_VOID( GetNamedBufferSubDataEXT, , FgGLuint, FgGLintptr, FgGLsizeiptr, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1fEXT, , FgGLuint, FgGLint, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2fEXT, , FgGLuint, FgGLint, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3fEXT, , FgGLuint, FgGLint, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4fEXT, , FgGLuint, FgGLint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1iEXT, , FgGLuint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2iEXT, , FgGLuint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3iEXT, , FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4iEXT, , FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1fvEXT, , FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2fvEXT, , FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3fvEXT, , FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4fvEXT, , FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1ivEXT, , FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2ivEXT, , FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3ivEXT, , FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4ivEXT, , FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2fvEXT, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3fvEXT, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4fvEXT, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x3fvEXT, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x2fvEXT, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x4fvEXT, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x2fvEXT, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x4fvEXT, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x3fvEXT, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TextureBufferEXT, , FgGLuint, FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( MultiTexBufferEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( TextureParameterIivEXT, , FgGLuint, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TextureParameterIuivEXT, , FgGLuint, FgGLenum, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetTextureParameterIivEXT, , FgGLuint, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetTextureParameterIuivEXT, , FgGLuint, FgGLenum, FgGLenum, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( MultiTexParameterIivEXT, , FgGLenum, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexParameterIuivEXT, , FgGLenum, FgGLenum, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetMultiTexParameterIivEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetMultiTexParameterIuivEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1uiEXT, , FgGLuint, FgGLint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2uiEXT, , FgGLuint, FgGLint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3uiEXT, , FgGLuint, FgGLint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4uiEXT, , FgGLuint, FgGLint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1uivEXT, , FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2uivEXT, , FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3uivEXT, , FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4uivEXT, , FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameters4fvEXT, , FgGLuint, FgGLenum, FgGLuint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameterI4iEXT, , FgGLuint, FgGLenum, FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameterI4ivEXT, , FgGLuint, FgGLenum, FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParametersI4ivEXT, , FgGLuint, FgGLenum, FgGLuint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameterI4uiEXT, , FgGLuint, FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameterI4uivEXT, , FgGLuint, FgGLenum, FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParametersI4uivEXT, , FgGLuint, FgGLenum, FgGLuint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetNamedProgramLocalParameterIivEXT, , FgGLuint, FgGLenum, FgGLuint, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetNamedProgramLocalParameterIuivEXT, , FgGLuint, FgGLenum, FgGLuint, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( EnableClientStateiEXT, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DisableClientStateiEXT, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetFloati_vEXT, , FgGLenum, FgGLuint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetDoublei_vEXT, , FgGLenum, FgGLuint, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetPointeri_vEXT, , FgGLenum, FgGLuint, FgGLvoid ** ) \
    FG_GL_FUNCTION_VOID( NamedProgramStringEXT, , FgGLuint, FgGLenum, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameter4dEXT, , FgGLuint, FgGLenum, FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameter4dvEXT, , FgGLuint, FgGLenum, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameter4fEXT, , FgGLuint, FgGLenum, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameter4fvEXT, , FgGLuint, FgGLenum, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetNamedProgramLocalParameterdvEXT, , FgGLuint, FgGLenum, FgGLuint, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetNamedProgramLocalParameterfvEXT, , FgGLuint, FgGLenum, FgGLuint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetNamedProgramivEXT, , FgGLuint, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetNamedProgramStringEXT, , FgGLuint, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( NamedRenderbufferStorageEXT, , FgGLuint, FgGLenum, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetNamedRenderbufferParameterivEXT, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( NamedRenderbufferStorageMultisampleEXT, , FgGLuint, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( NamedRenderbufferStorageMultisampleCoverageEXT, , FgGLuint, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_NUM( CheckNamedFramebufferStatusEXT, FgGLenum, , FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferTexture1DEXT, , FgGLuint, FgGLenum, FgGLenum, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferTexture2DEXT, , FgGLuint, FgGLenum, FgGLenum, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferTexture3DEXT, , FgGLuint, FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferRenderbufferEXT, , FgGLuint, FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetNamedFramebufferAttachmentParameterivEXT, , FgGLuint, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GenerateTextureMipmapEXT, , FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GenerateMultiTexMipmapEXT, , FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( FramebufferDrawBufferEXT, , FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( FramebufferDrawBuffersEXT, , FgGLuint, FgGLsizei, const FgGLenum * ) \
    FG_GL_FUNCTION_VOID( FramebufferReadBufferEXT, , FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetFramebufferParameterivEXT, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( NamedCopyBufferSubDataEXT, , FgGLuint, FgGLuint, FgGLintptr, FgGLintptr, FgGLsizeiptr ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferTextureEXT, , FgGLuint, FgGLenum, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferTextureLayerEXT, , FgGLuint, FgGLenum, FgGLuint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferTextureFaceEXT, , FgGLuint, FgGLenum, FgGLuint, FgGLint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( TextureRenderbufferEXT, , FgGLuint, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( MultiTexRenderbufferEXT, , FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexOffsetEXT, , FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( VertexArrayColorOffsetEXT, , FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( VertexArrayEdgeFlagOffsetEXT, , FgGLuint, FgGLuint, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( VertexArrayIndexOffsetEXT, , FgGLuint, FgGLuint, FgGLenum, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( VertexArrayNormalOffsetEXT, , FgGLuint, FgGLuint, FgGLenum, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( VertexArrayTexCoordOffsetEXT, , FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( VertexArrayMultiTexCoordOffsetEXT, , FgGLuint, FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( VertexArrayFogCoordOffsetEXT, , FgGLuint, FgGLuint, FgGLenum, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( VertexArraySecondaryColorOffsetEXT, , FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribOffsetEXT, , FgGLuint, FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLboolean, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribIOffsetEXT, , FgGLuint, FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( EnableVertexArrayEXT, , FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( DisableVertexArrayEXT, , FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( EnableVertexArrayAttribEXT, , FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DisableVertexArrayAttribEXT, , FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetVertexArrayIntegervEXT, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVertexArrayPointervEXT, , FgGLuint, FgGLenum, FgGLvoid ** ) \
    FG_GL_FUNCTION_VOID( GetVertexArrayIntegeri_vEXT, , FgGLuint, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVertexArrayPointeri_vEXT, , FgGLuint, FgGLuint, FgGLenum, FgGLvoid ** ) \
    FG_GL_FUNCTION_PTR( MapNamedBufferRangeEXT, void *, , FgGLuint, FgGLintptr, FgGLsizeiptr, FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( FlushMappedNamedBufferRangeEXT, , FgGLuint, FgGLintptr, FgGLsizeiptr ) \
    FG_GL_FUNCTION_VOID( NamedBufferStorageEXT, , FgGLuint, FgGLsizeiptr, const void *, FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( ClearNamedBufferDataEXT, , FgGLuint, FgGLenum, FgGLenum, FgGLenum, const void * ) \
    FG_GL_FUNCTION_VOID( ClearNamedBufferSubDataEXT, , FgGLuint, FgGLenum, FgGLenum, FgGLenum, FgGLsizeiptr, FgGLsizeiptr, const void * ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferParameteriEXT, , FgGLuint, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( GetNamedFramebufferParameterivEXT, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1dEXT, , FgGLuint, FgGLint, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2dEXT, , FgGLuint, FgGLint, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3dEXT, , FgGLuint, FgGLint, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4dEXT, , FgGLuint, FgGLint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1dvEXT, , FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2dvEXT, , FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3dvEXT, , FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4dvEXT, , FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2dvEXT, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3dvEXT, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4dvEXT, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x3dvEXT, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x4dvEXT, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x2dvEXT, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x4dvEXT, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x2dvEXT, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x3dvEXT, , FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( TextureBufferRangeEXT, , FgGLuint, FgGLenum, FgGLenum, FgGLuint, FgGLintptr, FgGLsizeiptr ) \
    FG_GL_FUNCTION_VOID( TextureStorage1DEXT, , FgGLuint, FgGLenum, FgGLsizei, FgGLenum, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( TextureStorage2DEXT, , FgGLuint, FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( TextureStorage3DEXT, , FgGLuint, FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( TextureStorage2DMultisampleEXT, , FgGLuint, FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( TextureStorage3DMultisampleEXT, , FgGLuint, FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( VertexArrayBindVertexBufferEXT, , FgGLuint, FgGLuint, FgGLuint, FgGLintptr, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribFormatEXT, , FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLboolean, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribIFormatEXT, , FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribLFormatEXT, , FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribBindingEXT, , FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexBindingDivisorEXT, , FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribLOffsetEXT, , FgGLuint, FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( TexturePageCommitmentEXT, , FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribDivisorEXT, , FgGLuint, FgGLuint, FgGLuint ) \
\
    /* GL_EXT_draw_buffers2 */ \
    FG_GL_FUNCTION_VOID( ColorMaskIndexedEXT, , FgGLuint, FgGLboolean, FgGLboolean, FgGLboolean, FgGLboolean ) \
\
    /* GL_EXT_draw_instanced */ \
    FG_GL_FUNCTION_VOID( DrawArraysInstancedEXT, , FgGLenum, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( DrawElementsInstancedEXT, , FgGLenum, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLsizei ) \
\
    /* GL_EXT_draw_range_elements */ \
    FG_GL_FUNCTION_VOID( DrawRangeElementsEXT, , FgGLenum, FgGLuint, FgGLuint, FgGLsizei, FgGLenum, const FgGLvoid * ) \
\
    /* GL_EXT_fog_coord */ \
    FG_GL_FUNCTION_VOID( FogCoordfEXT, , FgGLfloat ) \
    FG_GL_FUNCTION_VOID( FogCoordfvEXT, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( FogCoorddEXT, , FgGLdouble ) \
    FG_GL_FUNCTION_VOID( FogCoorddvEXT, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( FogCoordPointerEXT, , FgGLenum, FgGLsizei, const FgGLvoid * ) \
\
    /* GL_EXT_framebuffer_blit */ \
    FG_GL_FUNCTION_VOID( BlitFramebufferEXT, , FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLbitfield, FgGLenum ) \
\
    /* GL_EXT_framebuffer_multisample */ \
    FG_GL_FUNCTION_VOID( RenderbufferStorageMultisampleEXT, , FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei ) \
\
    /* GL_EXT_framebuffer_multisample_blit_scaled */ \
\
    /* GL_EXT_framebuffer_object */ \
    FG_GL_FUNCTION_NUM( IsRenderbufferEXT, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( BindRenderbufferEXT, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteRenderbuffersEXT, , FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenRenderbuffersEXT, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( RenderbufferStorageEXT, , FgGLenum, FgGLenum, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetRenderbufferParameterivEXT, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_NUM( IsFramebufferEXT, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( BindFramebufferEXT, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteFramebuffersEXT, , FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenFramebuffersEXT, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( CheckFramebufferStatusEXT, FgGLenum, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( FramebufferTexture1DEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferTexture2DEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferTexture3DEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferRenderbufferEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetFramebufferAttachmentParameterivEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GenerateMipmapEXT, , FgGLenum ) \
\
    /* GL_EXT_framebuffer_sRGB */ \
\
    /* GL_EXT_geometry_shader4 */ \
    FG_GL_FUNCTION_VOID( ProgramParameteriEXT, , FgGLuint, FgGLenum, FgGLint ) \
\
    /* GL_EXT_gpu_program_parameters */ \
    FG_GL_FUNCTION_VOID( ProgramEnvParameters4fvEXT, , FgGLenum, FgGLuint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameters4fvEXT, , FgGLenum, FgGLuint, FgGLsizei, const FgGLfloat * ) \
\
    /* GL_EXT_gpu_shader4 */ \
    FG_GL_FUNCTION_VOID( GetUniformuivEXT, , FgGLuint, FgGLint, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( BindFragDataLocationEXT, , FgGLuint, FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_NUM( GetFragDataLocationEXT, FgGLint, , FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( Uniform1uiEXT, , FgGLint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Uniform2uiEXT, , FgGLint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Uniform3uiEXT, , FgGLint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Uniform4uiEXT, , FgGLint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Uniform1uivEXT, , FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( Uniform2uivEXT, , FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( Uniform3uivEXT, , FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( Uniform4uivEXT, , FgGLint, FgGLsizei, const FgGLuint * ) \
\
    /* GL_EXT_histogram */ \
    FG_GL_FUNCTION_VOID( GetHistogramEXT, , FgGLenum, FgGLboolean, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetHistogramParameterfvEXT, , FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetHistogramParameterivEXT, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetMinmaxEXT, , FgGLenum, FgGLboolean, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetMinmaxParameterfvEXT, , FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetMinmaxParameterivEXT, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( HistogramEXT, , FgGLenum, FgGLsizei, FgGLenum, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( MinmaxEXT, , FgGLenum, FgGLenum, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( ResetHistogramEXT, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( ResetMinmaxEXT, , FgGLenum ) \
\
    /* GL_EXT_index_array_formats */ \
\
    /* GL_EXT_index_func */ \
    FG_GL_FUNCTION_VOID( IndexFuncEXT, , FgGLenum, FgGLclampf ) \
\
    /* GL_EXT_index_material */ \
    FG_GL_FUNCTION_VOID( IndexMaterialEXT, , FgGLenum, FgGLenum ) \
\
    /* GL_EXT_index_texture */ \
\
    /* GL_EXT_light_texture */ \
    FG_GL_FUNCTION_VOID( ApplyTextureEXT, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( TextureLightEXT, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( TextureMaterialEXT, , FgGLenum, FgGLenum ) \
\
    /* GL_EXT_misc_attribute */ \
\
    /* GL_EXT_multi_draw_arrays */ \
    FG_GL_FUNCTION_VOID( MultiDrawArraysEXT, , FgGLenum, const FgGLint *, const FgGLsizei *, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( MultiDrawElementsEXT, , FgGLenum, const FgGLsizei *, FgGLenum, const FgGLvoid *const*, FgGLsizei ) \
\
    /* GL_EXT_multisample */ \
    FG_GL_FUNCTION_VOID( SampleMaskEXT, , FgGLclampf, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( SamplePatternEXT, , FgGLenum ) \
\
    /* GL_EXT_packed_depth_stencil */ \
\
    /* GL_EXT_packed_float */ \
\
    /* GL_EXT_packed_pixels */ \
\
    /* GL_EXT_paletted_texture */ \
    FG_GL_FUNCTION_VOID( ColorTableEXT, , FgGLenum, FgGLenum, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetColorTableEXT, , FgGLenum, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetColorTableParameterivEXT, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetColorTableParameterfvEXT, , FgGLenum, FgGLenum, FgGLfloat * ) \
\
    /* GL_EXT_pixel_buffer_object */ \
\
    /* GL_EXT_pixel_transform */ \
    FG_GL_FUNCTION_VOID( PixelTransformParameteriEXT, , FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( PixelTransformParameterfEXT, , FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( PixelTransformParameterivEXT, , FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( PixelTransformParameterfvEXT, , FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetPixelTransformParameterivEXT, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetPixelTransformParameterfvEXT, , FgGLenum, FgGLenum, FgGLfloat * ) \
\
    /* GL_EXT_pixel_transform_color_table */ \
\
    /* GL_EXT_point_parameters */ \
    FG_GL_FUNCTION_VOID( PointParameterfEXT, , FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( PointParameterfvEXT, , FgGLenum, const FgGLfloat * ) \
\
    /* GL_EXT_polygon_offset */ \
    FG_GL_FUNCTION_VOID( PolygonOffsetEXT, , FgGLfloat, FgGLfloat ) \
\
    /* GL_EXT_provoking_vertex */ \
    FG_GL_FUNCTION_VOID( ProvokingVertexEXT, , FgGLenum ) \
\
    /* GL_EXT_rescale_normal */ \
\
    /* GL_EXT_secondary_color */ \
    FG_GL_FUNCTION_VOID( SecondaryColor3bEXT, , FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3bvEXT, , const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3dEXT, , FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3dvEXT, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3fEXT, , FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3fvEXT, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3iEXT, , FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3ivEXT, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3sEXT, , FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3svEXT, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3ubEXT, , FgGLubyte, FgGLubyte, FgGLubyte ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3ubvEXT, , const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3uiEXT, , FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3uivEXT, , const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3usEXT, , FgGLushort, FgGLushort, FgGLushort ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3usvEXT, , const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( SecondaryColorPointerEXT, , FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
\
    /* GL_EXT_separate_shader_objects */ \
    FG_GL_FUNCTION_VOID( UseShaderProgramEXT, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ActiveProgramEXT, , FgGLuint ) \
    FG_GL_FUNCTION_NUM( CreateShaderProgramEXT, FgGLuint, , FgGLenum, const FgGLchar * ) \
\
    /* GL_EXT_separate_specular_color */ \
\
    /* GL_EXT_shader_image_load_store */ \
    FG_GL_FUNCTION_VOID( BindImageTextureEXT, , FgGLuint, FgGLuint, FgGLint, FgGLboolean, FgGLint, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( MemoryBarrierEXT, , FgGLbitfield ) \
\
    /* GL_EXT_shadow_funcs */ \
\
    /* GL_EXT_shared_texture_palette */ \
\
    /* GL_EXT_stencil_clear_tag */ \
    FG_GL_FUNCTION_VOID( StencilClearTagEXT, , FgGLsizei, FgGLuint ) \
\
    /* GL_EXT_stencil_two_side */ \
    FG_GL_FUNCTION_VOID( ActiveStencilFaceEXT, , FgGLenum ) \
\
    /* GL_EXT_stencil_wrap */ \
\
    /* GL_EXT_subtexture */ \
    FG_GL_FUNCTION_VOID( TexSubImage1DEXT, , FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TexSubImage2DEXT, , FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
\
    /* GL_EXT_texture */ \
\
    /* GL_EXT_texture3D */ \
    FG_GL_FUNCTION_VOID( TexImage3DEXT, , FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TexSubImage3DEXT, , FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
\
    /* GL_EXT_texture_array */ \
\
    /* GL_EXT_texture_buffer_object */ \
    FG_GL_FUNCTION_VOID( TexBufferEXT, , FgGLenum, FgGLenum, FgGLuint ) \
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
    FG_GL_FUNCTION_VOID( TexParameterIivEXT, , FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TexParameterIuivEXT, , FgGLenum, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetTexParameterIivEXT, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetTexParameterIuivEXT, , FgGLenum, FgGLenum, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ClearColorIiEXT, , FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( ClearColorIuiEXT, , FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
\
    /* GL_EXT_texture_lod_bias */ \
\
    /* GL_EXT_texture_mirror_clamp */ \
\
    /* GL_EXT_texture_object */ \
    FG_GL_FUNCTION_NUM( AreTexturesResidentEXT, FgGLboolean, , FgGLsizei, const FgGLuint *, FgGLboolean * ) \
    FG_GL_FUNCTION_VOID( BindTextureEXT, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteTexturesEXT, , FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenTexturesEXT, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsTextureEXT, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( PrioritizeTexturesEXT, , FgGLsizei, const FgGLuint *, const FgGLclampf * ) \
\
    /* GL_EXT_texture_perturb_normal */ \
    FG_GL_FUNCTION_VOID( TextureNormalEXT, , FgGLenum ) \
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
    FG_GL_FUNCTION_VOID( GetQueryObjecti64vEXT, , FgGLuint, FgGLenum, FgGLint64 * ) \
    FG_GL_FUNCTION_VOID( GetQueryObjectui64vEXT, , FgGLuint, FgGLenum, FgGLuint64 * ) \
\
    /* GL_EXT_transform_feedback */ \
    FG_GL_FUNCTION_VOID( BeginTransformFeedbackEXT, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( EndTransformFeedbackEXT ) \
    FG_GL_FUNCTION_VOID( BindBufferRangeEXT, , FgGLenum, FgGLuint, FgGLuint, FgGLintptr, FgGLsizeiptr ) \
    FG_GL_FUNCTION_VOID( BindBufferOffsetEXT, , FgGLenum, FgGLuint, FgGLuint, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( BindBufferBaseEXT, , FgGLenum, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( TransformFeedbackVaryingsEXT, , FgGLuint, FgGLsizei, const FgGLchar *const*, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetTransformFeedbackVaryingEXT, , FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLsizei *, FgGLenum *, FgGLchar * ) \
\
    /* GL_EXT_vertex_array */ \
    FG_GL_FUNCTION_VOID( ArrayElementEXT, , FgGLint ) \
    FG_GL_FUNCTION_VOID( ColorPointerEXT, , FgGLint, FgGLenum, FgGLsizei, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( DrawArraysEXT, , FgGLenum, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( EdgeFlagPointerEXT, , FgGLsizei, FgGLsizei, const FgGLboolean * ) \
    FG_GL_FUNCTION_VOID( GetPointervEXT, , FgGLenum, FgGLvoid ** ) \
    FG_GL_FUNCTION_VOID( IndexPointerEXT, , FgGLenum, FgGLsizei, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( NormalPointerEXT, , FgGLenum, FgGLsizei, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TexCoordPointerEXT, , FgGLint, FgGLenum, FgGLsizei, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( VertexPointerEXT, , FgGLint, FgGLenum, FgGLsizei, FgGLsizei, const FgGLvoid * ) \
\
    /* GL_EXT_vertex_array_bgra */ \
\
    /* GL_EXT_vertex_attrib_64bit */ \
    FG_GL_FUNCTION_VOID( VertexAttribL1dEXT, , FgGLuint, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2dEXT, , FgGLuint, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3dEXT, , FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4dEXT, , FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1dvEXT, , FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2dvEXT, , FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3dvEXT, , FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4dvEXT, , FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribLPointerEXT, , FgGLuint, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribLdvEXT, , FgGLuint, FgGLenum, FgGLdouble * ) \
\
    /* GL_EXT_vertex_shader */ \
    FG_GL_FUNCTION_VOID( BeginVertexShaderEXT ) \
    FG_GL_FUNCTION_VOID( EndVertexShaderEXT ) \
    FG_GL_FUNCTION_VOID( BindVertexShaderEXT, , FgGLuint ) \
    FG_GL_FUNCTION_NUM( GenVertexShadersEXT, FgGLuint, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteVertexShaderEXT, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( ShaderOp1EXT, , FgGLenum, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ShaderOp2EXT, , FgGLenum, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ShaderOp3EXT, , FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( SwizzleEXT, , FgGLuint, FgGLuint, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( WriteMaskEXT, , FgGLuint, FgGLuint, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( InsertComponentEXT, , FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ExtractComponentEXT, , FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_NUM( GenSymbolsEXT, FgGLuint, , FgGLenum, FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( SetInvariantEXT, , FgGLuint, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( SetLocalConstantEXT, , FgGLuint, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( VariantbvEXT, , FgGLuint, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( VariantsvEXT, , FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VariantivEXT, , FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VariantfvEXT, , FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VariantdvEXT, , FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VariantubvEXT, , FgGLuint, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( VariantusvEXT, , FgGLuint, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( VariantuivEXT, , FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VariantPointerEXT, , FgGLuint, FgGLenum, FgGLuint, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( EnableVariantClientStateEXT, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( DisableVariantClientStateEXT, , FgGLuint ) \
    FG_GL_FUNCTION_NUM( BindLightParameterEXT, FgGLuint, , FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_NUM( BindMaterialParameterEXT, FgGLuint, , FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_NUM( BindTexGenParameterEXT, FgGLuint, , FgGLenum, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_NUM( BindTextureUnitParameterEXT, FgGLuint, , FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_NUM( BindParameterEXT, FgGLuint, , FgGLenum ) \
    FG_GL_FUNCTION_NUM( IsVariantEnabledEXT, FgGLboolean, , FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetVariantBooleanvEXT, , FgGLuint, FgGLenum, FgGLboolean * ) \
    FG_GL_FUNCTION_VOID( GetVariantIntegervEXT, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVariantFloatvEXT, , FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetVariantPointervEXT, , FgGLuint, FgGLenum, FgGLvoid ** ) \
    FG_GL_FUNCTION_VOID( GetInvariantBooleanvEXT, , FgGLuint, FgGLenum, FgGLboolean * ) \
    FG_GL_FUNCTION_VOID( GetInvariantIntegervEXT, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetInvariantFloatvEXT, , FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetLocalConstantBooleanvEXT, , FgGLuint, FgGLenum, FgGLboolean * ) \
    FG_GL_FUNCTION_VOID( GetLocalConstantIntegervEXT, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetLocalConstantFloatvEXT, , FgGLuint, FgGLenum, FgGLfloat * ) \
\
    /* GL_EXT_vertex_weighting */ \
    FG_GL_FUNCTION_VOID( VertexWeightfEXT, , FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexWeightfvEXT, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexWeightPointerEXT, , FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
\
    /* GL_EXT_x11_sync_object */ \
    FG_GL_FUNCTION_PTR( ImportSyncEXT, FgGLsync, , FgGLenum, FgGLintptr, FgGLbitfield ) \
\
    /* GL_GREMEDY_frame_terminator */ \
    FG_GL_FUNCTION_VOID( FrameTerminatorGREMEDY ) \
\
    /* GL_GREMEDY_string_marker */ \
    FG_GL_FUNCTION_VOID( StringMarkerGREMEDY, , FgGLsizei, const FgGLvoid * ) \
\
    /* GL_HP_convolution_border_modes */ \
\
    /* GL_HP_image_transform */ \
    FG_GL_FUNCTION_VOID( ImageTransformParameteriHP, , FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( ImageTransformParameterfHP, , FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ImageTransformParameterivHP, , FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ImageTransformParameterfvHP, , FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetImageTransformParameterivHP, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetImageTransformParameterfvHP, , FgGLenum, FgGLenum, FgGLfloat * ) \
\
    /* GL_HP_occlusion_test */ \
\
    /* GL_HP_texture_lighting */ \
\
    /* GL_IBM_cull_vertex */ \
\
    /* GL_IBM_multimode_draw_arrays */ \
    FG_GL_FUNCTION_VOID( MultiModeDrawArraysIBM, , const FgGLenum *, const FgGLint *, const FgGLsizei *, FgGLsizei, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiModeDrawElementsIBM, , const FgGLenum *, const FgGLsizei *, FgGLenum, const FgGLvoid *const*, FgGLsizei, FgGLint ) \
\
    /* GL_IBM_rasterpos_clip */ \
\
    /* GL_IBM_static_data */ \
    FG_GL_FUNCTION_VOID( FlushStaticDataIBM, , FgGLenum ) \
\
    /* GL_IBM_texture_mirrored_repeat */ \
\
    /* GL_IBM_vertex_array_lists */ \
    FG_GL_FUNCTION_VOID( ColorPointerListIBM, , FgGLint, FgGLenum, FgGLint, const FgGLvoid **, FgGLint ) \
    FG_GL_FUNCTION_VOID( SecondaryColorPointerListIBM, , FgGLint, FgGLenum, FgGLint, const FgGLvoid **, FgGLint ) \
    FG_GL_FUNCTION_VOID( EdgeFlagPointerListIBM, , FgGLint, const FgGLboolean **, FgGLint ) \
    FG_GL_FUNCTION_VOID( FogCoordPointerListIBM, , FgGLenum, FgGLint, const FgGLvoid **, FgGLint ) \
    FG_GL_FUNCTION_VOID( IndexPointerListIBM, , FgGLenum, FgGLint, const FgGLvoid **, FgGLint ) \
    FG_GL_FUNCTION_VOID( NormalPointerListIBM, , FgGLenum, FgGLint, const FgGLvoid **, FgGLint ) \
    FG_GL_FUNCTION_VOID( TexCoordPointerListIBM, , FgGLint, FgGLenum, FgGLint, const FgGLvoid **, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexPointerListIBM, , FgGLint, FgGLenum, FgGLint, const FgGLvoid **, FgGLint ) \
\
    /* GL_INGR_blend_func_separate */ \
    FG_GL_FUNCTION_VOID( BlendFuncSeparateINGR, , FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
\
    /* GL_INGR_color_clamp */ \
\
    /* GL_INGR_interlace_read */ \
\
    /* GL_INTEL_map_texture */ \
    FG_GL_FUNCTION_VOID( SyncTextureINTEL, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( UnmapTexture2DINTEL, , FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_PTR( MapTexture2DINTEL, void *, , FgGLuint, FgGLint, FgGLbitfield, const FgGLint *, const FgGLenum * ) \
\
    /* GL_INTEL_parallel_arrays */ \
    FG_GL_FUNCTION_VOID( VertexPointervINTEL, , FgGLint, FgGLenum, const FgGLvoid ** ) \
    FG_GL_FUNCTION_VOID( NormalPointervINTEL, , FgGLenum, const FgGLvoid ** ) \
    FG_GL_FUNCTION_VOID( ColorPointervINTEL, , FgGLint, FgGLenum, const FgGLvoid ** ) \
    FG_GL_FUNCTION_VOID( TexCoordPointervINTEL, , FgGLint, FgGLenum, const FgGLvoid ** ) \
\
    /* GL_MESAX_texture_stack */ \
\
    /* GL_MESA_pack_invert */ \
\
    /* GL_MESA_resize_buffers */ \
    FG_GL_FUNCTION_VOID( ResizeBuffersMESA ) \
\
    /* GL_MESA_window_pos */ \
    FG_GL_FUNCTION_VOID( WindowPos2dMESA, , FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( WindowPos2dvMESA, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( WindowPos2fMESA, , FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( WindowPos2fvMESA, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( WindowPos2iMESA, , FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( WindowPos2ivMESA, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( WindowPos2sMESA, , FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( WindowPos2svMESA, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( WindowPos3dMESA, , FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( WindowPos3dvMESA, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( WindowPos3fMESA, , FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( WindowPos3fvMESA, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( WindowPos3iMESA, , FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( WindowPos3ivMESA, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( WindowPos3sMESA, , FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( WindowPos3svMESA, , const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( WindowPos4dMESA, , FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( WindowPos4dvMESA, , const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( WindowPos4fMESA, , FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( WindowPos4fvMESA, , const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( WindowPos4iMESA, , FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( WindowPos4ivMESA, , const FgGLint * ) \
    FG_GL_FUNCTION_VOID( WindowPos4sMESA, , FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( WindowPos4svMESA, , const FgGLshort * ) \
\
    /* GL_MESA_ycbcr_texture */ \
\
    /* GL_NVX_conditional_render */ \
    FG_GL_FUNCTION_VOID( BeginConditionalRenderNVX, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( EndConditionalRenderNVX ) \
\
    /* GL_NV_bindless_multi_draw_indirect */ \
    FG_GL_FUNCTION_VOID( MultiDrawArraysIndirectBindlessNV, , FgGLenum, const FgGLvoid *, FgGLsizei, FgGLsizei, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiDrawElementsIndirectBindlessNV, , FgGLenum, FgGLenum, const FgGLvoid *, FgGLsizei, FgGLsizei, FgGLint ) \
\
    /* GL_NV_bindless_texture */ \
    FG_GL_FUNCTION_NUM( GetTextureHandleNV, FgGLuint64, , FgGLuint ) \
    FG_GL_FUNCTION_NUM( GetTextureSamplerHandleNV, FgGLuint64, , FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( MakeTextureHandleResidentNV, , FgGLuint64 ) \
    FG_GL_FUNCTION_VOID( MakeTextureHandleNonResidentNV, , FgGLuint64 ) \
    FG_GL_FUNCTION_NUM( GetImageHandleNV, FgGLuint64, , FgGLuint, FgGLint, FgGLboolean, FgGLint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MakeImageHandleResidentNV, , FgGLuint64, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MakeImageHandleNonResidentNV, , FgGLuint64 ) \
    FG_GL_FUNCTION_VOID( UniformHandleui64NV, , FgGLint, FgGLuint64 ) \
    FG_GL_FUNCTION_VOID( UniformHandleui64vNV, , FgGLint, FgGLsizei, const FgGLuint64 * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformHandleui64NV, , FgGLuint, FgGLint, FgGLuint64 ) \
    FG_GL_FUNCTION_VOID( ProgramUniformHandleui64vNV, , FgGLuint, FgGLint, FgGLsizei, const FgGLuint64 * ) \
    FG_GL_FUNCTION_NUM( IsTextureHandleResidentNV, FgGLboolean, , FgGLuint64 ) \
    FG_GL_FUNCTION_NUM( IsImageHandleResidentNV, FgGLboolean, , FgGLuint64 ) \
\
    /* GL_NV_blend_equation_advanced */ \
    FG_GL_FUNCTION_VOID( BlendParameteriNV, , FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( BlendBarrierNV ) \
\
    /* GL_NV_blend_equation_advanced_coherent */ \
\
    /* GL_NV_blend_square */ \
\
    /* GL_NV_compute_program5 */ \
\
    /* GL_NV_conditional_render */ \
    FG_GL_FUNCTION_VOID( BeginConditionalRenderNV, , FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( EndConditionalRenderNV ) \
\
    /* GL_NV_copy_depth_to_color */ \
\
    /* GL_NV_copy_image */ \
    FG_GL_FUNCTION_VOID( CopyImageSubDataNV, , FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei ) \
\
    /* GL_NV_deep_texture3D */ \
\
    /* GL_NV_depth_buffer_float */ \
    FG_GL_FUNCTION_VOID( DepthRangedNV, , FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ClearDepthdNV, , FgGLdouble ) \
    FG_GL_FUNCTION_VOID( DepthBoundsdNV, , FgGLdouble, FgGLdouble ) \
\
    /* GL_NV_depth_clamp */ \
\
    /* GL_NV_draw_texture */ \
    FG_GL_FUNCTION_VOID( DrawTextureNV, , FgGLuint, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
\
    /* GL_NV_evaluators */ \
    FG_GL_FUNCTION_VOID( MapControlPointsNV, , FgGLenum, FgGLuint, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLint, FgGLboolean, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( MapParameterivNV, , FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MapParameterfvNV, , FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetMapControlPointsNV, , FgGLenum, FgGLuint, FgGLenum, FgGLsizei, FgGLsizei, FgGLboolean, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetMapParameterivNV, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetMapParameterfvNV, , FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetMapAttribParameterivNV, , FgGLenum, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetMapAttribParameterfvNV, , FgGLenum, FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( EvalMapsNV, , FgGLenum, FgGLenum ) \
\
    /* GL_NV_explicit_multisample */ \
    FG_GL_FUNCTION_VOID( GetMultisamplefvNV, , FgGLenum, FgGLuint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( SampleMaskIndexedNV, , FgGLuint, FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( TexRenderbufferNV, , FgGLenum, FgGLuint ) \
\
    /* GL_NV_fence */ \
    FG_GL_FUNCTION_VOID( DeleteFencesNV, , FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenFencesNV, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsFenceNV, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_NUM( TestFenceNV, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetFenceivNV, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( FinishFenceNV, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( SetFenceNV, , FgGLuint, FgGLenum ) \
\
    /* GL_NV_float_buffer */ \
\
    /* GL_NV_fog_distance */ \
\
    /* GL_NV_fragment_program */ \
    FG_GL_FUNCTION_VOID( ProgramNamedParameter4fNV, , FgGLuint, FgGLsizei, const FgGLubyte *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramNamedParameter4fvNV, , FgGLuint, FgGLsizei, const FgGLubyte *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramNamedParameter4dNV, , FgGLuint, FgGLsizei, const FgGLubyte *, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramNamedParameter4dvNV, , FgGLuint, FgGLsizei, const FgGLubyte *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetProgramNamedParameterfvNV, , FgGLuint, FgGLsizei, const FgGLubyte *, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetProgramNamedParameterdvNV, , FgGLuint, FgGLsizei, const FgGLubyte *, FgGLdouble * ) \
\
    /* GL_NV_fragment_program2 */ \
\
    /* GL_NV_fragment_program4 */ \
\
    /* GL_NV_fragment_program_option */ \
\
    /* GL_NV_framebuffer_multisample_coverage */ \
    FG_GL_FUNCTION_VOID( RenderbufferStorageMultisampleCoverageNV, , FgGLenum, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei ) \
\
    /* GL_NV_geometry_program4 */ \
    FG_GL_FUNCTION_VOID( ProgramVertexLimitNV, , FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferTextureEXT, , FgGLenum, FgGLenum, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferTextureLayerEXT, , FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferTextureFaceEXT, , FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLenum ) \
\
    /* GL_NV_geometry_shader4 */ \
\
    /* GL_NV_gpu_program4 */ \
    FG_GL_FUNCTION_VOID( ProgramLocalParameterI4iNV, , FgGLenum, FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameterI4ivNV, , FgGLenum, FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParametersI4ivNV, , FgGLenum, FgGLuint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameterI4uiNV, , FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameterI4uivNV, , FgGLenum, FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParametersI4uivNV, , FgGLenum, FgGLuint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameterI4iNV, , FgGLenum, FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameterI4ivNV, , FgGLenum, FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParametersI4ivNV, , FgGLenum, FgGLuint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameterI4uiNV, , FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameterI4uivNV, , FgGLenum, FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParametersI4uivNV, , FgGLenum, FgGLuint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetProgramLocalParameterIivNV, , FgGLenum, FgGLuint, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetProgramLocalParameterIuivNV, , FgGLenum, FgGLuint, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetProgramEnvParameterIivNV, , FgGLenum, FgGLuint, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetProgramEnvParameterIuivNV, , FgGLenum, FgGLuint, FgGLuint * ) \
\
    /* GL_NV_gpu_program5 */ \
    FG_GL_FUNCTION_VOID( ProgramSubroutineParametersuivNV, , FgGLenum, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetProgramSubroutineParameteruivNV, , FgGLenum, FgGLuint, FgGLuint * ) \
\
    /* GL_NV_gpu_program5_mem_extended */ \
\
    /* GL_NV_gpu_shader5 */ \
    FG_GL_FUNCTION_VOID( Uniform1i64NV, , FgGLint, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( Uniform2i64NV, , FgGLint, FgGLint64EXT, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( Uniform3i64NV, , FgGLint, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( Uniform4i64NV, , FgGLint, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( Uniform1i64vNV, , FgGLint, FgGLsizei, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( Uniform2i64vNV, , FgGLint, FgGLsizei, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( Uniform3i64vNV, , FgGLint, FgGLsizei, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( Uniform4i64vNV, , FgGLint, FgGLsizei, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( Uniform1ui64NV, , FgGLint, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( Uniform2ui64NV, , FgGLint, FgGLuint64EXT, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( Uniform3ui64NV, , FgGLint, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( Uniform4ui64NV, , FgGLint, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( Uniform1ui64vNV, , FgGLint, FgGLsizei, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( Uniform2ui64vNV, , FgGLint, FgGLsizei, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( Uniform3ui64vNV, , FgGLint, FgGLsizei, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( Uniform4ui64vNV, , FgGLint, FgGLsizei, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( GetUniformi64vNV, , FgGLuint, FgGLint, FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1i64NV, , FgGLuint, FgGLint, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2i64NV, , FgGLuint, FgGLint, FgGLint64EXT, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3i64NV, , FgGLuint, FgGLint, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4i64NV, , FgGLuint, FgGLint, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1i64vNV, , FgGLuint, FgGLint, FgGLsizei, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2i64vNV, , FgGLuint, FgGLint, FgGLsizei, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3i64vNV, , FgGLuint, FgGLint, FgGLsizei, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4i64vNV, , FgGLuint, FgGLint, FgGLsizei, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1ui64NV, , FgGLuint, FgGLint, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2ui64NV, , FgGLuint, FgGLint, FgGLuint64EXT, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3ui64NV, , FgGLuint, FgGLint, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4ui64NV, , FgGLuint, FgGLint, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1ui64vNV, , FgGLuint, FgGLint, FgGLsizei, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2ui64vNV, , FgGLuint, FgGLint, FgGLsizei, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3ui64vNV, , FgGLuint, FgGLint, FgGLsizei, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4ui64vNV, , FgGLuint, FgGLint, FgGLsizei, const FgGLuint64EXT * ) \
\
    /* GL_NV_half_float */ \
    FG_GL_FUNCTION_VOID( Vertex2hNV, , FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( Vertex2hvNV, , const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( Vertex3hNV, , FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( Vertex3hvNV, , const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( Vertex4hNV, , FgGLhalfNV, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( Vertex4hvNV, , const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( Normal3hNV, , FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( Normal3hvNV, , const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( Color3hNV, , FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( Color3hvNV, , const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( Color4hNV, , FgGLhalfNV, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( Color4hvNV, , const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( TexCoord1hNV, , FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( TexCoord1hvNV, , const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( TexCoord2hNV, , FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( TexCoord2hvNV, , const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( TexCoord3hNV, , FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( TexCoord3hvNV, , const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( TexCoord4hNV, , FgGLhalfNV, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( TexCoord4hvNV, , const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1hNV, , FgGLenum, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1hvNV, , FgGLenum, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2hNV, , FgGLenum, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2hvNV, , FgGLenum, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3hNV, , FgGLenum, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3hvNV, , FgGLenum, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4hNV, , FgGLenum, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4hvNV, , FgGLenum, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( FogCoordhNV, , FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( FogCoordhvNV, , const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3hNV, , FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3hvNV, , const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( VertexWeighthNV, , FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( VertexWeighthvNV, , const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1hNV, , FgGLuint, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1hvNV, , FgGLuint, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2hNV, , FgGLuint, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2hvNV, , FgGLuint, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3hNV, , FgGLuint, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3hvNV, , FgGLuint, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4hNV, , FgGLuint, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4hvNV, , FgGLuint, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs1hvNV, , FgGLuint, FgGLsizei, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs2hvNV, , FgGLuint, FgGLsizei, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs3hvNV, , FgGLuint, FgGLsizei, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs4hvNV, , FgGLuint, FgGLsizei, const FgGLhalfNV * ) \
\
    /* GL_NV_light_max_exponent */ \
\
    /* GL_NV_multisample_coverage */ \
\
    /* GL_NV_multisample_filter_hint */ \
\
    /* GL_NV_occlusion_query */ \
    FG_GL_FUNCTION_VOID( GenOcclusionQueriesNV, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( DeleteOcclusionQueriesNV, , FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsOcclusionQueryNV, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( BeginOcclusionQueryNV, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( EndOcclusionQueryNV ) \
    FG_GL_FUNCTION_VOID( GetOcclusionQueryivNV, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetOcclusionQueryuivNV, , FgGLuint, FgGLenum, FgGLuint * ) \
\
    /* GL_NV_packed_depth_stencil */ \
\
    /* GL_NV_parameter_buffer_object */ \
    FG_GL_FUNCTION_VOID( ProgramBufferParametersfvNV, , FgGLenum, FgGLuint, FgGLuint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramBufferParametersIivNV, , FgGLenum, FgGLuint, FgGLuint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramBufferParametersIuivNV, , FgGLenum, FgGLuint, FgGLuint, FgGLsizei, const FgGLuint * ) \
\
    /* GL_NV_parameter_buffer_object2 */ \
\
    /* GL_NV_path_rendering */ \
    FG_GL_FUNCTION_NUM( GenPathsNV, FgGLuint, , FgGLsizei ) \
    FG_GL_FUNCTION_VOID( DeletePathsNV, , FgGLuint, FgGLsizei ) \
    FG_GL_FUNCTION_NUM( IsPathNV, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( PathCommandsNV, , FgGLuint, FgGLsizei, const FgGLubyte *, FgGLsizei, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( PathCoordsNV, , FgGLuint, FgGLsizei, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( PathSubCommandsNV, , FgGLuint, FgGLsizei, FgGLsizei, FgGLsizei, const FgGLubyte *, FgGLsizei, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( PathSubCoordsNV, , FgGLuint, FgGLsizei, FgGLsizei, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( PathStringNV, , FgGLuint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( PathGlyphsNV, , FgGLuint, FgGLenum, const FgGLvoid *, FgGLbitfield, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLenum, FgGLuint, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( PathGlyphRangeNV, , FgGLuint, FgGLenum, const FgGLvoid *, FgGLbitfield, FgGLuint, FgGLsizei, FgGLenum, FgGLuint, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( WeightPathsNV, , FgGLuint, FgGLsizei, const FgGLuint *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( CopyPathNV, , FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( InterpolatePathsNV, , FgGLuint, FgGLuint, FgGLuint, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TransformPathNV, , FgGLuint, FgGLuint, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( PathParameterivNV, , FgGLuint, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( PathParameteriNV, , FgGLuint, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( PathParameterfvNV, , FgGLuint, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( PathParameterfNV, , FgGLuint, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( PathDashArrayNV, , FgGLuint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( PathStencilFuncNV, , FgGLenum, FgGLint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( PathStencilDepthOffsetNV, , FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( StencilFillPathNV, , FgGLuint, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( StencilStrokePathNV, , FgGLuint, FgGLint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( StencilFillPathInstancedNV, , FgGLsizei, FgGLenum, const FgGLvoid *, FgGLuint, FgGLenum, FgGLuint, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( StencilStrokePathInstancedNV, , FgGLsizei, FgGLenum, const FgGLvoid *, FgGLuint, FgGLint, FgGLuint, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( PathCoverDepthFuncNV, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( PathColorGenNV, , FgGLenum, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( PathTexGenNV, , FgGLenum, FgGLenum, FgGLint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( PathFogGenNV, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( CoverFillPathNV, , FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( CoverStrokePathNV, , FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( CoverFillPathInstancedNV, , FgGLsizei, FgGLenum, const FgGLvoid *, FgGLuint, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( CoverStrokePathInstancedNV, , FgGLsizei, FgGLenum, const FgGLvoid *, FgGLuint, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetPathParameterivNV, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetPathParameterfvNV, , FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetPathCommandsNV, , FgGLuint, FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( GetPathCoordsNV, , FgGLuint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetPathDashArrayNV, , FgGLuint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetPathMetricsNV, , FgGLbitfield, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLuint, FgGLsizei, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetPathMetricRangeNV, , FgGLbitfield, FgGLuint, FgGLsizei, FgGLsizei, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetPathSpacingNV, , FgGLenum, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLuint, FgGLfloat, FgGLfloat, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetPathColorGenivNV, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetPathColorGenfvNV, , FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetPathTexGenivNV, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetPathTexGenfvNV, , FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_NUM( IsPointInFillPathNV, FgGLboolean, , FgGLuint, FgGLuint, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_NUM( IsPointInStrokePathNV, FgGLboolean, , FgGLuint, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_NUM( GetPathLengthNV, FgGLfloat, , FgGLuint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_NUM( PointAlongPathNV, FgGLboolean, , FgGLuint, FgGLsizei, FgGLsizei, FgGLfloat, FgGLfloat *, FgGLfloat *, FgGLfloat *, FgGLfloat * ) \
\
    /* GL_NV_pixel_data_range */ \
    FG_GL_FUNCTION_VOID( PixelDataRangeNV, , FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( FlushPixelDataRangeNV, , FgGLenum ) \
\
    /* GL_NV_point_sprite */ \
    FG_GL_FUNCTION_VOID( PointParameteriNV, , FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( PointParameterivNV, , FgGLenum, const FgGLint * ) \
\
    /* GL_NV_present_video */ \
    FG_GL_FUNCTION_VOID( PresentFrameKeyedNV, , FgGLuint, FgGLuint64EXT, FgGLuint, FgGLuint, FgGLenum, FgGLenum, FgGLuint, FgGLuint, FgGLenum, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( PresentFrameDualFillNV, , FgGLuint, FgGLuint64EXT, FgGLuint, FgGLuint, FgGLenum, FgGLenum, FgGLuint, FgGLenum, FgGLuint, FgGLenum, FgGLuint, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetVideoivNV, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVideouivNV, , FgGLuint, FgGLenum, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetVideoi64vNV, , FgGLuint, FgGLenum, FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( GetVideoui64vNV, , FgGLuint, FgGLenum, FgGLuint64EXT * ) \
\
    /* GL_NV_primitive_restart */ \
    FG_GL_FUNCTION_VOID( PrimitiveRestartNV ) \
    FG_GL_FUNCTION_VOID( PrimitiveRestartIndexNV, , FgGLuint ) \
\
    /* GL_NV_register_combiners */ \
    FG_GL_FUNCTION_VOID( CombinerParameterfvNV, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( CombinerParameterfNV, , FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( CombinerParameterivNV, , FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( CombinerParameteriNV, , FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( CombinerInputNV, , FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( CombinerOutputNV, , FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLboolean, FgGLboolean, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( FinalCombinerInputNV, , FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetCombinerInputParameterfvNV, , FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetCombinerInputParameterivNV, , FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetCombinerOutputParameterfvNV, , FgGLenum, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetCombinerOutputParameterivNV, , FgGLenum, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetFinalCombinerInputParameterfvNV, , FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetFinalCombinerInputParameterivNV, , FgGLenum, FgGLenum, FgGLint * ) \
\
    /* GL_NV_register_combiners2 */ \
    FG_GL_FUNCTION_VOID( CombinerStageParameterfvNV, , FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetCombinerStageParameterfvNV, , FgGLenum, FgGLenum, FgGLfloat * ) \
\
    /* GL_NV_shader_atomic_counters */ \
\
    /* GL_NV_shader_atomic_float */ \
\
    /* GL_NV_shader_buffer_load */ \
    FG_GL_FUNCTION_VOID( MakeBufferResidentNV, , FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MakeBufferNonResidentNV, , FgGLenum ) \
    FG_GL_FUNCTION_NUM( IsBufferResidentNV, FgGLboolean, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( MakeNamedBufferResidentNV, , FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MakeNamedBufferNonResidentNV, , FgGLuint ) \
    FG_GL_FUNCTION_NUM( IsNamedBufferResidentNV, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetBufferParameterui64vNV, , FgGLenum, FgGLenum, FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( GetNamedBufferParameterui64vNV, , FgGLuint, FgGLenum, FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( GetIntegerui64vNV, , FgGLenum, FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( Uniformui64NV, , FgGLint, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( Uniformui64vNV, , FgGLint, FgGLsizei, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( GetUniformui64vNV, , FgGLuint, FgGLint, FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformui64NV, , FgGLuint, FgGLint, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( ProgramUniformui64vNV, , FgGLuint, FgGLint, FgGLsizei, const FgGLuint64EXT * ) \
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
    FG_GL_FUNCTION_VOID( TextureBarrierNV ) \
\
    /* GL_NV_texture_compression_vtc */ \
\
    /* GL_NV_texture_env_combine4 */ \
\
    /* GL_NV_texture_expand_normal */ \
\
    /* GL_NV_texture_multisample */ \
    FG_GL_FUNCTION_VOID( TexImage2DMultisampleCoverageNV, , FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( TexImage3DMultisampleCoverageNV, , FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( TextureImage2DMultisampleNV, , FgGLuint, FgGLenum, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( TextureImage3DMultisampleNV, , FgGLuint, FgGLenum, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( TextureImage2DMultisampleCoverageNV, , FgGLuint, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( TextureImage3DMultisampleCoverageNV, , FgGLuint, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) \
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
    FG_GL_FUNCTION_VOID( BeginTransformFeedbackNV, , FgGLenum ) \
    FG_GL_FUNCTION_VOID( EndTransformFeedbackNV ) \
    FG_GL_FUNCTION_VOID( TransformFeedbackAttribsNV, , FgGLuint, const FgGLint *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BindBufferRangeNV, , FgGLenum, FgGLuint, FgGLuint, FgGLintptr, FgGLsizeiptr ) \
    FG_GL_FUNCTION_VOID( BindBufferOffsetNV, , FgGLenum, FgGLuint, FgGLuint, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( BindBufferBaseNV, , FgGLenum, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( TransformFeedbackVaryingsNV, , FgGLuint, FgGLsizei, const FgGLint *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( ActiveVaryingNV, , FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_NUM( GetVaryingLocationNV, FgGLint, , FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetActiveVaryingNV, , FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLsizei *, FgGLenum *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetTransformFeedbackVaryingNV, , FgGLuint, FgGLuint, FgGLint * ) \
    FG_GL_FUNCTION_VOID( TransformFeedbackStreamAttribsNV, , FgGLsizei, const FgGLint *, FgGLsizei, const FgGLint *, FgGLenum ) \
\
    /* GL_NV_transform_feedback2 */ \
    FG_GL_FUNCTION_VOID( BindTransformFeedbackNV, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteTransformFeedbacksNV, , FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenTransformFeedbacksNV, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsTransformFeedbackNV, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( PauseTransformFeedbackNV ) \
    FG_GL_FUNCTION_VOID( ResumeTransformFeedbackNV ) \
    FG_GL_FUNCTION_VOID( DrawTransformFeedbackNV, , FgGLenum, FgGLuint ) \
\
    /* GL_NV_vdpau_interop */ \
    FG_GL_FUNCTION_VOID( VDPAUInitNV, , const FgGLvoid *, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( VDPAUFiniNV ) \
    FG_GL_FUNCTION_NUM( VDPAURegisterVideoSurfaceNV, FgGLvdpauSurfaceNV, , const FgGLvoid *, FgGLenum, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_NUM( VDPAURegisterOutputSurfaceNV, FgGLvdpauSurfaceNV, , const FgGLvoid *, FgGLenum, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VDPAUIsSurfaceNV, , FgGLvdpauSurfaceNV ) \
    FG_GL_FUNCTION_VOID( VDPAUUnregisterSurfaceNV, , FgGLvdpauSurfaceNV ) \
    FG_GL_FUNCTION_VOID( VDPAUGetSurfaceivNV, , FgGLvdpauSurfaceNV, FgGLenum, FgGLsizei, FgGLsizei *, FgGLint * ) \
    FG_GL_FUNCTION_VOID( VDPAUSurfaceAccessNV, , FgGLvdpauSurfaceNV, FgGLenum ) \
    FG_GL_FUNCTION_VOID( VDPAUMapSurfacesNV, , FgGLsizei, const FgGLvdpauSurfaceNV * ) \
    FG_GL_FUNCTION_VOID( VDPAUUnmapSurfacesNV, , FgGLsizei, const FgGLvdpauSurfaceNV * ) \
\
    /* GL_NV_vertex_array_range */ \
    FG_GL_FUNCTION_VOID( FlushVertexArrayRangeNV ) \
    FG_GL_FUNCTION_VOID( VertexArrayRangeNV, , FgGLsizei, const FgGLvoid * ) \
\
    /* GL_NV_vertex_array_range2 */ \
\
    /* GL_NV_vertex_attrib_integer_64bit */ \
    FG_GL_FUNCTION_VOID( VertexAttribL1i64NV, , FgGLuint, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2i64NV, , FgGLuint, FgGLint64EXT, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3i64NV, , FgGLuint, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4i64NV, , FgGLuint, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1i64vNV, , FgGLuint, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2i64vNV, , FgGLuint, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3i64vNV, , FgGLuint, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4i64vNV, , FgGLuint, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1ui64NV, , FgGLuint, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2ui64NV, , FgGLuint, FgGLuint64EXT, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3ui64NV, , FgGLuint, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4ui64NV, , FgGLuint, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1ui64vNV, , FgGLuint, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2ui64vNV, , FgGLuint, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3ui64vNV, , FgGLuint, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4ui64vNV, , FgGLuint, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribLi64vNV, , FgGLuint, FgGLenum, FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribLui64vNV, , FgGLuint, FgGLenum, FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( VertexAttribLFormatNV, , FgGLuint, FgGLint, FgGLenum, FgGLsizei ) \
\
    /* GL_NV_vertex_buffer_unified_memory */ \
    FG_GL_FUNCTION_VOID( BufferAddressRangeNV, , FgGLenum, FgGLuint, FgGLuint64EXT, FgGLsizeiptr ) \
    FG_GL_FUNCTION_VOID( VertexFormatNV, , FgGLint, FgGLenum, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( NormalFormatNV, , FgGLenum, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( ColorFormatNV, , FgGLint, FgGLenum, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( IndexFormatNV, , FgGLenum, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( TexCoordFormatNV, , FgGLint, FgGLenum, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( EdgeFlagFormatNV, , FgGLsizei ) \
    FG_GL_FUNCTION_VOID( SecondaryColorFormatNV, , FgGLint, FgGLenum, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( FogCoordFormatNV, , FgGLenum, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( VertexAttribFormatNV, , FgGLuint, FgGLint, FgGLenum, FgGLboolean, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( VertexAttribIFormatNV, , FgGLuint, FgGLint, FgGLenum, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetIntegerui64i_vNV, , FgGLenum, FgGLuint, FgGLuint64EXT * ) \
\
    /* GL_NV_vertex_program */ \
    FG_GL_FUNCTION_NUM( AreProgramsResidentNV, FgGLboolean, , FgGLsizei, const FgGLuint *, FgGLboolean * ) \
    FG_GL_FUNCTION_VOID( BindProgramNV, , FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteProgramsNV, , FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ExecuteProgramNV, , FgGLenum, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GenProgramsNV, , FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetProgramParameterdvNV, , FgGLenum, FgGLuint, FgGLenum, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetProgramParameterfvNV, , FgGLenum, FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetProgramivNV, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetProgramStringNV, , FgGLuint, FgGLenum, FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( GetTrackMatrixivNV, , FgGLenum, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribdvNV, , FgGLuint, FgGLenum, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribfvNV, , FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribivNV, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribPointervNV, , FgGLuint, FgGLenum, FgGLvoid ** ) \
    FG_GL_FUNCTION_NUM( IsProgramNV, FgGLboolean, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( LoadProgramNV, , FgGLenum, FgGLuint, FgGLsizei, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( ProgramParameter4dNV, , FgGLenum, FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramParameter4dvNV, , FgGLenum, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramParameter4fNV, , FgGLenum, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramParameter4fvNV, , FgGLenum, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramParameters4dvNV, , FgGLenum, FgGLuint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramParameters4fvNV, , FgGLenum, FgGLuint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( RequestResidentProgramsNV, , FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( TrackMatrixNV, , FgGLenum, FgGLuint, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( VertexAttribPointerNV, , FgGLuint, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1dNV, , FgGLuint, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1dvNV, , FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1fNV, , FgGLuint, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1fvNV, , FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1sNV, , FgGLuint, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1svNV, , FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2dNV, , FgGLuint, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2dvNV, , FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2fNV, , FgGLuint, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2fvNV, , FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2sNV, , FgGLuint, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2svNV, , FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3dNV, , FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3dvNV, , FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3fNV, , FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3fvNV, , FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3sNV, , FgGLuint, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3svNV, , FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4dNV, , FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4dvNV, , FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4fNV, , FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4fvNV, , FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4sNV, , FgGLuint, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4svNV, , FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4ubNV, , FgGLuint, FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4ubvNV, , FgGLuint, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs1dvNV, , FgGLuint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs1fvNV, , FgGLuint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs1svNV, , FgGLuint, FgGLsizei, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs2dvNV, , FgGLuint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs2fvNV, , FgGLuint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs2svNV, , FgGLuint, FgGLsizei, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs3dvNV, , FgGLuint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs3fvNV, , FgGLuint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs3svNV, , FgGLuint, FgGLsizei, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs4dvNV, , FgGLuint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs4fvNV, , FgGLuint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs4svNV, , FgGLuint, FgGLsizei, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs4ubvNV, , FgGLuint, FgGLsizei, const FgGLubyte * ) \
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
    FG_GL_FUNCTION_VOID( VertexAttribI1iEXT, , FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2iEXT, , FgGLuint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3iEXT, , FgGLuint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4iEXT, , FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI1uiEXT, , FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2uiEXT, , FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3uiEXT, , FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4uiEXT, , FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI1ivEXT, , FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2ivEXT, , FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3ivEXT, , FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4ivEXT, , FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI1uivEXT, , FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2uivEXT, , FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3uivEXT, , FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4uivEXT, , FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4bvEXT, , FgGLuint, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4svEXT, , FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4ubvEXT, , FgGLuint, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4usvEXT, , FgGLuint, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( VertexAttribIPointerEXT, , FgGLuint, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribIivEXT, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribIuivEXT, , FgGLuint, FgGLenum, FgGLuint * ) \
\
    /* GL_NV_video_capture */ \
    FG_GL_FUNCTION_VOID( BeginVideoCaptureNV, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( BindVideoCaptureStreamBufferNV, , FgGLuint, FgGLuint, FgGLenum, FgGLintptrARB ) \
    FG_GL_FUNCTION_VOID( BindVideoCaptureStreamTextureNV, , FgGLuint, FgGLuint, FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( EndVideoCaptureNV, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetVideoCaptureivNV, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVideoCaptureStreamivNV, , FgGLuint, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVideoCaptureStreamfvNV, , FgGLuint, FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetVideoCaptureStreamdvNV, , FgGLuint, FgGLuint, FgGLenum, FgGLdouble * ) \
    FG_GL_FUNCTION_NUM( VideoCaptureNV, FgGLenum, , FgGLuint, FgGLuint *, FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( VideoCaptureStreamParameterivNV, , FgGLuint, FgGLuint, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VideoCaptureStreamParameterfvNV, , FgGLuint, FgGLuint, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VideoCaptureStreamParameterdvNV, , FgGLuint, FgGLuint, FgGLenum, const FgGLdouble * ) \
\
    /* GL_OML_interlace */ \
\
    /* GL_OML_resample */ \
\
    /* GL_OML_subsample */ \
\
    /* GL_PGI_misc_hints */ \
    FG_GL_FUNCTION_VOID( HintPGI, , FgGLenum, FgGLint ) \
\
    /* GL_PGI_vertex_hints */ \
\
    /* GL_REND_screen_coordinates */ \
\
    /* GL_S3_s3tc */ \
\
    /* GL_SGIS_detail_texture */ \
    FG_GL_FUNCTION_VOID( DetailTexFuncSGIS, , FgGLenum, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetDetailTexFuncSGIS, , FgGLenum, FgGLfloat * ) \
\
    /* GL_SGIS_fog_function */ \
    FG_GL_FUNCTION_VOID( FogFuncSGIS, , FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetFogFuncSGIS, , FgGLfloat * ) \
\
    /* GL_SGIS_generate_mipmap */ \
\
    /* GL_SGIS_multisample */ \
    FG_GL_FUNCTION_VOID( SampleMaskSGIS, , FgGLclampf, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( SamplePatternSGIS, , FgGLenum ) \
\
    /* GL_SGIS_pixel_texture */ \
    FG_GL_FUNCTION_VOID( PixelTexGenParameteriSGIS, , FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( PixelTexGenParameterivSGIS, , FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( PixelTexGenParameterfSGIS, , FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( PixelTexGenParameterfvSGIS, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetPixelTexGenParameterivSGIS, , FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetPixelTexGenParameterfvSGIS, , FgGLenum, FgGLfloat * ) \
\
    /* GL_SGIS_point_line_texgen */ \
\
    /* GL_SGIS_point_parameters */ \
    FG_GL_FUNCTION_VOID( PointParameterfSGIS, , FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( PointParameterfvSGIS, , FgGLenum, const FgGLfloat * ) \
\
    /* GL_SGIS_sharpen_texture */ \
    FG_GL_FUNCTION_VOID( SharpenTexFuncSGIS, , FgGLenum, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetSharpenTexFuncSGIS, , FgGLenum, FgGLfloat * ) \
\
    /* GL_SGIS_texture4D */ \
    FG_GL_FUNCTION_VOID( TexImage4DSGIS, , FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TexSubImage4DSGIS, , FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
\
    /* GL_SGIS_texture_border_clamp */ \
\
    /* GL_SGIS_texture_color_mask */ \
    FG_GL_FUNCTION_VOID( TextureColorMaskSGIS, , FgGLboolean, FgGLboolean, FgGLboolean, FgGLboolean ) \
\
    /* GL_SGIS_texture_edge_clamp */ \
\
    /* GL_SGIS_texture_filter4 */ \
    FG_GL_FUNCTION_VOID( GetTexFilterFuncSGIS, , FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexFilterFuncSGIS, , FgGLenum, FgGLenum, FgGLsizei, const FgGLfloat * ) \
\
    /* GL_SGIS_texture_lod */ \
\
    /* GL_SGIS_texture_select */ \
\
    /* GL_SGIX_async */ \
    FG_GL_FUNCTION_VOID( AsyncMarkerSGIX, , FgGLuint ) \
    FG_GL_FUNCTION_NUM( FinishAsyncSGIX, FgGLint, , FgGLuint * ) \
    FG_GL_FUNCTION_NUM( PollAsyncSGIX, FgGLint, , FgGLuint * ) \
    FG_GL_FUNCTION_NUM( GenAsyncMarkersSGIX, FgGLuint, , FgGLsizei ) \
    FG_GL_FUNCTION_VOID( DeleteAsyncMarkersSGIX, , FgGLuint, FgGLsizei ) \
    FG_GL_FUNCTION_NUM( IsAsyncMarkerSGIX, FgGLboolean, , FgGLuint ) \
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
    FG_GL_FUNCTION_VOID( FlushRasterSGIX ) \
\
    /* GL_SGIX_fog_offset */ \
\
    /* GL_SGIX_fragment_lighting */ \
    FG_GL_FUNCTION_VOID( FragmentColorMaterialSGIX, , FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( FragmentLightfSGIX, , FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( FragmentLightfvSGIX, , FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( FragmentLightiSGIX, , FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( FragmentLightivSGIX, , FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( FragmentLightModelfSGIX, , FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( FragmentLightModelfvSGIX, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( FragmentLightModeliSGIX, , FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( FragmentLightModelivSGIX, , FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( FragmentMaterialfSGIX, , FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( FragmentMaterialfvSGIX, , FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( FragmentMaterialiSGIX, , FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( FragmentMaterialivSGIX, , FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetFragmentLightfvSGIX, , FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetFragmentLightivSGIX, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetFragmentMaterialfvSGIX, , FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetFragmentMaterialivSGIX, , FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( LightEnviSGIX, , FgGLenum, FgGLint ) \
\
    /* GL_SGIX_framezoom */ \
    FG_GL_FUNCTION_VOID( FrameZoomSGIX, , FgGLint ) \
\
    /* GL_SGIX_igloo_interface */ \
    FG_GL_FUNCTION_VOID( IglooInterfaceSGIX, , FgGLenum, const FgGLvoid * ) \
\
    /* GL_SGIX_instruments */ \
    FG_GL_FUNCTION_NUM( GetInstrumentsSGIX, FgGLint ) \
    FG_GL_FUNCTION_VOID( InstrumentsBufferSGIX, , FgGLsizei, FgGLint * ) \
    FG_GL_FUNCTION_NUM( PollInstrumentsSGIX, FgGLint, , FgGLint * ) \
    FG_GL_FUNCTION_VOID( ReadInstrumentsSGIX, , FgGLint ) \
    FG_GL_FUNCTION_VOID( StartInstrumentsSGIX ) \
    FG_GL_FUNCTION_VOID( StopInstrumentsSGIX, , FgGLint ) \
\
    /* GL_SGIX_interlace */ \
\
    /* GL_SGIX_ir_instrument1 */ \
\
    /* GL_SGIX_list_priority */ \
    FG_GL_FUNCTION_VOID( GetListParameterfvSGIX, , FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetListParameterivSGIX, , FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( ListParameterfSGIX, , FgGLuint, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ListParameterfvSGIX, , FgGLuint, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ListParameteriSGIX, , FgGLuint, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( ListParameterivSGIX, , FgGLuint, FgGLenum, const FgGLint * ) \
\
    /* GL_SGIX_pixel_texture */ \
    FG_GL_FUNCTION_VOID( PixelTexGenSGIX, , FgGLenum ) \
\
    /* GL_SGIX_pixel_tiles */ \
\
    /* GL_SGIX_polynomial_ffd */ \
    FG_GL_FUNCTION_VOID( DeformationMap3dSGIX, , FgGLenum, FgGLdouble, FgGLdouble, FgGLint, FgGLint, FgGLdouble, FgGLdouble, FgGLint, FgGLint, FgGLdouble, FgGLdouble, FgGLint, FgGLint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( DeformationMap3fSGIX, , FgGLenum, FgGLfloat, FgGLfloat, FgGLint, FgGLint, FgGLfloat, FgGLfloat, FgGLint, FgGLint, FgGLfloat, FgGLfloat, FgGLint, FgGLint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( DeformSGIX, , FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( LoadIdentityDeformationMapSGIX, , FgGLbitfield ) \
\
    /* GL_SGIX_reference_plane */ \
    FG_GL_FUNCTION_VOID( ReferencePlaneSGIX, , const FgGLdouble * ) \
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
    FG_GL_FUNCTION_VOID( SpriteParameterfSGIX, , FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( SpriteParameterfvSGIX, , FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( SpriteParameteriSGIX, , FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( SpriteParameterivSGIX, , FgGLenum, const FgGLint * ) \
\
    /* GL_SGIX_subsample */ \
\
    /* GL_SGIX_tag_sample_buffer */ \
    FG_GL_FUNCTION_VOID( TagSampleBufferSGIX ) \
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
    FG_GL_FUNCTION_VOID( ColorTableSGI, , FgGLenum, FgGLenum, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ColorTableParameterfvSGI, , FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ColorTableParameterivSGI, , FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( CopyColorTableSGI, , FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetColorTableSGI, , FgGLenum, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetColorTableParameterfvSGI, , FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetColorTableParameterivSGI, , FgGLenum, FgGLenum, FgGLint * ) \
\
    /* GL_SGI_texture_color_table */ \
\
    /* GL_SUNX_constant_data */ \
    FG_GL_FUNCTION_VOID( FinishTextureSUNX ) \
\
    /* GL_SUN_convolution_border_modes */ \
\
    /* GL_SUN_global_alpha */ \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactorbSUN, , FgGLbyte ) \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactorsSUN, , FgGLshort ) \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactoriSUN, , FgGLint ) \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactorfSUN, , FgGLfloat ) \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactordSUN, , FgGLdouble ) \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactorubSUN, , FgGLubyte ) \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactorusSUN, , FgGLushort ) \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactoruiSUN, , FgGLuint ) \
\
    /* GL_SUN_mesh_array */ \
    FG_GL_FUNCTION_VOID( DrawMeshArraysSUN, , FgGLenum, FgGLint, FgGLsizei, FgGLsizei ) \
\
    /* GL_SUN_slice_accum */ \
\
    /* GL_SUN_triangle_list */ \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiSUN, , FgGLuint ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeusSUN, , FgGLushort ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeubSUN, , FgGLubyte ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuivSUN, , const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeusvSUN, , const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeubvSUN, , const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( ReplacementCodePointerSUN, , FgGLenum, FgGLsizei, const FgGLvoid ** ) \
\
    /* GL_SUN_vertex */ \
    FG_GL_FUNCTION_VOID( Color4ubVertex2fSUN, , FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Color4ubVertex2fvSUN, , const FgGLubyte *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Color4ubVertex3fSUN, , FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Color4ubVertex3fvSUN, , const FgGLubyte *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Color3fVertex3fSUN, , FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Color3fVertex3fvSUN, , const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Normal3fVertex3fSUN, , FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Normal3fVertex3fvSUN, , const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Color4fNormal3fVertex3fSUN, , FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Color4fNormal3fVertex3fvSUN, , const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexCoord2fVertex3fSUN, , FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexCoord2fVertex3fvSUN, , const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexCoord4fVertex4fSUN, , FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexCoord4fVertex4fvSUN, , const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexCoord2fColor4ubVertex3fSUN, , FgGLfloat, FgGLfloat, FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexCoord2fColor4ubVertex3fvSUN, , const FgGLfloat *, const FgGLubyte *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexCoord2fColor3fVertex3fSUN, , FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexCoord2fColor3fVertex3fvSUN, , const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexCoord2fNormal3fVertex3fSUN, , FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexCoord2fNormal3fVertex3fvSUN, , const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexCoord2fColor4fNormal3fVertex3fSUN, , FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexCoord2fColor4fNormal3fVertex3fvSUN, , const FgGLfloat *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexCoord4fColor4fNormal3fVertex4fSUN, , FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexCoord4fColor4fNormal3fVertex4fvSUN, , const FgGLfloat *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiVertex3fSUN, , FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiVertex3fvSUN, , const FgGLuint *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiColor4ubVertex3fSUN, , FgGLuint, FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiColor4ubVertex3fvSUN, , const FgGLuint *, const FgGLubyte *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiColor3fVertex3fSUN, , FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiColor3fVertex3fvSUN, , const FgGLuint *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiNormal3fVertex3fSUN, , FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiNormal3fVertex3fvSUN, , const FgGLuint *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiColor4fNormal3fVertex3fSUN, , FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiColor4fNormal3fVertex3fvSUN, , const FgGLuint *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fVertex3fSUN, , FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fVertex3fvSUN, , const FgGLuint *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN, , FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN, , const FgGLuint *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN, , FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN, , const FgGLuint *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) \
\
    /* GL_WIN_phong_shading */ \
\
    /* GL_WIN_specular_fog */ \

#endif  // FG_GL_FUNCTIONS_H
