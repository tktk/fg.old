#ifndef FG_GL_FUNCTIONS_H
#define FG_GL_FUNCTIONS_H

#include "fg/gl/types.h"
#include "fg/util/import.h"

#define FG_GL_FUNCTIONS \
    /* GL_VERSION_1_0 */ \
    FG_GL_FUNCTION( FgGLenum, GetError, () ) \
    FG_GL_FUNCTION( void, Begin, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, End, () ) \
    FG_GL_FUNCTION( void, EdgeFlag, ( FgGLboolean ) ) \
    FG_GL_FUNCTION( void, EdgeFlagv, ( const FgGLboolean * ) ) \
    FG_GL_FUNCTION( void, Vertex2s, ( FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, Vertex2i, ( FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, Vertex2f, ( FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Vertex2d, ( FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, Vertex3s, ( FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, Vertex3i, ( FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, Vertex3f, ( FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Vertex3d, ( FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, Vertex4s, ( FgGLshort, FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, Vertex4i, ( FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, Vertex4f, ( FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Vertex4d, ( FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, Vertex2sv, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, Vertex2iv, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, Vertex2fv, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Vertex2dv, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, Vertex3sv, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, Vertex3iv, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, Vertex3fv, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Vertex3dv, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, Vertex4sv, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, Vertex4iv, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, Vertex4fv, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Vertex4dv, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, TexCoord1s, ( FgGLshort ) ) \
    FG_GL_FUNCTION( void, TexCoord1i, ( FgGLint ) ) \
    FG_GL_FUNCTION( void, TexCoord1f, ( FgGLfloat ) ) \
    FG_GL_FUNCTION( void, TexCoord1d, ( FgGLdouble ) ) \
    FG_GL_FUNCTION( void, TexCoord2s, ( FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, TexCoord2i, ( FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, TexCoord2f, ( FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, TexCoord2d, ( FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, TexCoord3s, ( FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, TexCoord3i, ( FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, TexCoord3f, ( FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, TexCoord3d, ( FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, TexCoord4s, ( FgGLshort, FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, TexCoord4i, ( FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, TexCoord4f, ( FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, TexCoord4d, ( FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, TexCoord1sv, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, TexCoord1iv, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, TexCoord1fv, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, TexCoord1dv, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, TexCoord2sv, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, TexCoord2iv, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, TexCoord2fv, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, TexCoord2dv, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, TexCoord3sv, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, TexCoord3iv, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, TexCoord3fv, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, TexCoord3dv, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, TexCoord4sv, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, TexCoord4iv, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, TexCoord4fv, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, TexCoord4dv, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, Normal3b, ( FgGLbyte, FgGLbyte, FgGLbyte ) ) \
    FG_GL_FUNCTION( void, Normal3s, ( FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, Normal3i, ( FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, Normal3f, ( FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Normal3d, ( FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, Normal3bv, ( const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, Normal3sv, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, Normal3iv, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, Normal3fv, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Normal3dv, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, Color3b, ( FgGLbyte, FgGLbyte, FgGLbyte ) ) \
    FG_GL_FUNCTION( void, Color3s, ( FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, Color3i, ( FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, Color3f, ( FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Color3d, ( FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, Color3ub, ( FgGLubyte, FgGLubyte, FgGLubyte ) ) \
    FG_GL_FUNCTION( void, Color3us, ( FgGLushort, FgGLushort, FgGLushort ) ) \
    FG_GL_FUNCTION( void, Color3ui, ( FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, Color4b, ( FgGLbyte, FgGLbyte, FgGLbyte, FgGLbyte ) ) \
    FG_GL_FUNCTION( void, Color4s, ( FgGLshort, FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, Color4i, ( FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, Color4f, ( FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Color4d, ( FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, Color4ub, ( FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte ) ) \
    FG_GL_FUNCTION( void, Color4us, ( FgGLushort, FgGLushort, FgGLushort, FgGLushort ) ) \
    FG_GL_FUNCTION( void, Color4ui, ( FgGLuint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, Color3bv, ( const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, Color3sv, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, Color3iv, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, Color3fv, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Color3dv, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, Color3ubv, ( const FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, Color3usv, ( const FgGLushort * ) ) \
    FG_GL_FUNCTION( void, Color3uiv, ( const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, Color4bv, ( const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, Color4sv, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, Color4iv, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, Color4fv, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Color4dv, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, Color4ubv, ( const FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, Color4usv, ( const FgGLushort * ) ) \
    FG_GL_FUNCTION( void, Color4uiv, ( const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, Indexs, ( FgGLshort ) ) \
    FG_GL_FUNCTION( void, Indexi, ( FgGLint ) ) \
    FG_GL_FUNCTION( void, Indexf, ( FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Indexd, ( FgGLdouble ) ) \
    FG_GL_FUNCTION( void, Indexsv, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, Indexiv, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, Indexfv, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Indexdv, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, Rects, ( FgGLshort, FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, Recti, ( FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, Rectf, ( FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Rectd, ( FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, Rectsv, ( const FgGLshort *, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, Rectiv, ( const FgGLint *, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, Rectfv, ( const FgGLfloat *, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Rectdv, ( const FgGLdouble *, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, DepthRange, ( FgGLclampd, FgGLclampd ) ) \
    FG_GL_FUNCTION( void, Viewport, ( FgGLint, FgGLint, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, MatrixMode, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, LoadMatrixf, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, LoadMatrixd, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, MultMatrixf, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, MultMatrixd, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, LoadIdentity, () ) \
    FG_GL_FUNCTION( void, Rotatef, ( FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Rotated, ( FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, Translatef, ( FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Translated, ( FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, Scalef, ( FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Scaled, ( FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, Frustum, ( FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, Ortho, ( FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, PushMatrix, () ) \
    FG_GL_FUNCTION( void, PopMatrix, () ) \
    FG_GL_FUNCTION( void, Enable, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, Disable, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, TexGeni, ( FgGLenum, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, TexGenf, ( FgGLenum, FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, TexGend, ( FgGLenum, FgGLenum, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, TexGeniv, ( FgGLenum, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, TexGenfv, ( FgGLenum, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, TexGendv, ( FgGLenum, FgGLenum, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ClipPlane, ( FgGLenum, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, RasterPos2s, ( FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, RasterPos2i, ( FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, RasterPos2f, ( FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, RasterPos2d, ( FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, RasterPos2sv, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, RasterPos2iv, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, RasterPos2fv, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, RasterPos2dv, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, RasterPos3s, ( FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, RasterPos3i, ( FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, RasterPos3f, ( FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, RasterPos3d, ( FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, RasterPos3sv, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, RasterPos3iv, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, RasterPos3fv, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, RasterPos3dv, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, RasterPos4s, ( FgGLshort, FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, RasterPos4i, ( FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, RasterPos4f, ( FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, RasterPos4d, ( FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, RasterPos4sv, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, RasterPos4iv, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, RasterPos4fv, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, RasterPos4dv, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, FrontFace, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, Materiali, ( FgGLenum, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, Materialf, ( FgGLenum, FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Materialiv, ( FgGLenum, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, Materialfv, ( FgGLenum, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Lighti, ( FgGLenum, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, Lightf, ( FgGLenum, FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Lightiv, ( FgGLenum, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, Lightfv, ( FgGLenum, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, LightModeli, ( FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, LightModelf, ( FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, LightModeliv, ( FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, LightModelfv, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ColorMaterial, ( FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, ShadeModel, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, PointSize, ( FgGLfloat ) ) \
    FG_GL_FUNCTION( void, LineWidth, ( FgGLfloat ) ) \
    FG_GL_FUNCTION( void, LineStipple, ( FgGLint, FgGLushort ) ) \
    FG_GL_FUNCTION( void, CullFace, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, PolygonStipple, ( const FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, PolygonMode, ( FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, PixelStorei, ( FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, PixelStoref, ( FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, PixelTransferi, ( FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, PixelTransferf, ( FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, PixelMapuiv, ( FgGLenum, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, PixelMapusv, ( FgGLenum, FgGLsizei, const FgGLushort * ) ) \
    FG_GL_FUNCTION( void, PixelMapfv, ( FgGLenum, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, DrawPixels, ( FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, PixelZoom, ( FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Bitmap, ( FgGLsizei, FgGLsizei, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, const FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, TexImage1D, ( FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, TexImage2D, ( FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, TexParameteri, ( FgGLenum, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, TexParameterf, ( FgGLenum, FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, TexParameteriv, ( FgGLenum, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, TexParameterfv, ( FgGLenum, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, TexEnvi, ( FgGLenum, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, TexEnvf, ( FgGLenum, FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, TexEnviv, ( FgGLenum, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, TexEnvfv, ( FgGLenum, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Fogi, ( FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, Fogf, ( FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Fogiv, ( FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, Fogfv, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Scissor, ( FgGLint, FgGLint, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, AlphaFunc, ( FgGLenum, FgGLclampf ) ) \
    FG_GL_FUNCTION( void, StencilFunc, ( FgGLenum, FgGLint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, StencilOp, ( FgGLenum, FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, DepthFunc, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, BlendFunc, ( FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, LogicOp, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, DrawBuffer, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, IndexMask, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, ColorMask, ( FgGLboolean, FgGLboolean, FgGLboolean, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, DepthMask, ( FgGLboolean ) ) \
    FG_GL_FUNCTION( void, StencilMask, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, Clear, ( FgGLbitfield ) ) \
    FG_GL_FUNCTION( void, ClearColor, ( FgGLclampf, FgGLclampf, FgGLclampf, FgGLclampf ) ) \
    FG_GL_FUNCTION( void, ClearIndex, ( FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ClearDepth, ( FgGLclampd ) ) \
    FG_GL_FUNCTION( void, ClearStencil, ( FgGLint ) ) \
    FG_GL_FUNCTION( void, ClearAccum, ( FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Accum, ( FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ReadPixels, ( FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, ReadBuffer, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, CopyPixels, ( FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum ) ) \
    FG_GL_FUNCTION( void, Map1f, ( FgGLenum, FgGLfloat, FgGLfloat, FgGLint, FgGLint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Map1d, ( FgGLenum, FgGLdouble, FgGLdouble, FgGLint, FgGLint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, Map2f, ( FgGLenum, FgGLfloat, FgGLfloat, FgGLint, FgGLint, FgGLfloat, FgGLfloat, FgGLint, FgGLint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Map2d, ( FgGLenum, FgGLdouble, FgGLdouble, FgGLint, FgGLint, FgGLdouble, FgGLdouble, FgGLint, FgGLint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, EvalCoord1f, ( FgGLfloat ) ) \
    FG_GL_FUNCTION( void, EvalCoord1d, ( FgGLdouble ) ) \
    FG_GL_FUNCTION( void, EvalCoord2f, ( FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, EvalCoord2d, ( FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, EvalCoord1fv, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, EvalCoord1dv, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, EvalCoord2fv, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, EvalCoord2dv, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, MapGrid1f, ( FgGLint, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, MapGrid1d, ( FgGLint, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, MapGrid2f, ( FgGLint, FgGLfloat, FgGLfloat, FgGLint, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, MapGrid2d, ( FgGLint, FgGLdouble, FgGLdouble, FgGLint, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, EvalMesh1, ( FgGLenum, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, EvalMesh2, ( FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, EvalPoint1, ( FgGLint ) ) \
    FG_GL_FUNCTION( void, EvalPoint2, ( FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, InitNames, () ) \
    FG_GL_FUNCTION( void, PopName, () ) \
    FG_GL_FUNCTION( void, PushName, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, LoadName, ( FgGLuint ) ) \
    FG_GL_FUNCTION( FgGLint, RenderMode, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, SelectBuffer, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, FeedbackBuffer, ( FgGLsizei, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, PassThrough, ( FgGLfloat ) ) \
    FG_GL_FUNCTION( void, NewList, ( FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, EndList, () ) \
    FG_GL_FUNCTION( void, CallList, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, CallLists, ( FgGLsizei, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, ListBase, ( FgGLuint ) ) \
    FG_GL_FUNCTION( FgGLuint, GenLists, ( FgGLsizei ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsList, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, DeleteLists, ( FgGLuint, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, Flush, () ) \
    FG_GL_FUNCTION( void, Finish, () ) \
    FG_GL_FUNCTION( void, Hint, ( FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, GetBooleanv, ( FgGLenum, FgGLboolean * ) ) \
    FG_GL_FUNCTION( void, GetIntegerv, ( FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetFloatv, ( FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetDoublev, ( FgGLenum, FgGLdouble * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsEnabled, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, GetClipPlane, ( FgGLenum, FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, GetLightiv, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetLightfv, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetMaterialiv, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetMaterialfv, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetTexEnviv, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetTexEnvfv, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetTexGeniv, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetTexGenfv, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetTexParameteriv, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetTexParameterfv, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetTexLevelParameteriv, ( FgGLenum, FgGLint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetTexLevelParameterfv, ( FgGLenum, FgGLint, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetPixelMapuiv, ( FgGLenum, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GetPixelMapusv, ( FgGLenum, FgGLushort * ) ) \
    FG_GL_FUNCTION( void, GetPixelMapfv, ( FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetMapiv, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetMapfv, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetMapdv, ( FgGLenum, FgGLenum, FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, GetTexImage, ( FgGLenum, FgGLint, FgGLenum, FgGLenum, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetPolygonStipple, ( FgGLubyte * ) ) \
    FG_GL_FUNCTION( const FgGLubyte *, GetString, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, PushAttrib, ( FgGLbitfield ) ) \
    FG_GL_FUNCTION( void, PopAttrib, () ) \
\
    /* GL_VERSION_1_1 */ \
    FG_GL_FUNCTION( void, Indexub, ( FgGLubyte ) ) \
    FG_GL_FUNCTION( void, Indexubv, ( const FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, EdgeFlagPointer, ( FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, TexCoordPointer, ( FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, ColorPointer, ( FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, IndexPointer, ( FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, NormalPointer, ( FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, VertexPointer, ( FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, EnableClientState, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, DisableClientState, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, ArrayElement, ( FgGLint ) ) \
    FG_GL_FUNCTION( void, DrawArrays, ( FgGLenum, FgGLint, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, DrawElements, ( FgGLenum, FgGLsizei, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, InterleavedArrays, ( FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, PolygonOffset, ( FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, CopyTexImage1D, ( FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLint ) ) \
    FG_GL_FUNCTION( void, CopyTexImage2D, ( FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLint ) ) \
    FG_GL_FUNCTION( void, TexSubImage1D, ( FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, TexSubImage2D, ( FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CopyTexSubImage1D, ( FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, CopyTexSubImage2D, ( FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, BindTexture, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, DeleteTextures, ( FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GenTextures, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( FgGLboolean, AreTexturesResident, ( FgGLsizei, const FgGLuint *, FgGLboolean * ) ) \
    FG_GL_FUNCTION( void, PrioritizeTextures, ( FgGLsizei, const FgGLuint *, const FgGLclampf * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsTexture, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetPointerv, ( FgGLenum, FgGLvoid ** ) ) \
    FG_GL_FUNCTION( void, PushClientAttrib, ( FgGLbitfield ) ) \
    FG_GL_FUNCTION( void, PopClientAttrib, () ) \
\
    /* GL_VERSION_1_2 */ \
    FG_GL_FUNCTION( void, DrawRangeElements, ( FgGLenum, FgGLuint, FgGLuint, FgGLsizei, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, TexImage3D, ( FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, TexSubImage3D, ( FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CopyTexSubImage3D, ( FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) ) \
\
    /* GL_VERSION_1_3 */ \
    FG_GL_FUNCTION( void, ActiveTexture, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, SampleCoverage, ( FgGLfloat, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, CompressedTexImage3D, ( FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CompressedTexImage2D, ( FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CompressedTexImage1D, ( FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CompressedTexSubImage3D, ( FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CompressedTexSubImage2D, ( FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CompressedTexSubImage1D, ( FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetCompressedTexImage, ( FgGLenum, FgGLint, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, ClientActiveTexture, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord1d, ( FgGLenum, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord1dv, ( FgGLenum, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord1f, ( FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord1fv, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord1i, ( FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord1iv, ( FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord1s, ( FgGLenum, FgGLshort ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord1sv, ( FgGLenum, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord2d, ( FgGLenum, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord2dv, ( FgGLenum, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord2f, ( FgGLenum, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord2fv, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord2i, ( FgGLenum, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord2iv, ( FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord2s, ( FgGLenum, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord2sv, ( FgGLenum, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord3d, ( FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord3dv, ( FgGLenum, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord3f, ( FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord3fv, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord3i, ( FgGLenum, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord3iv, ( FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord3s, ( FgGLenum, FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord3sv, ( FgGLenum, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord4d, ( FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord4dv, ( FgGLenum, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord4f, ( FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord4fv, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord4i, ( FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord4iv, ( FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord4s, ( FgGLenum, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord4sv, ( FgGLenum, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, LoadTransposeMatrixf, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, LoadTransposeMatrixd, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, MultTransposeMatrixf, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, MultTransposeMatrixd, ( const FgGLdouble * ) ) \
\
    /* GL_VERSION_1_4 */ \
    FG_GL_FUNCTION( void, BlendFuncSeparate, ( FgGLenum, FgGLenum, FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, MultiDrawArrays, ( FgGLenum, const FgGLint *, const FgGLsizei *, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, MultiDrawElements, ( FgGLenum, const FgGLsizei *, FgGLenum, const FgGLvoid *const*, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, PointParameterf, ( FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, PointParameterfv, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, PointParameteri, ( FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, PointParameteriv, ( FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, FogCoordf, ( FgGLfloat ) ) \
    FG_GL_FUNCTION( void, FogCoordfv, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, FogCoordd, ( FgGLdouble ) ) \
    FG_GL_FUNCTION( void, FogCoorddv, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, FogCoordPointer, ( FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3b, ( FgGLbyte, FgGLbyte, FgGLbyte ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3bv, ( const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3d, ( FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3dv, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3f, ( FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3fv, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3i, ( FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3iv, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3s, ( FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3sv, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3ub, ( FgGLubyte, FgGLubyte, FgGLubyte ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3ubv, ( const FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3ui, ( FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3uiv, ( const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3us, ( FgGLushort, FgGLushort, FgGLushort ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3usv, ( const FgGLushort * ) ) \
    FG_GL_FUNCTION( void, SecondaryColorPointer, ( FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, WindowPos2d, ( FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, WindowPos2dv, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, WindowPos2f, ( FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, WindowPos2fv, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, WindowPos2i, ( FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, WindowPos2iv, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, WindowPos2s, ( FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, WindowPos2sv, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, WindowPos3d, ( FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, WindowPos3dv, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, WindowPos3f, ( FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, WindowPos3fv, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, WindowPos3i, ( FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, WindowPos3iv, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, WindowPos3s, ( FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, WindowPos3sv, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, BlendColor, ( FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, BlendEquation, ( FgGLenum ) ) \
\
    /* GL_VERSION_1_5 */ \
    FG_GL_FUNCTION( void, GenQueries, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, DeleteQueries, ( FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsQuery, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, BeginQuery, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, EndQuery, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, GetQueryiv, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetQueryObjectiv, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetQueryObjectuiv, ( FgGLuint, FgGLenum, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, BindBuffer, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, DeleteBuffers, ( FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GenBuffers, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsBuffer, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, BufferData, ( FgGLenum, FgGLsizeiptr, const FgGLvoid *, FgGLenum ) ) \
    FG_GL_FUNCTION( void, BufferSubData, ( FgGLenum, FgGLintptr, FgGLsizeiptr, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetBufferSubData, ( FgGLenum, FgGLintptr, FgGLsizeiptr, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void *, MapBuffer, ( FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( FgGLboolean, UnmapBuffer, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, GetBufferParameteriv, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetBufferPointerv, ( FgGLenum, FgGLenum, FgGLvoid ** ) ) \
\
    /* GL_VERSION_2_0 */ \
    FG_GL_FUNCTION( void, BlendEquationSeparate, ( FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, DrawBuffers, ( FgGLsizei, const FgGLenum * ) ) \
    FG_GL_FUNCTION( void, StencilOpSeparate, ( FgGLenum, FgGLenum, FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, StencilFuncSeparate, ( FgGLenum, FgGLenum, FgGLint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, StencilMaskSeparate, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, AttachShader, ( FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, BindAttribLocation, ( FgGLuint, FgGLuint, const FgGLchar * ) ) \
    FG_GL_FUNCTION( void, CompileShader, ( FgGLuint ) ) \
    FG_GL_FUNCTION( FgGLuint, CreateProgram, ( ) ) \
    FG_GL_FUNCTION( FgGLuint, CreateShader, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, DeleteProgram, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, DeleteShader, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, DetachShader, ( FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, DisableVertexAttribArray, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, EnableVertexAttribArray, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetActiveAttrib, ( FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLint *, FgGLenum *, FgGLchar * ) ) \
    FG_GL_FUNCTION( void, GetActiveUniform, ( FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLint *, FgGLenum *, FgGLchar * ) ) \
    FG_GL_FUNCTION( void, GetAttachedShaders, ( FgGLuint, FgGLsizei, FgGLsizei *, FgGLuint * ) ) \
    FG_GL_FUNCTION( FgGLint, GetAttribLocation, ( FgGLuint, const FgGLchar * ) ) \
    FG_GL_FUNCTION( void, GetProgramiv, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetProgramInfoLog, ( FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) ) \
    FG_GL_FUNCTION( void, GetShaderiv, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetShaderInfoLog, ( FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) ) \
    FG_GL_FUNCTION( void, GetShaderSource, ( FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) ) \
    FG_GL_FUNCTION( FgGLint, GetUniformLocation, ( FgGLuint, const FgGLchar * ) ) \
    FG_GL_FUNCTION( void, GetUniformfv, ( FgGLuint, FgGLint, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetUniformiv, ( FgGLuint, FgGLint, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribdv, ( FgGLuint, FgGLenum, FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribfv, ( FgGLuint, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribiv, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribPointerv, ( FgGLuint, FgGLenum, FgGLvoid ** ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsProgram, ( FgGLuint ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsShader, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, LinkProgram, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, ShaderSource, ( FgGLuint, FgGLsizei, const FgGLchar *const*, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, UseProgram, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, Uniform1f, ( FgGLint, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Uniform2f, ( FgGLint, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Uniform3f, ( FgGLint, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Uniform4f, ( FgGLint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Uniform1i, ( FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, Uniform2i, ( FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, Uniform3i, ( FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, Uniform4i, ( FgGLint, FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, Uniform1fv, ( FgGLint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Uniform2fv, ( FgGLint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Uniform3fv, ( FgGLint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Uniform4fv, ( FgGLint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Uniform1iv, ( FgGLint, FgGLsizei, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, Uniform2iv, ( FgGLint, FgGLsizei, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, Uniform3iv, ( FgGLint, FgGLsizei, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, Uniform4iv, ( FgGLint, FgGLsizei, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, UniformMatrix2fv, ( FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, UniformMatrix3fv, ( FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, UniformMatrix4fv, ( FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ValidateProgram, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexAttrib1d, ( FgGLuint, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexAttrib1dv, ( FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib1f, ( FgGLuint, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, VertexAttrib1fv, ( FgGLuint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib1s, ( FgGLuint, FgGLshort ) ) \
    FG_GL_FUNCTION( void, VertexAttrib1sv, ( FgGLuint, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib2d, ( FgGLuint, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexAttrib2dv, ( FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib2f, ( FgGLuint, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, VertexAttrib2fv, ( FgGLuint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib2s, ( FgGLuint, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, VertexAttrib2sv, ( FgGLuint, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib3d, ( FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexAttrib3dv, ( FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib3f, ( FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, VertexAttrib3fv, ( FgGLuint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib3s, ( FgGLuint, FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, VertexAttrib3sv, ( FgGLuint, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4Nbv, ( FgGLuint, const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4Niv, ( FgGLuint, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4Nsv, ( FgGLuint, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4Nub, ( FgGLuint, FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4Nubv, ( FgGLuint, const FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4Nuiv, ( FgGLuint, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4Nusv, ( FgGLuint, const FgGLushort * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4bv, ( FgGLuint, const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4d, ( FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4dv, ( FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4f, ( FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4fv, ( FgGLuint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4iv, ( FgGLuint, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4s, ( FgGLuint, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4sv, ( FgGLuint, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4ubv, ( FgGLuint, const FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4uiv, ( FgGLuint, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4usv, ( FgGLuint, const FgGLushort * ) ) \
    FG_GL_FUNCTION( void, VertexAttribPointer, ( FgGLuint, FgGLint, FgGLenum, FgGLboolean, FgGLsizei, const FgGLvoid * ) ) \
\
    /* GL_VERSION_2_1 */ \
    FG_GL_FUNCTION( void, UniformMatrix2x3fv, ( FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, UniformMatrix3x2fv, ( FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, UniformMatrix2x4fv, ( FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, UniformMatrix4x2fv, ( FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, UniformMatrix3x4fv, ( FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, UniformMatrix4x3fv, ( FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
\
    /* GL_VERSION_3_0 */ \
    FG_GL_FUNCTION( void, ColorMaski, ( FgGLuint, FgGLboolean, FgGLboolean, FgGLboolean, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, GetBooleani_v, ( FgGLenum, FgGLuint, FgGLboolean * ) ) \
    FG_GL_FUNCTION( void, GetIntegeri_v, ( FgGLenum, FgGLuint, FgGLint * ) ) \
    FG_GL_FUNCTION( void, Enablei, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, Disablei, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsEnabledi, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, BeginTransformFeedback, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, EndTransformFeedback, ( ) ) \
    FG_GL_FUNCTION( void, BindBufferRange, ( FgGLenum, FgGLuint, FgGLuint, FgGLintptr, FgGLsizeiptr ) ) \
    FG_GL_FUNCTION( void, BindBufferBase, ( FgGLenum, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, TransformFeedbackVaryings, ( FgGLuint, FgGLsizei, const FgGLchar *const*, FgGLenum ) ) \
    FG_GL_FUNCTION( void, GetTransformFeedbackVarying, ( FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLsizei *, FgGLenum *, FgGLchar * ) ) \
    FG_GL_FUNCTION( void, ClampColor, ( FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, BeginConditionalRender, ( FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, EndConditionalRender, ( ) ) \
    FG_GL_FUNCTION( void, VertexAttribIPointer, ( FgGLuint, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribIiv, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribIuiv, ( FgGLuint, FgGLenum, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI1i, ( FgGLuint, FgGLint ) ) \
    FG_GL_FUNCTION( void, VertexAttribI2i, ( FgGLuint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, VertexAttribI3i, ( FgGLuint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, VertexAttribI4i, ( FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, VertexAttribI1ui, ( FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexAttribI2ui, ( FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexAttribI3ui, ( FgGLuint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexAttribI4ui, ( FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexAttribI1iv, ( FgGLuint, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI2iv, ( FgGLuint, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI3iv, ( FgGLuint, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI4iv, ( FgGLuint, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI1uiv, ( FgGLuint, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI2uiv, ( FgGLuint, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI3uiv, ( FgGLuint, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI4uiv, ( FgGLuint, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI4bv, ( FgGLuint, const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI4sv, ( FgGLuint, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI4ubv, ( FgGLuint, const FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI4usv, ( FgGLuint, const FgGLushort * ) ) \
    FG_GL_FUNCTION( void, GetUniformuiv, ( FgGLuint, FgGLint, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, BindFragDataLocation, ( FgGLuint, FgGLuint, const FgGLchar * ) ) \
    FG_GL_FUNCTION( FgGLint, GetFragDataLocation, ( FgGLuint, const FgGLchar * ) ) \
    FG_GL_FUNCTION( void, Uniform1ui, ( FgGLint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, Uniform2ui, ( FgGLint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, Uniform3ui, ( FgGLint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, Uniform4ui, ( FgGLint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, Uniform1uiv, ( FgGLint, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, Uniform2uiv, ( FgGLint, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, Uniform3uiv, ( FgGLint, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, Uniform4uiv, ( FgGLint, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, TexParameterIiv, ( FgGLenum, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, TexParameterIuiv, ( FgGLenum, FgGLenum, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GetTexParameterIiv, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetTexParameterIuiv, ( FgGLenum, FgGLenum, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, ClearBufferiv, ( FgGLenum, FgGLint, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, ClearBufferuiv, ( FgGLenum, FgGLint, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, ClearBufferfv, ( FgGLenum, FgGLint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ClearBufferfi, ( FgGLenum, FgGLint, FgGLfloat, FgGLint ) ) \
    FG_GL_FUNCTION( const FgGLubyte *, GetStringi, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsRenderbuffer, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, BindRenderbuffer, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, DeleteRenderbuffers, ( FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GenRenderbuffers, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, RenderbufferStorage, ( FgGLenum, FgGLenum, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, GetRenderbufferParameteriv, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsFramebuffer, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, BindFramebuffer, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, DeleteFramebuffers, ( FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GenFramebuffers, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( FgGLenum, CheckFramebufferStatus, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, FramebufferTexture1D, ( FgGLenum, FgGLenum, FgGLenum, FgGLuint, FgGLint ) ) \
    FG_GL_FUNCTION( void, FramebufferTexture2D, ( FgGLenum, FgGLenum, FgGLenum, FgGLuint, FgGLint ) ) \
    FG_GL_FUNCTION( void, FramebufferTexture3D, ( FgGLenum, FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, FramebufferRenderbuffer, ( FgGLenum, FgGLenum, FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetFramebufferAttachmentParameteriv, ( FgGLenum, FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GenerateMipmap, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, BlitFramebuffer, ( FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLbitfield, FgGLenum ) ) \
    FG_GL_FUNCTION( void, RenderbufferStorageMultisample, ( FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, FramebufferTextureLayer, ( FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void *, MapBufferRange, ( FgGLenum, FgGLintptr, FgGLsizeiptr, FgGLbitfield ) ) \
    FG_GL_FUNCTION( void, FlushMappedBufferRange, ( FgGLenum, FgGLintptr, FgGLsizeiptr ) ) \
    FG_GL_FUNCTION( void, BindVertexArray, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, DeleteVertexArrays, ( FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GenVertexArrays, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsVertexArray, ( FgGLuint ) ) \
\
    /* GL_VERSION_3_1 */ \
    FG_GL_FUNCTION( void, DrawArraysInstanced, ( FgGLenum, FgGLint, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, DrawElementsInstanced, ( FgGLenum, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, TexBuffer, ( FgGLenum, FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, PrimitiveRestartIndex, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, CopyBufferSubData, ( FgGLenum, FgGLenum, FgGLintptr, FgGLintptr, FgGLsizeiptr ) ) \
    FG_GL_FUNCTION( void, GetUniformIndices, ( FgGLuint, FgGLsizei, const FgGLchar *const*, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GetActiveUniformsiv, ( FgGLuint, FgGLsizei, const FgGLuint *, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetActiveUniformName, ( FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) ) \
    FG_GL_FUNCTION( FgGLuint, GetUniformBlockIndex, ( FgGLuint, const FgGLchar * ) ) \
    FG_GL_FUNCTION( void, GetActiveUniformBlockiv, ( FgGLuint, FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetActiveUniformBlockName, ( FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) ) \
    FG_GL_FUNCTION( void, UniformBlockBinding, ( FgGLuint, FgGLuint, FgGLuint ) ) \
\
    /* GL_VERSION_3_2 */ \
    FG_GL_FUNCTION( void, DrawElementsBaseVertex, ( FgGLenum, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLint ) ) \
    FG_GL_FUNCTION( void, DrawRangeElementsBaseVertex, ( FgGLenum, FgGLuint, FgGLuint, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLint ) ) \
    FG_GL_FUNCTION( void, DrawElementsInstancedBaseVertex, ( FgGLenum, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLsizei, FgGLint ) ) \
    FG_GL_FUNCTION( void, MultiDrawElementsBaseVertex, ( FgGLenum, const FgGLsizei *, FgGLenum, const FgGLvoid *const*, FgGLsizei, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, ProvokingVertex, ( FgGLenum ) ) \
    FG_GL_FUNCTION( FgGLsync, FenceSync, ( FgGLenum, FgGLbitfield ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsSync, ( FgGLsync ) ) \
    FG_GL_FUNCTION( void, DeleteSync, ( FgGLsync ) ) \
    FG_GL_FUNCTION( FgGLenum, ClientWaitSync, ( FgGLsync, FgGLbitfield, FgGLuint64 ) ) \
    FG_GL_FUNCTION( void, WaitSync, ( FgGLsync, FgGLbitfield, FgGLuint64 ) ) \
    FG_GL_FUNCTION( void, GetInteger64v, ( FgGLenum, FgGLint64 * ) ) \
    FG_GL_FUNCTION( void, GetSynciv, ( FgGLsync, FgGLenum, FgGLsizei, FgGLsizei *, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetInteger64i_v, ( FgGLenum, FgGLuint, FgGLint64 * ) ) \
    FG_GL_FUNCTION( void, GetBufferParameteri64v, ( FgGLenum, FgGLenum, FgGLint64 * ) ) \
    FG_GL_FUNCTION( void, FramebufferTexture, ( FgGLenum, FgGLenum, FgGLuint, FgGLint ) ) \
    FG_GL_FUNCTION( void, TexImage2DMultisample, ( FgGLenum, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, TexImage3DMultisample, ( FgGLenum, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, GetMultisamplefv, ( FgGLenum, FgGLuint, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, SampleMaski, ( FgGLuint, FgGLbitfield ) ) \
\
    /* GL_VERSION_3_3 */ \
    FG_GL_FUNCTION( void, BindFragDataLocationIndexed, ( FgGLuint, FgGLuint, FgGLuint, const FgGLchar * ) ) \
    FG_GL_FUNCTION( FgGLint, GetFragDataIndex, ( FgGLuint, const FgGLchar * ) ) \
    FG_GL_FUNCTION( void, GenSamplers, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, DeleteSamplers, ( FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsSampler, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, BindSampler, ( FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, SamplerParameteri, ( FgGLuint, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, SamplerParameteriv, ( FgGLuint, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, SamplerParameterf, ( FgGLuint, FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, SamplerParameterfv, ( FgGLuint, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, SamplerParameterIiv, ( FgGLuint, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, SamplerParameterIuiv, ( FgGLuint, FgGLenum, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GetSamplerParameteriv, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetSamplerParameterIiv, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetSamplerParameterfv, ( FgGLuint, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetSamplerParameterIuiv, ( FgGLuint, FgGLenum, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, QueryCounter, ( FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, GetQueryObjecti64v, ( FgGLuint, FgGLenum, FgGLint64 * ) ) \
    FG_GL_FUNCTION( void, GetQueryObjectui64v, ( FgGLuint, FgGLenum, FgGLuint64 * ) ) \
    FG_GL_FUNCTION( void, VertexAttribDivisor, ( FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexAttribP1ui, ( FgGLuint, FgGLenum, FgGLboolean, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexAttribP1uiv, ( FgGLuint, FgGLenum, FgGLboolean, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, VertexAttribP2ui, ( FgGLuint, FgGLenum, FgGLboolean, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexAttribP2uiv, ( FgGLuint, FgGLenum, FgGLboolean, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, VertexAttribP3ui, ( FgGLuint, FgGLenum, FgGLboolean, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexAttribP3uiv, ( FgGLuint, FgGLenum, FgGLboolean, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, VertexAttribP4ui, ( FgGLuint, FgGLenum, FgGLboolean, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexAttribP4uiv, ( FgGLuint, FgGLenum, FgGLboolean, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, VertexP2ui, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexP2uiv, ( FgGLenum, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, VertexP3ui, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexP3uiv, ( FgGLenum, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, VertexP4ui, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexP4uiv, ( FgGLenum, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, TexCoordP1ui, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, TexCoordP1uiv, ( FgGLenum, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, TexCoordP2ui, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, TexCoordP2uiv, ( FgGLenum, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, TexCoordP3ui, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, TexCoordP3uiv, ( FgGLenum, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, TexCoordP4ui, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, TexCoordP4uiv, ( FgGLenum, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoordP1ui, ( FgGLenum, FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, MultiTexCoordP1uiv, ( FgGLenum, FgGLenum, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoordP2ui, ( FgGLenum, FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, MultiTexCoordP2uiv, ( FgGLenum, FgGLenum, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoordP3ui, ( FgGLenum, FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, MultiTexCoordP3uiv, ( FgGLenum, FgGLenum, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoordP4ui, ( FgGLenum, FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, MultiTexCoordP4uiv, ( FgGLenum, FgGLenum, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, NormalP3ui, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, NormalP3uiv, ( FgGLenum, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, ColorP3ui, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, ColorP3uiv, ( FgGLenum, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, ColorP4ui, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, ColorP4uiv, ( FgGLenum, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, SecondaryColorP3ui, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, SecondaryColorP3uiv, ( FgGLenum, const FgGLuint * ) ) \
\
    /* GL_VERSION_4_0 */ \
    FG_GL_FUNCTION( void, MinSampleShading, ( FgGLfloat ) ) \
    FG_GL_FUNCTION( void, BlendEquationi, ( FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, BlendEquationSeparatei, ( FgGLuint, FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, BlendFunci, ( FgGLuint, FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, BlendFuncSeparatei, ( FgGLuint, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, DrawArraysIndirect, ( FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, DrawElementsIndirect, ( FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, Uniform1d, ( FgGLint, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, Uniform2d, ( FgGLint, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, Uniform3d, ( FgGLint, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, Uniform4d, ( FgGLint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, Uniform1dv, ( FgGLint, FgGLsizei, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, Uniform2dv, ( FgGLint, FgGLsizei, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, Uniform3dv, ( FgGLint, FgGLsizei, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, Uniform4dv, ( FgGLint, FgGLsizei, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, UniformMatrix2dv, ( FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, UniformMatrix3dv, ( FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, UniformMatrix4dv, ( FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, UniformMatrix2x3dv, ( FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, UniformMatrix2x4dv, ( FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, UniformMatrix3x2dv, ( FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, UniformMatrix3x4dv, ( FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, UniformMatrix4x2dv, ( FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, UniformMatrix4x3dv, ( FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, GetUniformdv, ( FgGLuint, FgGLint, FgGLdouble * ) ) \
    FG_GL_FUNCTION( FgGLint, GetSubroutineUniformLocation, ( FgGLuint, FgGLenum, const FgGLchar * ) ) \
    FG_GL_FUNCTION( FgGLuint, GetSubroutineIndex, ( FgGLuint, FgGLenum, const FgGLchar * ) ) \
    FG_GL_FUNCTION( void, GetActiveSubroutineUniformiv, ( FgGLuint, FgGLenum, FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetActiveSubroutineUniformName, ( FgGLuint, FgGLenum, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) ) \
    FG_GL_FUNCTION( void, GetActiveSubroutineName, ( FgGLuint, FgGLenum, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) ) \
    FG_GL_FUNCTION( void, UniformSubroutinesuiv, ( FgGLenum, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GetUniformSubroutineuiv, ( FgGLenum, FgGLint, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GetProgramStageiv, ( FgGLuint, FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, PatchParameteri, ( FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, PatchParameterfv, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, BindTransformFeedback, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, DeleteTransformFeedbacks, ( FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GenTransformFeedbacks, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsTransformFeedback, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, PauseTransformFeedback, ( ) ) \
    FG_GL_FUNCTION( void, ResumeTransformFeedback, ( ) ) \
    FG_GL_FUNCTION( void, DrawTransformFeedback, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, DrawTransformFeedbackStream, ( FgGLenum, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, BeginQueryIndexed, ( FgGLenum, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, EndQueryIndexed, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetQueryIndexediv, ( FgGLenum, FgGLuint, FgGLenum, FgGLint * ) ) \
\
    /* GL_VERSION_4_1 */ \
    FG_GL_FUNCTION( void, ReleaseShaderCompiler, ( ) ) \
    FG_GL_FUNCTION( void, ShaderBinary, ( FgGLsizei, const FgGLuint *, FgGLenum, const FgGLvoid *, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, GetShaderPrecisionFormat, ( FgGLenum, FgGLenum, FgGLint *, FgGLint * ) ) \
    FG_GL_FUNCTION( void, DepthRangef, ( FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ClearDepthf, ( FgGLfloat ) ) \
    FG_GL_FUNCTION( void, GetProgramBinary, ( FgGLuint, FgGLsizei, FgGLsizei *, FgGLenum *, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, ProgramBinary, ( FgGLuint, FgGLenum, const FgGLvoid *, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, ProgramParameteri, ( FgGLuint, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, UseProgramStages, ( FgGLuint, FgGLbitfield, FgGLuint ) ) \
    FG_GL_FUNCTION( void, ActiveShaderProgram, ( FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( FgGLuint, CreateShaderProgramv, ( FgGLenum, FgGLsizei, const FgGLchar *const* ) ) \
    FG_GL_FUNCTION( void, BindProgramPipeline, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, DeleteProgramPipelines, ( FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GenProgramPipelines, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsProgramPipeline, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetProgramPipelineiv, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform1i, ( FgGLuint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, ProgramUniform1iv, ( FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform1f, ( FgGLuint, FgGLint, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ProgramUniform1fv, ( FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform1d, ( FgGLuint, FgGLint, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, ProgramUniform1dv, ( FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform1ui, ( FgGLuint, FgGLint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, ProgramUniform1uiv, ( FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform2i, ( FgGLuint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, ProgramUniform2iv, ( FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform2f, ( FgGLuint, FgGLint, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ProgramUniform2fv, ( FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform2d, ( FgGLuint, FgGLint, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, ProgramUniform2dv, ( FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform2ui, ( FgGLuint, FgGLint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, ProgramUniform2uiv, ( FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform3i, ( FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, ProgramUniform3iv, ( FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform3f, ( FgGLuint, FgGLint, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ProgramUniform3fv, ( FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform3d, ( FgGLuint, FgGLint, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, ProgramUniform3dv, ( FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform3ui, ( FgGLuint, FgGLint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, ProgramUniform3uiv, ( FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform4i, ( FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, ProgramUniform4iv, ( FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform4f, ( FgGLuint, FgGLint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ProgramUniform4fv, ( FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform4d, ( FgGLuint, FgGLint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, ProgramUniform4dv, ( FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform4ui, ( FgGLuint, FgGLint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, ProgramUniform4uiv, ( FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix2fv, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix3fv, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix4fv, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix2dv, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix3dv, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix4dv, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix2x3fv, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix3x2fv, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix2x4fv, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix4x2fv, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix3x4fv, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix4x3fv, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix2x3dv, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix3x2dv, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix2x4dv, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix4x2dv, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix3x4dv, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix4x3dv, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ValidateProgramPipeline, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetProgramPipelineInfoLog, ( FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) ) \
    FG_GL_FUNCTION( void, VertexAttribL1d, ( FgGLuint, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexAttribL2d, ( FgGLuint, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexAttribL3d, ( FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexAttribL4d, ( FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexAttribL1dv, ( FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttribL2dv, ( FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttribL3dv, ( FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttribL4dv, ( FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttribLPointer, ( FgGLuint, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribLdv, ( FgGLuint, FgGLenum, FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ViewportArrayv, ( FgGLuint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ViewportIndexedf, ( FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ViewportIndexedfv, ( FgGLuint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ScissorArrayv, ( FgGLuint, FgGLsizei, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, ScissorIndexed, ( FgGLuint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, ScissorIndexedv, ( FgGLuint, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, DepthRangeArrayv, ( FgGLuint, FgGLsizei, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, DepthRangeIndexed, ( FgGLuint, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, GetFloati_v, ( FgGLenum, FgGLuint, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetDoublei_v, ( FgGLenum, FgGLuint, FgGLdouble * ) ) \
\
    /* GL_VERSION_4_2 */ \
    FG_GL_FUNCTION( void, DrawArraysInstancedBaseInstance, ( FgGLenum, FgGLint, FgGLsizei, FgGLsizei, FgGLuint ) ) \
    FG_GL_FUNCTION( void, DrawElementsInstancedBaseInstance, ( FgGLenum, FgGLsizei, FgGLenum, const void *, FgGLsizei, FgGLuint ) ) \
    FG_GL_FUNCTION( void, DrawElementsInstancedBaseVertexBaseInstance, ( FgGLenum, FgGLsizei, FgGLenum, const void *, FgGLsizei, FgGLint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetInternalformativ, ( FgGLenum, FgGLenum, FgGLenum, FgGLsizei, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetActiveAtomicCounterBufferiv, ( FgGLuint, FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, BindImageTexture, ( FgGLuint, FgGLuint, FgGLint, FgGLboolean, FgGLint, FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, MemoryBarrier, ( FgGLbitfield ) ) \
    FG_GL_FUNCTION( void, TexStorage1D, ( FgGLenum, FgGLsizei, FgGLenum, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, TexStorage2D, ( FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, TexStorage3D, ( FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, DrawTransformFeedbackInstanced, ( FgGLenum, FgGLuint, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, DrawTransformFeedbackStreamInstanced, ( FgGLenum, FgGLuint, FgGLuint, FgGLsizei ) ) \
\
    /* GL_VERSION_4_3 */ \
    FG_GL_FUNCTION( void, ClearBufferData, ( FgGLenum, FgGLenum, FgGLenum, FgGLenum, const void * ) ) \
    FG_GL_FUNCTION( void, ClearBufferSubData, ( FgGLenum, FgGLenum, FgGLintptr, FgGLsizeiptr, FgGLenum, FgGLenum, const void * ) ) \
    FG_GL_FUNCTION( void, DispatchCompute, ( FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, DispatchComputeIndirect, ( FgGLintptr ) ) \
    FG_GL_FUNCTION( void, CopyImageSubData, ( FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, FramebufferParameteri, ( FgGLenum, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, GetFramebufferParameteriv, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetInternalformati64v, ( FgGLenum, FgGLenum, FgGLenum, FgGLsizei, FgGLint64 * ) ) \
    FG_GL_FUNCTION( void, InvalidateTexSubImage, ( FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, InvalidateTexImage, ( FgGLuint, FgGLint ) ) \
    FG_GL_FUNCTION( void, InvalidateBufferSubData, ( FgGLuint, FgGLintptr, FgGLsizeiptr ) ) \
    FG_GL_FUNCTION( void, InvalidateBufferData, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, InvalidateFramebuffer, ( FgGLenum, FgGLsizei, const FgGLenum * ) ) \
    FG_GL_FUNCTION( void, InvalidateSubFramebuffer, ( FgGLenum, FgGLsizei, const FgGLenum *, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, MultiDrawArraysIndirect, ( FgGLenum, const void *, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, MultiDrawElementsIndirect, ( FgGLenum, FgGLenum, const void *, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, GetProgramInterfaceiv, ( FgGLuint, FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( FgGLuint, GetProgramResourceIndex, ( FgGLuint, FgGLenum, const FgGLchar * ) ) \
    FG_GL_FUNCTION( void, GetProgramResourceName, ( FgGLuint, FgGLenum, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) ) \
    FG_GL_FUNCTION( void, GetProgramResourceiv, ( FgGLuint, FgGLenum, FgGLuint, FgGLsizei, const FgGLenum *, FgGLsizei, FgGLsizei *, FgGLint * ) ) \
    FG_GL_FUNCTION( FgGLint, GetProgramResourceLocation, ( FgGLuint, FgGLenum, const FgGLchar * ) ) \
    FG_GL_FUNCTION( FgGLint, GetProgramResourceLocationIndex, ( FgGLuint, FgGLenum, const FgGLchar * ) ) \
    FG_GL_FUNCTION( void, ShaderStorageBlockBinding, ( FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, TexBufferRange, ( FgGLenum, FgGLenum, FgGLuint, FgGLintptr, FgGLsizeiptr ) ) \
    FG_GL_FUNCTION( void, TexStorage2DMultisample, ( FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, TexStorage3DMultisample, ( FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, TextureView, ( FgGLuint, FgGLenum, FgGLuint, FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, BindVertexBuffer, ( FgGLuint, FgGLuint, FgGLintptr, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, VertexAttribFormat, ( FgGLuint, FgGLint, FgGLenum, FgGLboolean, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexAttribIFormat, ( FgGLuint, FgGLint, FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexAttribLFormat, ( FgGLuint, FgGLint, FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexAttribBinding, ( FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexBindingDivisor, ( FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, DebugMessageControl, ( FgGLenum, FgGLenum, FgGLenum, FgGLsizei, const FgGLuint *, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, DebugMessageInsert, ( FgGLenum, FgGLenum, FgGLuint, FgGLenum, FgGLsizei, const FgGLchar * ) ) \
    FG_GL_FUNCTION( void, DebugMessageCallback, ( FgGLDebugProc, const void * ) ) \
    FG_GL_FUNCTION( FgGLuint, GetDebugMessageLog, ( FgGLuint, FgGLsizei, FgGLenum *, FgGLenum *, FgGLuint *, FgGLenum *, FgGLsizei *, FgGLchar * ) ) \
    FG_GL_FUNCTION( void, PushDebugGroup, ( FgGLenum, FgGLuint, FgGLsizei, const FgGLchar * ) ) \
    FG_GL_FUNCTION( void, PopDebugGroup, ( ) ) \
    FG_GL_FUNCTION( void, ObjectLabel, ( FgGLenum, FgGLuint, FgGLsizei, const FgGLchar * ) ) \
    FG_GL_FUNCTION( void, GetObjectLabel, ( FgGLenum, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) ) \
    FG_GL_FUNCTION( void, ObjectPtrLabel, ( const void *, FgGLsizei, const FgGLchar * ) ) \
    FG_GL_FUNCTION( void, GetObjectPtrLabel, ( const void *, FgGLsizei, FgGLsizei *, FgGLchar * ) ) \
\
    /* GL_VERSION_4_4 */ \
    FG_GL_FUNCTION( void, BufferStorage, ( FgGLenum, FgGLsizeiptr, const void *, FgGLbitfield ) ) \
    FG_GL_FUNCTION( void, ClearTexImage, ( FgGLuint, FgGLint, FgGLenum, FgGLenum, const void * ) ) \
    FG_GL_FUNCTION( void, ClearTexSubImage, ( FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const void * ) ) \
    FG_GL_FUNCTION( void, BindBuffersBase, ( FgGLenum, FgGLuint, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, BindBuffersRange, ( FgGLenum, FgGLuint, FgGLsizei, const FgGLuint *, const FgGLintptr *, const FgGLsizeiptr * ) ) \
    FG_GL_FUNCTION( void, BindTextures, ( FgGLuint, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, BindSamplers, ( FgGLuint, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, BindImageTextures, ( FgGLuint, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, BindVertexBuffers, ( FgGLuint, FgGLsizei, const FgGLuint *, const FgGLintptr *, const FgGLsizei * ) ) \
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
    FG_GL_FUNCTION( FgGLuint64, GetTextureHandleARB, ( FgGLuint ) ) \
    FG_GL_FUNCTION( FgGLuint64, GetTextureSamplerHandleARB, ( FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, MakeTextureHandleResidentARB, ( FgGLuint64 ) ) \
    FG_GL_FUNCTION( void, MakeTextureHandleNonResidentARB, ( FgGLuint64 ) ) \
    FG_GL_FUNCTION( FgGLuint64, GetImageHandleARB, ( FgGLuint, FgGLint, FgGLboolean, FgGLint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, MakeImageHandleResidentARB, ( FgGLuint64, FgGLenum ) ) \
    FG_GL_FUNCTION( void, MakeImageHandleNonResidentARB, ( FgGLuint64 ) ) \
    FG_GL_FUNCTION( void, UniformHandleui64ARB, ( FgGLint, FgGLuint64 ) ) \
    FG_GL_FUNCTION( void, UniformHandleui64vARB, ( FgGLint, FgGLsizei, const FgGLuint64 * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformHandleui64ARB, ( FgGLuint, FgGLint, FgGLuint64 ) ) \
    FG_GL_FUNCTION( void, ProgramUniformHandleui64vARB, ( FgGLuint, FgGLint, FgGLsizei, const FgGLuint64 * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsTextureHandleResidentARB, ( FgGLuint64 ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsImageHandleResidentARB, ( FgGLuint64 ) ) \
    FG_GL_FUNCTION( void, VertexAttribL1ui64ARB, ( FgGLuint, FgGLuint64EXT ) ) \
    FG_GL_FUNCTION( void, VertexAttribL1ui64vARB, ( FgGLuint, const FgGLuint64EXT * ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribLui64vARB, ( FgGLuint, FgGLenum, FgGLuint64EXT * ) ) \
\
    /* GL_ARB_blend_func_extended */ \
\
    /* GL_ARB_buffer_storage */ \
\
    /* GL_ARB_cl_event */ \
    FG_GL_FUNCTION( FgGLsync, CreateSyncFromCLeventARB, ( struct _cl_context *, struct _cl_event *, FgGLbitfield ) ) \
\
    /* GL_ARB_clear_buffer_object */ \
\
    /* GL_ARB_clear_texture */ \
\
    /* GL_ARB_color_buffer_float */ \
    FG_GL_FUNCTION( void, ClampColorARB, ( FgGLenum, FgGLenum ) ) \
\
    /* GL_ARB_compatibility */ \
\
    /* GL_ARB_compressed_texture_pixel_storage */ \
\
    /* GL_ARB_compute_shader */ \
\
    /* GL_ARB_compute_variable_group_size */ \
    FG_GL_FUNCTION( void, DispatchComputeGroupSizeARB, ( FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) ) \
\
    /* GL_ARB_conservative_depth */ \
\
    /* GL_ARB_copy_buffer */ \
\
    /* GL_ARB_copy_image */ \
\
    /* GL_ARB_debug_output */ \
    FG_GL_FUNCTION( void, DebugMessageControlARB, ( FgGLenum, FgGLenum, FgGLenum, FgGLsizei, const FgGLuint *, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, DebugMessageInsertARB, ( FgGLenum, FgGLenum, FgGLuint, FgGLenum, FgGLsizei, const FgGLchar * ) ) \
    FG_GL_FUNCTION( void, DebugMessageCallbackARB, ( FgGLDebugProcARB, const void * ) ) \
    FG_GL_FUNCTION( FgGLuint, GetDebugMessageLogARB, ( FgGLuint, FgGLsizei, FgGLenum *, FgGLenum *, FgGLuint *, FgGLenum *, FgGLsizei *, FgGLchar * ) ) \
\
    /* GL_ARB_depth_buffer_float */ \
\
    /* GL_ARB_depth_clamp */ \
\
    /* GL_ARB_depth_texture */ \
\
    /* GL_ARB_draw_buffers */ \
    FG_GL_FUNCTION( void, DrawBuffersARB, ( FgGLsizei, const FgGLenum * ) ) \
\
    /* GL_ARB_draw_buffers_blend */ \
    FG_GL_FUNCTION( void, BlendEquationiARB, ( FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, BlendEquationSeparateiARB, ( FgGLuint, FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, BlendFunciARB, ( FgGLuint, FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, BlendFuncSeparateiARB, ( FgGLuint, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) ) \
\
    /* GL_ARB_draw_elements_base_vertex */ \
\
    /* GL_ARB_draw_indirect */ \
\
    /* GL_ARB_draw_instanced */ \
    FG_GL_FUNCTION( void, DrawArraysInstancedARB, ( FgGLenum, FgGLint, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, DrawElementsInstancedARB, ( FgGLenum, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLsizei ) ) \
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
    FG_GL_FUNCTION( void, ProgramStringARB, ( FgGLenum, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, BindProgramARB, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, DeleteProgramsARB, ( FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GenProgramsARB, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, ProgramEnvParameter4dARB, ( FgGLenum, FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, ProgramEnvParameter4dvARB, ( FgGLenum, FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramEnvParameter4fARB, ( FgGLenum, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ProgramEnvParameter4fvARB, ( FgGLenum, FgGLuint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramLocalParameter4dARB, ( FgGLenum, FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, ProgramLocalParameter4dvARB, ( FgGLenum, FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramLocalParameter4fARB, ( FgGLenum, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ProgramLocalParameter4fvARB, ( FgGLenum, FgGLuint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetProgramEnvParameterdvARB, ( FgGLenum, FgGLuint, FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, GetProgramEnvParameterfvARB, ( FgGLenum, FgGLuint, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetProgramLocalParameterdvARB, ( FgGLenum, FgGLuint, FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, GetProgramLocalParameterfvARB, ( FgGLenum, FgGLuint, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetProgramivARB, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetProgramStringARB, ( FgGLenum, FgGLenum, FgGLvoid * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsProgramARB, ( FgGLuint ) ) \
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
    FG_GL_FUNCTION( void, ProgramParameteriARB, ( FgGLuint, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, FramebufferTextureARB, ( FgGLenum, FgGLenum, FgGLuint, FgGLint ) ) \
    FG_GL_FUNCTION( void, FramebufferTextureLayerARB, ( FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, FramebufferTextureFaceARB, ( FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLenum ) ) \
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
    FG_GL_FUNCTION( void, ColorTable, ( FgGLenum, FgGLenum, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, ColorTableParameterfv, ( FgGLenum, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ColorTableParameteriv, ( FgGLenum, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, CopyColorTable, ( FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, GetColorTable, ( FgGLenum, FgGLenum, FgGLenum, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetColorTableParameterfv, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetColorTableParameteriv, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, ColorSubTable, ( FgGLenum, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CopyColorSubTable, ( FgGLenum, FgGLsizei, FgGLint, FgGLint, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, ConvolutionFilter1D, ( FgGLenum, FgGLenum, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, ConvolutionFilter2D, ( FgGLenum, FgGLenum, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, ConvolutionParameterf, ( FgGLenum, FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ConvolutionParameterfv, ( FgGLenum, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ConvolutionParameteri, ( FgGLenum, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, ConvolutionParameteriv, ( FgGLenum, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, CopyConvolutionFilter1D, ( FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, CopyConvolutionFilter2D, ( FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, GetConvolutionFilter, ( FgGLenum, FgGLenum, FgGLenum, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetConvolutionParameterfv, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetConvolutionParameteriv, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetSeparableFilter, ( FgGLenum, FgGLenum, FgGLenum, FgGLvoid *, FgGLvoid *, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, SeparableFilter2D, ( FgGLenum, FgGLenum, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid *, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetHistogram, ( FgGLenum, FgGLboolean, FgGLenum, FgGLenum, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetHistogramParameterfv, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetHistogramParameteriv, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetMinmax, ( FgGLenum, FgGLboolean, FgGLenum, FgGLenum, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetMinmaxParameterfv, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetMinmaxParameteriv, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, Histogram, ( FgGLenum, FgGLsizei, FgGLenum, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, Minmax, ( FgGLenum, FgGLenum, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, ResetHistogram, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, ResetMinmax, ( FgGLenum ) ) \
\
    /* GL_ARB_indirect_parameters */ \
    FG_GL_FUNCTION( void, MultiDrawArraysIndirectCountARB, ( FgGLenum, FgGLintptr, FgGLintptr, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, MultiDrawElementsIndirectCountARB, ( FgGLenum, FgGLenum, FgGLintptr, FgGLintptr, FgGLsizei, FgGLsizei ) ) \
\
    /* GL_ARB_instanced_arrays */ \
    FG_GL_FUNCTION( void, VertexAttribDivisorARB, ( FgGLuint, FgGLuint ) ) \
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
    FG_GL_FUNCTION( void, CurrentPaletteMatrixARB, ( FgGLint ) ) \
    FG_GL_FUNCTION( void, MatrixIndexubvARB, ( FgGLint, const FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, MatrixIndexusvARB, ( FgGLint, const FgGLushort * ) ) \
    FG_GL_FUNCTION( void, MatrixIndexuivARB, ( FgGLint, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, MatrixIndexPointerARB, ( FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
\
    /* GL_ARB_multi_bind */ \
\
    /* GL_ARB_multi_draw_indirect */ \
\
    /* GL_ARB_multisample */ \
    FG_GL_FUNCTION( void, SampleCoverageARB, ( FgGLfloat, FgGLboolean ) ) \
\
    /* GL_ARB_multitexture */ \
    FG_GL_FUNCTION( void, ActiveTextureARB, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, ClientActiveTextureARB, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord1dARB, ( FgGLenum, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord1dvARB, ( FgGLenum, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord1fARB, ( FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord1fvARB, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord1iARB, ( FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord1ivARB, ( FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord1sARB, ( FgGLenum, FgGLshort ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord1svARB, ( FgGLenum, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord2dARB, ( FgGLenum, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord2dvARB, ( FgGLenum, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord2fARB, ( FgGLenum, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord2fvARB, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord2iARB, ( FgGLenum, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord2ivARB, ( FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord2sARB, ( FgGLenum, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord2svARB, ( FgGLenum, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord3dARB, ( FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord3dvARB, ( FgGLenum, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord3fARB, ( FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord3fvARB, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord3iARB, ( FgGLenum, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord3ivARB, ( FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord3sARB, ( FgGLenum, FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord3svARB, ( FgGLenum, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord4dARB, ( FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord4dvARB, ( FgGLenum, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord4fARB, ( FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord4fvARB, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord4iARB, ( FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord4ivARB, ( FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord4sARB, ( FgGLenum, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord4svARB, ( FgGLenum, const FgGLshort * ) ) \
\
    /* GL_ARB_occlusion_query */ \
    FG_GL_FUNCTION( void, GenQueriesARB, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, DeleteQueriesARB, ( FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsQueryARB, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, BeginQueryARB, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, EndQueryARB, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, GetQueryivARB, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetQueryObjectivARB, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetQueryObjectuivARB, ( FgGLuint, FgGLenum, FgGLuint * ) ) \
\
    /* GL_ARB_occlusion_query2 */ \
\
    /* GL_ARB_pixel_buffer_object */ \
\
    /* GL_ARB_point_parameters */ \
    FG_GL_FUNCTION( void, PointParameterfARB, ( FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, PointParameterfvARB, ( FgGLenum, const FgGLfloat * ) ) \
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
    FG_GL_FUNCTION( FgGLenum, GetGraphicsResetStatusARB, ( ) ) \
    FG_GL_FUNCTION( void, GetnTexImageARB, ( FgGLenum, FgGLint, FgGLenum, FgGLenum, FgGLsizei, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, ReadnPixelsARB, ( FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, FgGLsizei, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetnCompressedTexImageARB, ( FgGLenum, FgGLint, FgGLsizei, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetnUniformfvARB, ( FgGLuint, FgGLint, FgGLsizei, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetnUniformivARB, ( FgGLuint, FgGLint, FgGLsizei, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetnUniformuivARB, ( FgGLuint, FgGLint, FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GetnUniformdvARB, ( FgGLuint, FgGLint, FgGLsizei, FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, GetnMapdvARB, ( FgGLenum, FgGLenum, FgGLsizei, FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, GetnMapfvARB, ( FgGLenum, FgGLenum, FgGLsizei, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetnMapivARB, ( FgGLenum, FgGLenum, FgGLsizei, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetnPixelMapfvARB, ( FgGLenum, FgGLsizei, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetnPixelMapuivARB, ( FgGLenum, FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GetnPixelMapusvARB, ( FgGLenum, FgGLsizei, FgGLushort * ) ) \
    FG_GL_FUNCTION( void, GetnPolygonStippleARB, ( FgGLsizei, FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, GetnColorTableARB, ( FgGLenum, FgGLenum, FgGLenum, FgGLsizei, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetnConvolutionFilterARB, ( FgGLenum, FgGLenum, FgGLenum, FgGLsizei, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetnSeparableFilterARB, ( FgGLenum, FgGLenum, FgGLenum, FgGLsizei, FgGLvoid *, FgGLsizei, FgGLvoid *, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetnHistogramARB, ( FgGLenum, FgGLboolean, FgGLenum, FgGLenum, FgGLsizei, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetnMinmaxARB, ( FgGLenum, FgGLboolean, FgGLenum, FgGLenum, FgGLsizei, FgGLvoid * ) ) \
\
    /* GL_ARB_robustness_isolation */ \
\
    /* GL_ARB_sample_shading */ \
    FG_GL_FUNCTION( void, MinSampleShadingARB, ( FgGLfloat ) ) \
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
    FG_GL_FUNCTION( void, DeleteObjectARB, ( FgGLhandleARB ) ) \
    FG_GL_FUNCTION( FgGLhandleARB, GetHandleARB, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, DetachObjectARB, ( FgGLhandleARB, FgGLhandleARB ) ) \
    FG_GL_FUNCTION( FgGLhandleARB, CreateShaderObjectARB, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, ShaderSourceARB, ( FgGLhandleARB, FgGLsizei, const FgGLcharARB **, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, CompileShaderARB, ( FgGLhandleARB ) ) \
    FG_GL_FUNCTION( FgGLhandleARB, CreateProgramObjectARB, ( ) ) \
    FG_GL_FUNCTION( void, AttachObjectARB, ( FgGLhandleARB, FgGLhandleARB ) ) \
    FG_GL_FUNCTION( void, LinkProgramARB, ( FgGLhandleARB ) ) \
    FG_GL_FUNCTION( void, UseProgramObjectARB, ( FgGLhandleARB ) ) \
    FG_GL_FUNCTION( void, ValidateProgramARB, ( FgGLhandleARB ) ) \
    FG_GL_FUNCTION( void, Uniform1fARB, ( FgGLint, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Uniform2fARB, ( FgGLint, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Uniform3fARB, ( FgGLint, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Uniform4fARB, ( FgGLint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Uniform1iARB, ( FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, Uniform2iARB, ( FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, Uniform3iARB, ( FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, Uniform4iARB, ( FgGLint, FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, Uniform1fvARB, ( FgGLint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Uniform2fvARB, ( FgGLint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Uniform3fvARB, ( FgGLint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Uniform4fvARB, ( FgGLint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Uniform1ivARB, ( FgGLint, FgGLsizei, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, Uniform2ivARB, ( FgGLint, FgGLsizei, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, Uniform3ivARB, ( FgGLint, FgGLsizei, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, Uniform4ivARB, ( FgGLint, FgGLsizei, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, UniformMatrix2fvARB, ( FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, UniformMatrix3fvARB, ( FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, UniformMatrix4fvARB, ( FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetObjectParameterfvARB, ( FgGLhandleARB, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetObjectParameterivARB, ( FgGLhandleARB, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetInfoLogARB, ( FgGLhandleARB, FgGLsizei, FgGLsizei *, FgGLcharARB * ) ) \
    FG_GL_FUNCTION( void, GetAttachedObjectsARB, ( FgGLhandleARB, FgGLsizei, FgGLsizei *, FgGLhandleARB * ) ) \
    FG_GL_FUNCTION( FgGLint, GetUniformLocationARB, ( FgGLhandleARB, const FgGLcharARB * ) ) \
    FG_GL_FUNCTION( void, GetActiveUniformARB, ( FgGLhandleARB, FgGLuint, FgGLsizei, FgGLsizei *, FgGLint *, FgGLenum *, FgGLcharARB * ) ) \
    FG_GL_FUNCTION( void, GetUniformfvARB, ( FgGLhandleARB, FgGLint, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetUniformivARB, ( FgGLhandleARB, FgGLint, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetShaderSourceARB, ( FgGLhandleARB, FgGLsizei, FgGLsizei *, FgGLcharARB * ) ) \
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
    FG_GL_FUNCTION( void, NamedStringARB, ( FgGLenum, FgGLint, const FgGLchar *, FgGLint, const FgGLchar * ) ) \
    FG_GL_FUNCTION( void, DeleteNamedStringARB, ( FgGLint, const FgGLchar * ) ) \
    FG_GL_FUNCTION( void, CompileShaderIncludeARB, ( FgGLuint, FgGLsizei, const FgGLchar *const*, const FgGLint * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsNamedStringARB, ( FgGLint, const FgGLchar * ) ) \
    FG_GL_FUNCTION( void, GetNamedStringARB, ( FgGLint, const FgGLchar *, FgGLsizei, FgGLint *, FgGLchar * ) ) \
    FG_GL_FUNCTION( void, GetNamedStringivARB, ( FgGLint, const FgGLchar *, FgGLenum, FgGLint * ) ) \
\
    /* GL_ARB_shading_language_packing */ \
\
    /* GL_ARB_shadow */ \
\
    /* GL_ARB_shadow_ambient */ \
\
    /* GL_ARB_sparse_texture */ \
    FG_GL_FUNCTION( void, TexPageCommitmentARB, ( FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) ) \
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
    FG_GL_FUNCTION( void, TexBufferARB, ( FgGLenum, FgGLenum, FgGLuint ) ) \
\
    /* GL_ARB_texture_buffer_object_rgb32 */ \
\
    /* GL_ARB_texture_buffer_range */ \
\
    /* GL_ARB_texture_compression */ \
    FG_GL_FUNCTION( void, CompressedTexImage3DARB, ( FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CompressedTexImage2DARB, ( FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CompressedTexImage1DARB, ( FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CompressedTexSubImage3DARB, ( FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CompressedTexSubImage2DARB, ( FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CompressedTexSubImage1DARB, ( FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetCompressedTexImageARB, ( FgGLenum, FgGLint, FgGLvoid * ) ) \
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
    FG_GL_FUNCTION( void, LoadTransposeMatrixfARB, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, LoadTransposeMatrixdARB, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, MultTransposeMatrixfARB, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, MultTransposeMatrixdARB, ( const FgGLdouble * ) ) \
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
    FG_GL_FUNCTION( void, WeightbvARB, ( FgGLint, const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, WeightsvARB, ( FgGLint, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, WeightivARB, ( FgGLint, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, WeightfvARB, ( FgGLint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, WeightdvARB, ( FgGLint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, WeightubvARB, ( FgGLint, const FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, WeightusvARB, ( FgGLint, const FgGLushort * ) ) \
    FG_GL_FUNCTION( void, WeightuivARB, ( FgGLint, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, WeightPointerARB, ( FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, VertexBlendARB, ( FgGLint ) ) \
\
    /* GL_ARB_vertex_buffer_object */ \
    FG_GL_FUNCTION( void, BindBufferARB, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, DeleteBuffersARB, ( FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GenBuffersARB, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsBufferARB, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, BufferDataARB, ( FgGLenum, FgGLsizeiptrARB, const FgGLvoid *, FgGLenum ) ) \
    FG_GL_FUNCTION( void, BufferSubDataARB, ( FgGLenum, FgGLintptrARB, FgGLsizeiptrARB, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetBufferSubDataARB, ( FgGLenum, FgGLintptrARB, FgGLsizeiptrARB, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void *, MapBufferARB, ( FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( FgGLboolean, UnmapBufferARB, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, GetBufferParameterivARB, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetBufferPointervARB, ( FgGLenum, FgGLenum, FgGLvoid ** ) ) \
\
    /* GL_ARB_vertex_program */ \
    FG_GL_FUNCTION( void, VertexAttrib1dARB, ( FgGLuint, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexAttrib1dvARB, ( FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib1fARB, ( FgGLuint, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, VertexAttrib1fvARB, ( FgGLuint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib1sARB, ( FgGLuint, FgGLshort ) ) \
    FG_GL_FUNCTION( void, VertexAttrib1svARB, ( FgGLuint, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib2dARB, ( FgGLuint, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexAttrib2dvARB, ( FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib2fARB, ( FgGLuint, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, VertexAttrib2fvARB, ( FgGLuint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib2sARB, ( FgGLuint, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, VertexAttrib2svARB, ( FgGLuint, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib3dARB, ( FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexAttrib3dvARB, ( FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib3fARB, ( FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, VertexAttrib3fvARB, ( FgGLuint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib3sARB, ( FgGLuint, FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, VertexAttrib3svARB, ( FgGLuint, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4NbvARB, ( FgGLuint, const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4NivARB, ( FgGLuint, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4NsvARB, ( FgGLuint, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4NubARB, ( FgGLuint, FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4NubvARB, ( FgGLuint, const FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4NuivARB, ( FgGLuint, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4NusvARB, ( FgGLuint, const FgGLushort * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4bvARB, ( FgGLuint, const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4dARB, ( FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4dvARB, ( FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4fARB, ( FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4fvARB, ( FgGLuint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4ivARB, ( FgGLuint, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4sARB, ( FgGLuint, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4svARB, ( FgGLuint, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4ubvARB, ( FgGLuint, const FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4uivARB, ( FgGLuint, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4usvARB, ( FgGLuint, const FgGLushort * ) ) \
    FG_GL_FUNCTION( void, VertexAttribPointerARB, ( FgGLuint, FgGLint, FgGLenum, FgGLboolean, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, EnableVertexAttribArrayARB, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, DisableVertexAttribArrayARB, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribdvARB, ( FgGLuint, FgGLenum, FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribfvARB, ( FgGLuint, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribivARB, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribPointervARB, ( FgGLuint, FgGLenum, FgGLvoid ** ) ) \
\
    /* GL_ARB_vertex_shader */ \
    FG_GL_FUNCTION( void, BindAttribLocationARB, ( FgGLhandleARB, FgGLuint, const FgGLcharARB * ) ) \
    FG_GL_FUNCTION( void, GetActiveAttribARB, ( FgGLhandleARB, FgGLuint, FgGLsizei, FgGLsizei *, FgGLint *, FgGLenum *, FgGLcharARB * ) ) \
    FG_GL_FUNCTION( FgGLint, GetAttribLocationARB, ( FgGLhandleARB, const FgGLcharARB * ) ) \
\
    /* GL_ARB_vertex_type_10f_11f_11f_rev */ \
\
    /* GL_ARB_vertex_type_2_10_10_10_rev */ \
\
    /* GL_ARB_viewport_array */ \
\
    /* GL_ARB_window_pos */ \
    FG_GL_FUNCTION( void, WindowPos2dARB, ( FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, WindowPos2dvARB, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, WindowPos2fARB, ( FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, WindowPos2fvARB, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, WindowPos2iARB, ( FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, WindowPos2ivARB, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, WindowPos2sARB, ( FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, WindowPos2svARB, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, WindowPos3dARB, ( FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, WindowPos3dvARB, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, WindowPos3fARB, ( FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, WindowPos3fvARB, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, WindowPos3iARB, ( FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, WindowPos3ivARB, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, WindowPos3sARB, ( FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, WindowPos3svARB, ( const FgGLshort * ) ) \
\
    /* GL_KHR_debug */ \
\
    /* GL_KHR_texture_compression_astc_ldr */ \
\
    /* GL_OES_byte_coordinates */ \
    FG_GL_FUNCTION( void, MultiTexCoord1bOES, ( FgGLenum, FgGLbyte ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord1bvOES, ( FgGLenum, const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord2bOES, ( FgGLenum, FgGLbyte, FgGLbyte ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord2bvOES, ( FgGLenum, const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord3bOES, ( FgGLenum, FgGLbyte, FgGLbyte, FgGLbyte ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord3bvOES, ( FgGLenum, const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord4bOES, ( FgGLenum, FgGLbyte, FgGLbyte, FgGLbyte, FgGLbyte ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord4bvOES, ( FgGLenum, const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, TexCoord1bOES, ( FgGLbyte ) ) \
    FG_GL_FUNCTION( void, TexCoord1bvOES, ( const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, TexCoord2bOES, ( FgGLbyte, FgGLbyte ) ) \
    FG_GL_FUNCTION( void, TexCoord2bvOES, ( const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, TexCoord3bOES, ( FgGLbyte, FgGLbyte, FgGLbyte ) ) \
    FG_GL_FUNCTION( void, TexCoord3bvOES, ( const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, TexCoord4bOES, ( FgGLbyte, FgGLbyte, FgGLbyte, FgGLbyte ) ) \
    FG_GL_FUNCTION( void, TexCoord4bvOES, ( const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, Vertex2bOES, ( FgGLbyte ) ) \
    FG_GL_FUNCTION( void, Vertex2bvOES, ( const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, Vertex3bOES, ( FgGLbyte, FgGLbyte ) ) \
    FG_GL_FUNCTION( void, Vertex3bvOES, ( const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, Vertex4bOES, ( FgGLbyte, FgGLbyte, FgGLbyte ) ) \
    FG_GL_FUNCTION( void, Vertex4bvOES, ( const FgGLbyte * ) ) \
\
    /* GL_OES_compressed_paletted_texture */ \
\
    /* GL_OES_fixed_point */ \
    FG_GL_FUNCTION( void, AlphaFuncxOES, ( FgGLenum, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, ClearColorxOES, ( FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, ClearDepthxOES, ( FgGLfixed ) ) \
    FG_GL_FUNCTION( void, ClipPlanexOES, ( FgGLenum, const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, Color4xOES, ( FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, DepthRangexOES, ( FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, FogxOES, ( FgGLenum, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, FogxvOES, ( FgGLenum, const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, FrustumxOES, ( FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, GetClipPlanexOES, ( FgGLenum, FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, GetFixedvOES, ( FgGLenum, FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, GetTexEnvxvOES, ( FgGLenum, FgGLenum, FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, GetTexParameterxvOES, ( FgGLenum, FgGLenum, FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, LightModelxOES, ( FgGLenum, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, LightModelxvOES, ( FgGLenum, const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, LightxOES, ( FgGLenum, FgGLenum, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, LightxvOES, ( FgGLenum, FgGLenum, const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, LineWidthxOES, ( FgGLfixed ) ) \
    FG_GL_FUNCTION( void, LoadMatrixxOES, ( const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, MaterialxOES, ( FgGLenum, FgGLenum, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, MaterialxvOES, ( FgGLenum, FgGLenum, const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, MultMatrixxOES, ( const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord4xOES, ( FgGLenum, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, Normal3xOES, ( FgGLfixed, FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, OrthoxOES, ( FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, PointParameterxvOES, ( FgGLenum, const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, PointSizexOES, ( FgGLfixed ) ) \
    FG_GL_FUNCTION( void, PolygonOffsetxOES, ( FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, RotatexOES, ( FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, SampleCoverageOES, ( FgGLfixed, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, ScalexOES, ( FgGLfixed, FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, TexEnvxOES, ( FgGLenum, FgGLenum, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, TexEnvxvOES, ( FgGLenum, FgGLenum, const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, TexParameterxOES, ( FgGLenum, FgGLenum, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, TexParameterxvOES, ( FgGLenum, FgGLenum, const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, TranslatexOES, ( FgGLfixed, FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, AccumxOES, ( FgGLenum, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, BitmapxOES, ( FgGLsizei, FgGLsizei, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed, const FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, BlendColorxOES, ( FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, ClearAccumxOES, ( FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, Color3xOES, ( FgGLfixed, FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, Color3xvOES, ( const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, Color4xvOES, ( const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, ConvolutionParameterxOES, ( FgGLenum, FgGLenum, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, ConvolutionParameterxvOES, ( FgGLenum, FgGLenum, const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, EvalCoord1xOES, ( FgGLfixed ) ) \
    FG_GL_FUNCTION( void, EvalCoord1xvOES, ( const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, EvalCoord2xOES, ( FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, EvalCoord2xvOES, ( const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, FeedbackBufferxOES, ( FgGLsizei, FgGLenum, const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, GetConvolutionParameterxvOES, ( FgGLenum, FgGLenum, FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, GetHistogramParameterxvOES, ( FgGLenum, FgGLenum, FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, GetLightxOES, ( FgGLenum, FgGLenum, FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, GetMapxvOES, ( FgGLenum, FgGLenum, FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, GetMaterialxOES, ( FgGLenum, FgGLenum, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, GetPixelMapxv, ( FgGLenum, FgGLint, FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, GetTexGenxvOES, ( FgGLenum, FgGLenum, FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, GetTexLevelParameterxvOES, ( FgGLenum, FgGLint, FgGLenum, FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, IndexxOES, ( FgGLfixed ) ) \
    FG_GL_FUNCTION( void, IndexxvOES, ( const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, LoadTransposeMatrixxOES, ( const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, Map1xOES, ( FgGLenum, FgGLfixed, FgGLfixed, FgGLint, FgGLint, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, Map2xOES, ( FgGLenum, FgGLfixed, FgGLfixed, FgGLint, FgGLint, FgGLfixed, FgGLfixed, FgGLint, FgGLint, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, MapGrid1xOES, ( FgGLint, FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, MapGrid2xOES, ( FgGLint, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, MultTransposeMatrixxOES, ( const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord1xOES, ( FgGLenum, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord1xvOES, ( FgGLenum, const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord2xOES, ( FgGLenum, FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord2xvOES, ( FgGLenum, const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord3xOES, ( FgGLenum, FgGLfixed, FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord3xvOES, ( FgGLenum, const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord4xvOES, ( FgGLenum, const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, Normal3xvOES, ( const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, PassThroughxOES, ( FgGLfixed ) ) \
    FG_GL_FUNCTION( void, PixelMapx, ( FgGLenum, FgGLint, const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, PixelStorex, ( FgGLenum, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, PixelTransferxOES, ( FgGLenum, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, PixelZoomxOES, ( FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, PrioritizeTexturesxOES, ( FgGLsizei, const FgGLuint *, const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, RasterPos2xOES, ( FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, RasterPos2xvOES, ( const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, RasterPos3xOES, ( FgGLfixed, FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, RasterPos3xvOES, ( const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, RasterPos4xOES, ( FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, RasterPos4xvOES, ( const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, RectxOES, ( FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, RectxvOES, ( const FgGLfixed *, const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, TexCoord1xOES, ( FgGLfixed ) ) \
    FG_GL_FUNCTION( void, TexCoord1xvOES, ( const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, TexCoord2xOES, ( FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, TexCoord2xvOES, ( const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, TexCoord3xOES, ( FgGLfixed, FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, TexCoord3xvOES, ( const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, TexCoord4xOES, ( FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, TexCoord4xvOES, ( const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, TexGenxOES, ( FgGLenum, FgGLenum, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, TexGenxvOES, ( FgGLenum, FgGLenum, const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, Vertex2xOES, ( FgGLfixed ) ) \
    FG_GL_FUNCTION( void, Vertex2xvOES, ( const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, Vertex3xOES, ( FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, Vertex3xvOES, ( const FgGLfixed * ) ) \
    FG_GL_FUNCTION( void, Vertex4xOES, ( FgGLfixed, FgGLfixed, FgGLfixed ) ) \
    FG_GL_FUNCTION( void, Vertex4xvOES, ( const FgGLfixed * ) ) \
\
    /* GL_OES_query_matrix */ \
    FG_GL_FUNCTION( FgGLbitfield, QueryMatrixxOES, ( FgGLfixed *, FgGLint * ) ) \
\
    /* GL_OES_read_format */ \
\
    /* GL_OES_single_precision */ \
    FG_GL_FUNCTION( void, ClearDepthfOES, ( FgGLclampf ) ) \
    FG_GL_FUNCTION( void, ClipPlanefOES, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, DepthRangefOES, ( FgGLclampf, FgGLclampf ) ) \
    FG_GL_FUNCTION( void, FrustumfOES, ( FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, GetClipPlanefOES, ( FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, OrthofOES, ( FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
\
    /* GL_3DFX_multisample */ \
\
    /* GL_3DFX_tbuffer */ \
    FG_GL_FUNCTION( void, TbufferMask3DFX, ( FgGLuint ) ) \
\
    /* GL_3DFX_texture_compression_FXT1 */ \
\
    /* GL_AMD_blend_minmax_factor */ \
\
    /* GL_AMD_conservative_depth */ \
\
    /* GL_AMD_debug_output */ \
    FG_GL_FUNCTION( void, DebugMessageEnableAMD, ( FgGLenum, FgGLenum, FgGLsizei, const FgGLuint *, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, DebugMessageInsertAMD, ( FgGLenum, FgGLenum, FgGLuint, FgGLsizei, const FgGLchar * ) ) \
    FG_GL_FUNCTION( void, DebugMessageCallbackAMD, ( FgGLDebugProcAMD, void * ) ) \
    FG_GL_FUNCTION( FgGLuint, GetDebugMessageLogAMD, ( FgGLuint, FgGLsizei, FgGLenum *, FgGLuint *, FgGLuint *, FgGLsizei *, FgGLchar * ) ) \
\
    /* GL_AMD_depth_clamp_separate */ \
\
    /* GL_AMD_draw_buffers_blend */ \
    FG_GL_FUNCTION( void, BlendFuncIndexedAMD, ( FgGLuint, FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, BlendFuncSeparateIndexedAMD, ( FgGLuint, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, BlendEquationIndexedAMD, ( FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, BlendEquationSeparateIndexedAMD, ( FgGLuint, FgGLenum, FgGLenum ) ) \
\
    /* GL_AMD_interleaved_elements */ \
    FG_GL_FUNCTION( void, VertexAttribParameteriAMD, ( FgGLuint, FgGLenum, FgGLint ) ) \
\
    /* GL_AMD_multi_draw_indirect */ \
    FG_GL_FUNCTION( void, MultiDrawArraysIndirectAMD, ( FgGLenum, const FgGLvoid *, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, MultiDrawElementsIndirectAMD, ( FgGLenum, FgGLenum, const FgGLvoid *, FgGLsizei, FgGLsizei ) ) \
\
    /* GL_AMD_name_gen_delete */ \
    FG_GL_FUNCTION( void, GenNamesAMD, ( FgGLenum, FgGLuint, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, DeleteNamesAMD, ( FgGLenum, FgGLuint, const FgGLuint * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsNameAMD, ( FgGLenum, FgGLuint ) ) \
\
    /* GL_AMD_performance_monitor */ \
    FG_GL_FUNCTION( void, GetPerfMonitorGroupsAMD, ( FgGLint *, FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GetPerfMonitorCountersAMD, ( FgGLuint, FgGLint *, FgGLint *, FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GetPerfMonitorGroupStringAMD, ( FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) ) \
    FG_GL_FUNCTION( void, GetPerfMonitorCounterStringAMD, ( FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) ) \
    FG_GL_FUNCTION( void, GetPerfMonitorCounterInfoAMD, ( FgGLuint, FgGLuint, FgGLenum, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GenPerfMonitorsAMD, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, DeletePerfMonitorsAMD, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, SelectPerfMonitorCountersAMD, ( FgGLuint, FgGLboolean, FgGLuint, FgGLint, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, BeginPerfMonitorAMD, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, EndPerfMonitorAMD, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetPerfMonitorCounterDataAMD, ( FgGLuint, FgGLenum, FgGLsizei, FgGLuint *, FgGLint * ) ) \
\
    /* GL_AMD_pinned_memory */ \
\
    /* GL_AMD_query_buffer_object */ \
\
    /* GL_AMD_sample_positions */ \
    FG_GL_FUNCTION( void, SetMultisamplefvAMD, ( FgGLenum, FgGLuint, const FgGLfloat * ) ) \
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
    FG_GL_FUNCTION( void, TexStorageSparseAMD, ( FgGLenum, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLsizei, FgGLbitfield ) ) \
    FG_GL_FUNCTION( void, TextureStorageSparseAMD, ( FgGLuint, FgGLenum, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLsizei, FgGLbitfield ) ) \
\
    /* GL_AMD_stencil_operation_extended */ \
    FG_GL_FUNCTION( void, StencilOpValueAMD, ( FgGLenum, FgGLuint ) ) \
\
    /* GL_AMD_texture_texture4 */ \
\
    /* GL_AMD_transform_feedback3_lines_triangles */ \
\
    /* GL_AMD_vertex_shader_layer */ \
\
    /* GL_AMD_vertex_shader_tessellator */ \
    FG_GL_FUNCTION( void, TessellationFactorAMD, ( FgGLfloat ) ) \
    FG_GL_FUNCTION( void, TessellationModeAMD, ( FgGLenum ) ) \
\
    /* GL_AMD_vertex_shader_viewport_index */ \
\
    /* GL_APPLE_aux_depth_stencil */ \
\
    /* GL_APPLE_client_storage */ \
\
    /* GL_APPLE_element_array */ \
    FG_GL_FUNCTION( void, ElementPointerAPPLE, ( FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, DrawElementArrayAPPLE, ( FgGLenum, FgGLint, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, DrawRangeElementArrayAPPLE, ( FgGLenum, FgGLuint, FgGLuint, FgGLint, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, MultiDrawElementArrayAPPLE, ( FgGLenum, const FgGLint *, const FgGLsizei *, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, MultiDrawRangeElementArrayAPPLE, ( FgGLenum, FgGLuint, FgGLuint, const FgGLint *, const FgGLsizei *, FgGLsizei ) ) \
\
    /* GL_APPLE_fence */ \
    FG_GL_FUNCTION( void, GenFencesAPPLE, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, DeleteFencesAPPLE, ( FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, SetFenceAPPLE, ( FgGLuint ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsFenceAPPLE, ( FgGLuint ) ) \
    FG_GL_FUNCTION( FgGLboolean, TestFenceAPPLE, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, FinishFenceAPPLE, ( FgGLuint ) ) \
    FG_GL_FUNCTION( FgGLboolean, TestObjectAPPLE, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, FinishObjectAPPLE, ( FgGLenum, FgGLint ) ) \
\
    /* GL_APPLE_float_pixels */ \
\
    /* GL_APPLE_flush_buffer_range */ \
    FG_GL_FUNCTION( void, BufferParameteriAPPLE, ( FgGLenum, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, FlushMappedBufferRangeAPPLE, ( FgGLenum, FgGLintptr, FgGLsizeiptr ) ) \
\
    /* GL_APPLE_object_purgeable */ \
    FG_GL_FUNCTION( FgGLenum, ObjectPurgeableAPPLE, ( FgGLenum, FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( FgGLenum, ObjectUnpurgeableAPPLE, ( FgGLenum, FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, GetObjectParameterivAPPLE, ( FgGLenum, FgGLuint, FgGLenum, FgGLint * ) ) \
\
    /* GL_APPLE_rgb_422 */ \
\
    /* GL_APPLE_row_bytes */ \
\
    /* GL_APPLE_specular_vector */ \
\
    /* GL_APPLE_texture_range */ \
    FG_GL_FUNCTION( void, TextureRangeAPPLE, ( FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetTexParameterPointervAPPLE, ( FgGLenum, FgGLenum, FgGLvoid ** ) ) \
\
    /* GL_APPLE_transform_hint */ \
\
    /* GL_APPLE_vertex_array_object */ \
    FG_GL_FUNCTION( void, BindVertexArrayAPPLE, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, DeleteVertexArraysAPPLE, ( FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GenVertexArraysAPPLE, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsVertexArrayAPPLE, ( FgGLuint ) ) \
\
    /* GL_APPLE_vertex_array_range */ \
    FG_GL_FUNCTION( void, VertexArrayRangeAPPLE, ( FgGLsizei, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, FlushVertexArrayRangeAPPLE, ( FgGLsizei, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, VertexArrayParameteriAPPLE, ( FgGLenum, FgGLint ) ) \
\
    /* GL_APPLE_vertex_program_evaluators */ \
    FG_GL_FUNCTION( void, EnableVertexAttribAPPLE, ( FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, DisableVertexAttribAPPLE, ( FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsVertexAttribEnabledAPPLE, ( FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, MapVertexAttrib1dAPPLE, ( FgGLuint, FgGLuint, FgGLdouble, FgGLdouble, FgGLint, FgGLint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, MapVertexAttrib1fAPPLE, ( FgGLuint, FgGLuint, FgGLfloat, FgGLfloat, FgGLint, FgGLint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, MapVertexAttrib2dAPPLE, ( FgGLuint, FgGLuint, FgGLdouble, FgGLdouble, FgGLint, FgGLint, FgGLdouble, FgGLdouble, FgGLint, FgGLint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, MapVertexAttrib2fAPPLE, ( FgGLuint, FgGLuint, FgGLfloat, FgGLfloat, FgGLint, FgGLint, FgGLfloat, FgGLfloat, FgGLint, FgGLint, const FgGLfloat * ) ) \
\
    /* GL_APPLE_ycbcr_422 */ \
\
    /* GL_ATI_draw_buffers */ \
    FG_GL_FUNCTION( void, DrawBuffersATI, ( FgGLsizei, const FgGLenum * ) ) \
\
    /* GL_ATI_element_array */ \
    FG_GL_FUNCTION( void, ElementPointerATI, ( FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, DrawElementArrayATI, ( FgGLenum, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, DrawRangeElementArrayATI, ( FgGLenum, FgGLuint, FgGLuint, FgGLsizei ) ) \
\
    /* GL_ATI_envmap_bumpmap */ \
    FG_GL_FUNCTION( void, TexBumpParameterivATI, ( FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, TexBumpParameterfvATI, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetTexBumpParameterivATI, ( FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetTexBumpParameterfvATI, ( FgGLenum, FgGLfloat * ) ) \
\
    /* GL_ATI_fragment_shader */ \
    FG_GL_FUNCTION( FgGLuint, GenFragmentShadersATI, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, BindFragmentShaderATI, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, DeleteFragmentShaderATI, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, BeginFragmentShaderATI, ( ) ) \
    FG_GL_FUNCTION( void, EndFragmentShaderATI, ( ) ) \
    FG_GL_FUNCTION( void, PassTexCoordATI, ( FgGLuint, FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, SampleMapATI, ( FgGLuint, FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, ColorFragmentOp1ATI, ( FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, ColorFragmentOp2ATI, ( FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, ColorFragmentOp3ATI, ( FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, AlphaFragmentOp1ATI, ( FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, AlphaFragmentOp2ATI, ( FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, AlphaFragmentOp3ATI, ( FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, SetFragmentShaderConstantATI, ( FgGLuint, const FgGLfloat * ) ) \
\
    /* GL_ATI_map_object_buffer */ \
    FG_GL_FUNCTION( void *, MapObjectBufferATI, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, UnmapObjectBufferATI, ( FgGLuint ) ) \
\
    /* GL_ATI_meminfo */ \
\
    /* GL_ATI_pixel_format_float */ \
\
    /* GL_ATI_pn_triangles */ \
    FG_GL_FUNCTION( void, PNTrianglesiATI, ( FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, PNTrianglesfATI, ( FgGLenum, FgGLfloat ) ) \
\
    /* GL_ATI_separate_stencil */ \
    FG_GL_FUNCTION( void, StencilOpSeparateATI, ( FgGLenum, FgGLenum, FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, StencilFuncSeparateATI, ( FgGLenum, FgGLenum, FgGLint, FgGLuint ) ) \
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
    FG_GL_FUNCTION( FgGLuint, NewObjectBufferATI, ( FgGLsizei, const FgGLvoid *, FgGLenum ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsObjectBufferATI, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, UpdateObjectBufferATI, ( FgGLuint, FgGLuint, FgGLsizei, const FgGLvoid *, FgGLenum ) ) \
    FG_GL_FUNCTION( void, GetObjectBufferfvATI, ( FgGLuint, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetObjectBufferivATI, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, FreeObjectBufferATI, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, ArrayObjectATI, ( FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetArrayObjectfvATI, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetArrayObjectivATI, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, VariantArrayObjectATI, ( FgGLuint, FgGLenum, FgGLsizei, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetVariantArrayObjectfvATI, ( FgGLuint, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetVariantArrayObjectivATI, ( FgGLuint, FgGLenum, FgGLint * ) ) \
\
    /* GL_ATI_vertex_attrib_array_object */ \
    FG_GL_FUNCTION( void, VertexAttribArrayObjectATI, ( FgGLuint, FgGLint, FgGLenum, FgGLboolean, FgGLsizei, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribArrayObjectfvATI, ( FgGLuint, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribArrayObjectivATI, ( FgGLuint, FgGLenum, FgGLint * ) ) \
\
    /* GL_ATI_vertex_streams */ \
    FG_GL_FUNCTION( void, VertexStream1sATI, ( FgGLenum, FgGLshort ) ) \
    FG_GL_FUNCTION( void, VertexStream1svATI, ( FgGLenum, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexStream1iATI, ( FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, VertexStream1ivATI, ( FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, VertexStream1fATI, ( FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, VertexStream1fvATI, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VertexStream1dATI, ( FgGLenum, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexStream1dvATI, ( FgGLenum, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexStream2sATI, ( FgGLenum, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, VertexStream2svATI, ( FgGLenum, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexStream2iATI, ( FgGLenum, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, VertexStream2ivATI, ( FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, VertexStream2fATI, ( FgGLenum, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, VertexStream2fvATI, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VertexStream2dATI, ( FgGLenum, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexStream2dvATI, ( FgGLenum, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexStream3sATI, ( FgGLenum, FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, VertexStream3svATI, ( FgGLenum, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexStream3iATI, ( FgGLenum, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, VertexStream3ivATI, ( FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, VertexStream3fATI, ( FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, VertexStream3fvATI, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VertexStream3dATI, ( FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexStream3dvATI, ( FgGLenum, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexStream4sATI, ( FgGLenum, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, VertexStream4svATI, ( FgGLenum, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexStream4iATI, ( FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, VertexStream4ivATI, ( FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, VertexStream4fATI, ( FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, VertexStream4fvATI, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VertexStream4dATI, ( FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexStream4dvATI, ( FgGLenum, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, NormalStream3bATI, ( FgGLenum, FgGLbyte, FgGLbyte, FgGLbyte ) ) \
    FG_GL_FUNCTION( void, NormalStream3bvATI, ( FgGLenum, const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, NormalStream3sATI, ( FgGLenum, FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, NormalStream3svATI, ( FgGLenum, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, NormalStream3iATI, ( FgGLenum, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, NormalStream3ivATI, ( FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, NormalStream3fATI, ( FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, NormalStream3fvATI, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, NormalStream3dATI, ( FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, NormalStream3dvATI, ( FgGLenum, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ClientActiveVertexStreamATI, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, VertexBlendEnviATI, ( FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, VertexBlendEnvfATI, ( FgGLenum, FgGLfloat ) ) \
\
    /* GL_EXT_422_pixels */ \
\
    /* GL_EXT_abgr */ \
\
    /* GL_EXT_bgra */ \
\
    /* GL_EXT_bindable_uniform */ \
    FG_GL_FUNCTION( void, UniformBufferEXT, ( FgGLuint, FgGLint, FgGLuint ) ) \
    FG_GL_FUNCTION( FgGLint, GetUniformBufferSizeEXT, ( FgGLuint, FgGLint ) ) \
    FG_GL_FUNCTION( FgGLintptr, GetUniformOffsetEXT, ( FgGLuint, FgGLint ) ) \
\
    /* GL_EXT_blend_color */ \
    FG_GL_FUNCTION( void, BlendColorEXT, ( FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
\
    /* GL_EXT_blend_equation_separate */ \
    FG_GL_FUNCTION( void, BlendEquationSeparateEXT, ( FgGLenum, FgGLenum ) ) \
\
    /* GL_EXT_blend_func_separate */ \
    FG_GL_FUNCTION( void, BlendFuncSeparateEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLenum ) ) \
\
    /* GL_EXT_blend_logic_op */ \
\
    /* GL_EXT_blend_minmax */ \
    FG_GL_FUNCTION( void, BlendEquationEXT, ( FgGLenum ) ) \
\
    /* GL_EXT_blend_subtract */ \
\
    /* GL_EXT_clip_volume_hint */ \
\
    /* GL_EXT_cmyka */ \
\
    /* GL_EXT_color_subtable */ \
    FG_GL_FUNCTION( void, ColorSubTableEXT, ( FgGLenum, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CopyColorSubTableEXT, ( FgGLenum, FgGLsizei, FgGLint, FgGLint, FgGLsizei ) ) \
\
    /* GL_EXT_compiled_vertex_array */ \
    FG_GL_FUNCTION( void, LockArraysEXT, ( FgGLint, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, UnlockArraysEXT, ( ) ) \
\
    /* GL_EXT_convolution */ \
    FG_GL_FUNCTION( void, ConvolutionFilter1DEXT, ( FgGLenum, FgGLenum, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, ConvolutionFilter2DEXT, ( FgGLenum, FgGLenum, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, ConvolutionParameterfEXT, ( FgGLenum, FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ConvolutionParameterfvEXT, ( FgGLenum, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ConvolutionParameteriEXT, ( FgGLenum, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, ConvolutionParameterivEXT, ( FgGLenum, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, CopyConvolutionFilter1DEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, CopyConvolutionFilter2DEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, GetConvolutionFilterEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetConvolutionParameterfvEXT, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetConvolutionParameterivEXT, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetSeparableFilterEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLvoid *, FgGLvoid *, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, SeparableFilter2DEXT, ( FgGLenum, FgGLenum, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid *, const FgGLvoid * ) ) \
\
    /* GL_EXT_coordinate_frame */ \
    FG_GL_FUNCTION( void, Tangent3bEXT, ( FgGLbyte, FgGLbyte, FgGLbyte ) ) \
    FG_GL_FUNCTION( void, Tangent3bvEXT, ( const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, Tangent3dEXT, ( FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, Tangent3dvEXT, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, Tangent3fEXT, ( FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Tangent3fvEXT, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Tangent3iEXT, ( FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, Tangent3ivEXT, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, Tangent3sEXT, ( FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, Tangent3svEXT, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, Binormal3bEXT, ( FgGLbyte, FgGLbyte, FgGLbyte ) ) \
    FG_GL_FUNCTION( void, Binormal3bvEXT, ( const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, Binormal3dEXT, ( FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, Binormal3dvEXT, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, Binormal3fEXT, ( FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Binormal3fvEXT, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Binormal3iEXT, ( FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, Binormal3ivEXT, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, Binormal3sEXT, ( FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, Binormal3svEXT, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, TangentPointerEXT, ( FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, BinormalPointerEXT, ( FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
\
    /* GL_EXT_copy_texture */ \
    FG_GL_FUNCTION( void, CopyTexImage1DEXT, ( FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLint ) ) \
    FG_GL_FUNCTION( void, CopyTexImage2DEXT, ( FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLint ) ) \
    FG_GL_FUNCTION( void, CopyTexSubImage1DEXT, ( FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, CopyTexSubImage2DEXT, ( FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, CopyTexSubImage3DEXT, ( FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) ) \
\
    /* GL_EXT_cull_vertex */ \
    FG_GL_FUNCTION( void, CullParameterdvEXT, ( FgGLenum, FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, CullParameterfvEXT, ( FgGLenum, FgGLfloat * ) ) \
\
    /* GL_EXT_depth_bounds_test */ \
    FG_GL_FUNCTION( void, DepthBoundsEXT, ( FgGLclampd, FgGLclampd ) ) \
\
    /* GL_EXT_direct_state_access */ \
    FG_GL_FUNCTION( void, MatrixLoadfEXT, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, MatrixLoaddEXT, ( FgGLenum, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, MatrixMultfEXT, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, MatrixMultdEXT, ( FgGLenum, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, MatrixLoadIdentityEXT, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, MatrixRotatefEXT, ( FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, MatrixRotatedEXT, ( FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, MatrixScalefEXT, ( FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, MatrixScaledEXT, ( FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, MatrixTranslatefEXT, ( FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, MatrixTranslatedEXT, ( FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, MatrixFrustumEXT, ( FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, MatrixOrthoEXT, ( FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, MatrixPopEXT, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, MatrixPushEXT, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, ClientAttribDefaultEXT, ( FgGLbitfield ) ) \
    FG_GL_FUNCTION( void, PushClientAttribDefaultEXT, ( FgGLbitfield ) ) \
    FG_GL_FUNCTION( void, TextureParameterfEXT, ( FgGLuint, FgGLenum, FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, TextureParameterfvEXT, ( FgGLuint, FgGLenum, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, TextureParameteriEXT, ( FgGLuint, FgGLenum, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, TextureParameterivEXT, ( FgGLuint, FgGLenum, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, TextureImage1DEXT, ( FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, TextureImage2DEXT, ( FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, TextureSubImage1DEXT, ( FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, TextureSubImage2DEXT, ( FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CopyTextureImage1DEXT, ( FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLint ) ) \
    FG_GL_FUNCTION( void, CopyTextureImage2DEXT, ( FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLint ) ) \
    FG_GL_FUNCTION( void, CopyTextureSubImage1DEXT, ( FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, CopyTextureSubImage2DEXT, ( FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, GetTextureImageEXT, ( FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLenum, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetTextureParameterfvEXT, ( FgGLuint, FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetTextureParameterivEXT, ( FgGLuint, FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetTextureLevelParameterfvEXT, ( FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetTextureLevelParameterivEXT, ( FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, TextureImage3DEXT, ( FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, TextureSubImage3DEXT, ( FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CopyTextureSubImage3DEXT, ( FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, BindMultiTextureEXT, ( FgGLenum, FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, MultiTexCoordPointerEXT, ( FgGLenum, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, MultiTexEnvfEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, MultiTexEnvfvEXT, ( FgGLenum, FgGLenum, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, MultiTexEnviEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, MultiTexEnvivEXT, ( FgGLenum, FgGLenum, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, MultiTexGendEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, MultiTexGendvEXT, ( FgGLenum, FgGLenum, FgGLenum, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, MultiTexGenfEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, MultiTexGenfvEXT, ( FgGLenum, FgGLenum, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, MultiTexGeniEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, MultiTexGenivEXT, ( FgGLenum, FgGLenum, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetMultiTexEnvfvEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetMultiTexEnvivEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetMultiTexGendvEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, GetMultiTexGenfvEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetMultiTexGenivEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, MultiTexParameteriEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, MultiTexParameterivEXT, ( FgGLenum, FgGLenum, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, MultiTexParameterfEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, MultiTexParameterfvEXT, ( FgGLenum, FgGLenum, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, MultiTexImage1DEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, MultiTexImage2DEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, MultiTexSubImage1DEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, MultiTexSubImage2DEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CopyMultiTexImage1DEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLint ) ) \
    FG_GL_FUNCTION( void, CopyMultiTexImage2DEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLint ) ) \
    FG_GL_FUNCTION( void, CopyMultiTexSubImage1DEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, CopyMultiTexSubImage2DEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, GetMultiTexImageEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLenum, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetMultiTexParameterfvEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetMultiTexParameterivEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetMultiTexLevelParameterfvEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetMultiTexLevelParameterivEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, MultiTexImage3DEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, MultiTexSubImage3DEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CopyMultiTexSubImage3DEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, EnableClientStateIndexedEXT, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, DisableClientStateIndexedEXT, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetFloatIndexedvEXT, ( FgGLenum, FgGLuint, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetDoubleIndexedvEXT, ( FgGLenum, FgGLuint, FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, GetPointerIndexedvEXT, ( FgGLenum, FgGLuint, FgGLvoid ** ) ) \
    FG_GL_FUNCTION( void, EnableIndexedEXT, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, DisableIndexedEXT, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsEnabledIndexedEXT, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetIntegerIndexedvEXT, ( FgGLenum, FgGLuint, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetBooleanIndexedvEXT, ( FgGLenum, FgGLuint, FgGLboolean * ) ) \
    FG_GL_FUNCTION( void, CompressedTextureImage3DEXT, ( FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CompressedTextureImage2DEXT, ( FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CompressedTextureImage1DEXT, ( FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CompressedTextureSubImage3DEXT, ( FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CompressedTextureSubImage2DEXT, ( FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CompressedTextureSubImage1DEXT, ( FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetCompressedTextureImageEXT, ( FgGLuint, FgGLenum, FgGLint, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CompressedMultiTexImage3DEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CompressedMultiTexImage2DEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CompressedMultiTexImage1DEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CompressedMultiTexSubImage3DEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CompressedMultiTexSubImage2DEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, CompressedMultiTexSubImage1DEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetCompressedMultiTexImageEXT, ( FgGLenum, FgGLenum, FgGLint, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, MatrixLoadTransposefEXT, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, MatrixLoadTransposedEXT, ( FgGLenum, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, MatrixMultTransposefEXT, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, MatrixMultTransposedEXT, ( FgGLenum, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, NamedBufferDataEXT, ( FgGLuint, FgGLsizeiptr, const FgGLvoid *, FgGLenum ) ) \
    FG_GL_FUNCTION( void, NamedBufferSubDataEXT, ( FgGLuint, FgGLintptr, FgGLsizeiptr, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void *, MapNamedBufferEXT, ( FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( FgGLboolean, UnmapNamedBufferEXT, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetNamedBufferParameterivEXT, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetNamedBufferPointervEXT, ( FgGLuint, FgGLenum, FgGLvoid ** ) ) \
    FG_GL_FUNCTION( void, GetNamedBufferSubDataEXT, ( FgGLuint, FgGLintptr, FgGLsizeiptr, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform1fEXT, ( FgGLuint, FgGLint, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ProgramUniform2fEXT, ( FgGLuint, FgGLint, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ProgramUniform3fEXT, ( FgGLuint, FgGLint, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ProgramUniform4fEXT, ( FgGLuint, FgGLint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ProgramUniform1iEXT, ( FgGLuint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, ProgramUniform2iEXT, ( FgGLuint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, ProgramUniform3iEXT, ( FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, ProgramUniform4iEXT, ( FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, ProgramUniform1fvEXT, ( FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform2fvEXT, ( FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform3fvEXT, ( FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform4fvEXT, ( FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform1ivEXT, ( FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform2ivEXT, ( FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform3ivEXT, ( FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform4ivEXT, ( FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix2fvEXT, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix3fvEXT, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix4fvEXT, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix2x3fvEXT, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix3x2fvEXT, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix2x4fvEXT, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix4x2fvEXT, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix3x4fvEXT, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix4x3fvEXT, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, TextureBufferEXT, ( FgGLuint, FgGLenum, FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, MultiTexBufferEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, TextureParameterIivEXT, ( FgGLuint, FgGLenum, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, TextureParameterIuivEXT, ( FgGLuint, FgGLenum, FgGLenum, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GetTextureParameterIivEXT, ( FgGLuint, FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetTextureParameterIuivEXT, ( FgGLuint, FgGLenum, FgGLenum, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, MultiTexParameterIivEXT, ( FgGLenum, FgGLenum, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, MultiTexParameterIuivEXT, ( FgGLenum, FgGLenum, FgGLenum, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GetMultiTexParameterIivEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetMultiTexParameterIuivEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform1uiEXT, ( FgGLuint, FgGLint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, ProgramUniform2uiEXT, ( FgGLuint, FgGLint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, ProgramUniform3uiEXT, ( FgGLuint, FgGLint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, ProgramUniform4uiEXT, ( FgGLuint, FgGLint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, ProgramUniform1uivEXT, ( FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform2uivEXT, ( FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform3uivEXT, ( FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform4uivEXT, ( FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, NamedProgramLocalParameters4fvEXT, ( FgGLuint, FgGLenum, FgGLuint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, NamedProgramLocalParameterI4iEXT, ( FgGLuint, FgGLenum, FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, NamedProgramLocalParameterI4ivEXT, ( FgGLuint, FgGLenum, FgGLuint, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, NamedProgramLocalParametersI4ivEXT, ( FgGLuint, FgGLenum, FgGLuint, FgGLsizei, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, NamedProgramLocalParameterI4uiEXT, ( FgGLuint, FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, NamedProgramLocalParameterI4uivEXT, ( FgGLuint, FgGLenum, FgGLuint, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, NamedProgramLocalParametersI4uivEXT, ( FgGLuint, FgGLenum, FgGLuint, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GetNamedProgramLocalParameterIivEXT, ( FgGLuint, FgGLenum, FgGLuint, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetNamedProgramLocalParameterIuivEXT, ( FgGLuint, FgGLenum, FgGLuint, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, EnableClientStateiEXT, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, DisableClientStateiEXT, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetFloati_vEXT, ( FgGLenum, FgGLuint, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetDoublei_vEXT, ( FgGLenum, FgGLuint, FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, GetPointeri_vEXT, ( FgGLenum, FgGLuint, FgGLvoid ** ) ) \
    FG_GL_FUNCTION( void, NamedProgramStringEXT, ( FgGLuint, FgGLenum, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, NamedProgramLocalParameter4dEXT, ( FgGLuint, FgGLenum, FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, NamedProgramLocalParameter4dvEXT, ( FgGLuint, FgGLenum, FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, NamedProgramLocalParameter4fEXT, ( FgGLuint, FgGLenum, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, NamedProgramLocalParameter4fvEXT, ( FgGLuint, FgGLenum, FgGLuint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetNamedProgramLocalParameterdvEXT, ( FgGLuint, FgGLenum, FgGLuint, FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, GetNamedProgramLocalParameterfvEXT, ( FgGLuint, FgGLenum, FgGLuint, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetNamedProgramivEXT, ( FgGLuint, FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetNamedProgramStringEXT, ( FgGLuint, FgGLenum, FgGLenum, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, NamedRenderbufferStorageEXT, ( FgGLuint, FgGLenum, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, GetNamedRenderbufferParameterivEXT, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, NamedRenderbufferStorageMultisampleEXT, ( FgGLuint, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, NamedRenderbufferStorageMultisampleCoverageEXT, ( FgGLuint, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( FgGLenum, CheckNamedFramebufferStatusEXT, ( FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, NamedFramebufferTexture1DEXT, ( FgGLuint, FgGLenum, FgGLenum, FgGLuint, FgGLint ) ) \
    FG_GL_FUNCTION( void, NamedFramebufferTexture2DEXT, ( FgGLuint, FgGLenum, FgGLenum, FgGLuint, FgGLint ) ) \
    FG_GL_FUNCTION( void, NamedFramebufferTexture3DEXT, ( FgGLuint, FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, NamedFramebufferRenderbufferEXT, ( FgGLuint, FgGLenum, FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetNamedFramebufferAttachmentParameterivEXT, ( FgGLuint, FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GenerateTextureMipmapEXT, ( FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, GenerateMultiTexMipmapEXT, ( FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, FramebufferDrawBufferEXT, ( FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, FramebufferDrawBuffersEXT, ( FgGLuint, FgGLsizei, const FgGLenum * ) ) \
    FG_GL_FUNCTION( void, FramebufferReadBufferEXT, ( FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, GetFramebufferParameterivEXT, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, NamedCopyBufferSubDataEXT, ( FgGLuint, FgGLuint, FgGLintptr, FgGLintptr, FgGLsizeiptr ) ) \
    FG_GL_FUNCTION( void, NamedFramebufferTextureEXT, ( FgGLuint, FgGLenum, FgGLuint, FgGLint ) ) \
    FG_GL_FUNCTION( void, NamedFramebufferTextureLayerEXT, ( FgGLuint, FgGLenum, FgGLuint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, NamedFramebufferTextureFaceEXT, ( FgGLuint, FgGLenum, FgGLuint, FgGLint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, TextureRenderbufferEXT, ( FgGLuint, FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, MultiTexRenderbufferEXT, ( FgGLenum, FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexArrayVertexOffsetEXT, ( FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLsizei, FgGLintptr ) ) \
    FG_GL_FUNCTION( void, VertexArrayColorOffsetEXT, ( FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLsizei, FgGLintptr ) ) \
    FG_GL_FUNCTION( void, VertexArrayEdgeFlagOffsetEXT, ( FgGLuint, FgGLuint, FgGLsizei, FgGLintptr ) ) \
    FG_GL_FUNCTION( void, VertexArrayIndexOffsetEXT, ( FgGLuint, FgGLuint, FgGLenum, FgGLsizei, FgGLintptr ) ) \
    FG_GL_FUNCTION( void, VertexArrayNormalOffsetEXT, ( FgGLuint, FgGLuint, FgGLenum, FgGLsizei, FgGLintptr ) ) \
    FG_GL_FUNCTION( void, VertexArrayTexCoordOffsetEXT, ( FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLsizei, FgGLintptr ) ) \
    FG_GL_FUNCTION( void, VertexArrayMultiTexCoordOffsetEXT, ( FgGLuint, FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLintptr ) ) \
    FG_GL_FUNCTION( void, VertexArrayFogCoordOffsetEXT, ( FgGLuint, FgGLuint, FgGLenum, FgGLsizei, FgGLintptr ) ) \
    FG_GL_FUNCTION( void, VertexArraySecondaryColorOffsetEXT, ( FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLsizei, FgGLintptr ) ) \
    FG_GL_FUNCTION( void, VertexArrayVertexAttribOffsetEXT, ( FgGLuint, FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLboolean, FgGLsizei, FgGLintptr ) ) \
    FG_GL_FUNCTION( void, VertexArrayVertexAttribIOffsetEXT, ( FgGLuint, FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLsizei, FgGLintptr ) ) \
    FG_GL_FUNCTION( void, EnableVertexArrayEXT, ( FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, DisableVertexArrayEXT, ( FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, EnableVertexArrayAttribEXT, ( FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, DisableVertexArrayAttribEXT, ( FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetVertexArrayIntegervEXT, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetVertexArrayPointervEXT, ( FgGLuint, FgGLenum, FgGLvoid ** ) ) \
    FG_GL_FUNCTION( void, GetVertexArrayIntegeri_vEXT, ( FgGLuint, FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetVertexArrayPointeri_vEXT, ( FgGLuint, FgGLuint, FgGLenum, FgGLvoid ** ) ) \
    FG_GL_FUNCTION( void *, MapNamedBufferRangeEXT, ( FgGLuint, FgGLintptr, FgGLsizeiptr, FgGLbitfield ) ) \
    FG_GL_FUNCTION( void, FlushMappedNamedBufferRangeEXT, ( FgGLuint, FgGLintptr, FgGLsizeiptr ) ) \
    FG_GL_FUNCTION( void, NamedBufferStorageEXT, ( FgGLuint, FgGLsizeiptr, const void *, FgGLbitfield ) ) \
    FG_GL_FUNCTION( void, ClearNamedBufferDataEXT, ( FgGLuint, FgGLenum, FgGLenum, FgGLenum, const void * ) ) \
    FG_GL_FUNCTION( void, ClearNamedBufferSubDataEXT, ( FgGLuint, FgGLenum, FgGLenum, FgGLenum, FgGLsizeiptr, FgGLsizeiptr, const void * ) ) \
    FG_GL_FUNCTION( void, NamedFramebufferParameteriEXT, ( FgGLuint, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, GetNamedFramebufferParameterivEXT, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform1dEXT, ( FgGLuint, FgGLint, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, ProgramUniform2dEXT, ( FgGLuint, FgGLint, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, ProgramUniform3dEXT, ( FgGLuint, FgGLint, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, ProgramUniform4dEXT, ( FgGLuint, FgGLint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, ProgramUniform1dvEXT, ( FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform2dvEXT, ( FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform3dvEXT, ( FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform4dvEXT, ( FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix2dvEXT, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix3dvEXT, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix4dvEXT, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix2x3dvEXT, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix2x4dvEXT, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix3x2dvEXT, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix3x4dvEXT, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix4x2dvEXT, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformMatrix4x3dvEXT, ( FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, TextureBufferRangeEXT, ( FgGLuint, FgGLenum, FgGLenum, FgGLuint, FgGLintptr, FgGLsizeiptr ) ) \
    FG_GL_FUNCTION( void, TextureStorage1DEXT, ( FgGLuint, FgGLenum, FgGLsizei, FgGLenum, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, TextureStorage2DEXT, ( FgGLuint, FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, TextureStorage3DEXT, ( FgGLuint, FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, TextureStorage2DMultisampleEXT, ( FgGLuint, FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, TextureStorage3DMultisampleEXT, ( FgGLuint, FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, VertexArrayBindVertexBufferEXT, ( FgGLuint, FgGLuint, FgGLuint, FgGLintptr, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, VertexArrayVertexAttribFormatEXT, ( FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLboolean, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexArrayVertexAttribIFormatEXT, ( FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexArrayVertexAttribLFormatEXT, ( FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexArrayVertexAttribBindingEXT, ( FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexArrayVertexBindingDivisorEXT, ( FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexArrayVertexAttribLOffsetEXT, ( FgGLuint, FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLsizei, FgGLintptr ) ) \
    FG_GL_FUNCTION( void, TexturePageCommitmentEXT, ( FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, VertexArrayVertexAttribDivisorEXT, ( FgGLuint, FgGLuint, FgGLuint ) ) \
\
    /* GL_EXT_draw_buffers2 */ \
    FG_GL_FUNCTION( void, ColorMaskIndexedEXT, ( FgGLuint, FgGLboolean, FgGLboolean, FgGLboolean, FgGLboolean ) ) \
\
    /* GL_EXT_draw_instanced */ \
    FG_GL_FUNCTION( void, DrawArraysInstancedEXT, ( FgGLenum, FgGLint, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, DrawElementsInstancedEXT, ( FgGLenum, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLsizei ) ) \
\
    /* GL_EXT_draw_range_elements */ \
    FG_GL_FUNCTION( void, DrawRangeElementsEXT, ( FgGLenum, FgGLuint, FgGLuint, FgGLsizei, FgGLenum, const FgGLvoid * ) ) \
\
    /* GL_EXT_fog_coord */ \
    FG_GL_FUNCTION( void, FogCoordfEXT, ( FgGLfloat ) ) \
    FG_GL_FUNCTION( void, FogCoordfvEXT, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, FogCoorddEXT, ( FgGLdouble ) ) \
    FG_GL_FUNCTION( void, FogCoorddvEXT, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, FogCoordPointerEXT, ( FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
\
    /* GL_EXT_framebuffer_blit */ \
    FG_GL_FUNCTION( void, BlitFramebufferEXT, ( FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLbitfield, FgGLenum ) ) \
\
    /* GL_EXT_framebuffer_multisample */ \
    FG_GL_FUNCTION( void, RenderbufferStorageMultisampleEXT, ( FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei ) ) \
\
    /* GL_EXT_framebuffer_multisample_blit_scaled */ \
\
    /* GL_EXT_framebuffer_object */ \
    FG_GL_FUNCTION( FgGLboolean, IsRenderbufferEXT, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, BindRenderbufferEXT, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, DeleteRenderbuffersEXT, ( FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GenRenderbuffersEXT, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, RenderbufferStorageEXT, ( FgGLenum, FgGLenum, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, GetRenderbufferParameterivEXT, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsFramebufferEXT, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, BindFramebufferEXT, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, DeleteFramebuffersEXT, ( FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GenFramebuffersEXT, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( FgGLenum, CheckFramebufferStatusEXT, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, FramebufferTexture1DEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLuint, FgGLint ) ) \
    FG_GL_FUNCTION( void, FramebufferTexture2DEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLuint, FgGLint ) ) \
    FG_GL_FUNCTION( void, FramebufferTexture3DEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, FramebufferRenderbufferEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetFramebufferAttachmentParameterivEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GenerateMipmapEXT, ( FgGLenum ) ) \
\
    /* GL_EXT_framebuffer_sRGB */ \
\
    /* GL_EXT_geometry_shader4 */ \
    FG_GL_FUNCTION( void, ProgramParameteriEXT, ( FgGLuint, FgGLenum, FgGLint ) ) \
\
    /* GL_EXT_gpu_program_parameters */ \
    FG_GL_FUNCTION( void, ProgramEnvParameters4fvEXT, ( FgGLenum, FgGLuint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramLocalParameters4fvEXT, ( FgGLenum, FgGLuint, FgGLsizei, const FgGLfloat * ) ) \
\
    /* GL_EXT_gpu_shader4 */ \
    FG_GL_FUNCTION( void, GetUniformuivEXT, ( FgGLuint, FgGLint, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, BindFragDataLocationEXT, ( FgGLuint, FgGLuint, const FgGLchar * ) ) \
    FG_GL_FUNCTION( FgGLint, GetFragDataLocationEXT, ( FgGLuint, const FgGLchar * ) ) \
    FG_GL_FUNCTION( void, Uniform1uiEXT, ( FgGLint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, Uniform2uiEXT, ( FgGLint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, Uniform3uiEXT, ( FgGLint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, Uniform4uiEXT, ( FgGLint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, Uniform1uivEXT, ( FgGLint, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, Uniform2uivEXT, ( FgGLint, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, Uniform3uivEXT, ( FgGLint, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, Uniform4uivEXT, ( FgGLint, FgGLsizei, const FgGLuint * ) ) \
\
    /* GL_EXT_histogram */ \
    FG_GL_FUNCTION( void, GetHistogramEXT, ( FgGLenum, FgGLboolean, FgGLenum, FgGLenum, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetHistogramParameterfvEXT, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetHistogramParameterivEXT, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetMinmaxEXT, ( FgGLenum, FgGLboolean, FgGLenum, FgGLenum, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetMinmaxParameterfvEXT, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetMinmaxParameterivEXT, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, HistogramEXT, ( FgGLenum, FgGLsizei, FgGLenum, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, MinmaxEXT, ( FgGLenum, FgGLenum, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, ResetHistogramEXT, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, ResetMinmaxEXT, ( FgGLenum ) ) \
\
    /* GL_EXT_index_array_formats */ \
\
    /* GL_EXT_index_func */ \
    FG_GL_FUNCTION( void, IndexFuncEXT, ( FgGLenum, FgGLclampf ) ) \
\
    /* GL_EXT_index_material */ \
    FG_GL_FUNCTION( void, IndexMaterialEXT, ( FgGLenum, FgGLenum ) ) \
\
    /* GL_EXT_index_texture */ \
\
    /* GL_EXT_light_texture */ \
    FG_GL_FUNCTION( void, ApplyTextureEXT, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, TextureLightEXT, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, TextureMaterialEXT, ( FgGLenum, FgGLenum ) ) \
\
    /* GL_EXT_misc_attribute */ \
\
    /* GL_EXT_multi_draw_arrays */ \
    FG_GL_FUNCTION( void, MultiDrawArraysEXT, ( FgGLenum, const FgGLint *, const FgGLsizei *, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, MultiDrawElementsEXT, ( FgGLenum, const FgGLsizei *, FgGLenum, const FgGLvoid *const*, FgGLsizei ) ) \
\
    /* GL_EXT_multisample */ \
    FG_GL_FUNCTION( void, SampleMaskEXT, ( FgGLclampf, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, SamplePatternEXT, ( FgGLenum ) ) \
\
    /* GL_EXT_packed_depth_stencil */ \
\
    /* GL_EXT_packed_float */ \
\
    /* GL_EXT_packed_pixels */ \
\
    /* GL_EXT_paletted_texture */ \
    FG_GL_FUNCTION( void, ColorTableEXT, ( FgGLenum, FgGLenum, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetColorTableEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetColorTableParameterivEXT, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetColorTableParameterfvEXT, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
\
    /* GL_EXT_pixel_buffer_object */ \
\
    /* GL_EXT_pixel_transform */ \
    FG_GL_FUNCTION( void, PixelTransformParameteriEXT, ( FgGLenum, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, PixelTransformParameterfEXT, ( FgGLenum, FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, PixelTransformParameterivEXT, ( FgGLenum, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, PixelTransformParameterfvEXT, ( FgGLenum, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetPixelTransformParameterivEXT, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetPixelTransformParameterfvEXT, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
\
    /* GL_EXT_pixel_transform_color_table */ \
\
    /* GL_EXT_point_parameters */ \
    FG_GL_FUNCTION( void, PointParameterfEXT, ( FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, PointParameterfvEXT, ( FgGLenum, const FgGLfloat * ) ) \
\
    /* GL_EXT_polygon_offset */ \
    FG_GL_FUNCTION( void, PolygonOffsetEXT, ( FgGLfloat, FgGLfloat ) ) \
\
    /* GL_EXT_provoking_vertex */ \
    FG_GL_FUNCTION( void, ProvokingVertexEXT, ( FgGLenum ) ) \
\
    /* GL_EXT_rescale_normal */ \
\
    /* GL_EXT_secondary_color */ \
    FG_GL_FUNCTION( void, SecondaryColor3bEXT, ( FgGLbyte, FgGLbyte, FgGLbyte ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3bvEXT, ( const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3dEXT, ( FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3dvEXT, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3fEXT, ( FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3fvEXT, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3iEXT, ( FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3ivEXT, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3sEXT, ( FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3svEXT, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3ubEXT, ( FgGLubyte, FgGLubyte, FgGLubyte ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3ubvEXT, ( const FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3uiEXT, ( FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3uivEXT, ( const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3usEXT, ( FgGLushort, FgGLushort, FgGLushort ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3usvEXT, ( const FgGLushort * ) ) \
    FG_GL_FUNCTION( void, SecondaryColorPointerEXT, ( FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
\
    /* GL_EXT_separate_shader_objects */ \
    FG_GL_FUNCTION( void, UseShaderProgramEXT, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, ActiveProgramEXT, ( FgGLuint ) ) \
    FG_GL_FUNCTION( FgGLuint, CreateShaderProgramEXT, ( FgGLenum, const FgGLchar * ) ) \
\
    /* GL_EXT_separate_specular_color */ \
\
    /* GL_EXT_shader_image_load_store */ \
    FG_GL_FUNCTION( void, BindImageTextureEXT, ( FgGLuint, FgGLuint, FgGLint, FgGLboolean, FgGLint, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, MemoryBarrierEXT, ( FgGLbitfield ) ) \
\
    /* GL_EXT_shadow_funcs */ \
\
    /* GL_EXT_shared_texture_palette */ \
\
    /* GL_EXT_stencil_clear_tag */ \
    FG_GL_FUNCTION( void, StencilClearTagEXT, ( FgGLsizei, FgGLuint ) ) \
\
    /* GL_EXT_stencil_two_side */ \
    FG_GL_FUNCTION( void, ActiveStencilFaceEXT, ( FgGLenum ) ) \
\
    /* GL_EXT_stencil_wrap */ \
\
    /* GL_EXT_subtexture */ \
    FG_GL_FUNCTION( void, TexSubImage1DEXT, ( FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, TexSubImage2DEXT, ( FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
\
    /* GL_EXT_texture */ \
\
    /* GL_EXT_texture3D */ \
    FG_GL_FUNCTION( void, TexImage3DEXT, ( FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, TexSubImage3DEXT, ( FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
\
    /* GL_EXT_texture_array */ \
\
    /* GL_EXT_texture_buffer_object */ \
    FG_GL_FUNCTION( void, TexBufferEXT, ( FgGLenum, FgGLenum, FgGLuint ) ) \
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
    FG_GL_FUNCTION( void, TexParameterIivEXT, ( FgGLenum, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, TexParameterIuivEXT, ( FgGLenum, FgGLenum, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GetTexParameterIivEXT, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetTexParameterIuivEXT, ( FgGLenum, FgGLenum, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, ClearColorIiEXT, ( FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, ClearColorIuiEXT, ( FgGLuint, FgGLuint, FgGLuint, FgGLuint ) ) \
\
    /* GL_EXT_texture_lod_bias */ \
\
    /* GL_EXT_texture_mirror_clamp */ \
\
    /* GL_EXT_texture_object */ \
    FG_GL_FUNCTION( FgGLboolean, AreTexturesResidentEXT, ( FgGLsizei, const FgGLuint *, FgGLboolean * ) ) \
    FG_GL_FUNCTION( void, BindTextureEXT, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, DeleteTexturesEXT, ( FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GenTexturesEXT, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsTextureEXT, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, PrioritizeTexturesEXT, ( FgGLsizei, const FgGLuint *, const FgGLclampf * ) ) \
\
    /* GL_EXT_texture_perturb_normal */ \
    FG_GL_FUNCTION( void, TextureNormalEXT, ( FgGLenum ) ) \
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
    FG_GL_FUNCTION( void, GetQueryObjecti64vEXT, ( FgGLuint, FgGLenum, FgGLint64 * ) ) \
    FG_GL_FUNCTION( void, GetQueryObjectui64vEXT, ( FgGLuint, FgGLenum, FgGLuint64 * ) ) \
\
    /* GL_EXT_transform_feedback */ \
    FG_GL_FUNCTION( void, BeginTransformFeedbackEXT, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, EndTransformFeedbackEXT, ( ) ) \
    FG_GL_FUNCTION( void, BindBufferRangeEXT, ( FgGLenum, FgGLuint, FgGLuint, FgGLintptr, FgGLsizeiptr ) ) \
    FG_GL_FUNCTION( void, BindBufferOffsetEXT, ( FgGLenum, FgGLuint, FgGLuint, FgGLintptr ) ) \
    FG_GL_FUNCTION( void, BindBufferBaseEXT, ( FgGLenum, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, TransformFeedbackVaryingsEXT, ( FgGLuint, FgGLsizei, const FgGLchar *const*, FgGLenum ) ) \
    FG_GL_FUNCTION( void, GetTransformFeedbackVaryingEXT, ( FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLsizei *, FgGLenum *, FgGLchar * ) ) \
\
    /* GL_EXT_vertex_array */ \
    FG_GL_FUNCTION( void, ArrayElementEXT, ( FgGLint ) ) \
    FG_GL_FUNCTION( void, ColorPointerEXT, ( FgGLint, FgGLenum, FgGLsizei, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, DrawArraysEXT, ( FgGLenum, FgGLint, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, EdgeFlagPointerEXT, ( FgGLsizei, FgGLsizei, const FgGLboolean * ) ) \
    FG_GL_FUNCTION( void, GetPointervEXT, ( FgGLenum, FgGLvoid ** ) ) \
    FG_GL_FUNCTION( void, IndexPointerEXT, ( FgGLenum, FgGLsizei, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, NormalPointerEXT, ( FgGLenum, FgGLsizei, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, TexCoordPointerEXT, ( FgGLint, FgGLenum, FgGLsizei, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, VertexPointerEXT, ( FgGLint, FgGLenum, FgGLsizei, FgGLsizei, const FgGLvoid * ) ) \
\
    /* GL_EXT_vertex_array_bgra */ \
\
    /* GL_EXT_vertex_attrib_64bit */ \
    FG_GL_FUNCTION( void, VertexAttribL1dEXT, ( FgGLuint, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexAttribL2dEXT, ( FgGLuint, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexAttribL3dEXT, ( FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexAttribL4dEXT, ( FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexAttribL1dvEXT, ( FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttribL2dvEXT, ( FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttribL3dvEXT, ( FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttribL4dvEXT, ( FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttribLPointerEXT, ( FgGLuint, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribLdvEXT, ( FgGLuint, FgGLenum, FgGLdouble * ) ) \
\
    /* GL_EXT_vertex_shader */ \
    FG_GL_FUNCTION( void, BeginVertexShaderEXT, ( ) ) \
    FG_GL_FUNCTION( void, EndVertexShaderEXT, ( ) ) \
    FG_GL_FUNCTION( void, BindVertexShaderEXT, ( FgGLuint ) ) \
    FG_GL_FUNCTION( FgGLuint, GenVertexShadersEXT, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, DeleteVertexShaderEXT, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, ShaderOp1EXT, ( FgGLenum, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, ShaderOp2EXT, ( FgGLenum, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, ShaderOp3EXT, ( FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, SwizzleEXT, ( FgGLuint, FgGLuint, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, WriteMaskEXT, ( FgGLuint, FgGLuint, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, InsertComponentEXT, ( FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, ExtractComponentEXT, ( FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( FgGLuint, GenSymbolsEXT, ( FgGLenum, FgGLenum, FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, SetInvariantEXT, ( FgGLuint, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, SetLocalConstantEXT, ( FgGLuint, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, VariantbvEXT, ( FgGLuint, const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, VariantsvEXT, ( FgGLuint, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VariantivEXT, ( FgGLuint, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, VariantfvEXT, ( FgGLuint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VariantdvEXT, ( FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VariantubvEXT, ( FgGLuint, const FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, VariantusvEXT, ( FgGLuint, const FgGLushort * ) ) \
    FG_GL_FUNCTION( void, VariantuivEXT, ( FgGLuint, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, VariantPointerEXT, ( FgGLuint, FgGLenum, FgGLuint, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, EnableVariantClientStateEXT, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, DisableVariantClientStateEXT, ( FgGLuint ) ) \
    FG_GL_FUNCTION( FgGLuint, BindLightParameterEXT, ( FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( FgGLuint, BindMaterialParameterEXT, ( FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( FgGLuint, BindTexGenParameterEXT, ( FgGLenum, FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( FgGLuint, BindTextureUnitParameterEXT, ( FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( FgGLuint, BindParameterEXT, ( FgGLenum ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsVariantEnabledEXT, ( FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, GetVariantBooleanvEXT, ( FgGLuint, FgGLenum, FgGLboolean * ) ) \
    FG_GL_FUNCTION( void, GetVariantIntegervEXT, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetVariantFloatvEXT, ( FgGLuint, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetVariantPointervEXT, ( FgGLuint, FgGLenum, FgGLvoid ** ) ) \
    FG_GL_FUNCTION( void, GetInvariantBooleanvEXT, ( FgGLuint, FgGLenum, FgGLboolean * ) ) \
    FG_GL_FUNCTION( void, GetInvariantIntegervEXT, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetInvariantFloatvEXT, ( FgGLuint, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetLocalConstantBooleanvEXT, ( FgGLuint, FgGLenum, FgGLboolean * ) ) \
    FG_GL_FUNCTION( void, GetLocalConstantIntegervEXT, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetLocalConstantFloatvEXT, ( FgGLuint, FgGLenum, FgGLfloat * ) ) \
\
    /* GL_EXT_vertex_weighting */ \
    FG_GL_FUNCTION( void, VertexWeightfEXT, ( FgGLfloat ) ) \
    FG_GL_FUNCTION( void, VertexWeightfvEXT, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VertexWeightPointerEXT, ( FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
\
    /* GL_EXT_x11_sync_object */ \
    FG_GL_FUNCTION( FgGLsync, ImportSyncEXT, ( FgGLenum, FgGLintptr, FgGLbitfield ) ) \
\
    /* GL_GREMEDY_frame_terminator */ \
    FG_GL_FUNCTION( void, FrameTerminatorGREMEDY, ( ) ) \
\
    /* GL_GREMEDY_string_marker */ \
    FG_GL_FUNCTION( void, StringMarkerGREMEDY, ( FgGLsizei, const FgGLvoid * ) ) \
\
    /* GL_HP_convolution_border_modes */ \
\
    /* GL_HP_image_transform */ \
    FG_GL_FUNCTION( void, ImageTransformParameteriHP, ( FgGLenum, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, ImageTransformParameterfHP, ( FgGLenum, FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ImageTransformParameterivHP, ( FgGLenum, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, ImageTransformParameterfvHP, ( FgGLenum, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetImageTransformParameterivHP, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetImageTransformParameterfvHP, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
\
    /* GL_HP_occlusion_test */ \
\
    /* GL_HP_texture_lighting */ \
\
    /* GL_IBM_cull_vertex */ \
\
    /* GL_IBM_multimode_draw_arrays */ \
    FG_GL_FUNCTION( void, MultiModeDrawArraysIBM, ( const FgGLenum *, const FgGLint *, const FgGLsizei *, FgGLsizei, FgGLint ) ) \
    FG_GL_FUNCTION( void, MultiModeDrawElementsIBM, ( const FgGLenum *, const FgGLsizei *, FgGLenum, const FgGLvoid *const*, FgGLsizei, FgGLint ) ) \
\
    /* GL_IBM_rasterpos_clip */ \
\
    /* GL_IBM_static_data */ \
    FG_GL_FUNCTION( void, FlushStaticDataIBM, ( FgGLenum ) ) \
\
    /* GL_IBM_texture_mirrored_repeat */ \
\
    /* GL_IBM_vertex_array_lists */ \
    FG_GL_FUNCTION( void, ColorPointerListIBM, ( FgGLint, FgGLenum, FgGLint, const FgGLvoid **, FgGLint ) ) \
    FG_GL_FUNCTION( void, SecondaryColorPointerListIBM, ( FgGLint, FgGLenum, FgGLint, const FgGLvoid **, FgGLint ) ) \
    FG_GL_FUNCTION( void, EdgeFlagPointerListIBM, ( FgGLint, const FgGLboolean **, FgGLint ) ) \
    FG_GL_FUNCTION( void, FogCoordPointerListIBM, ( FgGLenum, FgGLint, const FgGLvoid **, FgGLint ) ) \
    FG_GL_FUNCTION( void, IndexPointerListIBM, ( FgGLenum, FgGLint, const FgGLvoid **, FgGLint ) ) \
    FG_GL_FUNCTION( void, NormalPointerListIBM, ( FgGLenum, FgGLint, const FgGLvoid **, FgGLint ) ) \
    FG_GL_FUNCTION( void, TexCoordPointerListIBM, ( FgGLint, FgGLenum, FgGLint, const FgGLvoid **, FgGLint ) ) \
    FG_GL_FUNCTION( void, VertexPointerListIBM, ( FgGLint, FgGLenum, FgGLint, const FgGLvoid **, FgGLint ) ) \
\
    /* GL_INGR_blend_func_separate */ \
    FG_GL_FUNCTION( void, BlendFuncSeparateINGR, ( FgGLenum, FgGLenum, FgGLenum, FgGLenum ) ) \
\
    /* GL_INGR_color_clamp */ \
\
    /* GL_INGR_interlace_read */ \
\
    /* GL_INTEL_map_texture */ \
    FG_GL_FUNCTION( void, SyncTextureINTEL, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, UnmapTexture2DINTEL, ( FgGLuint, FgGLint ) ) \
    FG_GL_FUNCTION( void *, MapTexture2DINTEL, ( FgGLuint, FgGLint, FgGLbitfield, const FgGLint *, const FgGLenum * ) ) \
\
    /* GL_INTEL_parallel_arrays */ \
    FG_GL_FUNCTION( void, VertexPointervINTEL, ( FgGLint, FgGLenum, const FgGLvoid ** ) ) \
    FG_GL_FUNCTION( void, NormalPointervINTEL, ( FgGLenum, const FgGLvoid ** ) ) \
    FG_GL_FUNCTION( void, ColorPointervINTEL, ( FgGLint, FgGLenum, const FgGLvoid ** ) ) \
    FG_GL_FUNCTION( void, TexCoordPointervINTEL, ( FgGLint, FgGLenum, const FgGLvoid ** ) ) \
\
    /* GL_MESAX_texture_stack */ \
\
    /* GL_MESA_pack_invert */ \
\
    /* GL_MESA_resize_buffers */ \
    FG_GL_FUNCTION( void, ResizeBuffersMESA, ( ) ) \
\
    /* GL_MESA_window_pos */ \
    FG_GL_FUNCTION( void, WindowPos2dMESA, ( FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, WindowPos2dvMESA, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, WindowPos2fMESA, ( FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, WindowPos2fvMESA, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, WindowPos2iMESA, ( FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, WindowPos2ivMESA, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, WindowPos2sMESA, ( FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, WindowPos2svMESA, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, WindowPos3dMESA, ( FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, WindowPos3dvMESA, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, WindowPos3fMESA, ( FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, WindowPos3fvMESA, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, WindowPos3iMESA, ( FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, WindowPos3ivMESA, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, WindowPos3sMESA, ( FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, WindowPos3svMESA, ( const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, WindowPos4dMESA, ( FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, WindowPos4dvMESA, ( const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, WindowPos4fMESA, ( FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, WindowPos4fvMESA, ( const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, WindowPos4iMESA, ( FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, WindowPos4ivMESA, ( const FgGLint * ) ) \
    FG_GL_FUNCTION( void, WindowPos4sMESA, ( FgGLshort, FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, WindowPos4svMESA, ( const FgGLshort * ) ) \
\
    /* GL_MESA_ycbcr_texture */ \
\
    /* GL_NVX_conditional_render */ \
    FG_GL_FUNCTION( void, BeginConditionalRenderNVX, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, EndConditionalRenderNVX, ( ) ) \
\
    /* GL_NV_bindless_multi_draw_indirect */ \
    FG_GL_FUNCTION( void, MultiDrawArraysIndirectBindlessNV, ( FgGLenum, const FgGLvoid *, FgGLsizei, FgGLsizei, FgGLint ) ) \
    FG_GL_FUNCTION( void, MultiDrawElementsIndirectBindlessNV, ( FgGLenum, FgGLenum, const FgGLvoid *, FgGLsizei, FgGLsizei, FgGLint ) ) \
\
    /* GL_NV_bindless_texture */ \
    FG_GL_FUNCTION( FgGLuint64, GetTextureHandleNV, ( FgGLuint ) ) \
    FG_GL_FUNCTION( FgGLuint64, GetTextureSamplerHandleNV, ( FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, MakeTextureHandleResidentNV, ( FgGLuint64 ) ) \
    FG_GL_FUNCTION( void, MakeTextureHandleNonResidentNV, ( FgGLuint64 ) ) \
    FG_GL_FUNCTION( FgGLuint64, GetImageHandleNV, ( FgGLuint, FgGLint, FgGLboolean, FgGLint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, MakeImageHandleResidentNV, ( FgGLuint64, FgGLenum ) ) \
    FG_GL_FUNCTION( void, MakeImageHandleNonResidentNV, ( FgGLuint64 ) ) \
    FG_GL_FUNCTION( void, UniformHandleui64NV, ( FgGLint, FgGLuint64 ) ) \
    FG_GL_FUNCTION( void, UniformHandleui64vNV, ( FgGLint, FgGLsizei, const FgGLuint64 * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformHandleui64NV, ( FgGLuint, FgGLint, FgGLuint64 ) ) \
    FG_GL_FUNCTION( void, ProgramUniformHandleui64vNV, ( FgGLuint, FgGLint, FgGLsizei, const FgGLuint64 * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsTextureHandleResidentNV, ( FgGLuint64 ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsImageHandleResidentNV, ( FgGLuint64 ) ) \
\
    /* GL_NV_blend_equation_advanced */ \
    FG_GL_FUNCTION( void, BlendParameteriNV, ( FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, BlendBarrierNV, ( ) ) \
\
    /* GL_NV_blend_equation_advanced_coherent */ \
\
    /* GL_NV_blend_square */ \
\
    /* GL_NV_compute_program5 */ \
\
    /* GL_NV_conditional_render */ \
    FG_GL_FUNCTION( void, BeginConditionalRenderNV, ( FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, EndConditionalRenderNV, ( ) ) \
\
    /* GL_NV_copy_depth_to_color */ \
\
    /* GL_NV_copy_image */ \
    FG_GL_FUNCTION( void, CopyImageSubDataNV, ( FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei ) ) \
\
    /* GL_NV_deep_texture3D */ \
\
    /* GL_NV_depth_buffer_float */ \
    FG_GL_FUNCTION( void, DepthRangedNV, ( FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, ClearDepthdNV, ( FgGLdouble ) ) \
    FG_GL_FUNCTION( void, DepthBoundsdNV, ( FgGLdouble, FgGLdouble ) ) \
\
    /* GL_NV_depth_clamp */ \
\
    /* GL_NV_draw_texture */ \
    FG_GL_FUNCTION( void, DrawTextureNV, ( FgGLuint, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
\
    /* GL_NV_evaluators */ \
    FG_GL_FUNCTION( void, MapControlPointsNV, ( FgGLenum, FgGLuint, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLint, FgGLboolean, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, MapParameterivNV, ( FgGLenum, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, MapParameterfvNV, ( FgGLenum, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetMapControlPointsNV, ( FgGLenum, FgGLuint, FgGLenum, FgGLsizei, FgGLsizei, FgGLboolean, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetMapParameterivNV, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetMapParameterfvNV, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetMapAttribParameterivNV, ( FgGLenum, FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetMapAttribParameterfvNV, ( FgGLenum, FgGLuint, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, EvalMapsNV, ( FgGLenum, FgGLenum ) ) \
\
    /* GL_NV_explicit_multisample */ \
    FG_GL_FUNCTION( void, GetMultisamplefvNV, ( FgGLenum, FgGLuint, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, SampleMaskIndexedNV, ( FgGLuint, FgGLbitfield ) ) \
    FG_GL_FUNCTION( void, TexRenderbufferNV, ( FgGLenum, FgGLuint ) ) \
\
    /* GL_NV_fence */ \
    FG_GL_FUNCTION( void, DeleteFencesNV, ( FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GenFencesNV, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsFenceNV, ( FgGLuint ) ) \
    FG_GL_FUNCTION( FgGLboolean, TestFenceNV, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetFenceivNV, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, FinishFenceNV, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, SetFenceNV, ( FgGLuint, FgGLenum ) ) \
\
    /* GL_NV_float_buffer */ \
\
    /* GL_NV_fog_distance */ \
\
    /* GL_NV_fragment_program */ \
    FG_GL_FUNCTION( void, ProgramNamedParameter4fNV, ( FgGLuint, FgGLsizei, const FgGLubyte *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ProgramNamedParameter4fvNV, ( FgGLuint, FgGLsizei, const FgGLubyte *, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramNamedParameter4dNV, ( FgGLuint, FgGLsizei, const FgGLubyte *, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, ProgramNamedParameter4dvNV, ( FgGLuint, FgGLsizei, const FgGLubyte *, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, GetProgramNamedParameterfvNV, ( FgGLuint, FgGLsizei, const FgGLubyte *, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetProgramNamedParameterdvNV, ( FgGLuint, FgGLsizei, const FgGLubyte *, FgGLdouble * ) ) \
\
    /* GL_NV_fragment_program2 */ \
\
    /* GL_NV_fragment_program4 */ \
\
    /* GL_NV_fragment_program_option */ \
\
    /* GL_NV_framebuffer_multisample_coverage */ \
    FG_GL_FUNCTION( void, RenderbufferStorageMultisampleCoverageNV, ( FgGLenum, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei ) ) \
\
    /* GL_NV_geometry_program4 */ \
    FG_GL_FUNCTION( void, ProgramVertexLimitNV, ( FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, FramebufferTextureEXT, ( FgGLenum, FgGLenum, FgGLuint, FgGLint ) ) \
    FG_GL_FUNCTION( void, FramebufferTextureLayerEXT, ( FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, FramebufferTextureFaceEXT, ( FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLenum ) ) \
\
    /* GL_NV_geometry_shader4 */ \
\
    /* GL_NV_gpu_program4 */ \
    FG_GL_FUNCTION( void, ProgramLocalParameterI4iNV, ( FgGLenum, FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, ProgramLocalParameterI4ivNV, ( FgGLenum, FgGLuint, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, ProgramLocalParametersI4ivNV, ( FgGLenum, FgGLuint, FgGLsizei, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, ProgramLocalParameterI4uiNV, ( FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, ProgramLocalParameterI4uivNV, ( FgGLenum, FgGLuint, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, ProgramLocalParametersI4uivNV, ( FgGLenum, FgGLuint, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, ProgramEnvParameterI4iNV, ( FgGLenum, FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, ProgramEnvParameterI4ivNV, ( FgGLenum, FgGLuint, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, ProgramEnvParametersI4ivNV, ( FgGLenum, FgGLuint, FgGLsizei, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, ProgramEnvParameterI4uiNV, ( FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, ProgramEnvParameterI4uivNV, ( FgGLenum, FgGLuint, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, ProgramEnvParametersI4uivNV, ( FgGLenum, FgGLuint, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GetProgramLocalParameterIivNV, ( FgGLenum, FgGLuint, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetProgramLocalParameterIuivNV, ( FgGLenum, FgGLuint, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GetProgramEnvParameterIivNV, ( FgGLenum, FgGLuint, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetProgramEnvParameterIuivNV, ( FgGLenum, FgGLuint, FgGLuint * ) ) \
\
    /* GL_NV_gpu_program5 */ \
    FG_GL_FUNCTION( void, ProgramSubroutineParametersuivNV, ( FgGLenum, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GetProgramSubroutineParameteruivNV, ( FgGLenum, FgGLuint, FgGLuint * ) ) \
\
    /* GL_NV_gpu_program5_mem_extended */ \
\
    /* GL_NV_gpu_shader5 */ \
    FG_GL_FUNCTION( void, Uniform1i64NV, ( FgGLint, FgGLint64EXT ) ) \
    FG_GL_FUNCTION( void, Uniform2i64NV, ( FgGLint, FgGLint64EXT, FgGLint64EXT ) ) \
    FG_GL_FUNCTION( void, Uniform3i64NV, ( FgGLint, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT ) ) \
    FG_GL_FUNCTION( void, Uniform4i64NV, ( FgGLint, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT ) ) \
    FG_GL_FUNCTION( void, Uniform1i64vNV, ( FgGLint, FgGLsizei, const FgGLint64EXT * ) ) \
    FG_GL_FUNCTION( void, Uniform2i64vNV, ( FgGLint, FgGLsizei, const FgGLint64EXT * ) ) \
    FG_GL_FUNCTION( void, Uniform3i64vNV, ( FgGLint, FgGLsizei, const FgGLint64EXT * ) ) \
    FG_GL_FUNCTION( void, Uniform4i64vNV, ( FgGLint, FgGLsizei, const FgGLint64EXT * ) ) \
    FG_GL_FUNCTION( void, Uniform1ui64NV, ( FgGLint, FgGLuint64EXT ) ) \
    FG_GL_FUNCTION( void, Uniform2ui64NV, ( FgGLint, FgGLuint64EXT, FgGLuint64EXT ) ) \
    FG_GL_FUNCTION( void, Uniform3ui64NV, ( FgGLint, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT ) ) \
    FG_GL_FUNCTION( void, Uniform4ui64NV, ( FgGLint, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT ) ) \
    FG_GL_FUNCTION( void, Uniform1ui64vNV, ( FgGLint, FgGLsizei, const FgGLuint64EXT * ) ) \
    FG_GL_FUNCTION( void, Uniform2ui64vNV, ( FgGLint, FgGLsizei, const FgGLuint64EXT * ) ) \
    FG_GL_FUNCTION( void, Uniform3ui64vNV, ( FgGLint, FgGLsizei, const FgGLuint64EXT * ) ) \
    FG_GL_FUNCTION( void, Uniform4ui64vNV, ( FgGLint, FgGLsizei, const FgGLuint64EXT * ) ) \
    FG_GL_FUNCTION( void, GetUniformi64vNV, ( FgGLuint, FgGLint, FgGLint64EXT * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform1i64NV, ( FgGLuint, FgGLint, FgGLint64EXT ) ) \
    FG_GL_FUNCTION( void, ProgramUniform2i64NV, ( FgGLuint, FgGLint, FgGLint64EXT, FgGLint64EXT ) ) \
    FG_GL_FUNCTION( void, ProgramUniform3i64NV, ( FgGLuint, FgGLint, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT ) ) \
    FG_GL_FUNCTION( void, ProgramUniform4i64NV, ( FgGLuint, FgGLint, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT ) ) \
    FG_GL_FUNCTION( void, ProgramUniform1i64vNV, ( FgGLuint, FgGLint, FgGLsizei, const FgGLint64EXT * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform2i64vNV, ( FgGLuint, FgGLint, FgGLsizei, const FgGLint64EXT * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform3i64vNV, ( FgGLuint, FgGLint, FgGLsizei, const FgGLint64EXT * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform4i64vNV, ( FgGLuint, FgGLint, FgGLsizei, const FgGLint64EXT * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform1ui64NV, ( FgGLuint, FgGLint, FgGLuint64EXT ) ) \
    FG_GL_FUNCTION( void, ProgramUniform2ui64NV, ( FgGLuint, FgGLint, FgGLuint64EXT, FgGLuint64EXT ) ) \
    FG_GL_FUNCTION( void, ProgramUniform3ui64NV, ( FgGLuint, FgGLint, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT ) ) \
    FG_GL_FUNCTION( void, ProgramUniform4ui64NV, ( FgGLuint, FgGLint, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT ) ) \
    FG_GL_FUNCTION( void, ProgramUniform1ui64vNV, ( FgGLuint, FgGLint, FgGLsizei, const FgGLuint64EXT * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform2ui64vNV, ( FgGLuint, FgGLint, FgGLsizei, const FgGLuint64EXT * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform3ui64vNV, ( FgGLuint, FgGLint, FgGLsizei, const FgGLuint64EXT * ) ) \
    FG_GL_FUNCTION( void, ProgramUniform4ui64vNV, ( FgGLuint, FgGLint, FgGLsizei, const FgGLuint64EXT * ) ) \
\
    /* GL_NV_half_float */ \
    FG_GL_FUNCTION( void, Vertex2hNV, ( FgGLhalfNV, FgGLhalfNV ) ) \
    FG_GL_FUNCTION( void, Vertex2hvNV, ( const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, Vertex3hNV, ( FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) ) \
    FG_GL_FUNCTION( void, Vertex3hvNV, ( const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, Vertex4hNV, ( FgGLhalfNV, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) ) \
    FG_GL_FUNCTION( void, Vertex4hvNV, ( const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, Normal3hNV, ( FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) ) \
    FG_GL_FUNCTION( void, Normal3hvNV, ( const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, Color3hNV, ( FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) ) \
    FG_GL_FUNCTION( void, Color3hvNV, ( const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, Color4hNV, ( FgGLhalfNV, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) ) \
    FG_GL_FUNCTION( void, Color4hvNV, ( const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, TexCoord1hNV, ( FgGLhalfNV ) ) \
    FG_GL_FUNCTION( void, TexCoord1hvNV, ( const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, TexCoord2hNV, ( FgGLhalfNV, FgGLhalfNV ) ) \
    FG_GL_FUNCTION( void, TexCoord2hvNV, ( const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, TexCoord3hNV, ( FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) ) \
    FG_GL_FUNCTION( void, TexCoord3hvNV, ( const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, TexCoord4hNV, ( FgGLhalfNV, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) ) \
    FG_GL_FUNCTION( void, TexCoord4hvNV, ( const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord1hNV, ( FgGLenum, FgGLhalfNV ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord1hvNV, ( FgGLenum, const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord2hNV, ( FgGLenum, FgGLhalfNV, FgGLhalfNV ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord2hvNV, ( FgGLenum, const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord3hNV, ( FgGLenum, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord3hvNV, ( FgGLenum, const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord4hNV, ( FgGLenum, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) ) \
    FG_GL_FUNCTION( void, MultiTexCoord4hvNV, ( FgGLenum, const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, FogCoordhNV, ( FgGLhalfNV ) ) \
    FG_GL_FUNCTION( void, FogCoordhvNV, ( const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3hNV, ( FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) ) \
    FG_GL_FUNCTION( void, SecondaryColor3hvNV, ( const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, VertexWeighthNV, ( FgGLhalfNV ) ) \
    FG_GL_FUNCTION( void, VertexWeighthvNV, ( const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib1hNV, ( FgGLuint, FgGLhalfNV ) ) \
    FG_GL_FUNCTION( void, VertexAttrib1hvNV, ( FgGLuint, const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib2hNV, ( FgGLuint, FgGLhalfNV, FgGLhalfNV ) ) \
    FG_GL_FUNCTION( void, VertexAttrib2hvNV, ( FgGLuint, const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib3hNV, ( FgGLuint, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) ) \
    FG_GL_FUNCTION( void, VertexAttrib3hvNV, ( FgGLuint, const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4hNV, ( FgGLuint, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4hvNV, ( FgGLuint, const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, VertexAttribs1hvNV, ( FgGLuint, FgGLsizei, const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, VertexAttribs2hvNV, ( FgGLuint, FgGLsizei, const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, VertexAttribs3hvNV, ( FgGLuint, FgGLsizei, const FgGLhalfNV * ) ) \
    FG_GL_FUNCTION( void, VertexAttribs4hvNV, ( FgGLuint, FgGLsizei, const FgGLhalfNV * ) ) \
\
    /* GL_NV_light_max_exponent */ \
\
    /* GL_NV_multisample_coverage */ \
\
    /* GL_NV_multisample_filter_hint */ \
\
    /* GL_NV_occlusion_query */ \
    FG_GL_FUNCTION( void, GenOcclusionQueriesNV, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, DeleteOcclusionQueriesNV, ( FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsOcclusionQueryNV, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, BeginOcclusionQueryNV, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, EndOcclusionQueryNV, ( ) ) \
    FG_GL_FUNCTION( void, GetOcclusionQueryivNV, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetOcclusionQueryuivNV, ( FgGLuint, FgGLenum, FgGLuint * ) ) \
\
    /* GL_NV_packed_depth_stencil */ \
\
    /* GL_NV_parameter_buffer_object */ \
    FG_GL_FUNCTION( void, ProgramBufferParametersfvNV, ( FgGLenum, FgGLuint, FgGLuint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramBufferParametersIivNV, ( FgGLenum, FgGLuint, FgGLuint, FgGLsizei, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, ProgramBufferParametersIuivNV, ( FgGLenum, FgGLuint, FgGLuint, FgGLsizei, const FgGLuint * ) ) \
\
    /* GL_NV_parameter_buffer_object2 */ \
\
    /* GL_NV_path_rendering */ \
    FG_GL_FUNCTION( FgGLuint, GenPathsNV, ( FgGLsizei ) ) \
    FG_GL_FUNCTION( void, DeletePathsNV, ( FgGLuint, FgGLsizei ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsPathNV, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, PathCommandsNV, ( FgGLuint, FgGLsizei, const FgGLubyte *, FgGLsizei, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, PathCoordsNV, ( FgGLuint, FgGLsizei, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, PathSubCommandsNV, ( FgGLuint, FgGLsizei, FgGLsizei, FgGLsizei, const FgGLubyte *, FgGLsizei, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, PathSubCoordsNV, ( FgGLuint, FgGLsizei, FgGLsizei, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, PathStringNV, ( FgGLuint, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, PathGlyphsNV, ( FgGLuint, FgGLenum, const FgGLvoid *, FgGLbitfield, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLenum, FgGLuint, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, PathGlyphRangeNV, ( FgGLuint, FgGLenum, const FgGLvoid *, FgGLbitfield, FgGLuint, FgGLsizei, FgGLenum, FgGLuint, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, WeightPathsNV, ( FgGLuint, FgGLsizei, const FgGLuint *, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, CopyPathNV, ( FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, InterpolatePathsNV, ( FgGLuint, FgGLuint, FgGLuint, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, TransformPathNV, ( FgGLuint, FgGLuint, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, PathParameterivNV, ( FgGLuint, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, PathParameteriNV, ( FgGLuint, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, PathParameterfvNV, ( FgGLuint, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, PathParameterfNV, ( FgGLuint, FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, PathDashArrayNV, ( FgGLuint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, PathStencilFuncNV, ( FgGLenum, FgGLint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, PathStencilDepthOffsetNV, ( FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, StencilFillPathNV, ( FgGLuint, FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, StencilStrokePathNV, ( FgGLuint, FgGLint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, StencilFillPathInstancedNV, ( FgGLsizei, FgGLenum, const FgGLvoid *, FgGLuint, FgGLenum, FgGLuint, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, StencilStrokePathInstancedNV, ( FgGLsizei, FgGLenum, const FgGLvoid *, FgGLuint, FgGLint, FgGLuint, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, PathCoverDepthFuncNV, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, PathColorGenNV, ( FgGLenum, FgGLenum, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, PathTexGenNV, ( FgGLenum, FgGLenum, FgGLint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, PathFogGenNV, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, CoverFillPathNV, ( FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, CoverStrokePathNV, ( FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, CoverFillPathInstancedNV, ( FgGLsizei, FgGLenum, const FgGLvoid *, FgGLuint, FgGLenum, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, CoverStrokePathInstancedNV, ( FgGLsizei, FgGLenum, const FgGLvoid *, FgGLuint, FgGLenum, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetPathParameterivNV, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetPathParameterfvNV, ( FgGLuint, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetPathCommandsNV, ( FgGLuint, FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, GetPathCoordsNV, ( FgGLuint, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetPathDashArrayNV, ( FgGLuint, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetPathMetricsNV, ( FgGLbitfield, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLuint, FgGLsizei, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetPathMetricRangeNV, ( FgGLbitfield, FgGLuint, FgGLsizei, FgGLsizei, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetPathSpacingNV, ( FgGLenum, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLuint, FgGLfloat, FgGLfloat, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetPathColorGenivNV, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetPathColorGenfvNV, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetPathTexGenivNV, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetPathTexGenfvNV, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsPointInFillPathNV, ( FgGLuint, FgGLuint, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsPointInStrokePathNV, ( FgGLuint, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( FgGLfloat, GetPathLengthNV, ( FgGLuint, FgGLsizei, FgGLsizei ) ) \
    FG_GL_FUNCTION( FgGLboolean, PointAlongPathNV, ( FgGLuint, FgGLsizei, FgGLsizei, FgGLfloat, FgGLfloat *, FgGLfloat *, FgGLfloat *, FgGLfloat * ) ) \
\
    /* GL_NV_pixel_data_range */ \
    FG_GL_FUNCTION( void, PixelDataRangeNV, ( FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, FlushPixelDataRangeNV, ( FgGLenum ) ) \
\
    /* GL_NV_point_sprite */ \
    FG_GL_FUNCTION( void, PointParameteriNV, ( FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, PointParameterivNV, ( FgGLenum, const FgGLint * ) ) \
\
    /* GL_NV_present_video */ \
    FG_GL_FUNCTION( void, PresentFrameKeyedNV, ( FgGLuint, FgGLuint64EXT, FgGLuint, FgGLuint, FgGLenum, FgGLenum, FgGLuint, FgGLuint, FgGLenum, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, PresentFrameDualFillNV, ( FgGLuint, FgGLuint64EXT, FgGLuint, FgGLuint, FgGLenum, FgGLenum, FgGLuint, FgGLenum, FgGLuint, FgGLenum, FgGLuint, FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetVideoivNV, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetVideouivNV, ( FgGLuint, FgGLenum, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GetVideoi64vNV, ( FgGLuint, FgGLenum, FgGLint64EXT * ) ) \
    FG_GL_FUNCTION( void, GetVideoui64vNV, ( FgGLuint, FgGLenum, FgGLuint64EXT * ) ) \
\
    /* GL_NV_primitive_restart */ \
    FG_GL_FUNCTION( void, PrimitiveRestartNV, ( ) ) \
    FG_GL_FUNCTION( void, PrimitiveRestartIndexNV, ( FgGLuint ) ) \
\
    /* GL_NV_register_combiners */ \
    FG_GL_FUNCTION( void, CombinerParameterfvNV, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, CombinerParameterfNV, ( FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, CombinerParameterivNV, ( FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, CombinerParameteriNV, ( FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, CombinerInputNV, ( FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, CombinerOutputNV, ( FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLboolean, FgGLboolean, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, FinalCombinerInputNV, ( FgGLenum, FgGLenum, FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, GetCombinerInputParameterfvNV, ( FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetCombinerInputParameterivNV, ( FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetCombinerOutputParameterfvNV, ( FgGLenum, FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetCombinerOutputParameterivNV, ( FgGLenum, FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetFinalCombinerInputParameterfvNV, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetFinalCombinerInputParameterivNV, ( FgGLenum, FgGLenum, FgGLint * ) ) \
\
    /* GL_NV_register_combiners2 */ \
    FG_GL_FUNCTION( void, CombinerStageParameterfvNV, ( FgGLenum, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetCombinerStageParameterfvNV, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
\
    /* GL_NV_shader_atomic_counters */ \
\
    /* GL_NV_shader_atomic_float */ \
\
    /* GL_NV_shader_buffer_load */ \
    FG_GL_FUNCTION( void, MakeBufferResidentNV, ( FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, MakeBufferNonResidentNV, ( FgGLenum ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsBufferResidentNV, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, MakeNamedBufferResidentNV, ( FgGLuint, FgGLenum ) ) \
    FG_GL_FUNCTION( void, MakeNamedBufferNonResidentNV, ( FgGLuint ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsNamedBufferResidentNV, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetBufferParameterui64vNV, ( FgGLenum, FgGLenum, FgGLuint64EXT * ) ) \
    FG_GL_FUNCTION( void, GetNamedBufferParameterui64vNV, ( FgGLuint, FgGLenum, FgGLuint64EXT * ) ) \
    FG_GL_FUNCTION( void, GetIntegerui64vNV, ( FgGLenum, FgGLuint64EXT * ) ) \
    FG_GL_FUNCTION( void, Uniformui64NV, ( FgGLint, FgGLuint64EXT ) ) \
    FG_GL_FUNCTION( void, Uniformui64vNV, ( FgGLint, FgGLsizei, const FgGLuint64EXT * ) ) \
    FG_GL_FUNCTION( void, GetUniformui64vNV, ( FgGLuint, FgGLint, FgGLuint64EXT * ) ) \
    FG_GL_FUNCTION( void, ProgramUniformui64NV, ( FgGLuint, FgGLint, FgGLuint64EXT ) ) \
    FG_GL_FUNCTION( void, ProgramUniformui64vNV, ( FgGLuint, FgGLint, FgGLsizei, const FgGLuint64EXT * ) ) \
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
    FG_GL_FUNCTION( void, TextureBarrierNV, ( ) ) \
\
    /* GL_NV_texture_compression_vtc */ \
\
    /* GL_NV_texture_env_combine4 */ \
\
    /* GL_NV_texture_expand_normal */ \
\
    /* GL_NV_texture_multisample */ \
    FG_GL_FUNCTION( void, TexImage2DMultisampleCoverageNV, ( FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, TexImage3DMultisampleCoverageNV, ( FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, TextureImage2DMultisampleNV, ( FgGLuint, FgGLenum, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, TextureImage3DMultisampleNV, ( FgGLuint, FgGLenum, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, TextureImage2DMultisampleCoverageNV, ( FgGLuint, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, TextureImage3DMultisampleCoverageNV, ( FgGLuint, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) ) \
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
    FG_GL_FUNCTION( void, BeginTransformFeedbackNV, ( FgGLenum ) ) \
    FG_GL_FUNCTION( void, EndTransformFeedbackNV, ( ) ) \
    FG_GL_FUNCTION( void, TransformFeedbackAttribsNV, ( FgGLuint, const FgGLint *, FgGLenum ) ) \
    FG_GL_FUNCTION( void, BindBufferRangeNV, ( FgGLenum, FgGLuint, FgGLuint, FgGLintptr, FgGLsizeiptr ) ) \
    FG_GL_FUNCTION( void, BindBufferOffsetNV, ( FgGLenum, FgGLuint, FgGLuint, FgGLintptr ) ) \
    FG_GL_FUNCTION( void, BindBufferBaseNV, ( FgGLenum, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, TransformFeedbackVaryingsNV, ( FgGLuint, FgGLsizei, const FgGLint *, FgGLenum ) ) \
    FG_GL_FUNCTION( void, ActiveVaryingNV, ( FgGLuint, const FgGLchar * ) ) \
    FG_GL_FUNCTION( FgGLint, GetVaryingLocationNV, ( FgGLuint, const FgGLchar * ) ) \
    FG_GL_FUNCTION( void, GetActiveVaryingNV, ( FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLsizei *, FgGLenum *, FgGLchar * ) ) \
    FG_GL_FUNCTION( void, GetTransformFeedbackVaryingNV, ( FgGLuint, FgGLuint, FgGLint * ) ) \
    FG_GL_FUNCTION( void, TransformFeedbackStreamAttribsNV, ( FgGLsizei, const FgGLint *, FgGLsizei, const FgGLint *, FgGLenum ) ) \
\
    /* GL_NV_transform_feedback2 */ \
    FG_GL_FUNCTION( void, BindTransformFeedbackNV, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, DeleteTransformFeedbacksNV, ( FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GenTransformFeedbacksNV, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsTransformFeedbackNV, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, PauseTransformFeedbackNV, ( ) ) \
    FG_GL_FUNCTION( void, ResumeTransformFeedbackNV, ( ) ) \
    FG_GL_FUNCTION( void, DrawTransformFeedbackNV, ( FgGLenum, FgGLuint ) ) \
\
    /* GL_NV_vdpau_interop */ \
    FG_GL_FUNCTION( void, VDPAUInitNV, ( const FgGLvoid *, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, VDPAUFiniNV, ( ) ) \
    FG_GL_FUNCTION( FgGLvdpauSurfaceNV, VDPAURegisterVideoSurfaceNV, ( const FgGLvoid *, FgGLenum, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( FgGLvdpauSurfaceNV, VDPAURegisterOutputSurfaceNV, ( const FgGLvoid *, FgGLenum, FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, VDPAUIsSurfaceNV, ( FgGLvdpauSurfaceNV ) ) \
    FG_GL_FUNCTION( void, VDPAUUnregisterSurfaceNV, ( FgGLvdpauSurfaceNV ) ) \
    FG_GL_FUNCTION( void, VDPAUGetSurfaceivNV, ( FgGLvdpauSurfaceNV, FgGLenum, FgGLsizei, FgGLsizei *, FgGLint * ) ) \
    FG_GL_FUNCTION( void, VDPAUSurfaceAccessNV, ( FgGLvdpauSurfaceNV, FgGLenum ) ) \
    FG_GL_FUNCTION( void, VDPAUMapSurfacesNV, ( FgGLsizei, const FgGLvdpauSurfaceNV * ) ) \
    FG_GL_FUNCTION( void, VDPAUUnmapSurfacesNV, ( FgGLsizei, const FgGLvdpauSurfaceNV * ) ) \
\
    /* GL_NV_vertex_array_range */ \
    FG_GL_FUNCTION( void, FlushVertexArrayRangeNV, ( ) ) \
    FG_GL_FUNCTION( void, VertexArrayRangeNV, ( FgGLsizei, const FgGLvoid * ) ) \
\
    /* GL_NV_vertex_array_range2 */ \
\
    /* GL_NV_vertex_attrib_integer_64bit */ \
    FG_GL_FUNCTION( void, VertexAttribL1i64NV, ( FgGLuint, FgGLint64EXT ) ) \
    FG_GL_FUNCTION( void, VertexAttribL2i64NV, ( FgGLuint, FgGLint64EXT, FgGLint64EXT ) ) \
    FG_GL_FUNCTION( void, VertexAttribL3i64NV, ( FgGLuint, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT ) ) \
    FG_GL_FUNCTION( void, VertexAttribL4i64NV, ( FgGLuint, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT ) ) \
    FG_GL_FUNCTION( void, VertexAttribL1i64vNV, ( FgGLuint, const FgGLint64EXT * ) ) \
    FG_GL_FUNCTION( void, VertexAttribL2i64vNV, ( FgGLuint, const FgGLint64EXT * ) ) \
    FG_GL_FUNCTION( void, VertexAttribL3i64vNV, ( FgGLuint, const FgGLint64EXT * ) ) \
    FG_GL_FUNCTION( void, VertexAttribL4i64vNV, ( FgGLuint, const FgGLint64EXT * ) ) \
    FG_GL_FUNCTION( void, VertexAttribL1ui64NV, ( FgGLuint, FgGLuint64EXT ) ) \
    FG_GL_FUNCTION( void, VertexAttribL2ui64NV, ( FgGLuint, FgGLuint64EXT, FgGLuint64EXT ) ) \
    FG_GL_FUNCTION( void, VertexAttribL3ui64NV, ( FgGLuint, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT ) ) \
    FG_GL_FUNCTION( void, VertexAttribL4ui64NV, ( FgGLuint, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT ) ) \
    FG_GL_FUNCTION( void, VertexAttribL1ui64vNV, ( FgGLuint, const FgGLuint64EXT * ) ) \
    FG_GL_FUNCTION( void, VertexAttribL2ui64vNV, ( FgGLuint, const FgGLuint64EXT * ) ) \
    FG_GL_FUNCTION( void, VertexAttribL3ui64vNV, ( FgGLuint, const FgGLuint64EXT * ) ) \
    FG_GL_FUNCTION( void, VertexAttribL4ui64vNV, ( FgGLuint, const FgGLuint64EXT * ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribLi64vNV, ( FgGLuint, FgGLenum, FgGLint64EXT * ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribLui64vNV, ( FgGLuint, FgGLenum, FgGLuint64EXT * ) ) \
    FG_GL_FUNCTION( void, VertexAttribLFormatNV, ( FgGLuint, FgGLint, FgGLenum, FgGLsizei ) ) \
\
    /* GL_NV_vertex_buffer_unified_memory */ \
    FG_GL_FUNCTION( void, BufferAddressRangeNV, ( FgGLenum, FgGLuint, FgGLuint64EXT, FgGLsizeiptr ) ) \
    FG_GL_FUNCTION( void, VertexFormatNV, ( FgGLint, FgGLenum, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, NormalFormatNV, ( FgGLenum, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, ColorFormatNV, ( FgGLint, FgGLenum, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, IndexFormatNV, ( FgGLenum, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, TexCoordFormatNV, ( FgGLint, FgGLenum, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, EdgeFlagFormatNV, ( FgGLsizei ) ) \
    FG_GL_FUNCTION( void, SecondaryColorFormatNV, ( FgGLint, FgGLenum, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, FogCoordFormatNV, ( FgGLenum, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, VertexAttribFormatNV, ( FgGLuint, FgGLint, FgGLenum, FgGLboolean, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, VertexAttribIFormatNV, ( FgGLuint, FgGLint, FgGLenum, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, GetIntegerui64i_vNV, ( FgGLenum, FgGLuint, FgGLuint64EXT * ) ) \
\
    /* GL_NV_vertex_program */ \
    FG_GL_FUNCTION( FgGLboolean, AreProgramsResidentNV, ( FgGLsizei, const FgGLuint *, FgGLboolean * ) ) \
    FG_GL_FUNCTION( void, BindProgramNV, ( FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, DeleteProgramsNV, ( FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, ExecuteProgramNV, ( FgGLenum, FgGLuint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GenProgramsNV, ( FgGLsizei, FgGLuint * ) ) \
    FG_GL_FUNCTION( void, GetProgramParameterdvNV, ( FgGLenum, FgGLuint, FgGLenum, FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, GetProgramParameterfvNV, ( FgGLenum, FgGLuint, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetProgramivNV, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetProgramStringNV, ( FgGLuint, FgGLenum, FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, GetTrackMatrixivNV, ( FgGLenum, FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribdvNV, ( FgGLuint, FgGLenum, FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribfvNV, ( FgGLuint, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribivNV, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribPointervNV, ( FgGLuint, FgGLenum, FgGLvoid ** ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsProgramNV, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, LoadProgramNV, ( FgGLenum, FgGLuint, FgGLsizei, const FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, ProgramParameter4dNV, ( FgGLenum, FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, ProgramParameter4dvNV, ( FgGLenum, FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramParameter4fNV, ( FgGLenum, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ProgramParameter4fvNV, ( FgGLenum, FgGLuint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ProgramParameters4dvNV, ( FgGLenum, FgGLuint, FgGLsizei, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, ProgramParameters4fvNV, ( FgGLenum, FgGLuint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, RequestResidentProgramsNV, ( FgGLsizei, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, TrackMatrixNV, ( FgGLenum, FgGLuint, FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, VertexAttribPointerNV, ( FgGLuint, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib1dNV, ( FgGLuint, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexAttrib1dvNV, ( FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib1fNV, ( FgGLuint, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, VertexAttrib1fvNV, ( FgGLuint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib1sNV, ( FgGLuint, FgGLshort ) ) \
    FG_GL_FUNCTION( void, VertexAttrib1svNV, ( FgGLuint, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib2dNV, ( FgGLuint, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexAttrib2dvNV, ( FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib2fNV, ( FgGLuint, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, VertexAttrib2fvNV, ( FgGLuint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib2sNV, ( FgGLuint, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, VertexAttrib2svNV, ( FgGLuint, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib3dNV, ( FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexAttrib3dvNV, ( FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib3fNV, ( FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, VertexAttrib3fvNV, ( FgGLuint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib3sNV, ( FgGLuint, FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, VertexAttrib3svNV, ( FgGLuint, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4dNV, ( FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4dvNV, ( FgGLuint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4fNV, ( FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4fvNV, ( FgGLuint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4sNV, ( FgGLuint, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4svNV, ( FgGLuint, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4ubNV, ( FgGLuint, FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte ) ) \
    FG_GL_FUNCTION( void, VertexAttrib4ubvNV, ( FgGLuint, const FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, VertexAttribs1dvNV, ( FgGLuint, FgGLsizei, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttribs1fvNV, ( FgGLuint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VertexAttribs1svNV, ( FgGLuint, FgGLsizei, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexAttribs2dvNV, ( FgGLuint, FgGLsizei, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttribs2fvNV, ( FgGLuint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VertexAttribs2svNV, ( FgGLuint, FgGLsizei, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexAttribs3dvNV, ( FgGLuint, FgGLsizei, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttribs3fvNV, ( FgGLuint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VertexAttribs3svNV, ( FgGLuint, FgGLsizei, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexAttribs4dvNV, ( FgGLuint, FgGLsizei, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, VertexAttribs4fvNV, ( FgGLuint, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VertexAttribs4svNV, ( FgGLuint, FgGLsizei, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexAttribs4ubvNV, ( FgGLuint, FgGLsizei, const FgGLubyte * ) ) \
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
    FG_GL_FUNCTION( void, VertexAttribI1iEXT, ( FgGLuint, FgGLint ) ) \
    FG_GL_FUNCTION( void, VertexAttribI2iEXT, ( FgGLuint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, VertexAttribI3iEXT, ( FgGLuint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, VertexAttribI4iEXT, ( FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint ) ) \
    FG_GL_FUNCTION( void, VertexAttribI1uiEXT, ( FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexAttribI2uiEXT, ( FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexAttribI3uiEXT, ( FgGLuint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexAttribI4uiEXT, ( FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) ) \
    FG_GL_FUNCTION( void, VertexAttribI1ivEXT, ( FgGLuint, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI2ivEXT, ( FgGLuint, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI3ivEXT, ( FgGLuint, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI4ivEXT, ( FgGLuint, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI1uivEXT, ( FgGLuint, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI2uivEXT, ( FgGLuint, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI3uivEXT, ( FgGLuint, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI4uivEXT, ( FgGLuint, const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI4bvEXT, ( FgGLuint, const FgGLbyte * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI4svEXT, ( FgGLuint, const FgGLshort * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI4ubvEXT, ( FgGLuint, const FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, VertexAttribI4usvEXT, ( FgGLuint, const FgGLushort * ) ) \
    FG_GL_FUNCTION( void, VertexAttribIPointerEXT, ( FgGLuint, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribIivEXT, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetVertexAttribIuivEXT, ( FgGLuint, FgGLenum, FgGLuint * ) ) \
\
    /* GL_NV_video_capture */ \
    FG_GL_FUNCTION( void, BeginVideoCaptureNV, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, BindVideoCaptureStreamBufferNV, ( FgGLuint, FgGLuint, FgGLenum, FgGLintptrARB ) ) \
    FG_GL_FUNCTION( void, BindVideoCaptureStreamTextureNV, ( FgGLuint, FgGLuint, FgGLenum, FgGLenum, FgGLuint ) ) \
    FG_GL_FUNCTION( void, EndVideoCaptureNV, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, GetVideoCaptureivNV, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetVideoCaptureStreamivNV, ( FgGLuint, FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetVideoCaptureStreamfvNV, ( FgGLuint, FgGLuint, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetVideoCaptureStreamdvNV, ( FgGLuint, FgGLuint, FgGLenum, FgGLdouble * ) ) \
    FG_GL_FUNCTION( FgGLenum, VideoCaptureNV, ( FgGLuint, FgGLuint *, FgGLuint64EXT * ) ) \
    FG_GL_FUNCTION( void, VideoCaptureStreamParameterivNV, ( FgGLuint, FgGLuint, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, VideoCaptureStreamParameterfvNV, ( FgGLuint, FgGLuint, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, VideoCaptureStreamParameterdvNV, ( FgGLuint, FgGLuint, FgGLenum, const FgGLdouble * ) ) \
\
    /* GL_OML_interlace */ \
\
    /* GL_OML_resample */ \
\
    /* GL_OML_subsample */ \
\
    /* GL_PGI_misc_hints */ \
    FG_GL_FUNCTION( void, HintPGI, ( FgGLenum, FgGLint ) ) \
\
    /* GL_PGI_vertex_hints */ \
\
    /* GL_REND_screen_coordinates */ \
\
    /* GL_S3_s3tc */ \
\
    /* GL_SGIS_detail_texture */ \
    FG_GL_FUNCTION( void, DetailTexFuncSGIS, ( FgGLenum, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetDetailTexFuncSGIS, ( FgGLenum, FgGLfloat * ) ) \
\
    /* GL_SGIS_fog_function */ \
    FG_GL_FUNCTION( void, FogFuncSGIS, ( FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetFogFuncSGIS, ( FgGLfloat * ) ) \
\
    /* GL_SGIS_generate_mipmap */ \
\
    /* GL_SGIS_multisample */ \
    FG_GL_FUNCTION( void, SampleMaskSGIS, ( FgGLclampf, FgGLboolean ) ) \
    FG_GL_FUNCTION( void, SamplePatternSGIS, ( FgGLenum ) ) \
\
    /* GL_SGIS_pixel_texture */ \
    FG_GL_FUNCTION( void, PixelTexGenParameteriSGIS, ( FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, PixelTexGenParameterivSGIS, ( FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, PixelTexGenParameterfSGIS, ( FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, PixelTexGenParameterfvSGIS, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetPixelTexGenParameterivSGIS, ( FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetPixelTexGenParameterfvSGIS, ( FgGLenum, FgGLfloat * ) ) \
\
    /* GL_SGIS_point_line_texgen */ \
\
    /* GL_SGIS_point_parameters */ \
    FG_GL_FUNCTION( void, PointParameterfSGIS, ( FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, PointParameterfvSGIS, ( FgGLenum, const FgGLfloat * ) ) \
\
    /* GL_SGIS_sharpen_texture */ \
    FG_GL_FUNCTION( void, SharpenTexFuncSGIS, ( FgGLenum, FgGLsizei, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetSharpenTexFuncSGIS, ( FgGLenum, FgGLfloat * ) ) \
\
    /* GL_SGIS_texture4D */ \
    FG_GL_FUNCTION( void, TexImage4DSGIS, ( FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, TexSubImage4DSGIS, ( FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
\
    /* GL_SGIS_texture_border_clamp */ \
\
    /* GL_SGIS_texture_color_mask */ \
    FG_GL_FUNCTION( void, TextureColorMaskSGIS, ( FgGLboolean, FgGLboolean, FgGLboolean, FgGLboolean ) ) \
\
    /* GL_SGIS_texture_edge_clamp */ \
\
    /* GL_SGIS_texture_filter4 */ \
    FG_GL_FUNCTION( void, GetTexFilterFuncSGIS, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, TexFilterFuncSGIS, ( FgGLenum, FgGLenum, FgGLsizei, const FgGLfloat * ) ) \
\
    /* GL_SGIS_texture_lod */ \
\
    /* GL_SGIS_texture_select */ \
\
    /* GL_SGIX_async */ \
    FG_GL_FUNCTION( void, AsyncMarkerSGIX, ( FgGLuint ) ) \
    FG_GL_FUNCTION( FgGLint, FinishAsyncSGIX, ( FgGLuint * ) ) \
    FG_GL_FUNCTION( FgGLint, PollAsyncSGIX, ( FgGLuint * ) ) \
    FG_GL_FUNCTION( FgGLuint, GenAsyncMarkersSGIX, ( FgGLsizei ) ) \
    FG_GL_FUNCTION( void, DeleteAsyncMarkersSGIX, ( FgGLuint, FgGLsizei ) ) \
    FG_GL_FUNCTION( FgGLboolean, IsAsyncMarkerSGIX, ( FgGLuint ) ) \
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
    FG_GL_FUNCTION( void, FlushRasterSGIX, ( ) ) \
\
    /* GL_SGIX_fog_offset */ \
\
    /* GL_SGIX_fragment_lighting */ \
    FG_GL_FUNCTION( void, FragmentColorMaterialSGIX, ( FgGLenum, FgGLenum ) ) \
    FG_GL_FUNCTION( void, FragmentLightfSGIX, ( FgGLenum, FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, FragmentLightfvSGIX, ( FgGLenum, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, FragmentLightiSGIX, ( FgGLenum, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, FragmentLightivSGIX, ( FgGLenum, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, FragmentLightModelfSGIX, ( FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, FragmentLightModelfvSGIX, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, FragmentLightModeliSGIX, ( FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, FragmentLightModelivSGIX, ( FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, FragmentMaterialfSGIX, ( FgGLenum, FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, FragmentMaterialfvSGIX, ( FgGLenum, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, FragmentMaterialiSGIX, ( FgGLenum, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, FragmentMaterialivSGIX, ( FgGLenum, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetFragmentLightfvSGIX, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetFragmentLightivSGIX, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, GetFragmentMaterialfvSGIX, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetFragmentMaterialivSGIX, ( FgGLenum, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, LightEnviSGIX, ( FgGLenum, FgGLint ) ) \
\
    /* GL_SGIX_framezoom */ \
    FG_GL_FUNCTION( void, FrameZoomSGIX, ( FgGLint ) ) \
\
    /* GL_SGIX_igloo_interface */ \
    FG_GL_FUNCTION( void, IglooInterfaceSGIX, ( FgGLenum, const FgGLvoid * ) ) \
\
    /* GL_SGIX_instruments */ \
    FG_GL_FUNCTION( FgGLint, GetInstrumentsSGIX, ( ) ) \
    FG_GL_FUNCTION( void, InstrumentsBufferSGIX, ( FgGLsizei, FgGLint * ) ) \
    FG_GL_FUNCTION( FgGLint, PollInstrumentsSGIX, ( FgGLint * ) ) \
    FG_GL_FUNCTION( void, ReadInstrumentsSGIX, ( FgGLint ) ) \
    FG_GL_FUNCTION( void, StartInstrumentsSGIX, ( ) ) \
    FG_GL_FUNCTION( void, StopInstrumentsSGIX, ( FgGLint ) ) \
\
    /* GL_SGIX_interlace */ \
\
    /* GL_SGIX_ir_instrument1 */ \
\
    /* GL_SGIX_list_priority */ \
    FG_GL_FUNCTION( void, GetListParameterfvSGIX, ( FgGLuint, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetListParameterivSGIX, ( FgGLuint, FgGLenum, FgGLint * ) ) \
    FG_GL_FUNCTION( void, ListParameterfSGIX, ( FgGLuint, FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ListParameterfvSGIX, ( FgGLuint, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ListParameteriSGIX, ( FgGLuint, FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, ListParameterivSGIX, ( FgGLuint, FgGLenum, const FgGLint * ) ) \
\
    /* GL_SGIX_pixel_texture */ \
    FG_GL_FUNCTION( void, PixelTexGenSGIX, ( FgGLenum ) ) \
\
    /* GL_SGIX_pixel_tiles */ \
\
    /* GL_SGIX_polynomial_ffd */ \
    FG_GL_FUNCTION( void, DeformationMap3dSGIX, ( FgGLenum, FgGLdouble, FgGLdouble, FgGLint, FgGLint, FgGLdouble, FgGLdouble, FgGLint, FgGLint, FgGLdouble, FgGLdouble, FgGLint, FgGLint, const FgGLdouble * ) ) \
    FG_GL_FUNCTION( void, DeformationMap3fSGIX, ( FgGLenum, FgGLfloat, FgGLfloat, FgGLint, FgGLint, FgGLfloat, FgGLfloat, FgGLint, FgGLint, FgGLfloat, FgGLfloat, FgGLint, FgGLint, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, DeformSGIX, ( FgGLbitfield ) ) \
    FG_GL_FUNCTION( void, LoadIdentityDeformationMapSGIX, ( FgGLbitfield ) ) \
\
    /* GL_SGIX_reference_plane */ \
    FG_GL_FUNCTION( void, ReferencePlaneSGIX, ( const FgGLdouble * ) ) \
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
    FG_GL_FUNCTION( void, SpriteParameterfSGIX, ( FgGLenum, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, SpriteParameterfvSGIX, ( FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, SpriteParameteriSGIX, ( FgGLenum, FgGLint ) ) \
    FG_GL_FUNCTION( void, SpriteParameterivSGIX, ( FgGLenum, const FgGLint * ) ) \
\
    /* GL_SGIX_subsample */ \
\
    /* GL_SGIX_tag_sample_buffer */ \
    FG_GL_FUNCTION( void, TagSampleBufferSGIX, ( ) ) \
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
    FG_GL_FUNCTION( void, ColorTableSGI, ( FgGLenum, FgGLenum, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, ColorTableParameterfvSGI, ( FgGLenum, FgGLenum, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ColorTableParameterivSGI, ( FgGLenum, FgGLenum, const FgGLint * ) ) \
    FG_GL_FUNCTION( void, CopyColorTableSGI, ( FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei ) ) \
    FG_GL_FUNCTION( void, GetColorTableSGI, ( FgGLenum, FgGLenum, FgGLenum, FgGLvoid * ) ) \
    FG_GL_FUNCTION( void, GetColorTableParameterfvSGI, ( FgGLenum, FgGLenum, FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, GetColorTableParameterivSGI, ( FgGLenum, FgGLenum, FgGLint * ) ) \
\
    /* GL_SGI_texture_color_table */ \
\
    /* GL_SUNX_constant_data */ \
    FG_GL_FUNCTION( void, FinishTextureSUNX, ( ) ) \
\
    /* GL_SUN_convolution_border_modes */ \
\
    /* GL_SUN_global_alpha */ \
    FG_GL_FUNCTION( void, GlobalAlphaFactorbSUN, ( FgGLbyte ) ) \
    FG_GL_FUNCTION( void, GlobalAlphaFactorsSUN, ( FgGLshort ) ) \
    FG_GL_FUNCTION( void, GlobalAlphaFactoriSUN, ( FgGLint ) ) \
    FG_GL_FUNCTION( void, GlobalAlphaFactorfSUN, ( FgGLfloat ) ) \
    FG_GL_FUNCTION( void, GlobalAlphaFactordSUN, ( FgGLdouble ) ) \
    FG_GL_FUNCTION( void, GlobalAlphaFactorubSUN, ( FgGLubyte ) ) \
    FG_GL_FUNCTION( void, GlobalAlphaFactorusSUN, ( FgGLushort ) ) \
    FG_GL_FUNCTION( void, GlobalAlphaFactoruiSUN, ( FgGLuint ) ) \
\
    /* GL_SUN_mesh_array */ \
    FG_GL_FUNCTION( void, DrawMeshArraysSUN, ( FgGLenum, FgGLint, FgGLsizei, FgGLsizei ) ) \
\
    /* GL_SUN_slice_accum */ \
\
    /* GL_SUN_triangle_list */ \
    FG_GL_FUNCTION( void, ReplacementCodeuiSUN, ( FgGLuint ) ) \
    FG_GL_FUNCTION( void, ReplacementCodeusSUN, ( FgGLushort ) ) \
    FG_GL_FUNCTION( void, ReplacementCodeubSUN, ( FgGLubyte ) ) \
    FG_GL_FUNCTION( void, ReplacementCodeuivSUN, ( const FgGLuint * ) ) \
    FG_GL_FUNCTION( void, ReplacementCodeusvSUN, ( const FgGLushort * ) ) \
    FG_GL_FUNCTION( void, ReplacementCodeubvSUN, ( const FgGLubyte * ) ) \
    FG_GL_FUNCTION( void, ReplacementCodePointerSUN, ( FgGLenum, FgGLsizei, const FgGLvoid ** ) ) \
\
    /* GL_SUN_vertex */ \
    FG_GL_FUNCTION( void, Color4ubVertex2fSUN, ( FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Color4ubVertex2fvSUN, ( const FgGLubyte *, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Color4ubVertex3fSUN, ( FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Color4ubVertex3fvSUN, ( const FgGLubyte *, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Color3fVertex3fSUN, ( FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Color3fVertex3fvSUN, ( const FgGLfloat *, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Normal3fVertex3fSUN, ( FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Normal3fVertex3fvSUN, ( const FgGLfloat *, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, Color4fNormal3fVertex3fSUN, ( FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, Color4fNormal3fVertex3fvSUN, ( const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, TexCoord2fVertex3fSUN, ( FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, TexCoord2fVertex3fvSUN, ( const FgGLfloat *, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, TexCoord4fVertex4fSUN, ( FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, TexCoord4fVertex4fvSUN, ( const FgGLfloat *, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, TexCoord2fColor4ubVertex3fSUN, ( FgGLfloat, FgGLfloat, FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, TexCoord2fColor4ubVertex3fvSUN, ( const FgGLfloat *, const FgGLubyte *, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, TexCoord2fColor3fVertex3fSUN, ( FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, TexCoord2fColor3fVertex3fvSUN, ( const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, TexCoord2fNormal3fVertex3fSUN, ( FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, TexCoord2fNormal3fVertex3fvSUN, ( const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, TexCoord2fColor4fNormal3fVertex3fSUN, ( FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, TexCoord2fColor4fNormal3fVertex3fvSUN, ( const FgGLfloat *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, TexCoord4fColor4fNormal3fVertex4fSUN, ( FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, TexCoord4fColor4fNormal3fVertex4fvSUN, ( const FgGLfloat *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ReplacementCodeuiVertex3fSUN, ( FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ReplacementCodeuiVertex3fvSUN, ( const FgGLuint *, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ReplacementCodeuiColor4ubVertex3fSUN, ( FgGLuint, FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ReplacementCodeuiColor4ubVertex3fvSUN, ( const FgGLuint *, const FgGLubyte *, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ReplacementCodeuiColor3fVertex3fSUN, ( FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ReplacementCodeuiColor3fVertex3fvSUN, ( const FgGLuint *, const FgGLfloat *, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ReplacementCodeuiNormal3fVertex3fSUN, ( FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ReplacementCodeuiNormal3fVertex3fvSUN, ( const FgGLuint *, const FgGLfloat *, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ReplacementCodeuiColor4fNormal3fVertex3fSUN, ( FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ReplacementCodeuiColor4fNormal3fVertex3fvSUN, ( const FgGLuint *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ReplacementCodeuiTexCoord2fVertex3fSUN, ( FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ReplacementCodeuiTexCoord2fVertex3fvSUN, ( const FgGLuint *, const FgGLfloat *, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN, ( FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN, ( const FgGLuint *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) ) \
    FG_GL_FUNCTION( void, ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN, ( FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) ) \
    FG_GL_FUNCTION( void, ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN, ( const FgGLuint *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) ) \
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

#if defined OS_LINUX    // OS
#   define FGSTDCALL
#elif defined OS_WINDOWS    // OS
#   define FGSTDCALL __stdcall
#else   // OS
#   error 未対応のOS
#endif  // OS

#define FG_GL_EXTERN_FUNCTION_POINTER( _returnType, _name, _args ) \
    FGEXPORT _returnType ( FGSTDCALL * fgGL##_name )_args; \

#define FG_GL_FUNCTION FG_GL_EXTERN_FUNCTION_POINTER
    FG_GL_FUNCTIONS
#undef  FG_GL_FUNCTION

#undef  FG_GL_EXTERN_FUNCTION_POINTER

#endif  // FG_GL_FUNCTIONS_H
