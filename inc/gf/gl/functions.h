#ifndef GF_GL_FUNCTIONS_H
#define GF_GL_FUNCTIONS_H

#include "gf/gl/types.h"
#include "gf/util/import.h"

#define GF_GL_FUNCTIONS \
    /* GL_VERSION_1_0 */ \
    GF_GL_FUNCTION( GfGLenum, GetError, () ) \
    GF_GL_FUNCTION( void, Begin, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, End, () ) \
    GF_GL_FUNCTION( void, EdgeFlag, ( GfGLboolean ) ) \
    GF_GL_FUNCTION( void, EdgeFlagv, ( const GfGLboolean * ) ) \
    GF_GL_FUNCTION( void, Vertex2s, ( GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, Vertex2i, ( GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, Vertex2f, ( GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Vertex2d, ( GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, Vertex3s, ( GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, Vertex3i, ( GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, Vertex3f, ( GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Vertex3d, ( GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, Vertex4s, ( GfGLshort, GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, Vertex4i, ( GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, Vertex4f, ( GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Vertex4d, ( GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, Vertex2sv, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, Vertex2iv, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, Vertex2fv, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Vertex2dv, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, Vertex3sv, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, Vertex3iv, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, Vertex3fv, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Vertex3dv, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, Vertex4sv, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, Vertex4iv, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, Vertex4fv, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Vertex4dv, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, TexCoord1s, ( GfGLshort ) ) \
    GF_GL_FUNCTION( void, TexCoord1i, ( GfGLint ) ) \
    GF_GL_FUNCTION( void, TexCoord1f, ( GfGLfloat ) ) \
    GF_GL_FUNCTION( void, TexCoord1d, ( GfGLdouble ) ) \
    GF_GL_FUNCTION( void, TexCoord2s, ( GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, TexCoord2i, ( GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, TexCoord2f, ( GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, TexCoord2d, ( GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, TexCoord3s, ( GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, TexCoord3i, ( GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, TexCoord3f, ( GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, TexCoord3d, ( GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, TexCoord4s, ( GfGLshort, GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, TexCoord4i, ( GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, TexCoord4f, ( GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, TexCoord4d, ( GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, TexCoord1sv, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, TexCoord1iv, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, TexCoord1fv, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, TexCoord1dv, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, TexCoord2sv, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, TexCoord2iv, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, TexCoord2fv, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, TexCoord2dv, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, TexCoord3sv, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, TexCoord3iv, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, TexCoord3fv, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, TexCoord3dv, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, TexCoord4sv, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, TexCoord4iv, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, TexCoord4fv, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, TexCoord4dv, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, Normal3b, ( GfGLbyte, GfGLbyte, GfGLbyte ) ) \
    GF_GL_FUNCTION( void, Normal3s, ( GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, Normal3i, ( GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, Normal3f, ( GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Normal3d, ( GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, Normal3bv, ( const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, Normal3sv, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, Normal3iv, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, Normal3fv, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Normal3dv, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, Color3b, ( GfGLbyte, GfGLbyte, GfGLbyte ) ) \
    GF_GL_FUNCTION( void, Color3s, ( GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, Color3i, ( GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, Color3f, ( GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Color3d, ( GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, Color3ub, ( GfGLubyte, GfGLubyte, GfGLubyte ) ) \
    GF_GL_FUNCTION( void, Color3us, ( GfGLushort, GfGLushort, GfGLushort ) ) \
    GF_GL_FUNCTION( void, Color3ui, ( GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, Color4b, ( GfGLbyte, GfGLbyte, GfGLbyte, GfGLbyte ) ) \
    GF_GL_FUNCTION( void, Color4s, ( GfGLshort, GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, Color4i, ( GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, Color4f, ( GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Color4d, ( GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, Color4ub, ( GfGLubyte, GfGLubyte, GfGLubyte, GfGLubyte ) ) \
    GF_GL_FUNCTION( void, Color4us, ( GfGLushort, GfGLushort, GfGLushort, GfGLushort ) ) \
    GF_GL_FUNCTION( void, Color4ui, ( GfGLuint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, Color3bv, ( const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, Color3sv, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, Color3iv, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, Color3fv, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Color3dv, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, Color3ubv, ( const GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, Color3usv, ( const GfGLushort * ) ) \
    GF_GL_FUNCTION( void, Color3uiv, ( const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, Color4bv, ( const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, Color4sv, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, Color4iv, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, Color4fv, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Color4dv, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, Color4ubv, ( const GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, Color4usv, ( const GfGLushort * ) ) \
    GF_GL_FUNCTION( void, Color4uiv, ( const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, Indexs, ( GfGLshort ) ) \
    GF_GL_FUNCTION( void, Indexi, ( GfGLint ) ) \
    GF_GL_FUNCTION( void, Indexf, ( GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Indexd, ( GfGLdouble ) ) \
    GF_GL_FUNCTION( void, Indexsv, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, Indexiv, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, Indexfv, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Indexdv, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, Rects, ( GfGLshort, GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, Recti, ( GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, Rectf, ( GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Rectd, ( GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, Rectsv, ( const GfGLshort *, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, Rectiv, ( const GfGLint *, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, Rectfv, ( const GfGLfloat *, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Rectdv, ( const GfGLdouble *, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, DepthRange, ( GfGLclampd, GfGLclampd ) ) \
    GF_GL_FUNCTION( void, Viewport, ( GfGLint, GfGLint, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, MatrixMode, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, LoadMatrixf, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, LoadMatrixd, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, MultMatrixf, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, MultMatrixd, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, LoadIdentity, () ) \
    GF_GL_FUNCTION( void, Rotatef, ( GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Rotated, ( GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, Translatef, ( GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Translated, ( GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, Scalef, ( GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Scaled, ( GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, Frustum, ( GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, Ortho, ( GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, PushMatrix, () ) \
    GF_GL_FUNCTION( void, PopMatrix, () ) \
    GF_GL_FUNCTION( void, Enable, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, Disable, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, TexGeni, ( GfGLenum, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, TexGenf, ( GfGLenum, GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, TexGend, ( GfGLenum, GfGLenum, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, TexGeniv, ( GfGLenum, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, TexGenfv, ( GfGLenum, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, TexGendv, ( GfGLenum, GfGLenum, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ClipPlane, ( GfGLenum, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, RasterPos2s, ( GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, RasterPos2i, ( GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, RasterPos2f, ( GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, RasterPos2d, ( GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, RasterPos2sv, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, RasterPos2iv, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, RasterPos2fv, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, RasterPos2dv, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, RasterPos3s, ( GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, RasterPos3i, ( GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, RasterPos3f, ( GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, RasterPos3d, ( GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, RasterPos3sv, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, RasterPos3iv, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, RasterPos3fv, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, RasterPos3dv, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, RasterPos4s, ( GfGLshort, GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, RasterPos4i, ( GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, RasterPos4f, ( GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, RasterPos4d, ( GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, RasterPos4sv, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, RasterPos4iv, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, RasterPos4fv, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, RasterPos4dv, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, FrontFace, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, Materiali, ( GfGLenum, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, Materialf, ( GfGLenum, GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Materialiv, ( GfGLenum, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, Materialfv, ( GfGLenum, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Lighti, ( GfGLenum, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, Lightf, ( GfGLenum, GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Lightiv, ( GfGLenum, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, Lightfv, ( GfGLenum, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, LightModeli, ( GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, LightModelf, ( GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, LightModeliv, ( GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, LightModelfv, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ColorMaterial, ( GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, ShadeModel, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, PointSize, ( GfGLfloat ) ) \
    GF_GL_FUNCTION( void, LineWidth, ( GfGLfloat ) ) \
    GF_GL_FUNCTION( void, LineStipple, ( GfGLint, GfGLushort ) ) \
    GF_GL_FUNCTION( void, CullFace, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, PolygonStipple, ( const GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, PolygonMode, ( GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, PixelStorei, ( GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, PixelStoref, ( GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, PixelTransferi, ( GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, PixelTransferf, ( GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, PixelMapuiv, ( GfGLenum, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, PixelMapusv, ( GfGLenum, GfGLsizei, const GfGLushort * ) ) \
    GF_GL_FUNCTION( void, PixelMapfv, ( GfGLenum, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, DrawPixels, ( GfGLsizei, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, PixelZoom, ( GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Bitmap, ( GfGLsizei, GfGLsizei, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, const GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, TexImage1D, ( GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLint, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, TexImage2D, ( GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLint, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, TexParameteri, ( GfGLenum, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, TexParameterf, ( GfGLenum, GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, TexParameteriv, ( GfGLenum, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, TexParameterfv, ( GfGLenum, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, TexEnvi, ( GfGLenum, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, TexEnvf, ( GfGLenum, GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, TexEnviv, ( GfGLenum, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, TexEnvfv, ( GfGLenum, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Fogi, ( GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, Fogf, ( GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Fogiv, ( GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, Fogfv, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Scissor, ( GfGLint, GfGLint, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, AlphaFunc, ( GfGLenum, GfGLclampf ) ) \
    GF_GL_FUNCTION( void, StencilFunc, ( GfGLenum, GfGLint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, StencilOp, ( GfGLenum, GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, DepthFunc, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, BlendFunc, ( GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, LogicOp, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, DrawBuffer, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, IndexMask, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, ColorMask, ( GfGLboolean, GfGLboolean, GfGLboolean, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, DepthMask, ( GfGLboolean ) ) \
    GF_GL_FUNCTION( void, StencilMask, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, Clear, ( GfGLbitfield ) ) \
    GF_GL_FUNCTION( void, ClearColor, ( GfGLclampf, GfGLclampf, GfGLclampf, GfGLclampf ) ) \
    GF_GL_FUNCTION( void, ClearIndex, ( GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ClearDepth, ( GfGLclampd ) ) \
    GF_GL_FUNCTION( void, ClearStencil, ( GfGLint ) ) \
    GF_GL_FUNCTION( void, ClearAccum, ( GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Accum, ( GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ReadPixels, ( GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLenum, GfGLenum, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, ReadBuffer, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, CopyPixels, ( GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLenum ) ) \
    GF_GL_FUNCTION( void, Map1f, ( GfGLenum, GfGLfloat, GfGLfloat, GfGLint, GfGLint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Map1d, ( GfGLenum, GfGLdouble, GfGLdouble, GfGLint, GfGLint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, Map2f, ( GfGLenum, GfGLfloat, GfGLfloat, GfGLint, GfGLint, GfGLfloat, GfGLfloat, GfGLint, GfGLint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Map2d, ( GfGLenum, GfGLdouble, GfGLdouble, GfGLint, GfGLint, GfGLdouble, GfGLdouble, GfGLint, GfGLint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, EvalCoord1f, ( GfGLfloat ) ) \
    GF_GL_FUNCTION( void, EvalCoord1d, ( GfGLdouble ) ) \
    GF_GL_FUNCTION( void, EvalCoord2f, ( GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, EvalCoord2d, ( GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, EvalCoord1fv, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, EvalCoord1dv, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, EvalCoord2fv, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, EvalCoord2dv, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, MapGrid1f, ( GfGLint, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, MapGrid1d, ( GfGLint, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, MapGrid2f, ( GfGLint, GfGLfloat, GfGLfloat, GfGLint, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, MapGrid2d, ( GfGLint, GfGLdouble, GfGLdouble, GfGLint, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, EvalMesh1, ( GfGLenum, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, EvalMesh2, ( GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, EvalPoint1, ( GfGLint ) ) \
    GF_GL_FUNCTION( void, EvalPoint2, ( GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, InitNames, () ) \
    GF_GL_FUNCTION( void, PopName, () ) \
    GF_GL_FUNCTION( void, PushName, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, LoadName, ( GfGLuint ) ) \
    GF_GL_FUNCTION( GfGLint, RenderMode, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, SelectBuffer, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, FeedbackBuffer, ( GfGLsizei, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, PassThrough, ( GfGLfloat ) ) \
    GF_GL_FUNCTION( void, NewList, ( GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, EndList, () ) \
    GF_GL_FUNCTION( void, CallList, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, CallLists, ( GfGLsizei, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, ListBase, ( GfGLuint ) ) \
    GF_GL_FUNCTION( GfGLuint, GenLists, ( GfGLsizei ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsList, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, DeleteLists, ( GfGLuint, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, Flush, () ) \
    GF_GL_FUNCTION( void, Finish, () ) \
    GF_GL_FUNCTION( void, Hint, ( GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, GetBooleanv, ( GfGLenum, GfGLboolean * ) ) \
    GF_GL_FUNCTION( void, GetIntegerv, ( GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetFloatv, ( GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetDoublev, ( GfGLenum, GfGLdouble * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsEnabled, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, GetClipPlane, ( GfGLenum, GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, GetLightiv, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetLightfv, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetMaterialiv, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetMaterialfv, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetTexEnviv, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetTexEnvfv, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetTexGeniv, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetTexGenfv, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetTexParameteriv, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetTexParameterfv, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetTexLevelParameteriv, ( GfGLenum, GfGLint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetTexLevelParameterfv, ( GfGLenum, GfGLint, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetPixelMapuiv, ( GfGLenum, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GetPixelMapusv, ( GfGLenum, GfGLushort * ) ) \
    GF_GL_FUNCTION( void, GetPixelMapfv, ( GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetMapiv, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetMapfv, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetMapdv, ( GfGLenum, GfGLenum, GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, GetTexImage, ( GfGLenum, GfGLint, GfGLenum, GfGLenum, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetPolygonStipple, ( GfGLubyte * ) ) \
    GF_GL_FUNCTION( const GfGLubyte *, GetString, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, PushAttrib, ( GfGLbitfield ) ) \
    GF_GL_FUNCTION( void, PopAttrib, () ) \
    \
    /* GL_VERSION_1_1 */ \
    GF_GL_FUNCTION( void, Indexub, ( GfGLubyte ) ) \
    GF_GL_FUNCTION( void, Indexubv, ( const GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, EdgeFlagPointer, ( GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, TexCoordPointer, ( GfGLint, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, ColorPointer, ( GfGLint, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, IndexPointer, ( GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, NormalPointer, ( GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, VertexPointer, ( GfGLint, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, EnableClientState, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, DisableClientState, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, ArrayElement, ( GfGLint ) ) \
    GF_GL_FUNCTION( void, DrawArrays, ( GfGLenum, GfGLint, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, DrawElements, ( GfGLenum, GfGLsizei, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, InterleavedArrays, ( GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, PolygonOffset, ( GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, CopyTexImage1D, ( GfGLenum, GfGLint, GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLint ) ) \
    GF_GL_FUNCTION( void, CopyTexImage2D, ( GfGLenum, GfGLint, GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLint ) ) \
    GF_GL_FUNCTION( void, TexSubImage1D, ( GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, TexSubImage2D, ( GfGLenum, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CopyTexSubImage1D, ( GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, CopyTexSubImage2D, ( GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, BindTexture, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, DeleteTextures, ( GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GenTextures, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( GfGLboolean, AreTexturesResident, ( GfGLsizei, const GfGLuint *, GfGLboolean * ) ) \
    GF_GL_FUNCTION( void, PrioritizeTextures, ( GfGLsizei, const GfGLuint *, const GfGLclampf * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsTexture, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetPointerv, ( GfGLenum, GfGLvoid ** ) ) \
    GF_GL_FUNCTION( void, PushClientAttrib, ( GfGLbitfield ) ) \
    GF_GL_FUNCTION( void, PopClientAttrib, () ) \
    \
    /* GL_VERSION_1_2 */ \
    GF_GL_FUNCTION( void, DrawRangeElements, ( GfGLenum, GfGLuint, GfGLuint, GfGLsizei, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, TexImage3D, ( GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLsizei, GfGLint, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, TexSubImage3D, ( GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CopyTexSubImage3D, ( GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei ) ) \
    \
    /* GL_VERSION_1_3 */ \
    GF_GL_FUNCTION( void, ActiveTexture, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, SampleCoverage, ( GfGLfloat, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, CompressedTexImage3D, ( GfGLenum, GfGLint, GfGLenum, GfGLsizei, GfGLsizei, GfGLsizei, GfGLint, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CompressedTexImage2D, ( GfGLenum, GfGLint, GfGLenum, GfGLsizei, GfGLsizei, GfGLint, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CompressedTexImage1D, ( GfGLenum, GfGLint, GfGLenum, GfGLsizei, GfGLint, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CompressedTexSubImage3D, ( GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLsizei, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CompressedTexSubImage2D, ( GfGLenum, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CompressedTexSubImage1D, ( GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetCompressedTexImage, ( GfGLenum, GfGLint, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, ClientActiveTexture, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord1d, ( GfGLenum, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord1dv, ( GfGLenum, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord1f, ( GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord1fv, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord1i, ( GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord1iv, ( GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord1s, ( GfGLenum, GfGLshort ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord1sv, ( GfGLenum, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord2d, ( GfGLenum, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord2dv, ( GfGLenum, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord2f, ( GfGLenum, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord2fv, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord2i, ( GfGLenum, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord2iv, ( GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord2s, ( GfGLenum, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord2sv, ( GfGLenum, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord3d, ( GfGLenum, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord3dv, ( GfGLenum, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord3f, ( GfGLenum, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord3fv, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord3i, ( GfGLenum, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord3iv, ( GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord3s, ( GfGLenum, GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord3sv, ( GfGLenum, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord4d, ( GfGLenum, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord4dv, ( GfGLenum, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord4f, ( GfGLenum, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord4fv, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord4i, ( GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord4iv, ( GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord4s, ( GfGLenum, GfGLshort, GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord4sv, ( GfGLenum, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, LoadTransposeMatrixf, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, LoadTransposeMatrixd, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, MultTransposeMatrixf, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, MultTransposeMatrixd, ( const GfGLdouble * ) ) \
    \
    /* GL_VERSION_1_4 */ \
    GF_GL_FUNCTION( void, BlendFuncSeparate, ( GfGLenum, GfGLenum, GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, MultiDrawArrays, ( GfGLenum, const GfGLint *, const GfGLsizei *, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, MultiDrawElements, ( GfGLenum, const GfGLsizei *, GfGLenum, const GfGLvoid *const*, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, PointParameterf, ( GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, PointParameterfv, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, PointParameteri, ( GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, PointParameteriv, ( GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, FogCoordf, ( GfGLfloat ) ) \
    GF_GL_FUNCTION( void, FogCoordfv, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, FogCoordd, ( GfGLdouble ) ) \
    GF_GL_FUNCTION( void, FogCoorddv, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, FogCoordPointer, ( GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3b, ( GfGLbyte, GfGLbyte, GfGLbyte ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3bv, ( const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3d, ( GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3dv, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3f, ( GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3fv, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3i, ( GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3iv, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3s, ( GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3sv, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3ub, ( GfGLubyte, GfGLubyte, GfGLubyte ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3ubv, ( const GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3ui, ( GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3uiv, ( const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3us, ( GfGLushort, GfGLushort, GfGLushort ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3usv, ( const GfGLushort * ) ) \
    GF_GL_FUNCTION( void, SecondaryColorPointer, ( GfGLint, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, WindowPos2d, ( GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, WindowPos2dv, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, WindowPos2f, ( GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, WindowPos2fv, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, WindowPos2i, ( GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, WindowPos2iv, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, WindowPos2s, ( GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, WindowPos2sv, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, WindowPos3d, ( GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, WindowPos3dv, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, WindowPos3f, ( GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, WindowPos3fv, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, WindowPos3i, ( GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, WindowPos3iv, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, WindowPos3s, ( GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, WindowPos3sv, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, BlendColor, ( GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, BlendEquation, ( GfGLenum ) ) \
    \
    /* GL_VERSION_1_5 */ \
    GF_GL_FUNCTION( void, GenQueries, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, DeleteQueries, ( GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsQuery, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, BeginQuery, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, EndQuery, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, GetQueryiv, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetQueryObjectiv, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetQueryObjectuiv, ( GfGLuint, GfGLenum, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, BindBuffer, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, DeleteBuffers, ( GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GenBuffers, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsBuffer, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, BufferData, ( GfGLenum, GfGLsizeiptr, const GfGLvoid *, GfGLenum ) ) \
    GF_GL_FUNCTION( void, BufferSubData, ( GfGLenum, GfGLintptr, GfGLsizeiptr, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetBufferSubData, ( GfGLenum, GfGLintptr, GfGLsizeiptr, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void *, MapBuffer, ( GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( GfGLboolean, UnmapBuffer, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, GetBufferParameteriv, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetBufferPointerv, ( GfGLenum, GfGLenum, GfGLvoid ** ) ) \
    \
    /* GL_VERSION_2_0 */ \
    GF_GL_FUNCTION( void, BlendEquationSeparate, ( GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, DrawBuffers, ( GfGLsizei, const GfGLenum * ) ) \
    GF_GL_FUNCTION( void, StencilOpSeparate, ( GfGLenum, GfGLenum, GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, StencilFuncSeparate, ( GfGLenum, GfGLenum, GfGLint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, StencilMaskSeparate, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, AttachShader, ( GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, BindAttribLocation, ( GfGLuint, GfGLuint, const GfGLchar * ) ) \
    GF_GL_FUNCTION( void, CompileShader, ( GfGLuint ) ) \
    GF_GL_FUNCTION( GfGLuint, CreateProgram, ( ) ) \
    GF_GL_FUNCTION( GfGLuint, CreateShader, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, DeleteProgram, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, DeleteShader, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, DetachShader, ( GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, DisableVertexAttribArray, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, EnableVertexAttribArray, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetActiveAttrib, ( GfGLuint, GfGLuint, GfGLsizei, GfGLsizei *, GfGLint *, GfGLenum *, GfGLchar * ) ) \
    GF_GL_FUNCTION( void, GetActiveUniform, ( GfGLuint, GfGLuint, GfGLsizei, GfGLsizei *, GfGLint *, GfGLenum *, GfGLchar * ) ) \
    GF_GL_FUNCTION( void, GetAttachedShaders, ( GfGLuint, GfGLsizei, GfGLsizei *, GfGLuint * ) ) \
    GF_GL_FUNCTION( GfGLint, GetAttribLocation, ( GfGLuint, const GfGLchar * ) ) \
    GF_GL_FUNCTION( void, GetProgramiv, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetProgramInfoLog, ( GfGLuint, GfGLsizei, GfGLsizei *, GfGLchar * ) ) \
    GF_GL_FUNCTION( void, GetShaderiv, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetShaderInfoLog, ( GfGLuint, GfGLsizei, GfGLsizei *, GfGLchar * ) ) \
    GF_GL_FUNCTION( void, GetShaderSource, ( GfGLuint, GfGLsizei, GfGLsizei *, GfGLchar * ) ) \
    GF_GL_FUNCTION( GfGLint, GetUniformLocation, ( GfGLuint, const GfGLchar * ) ) \
    GF_GL_FUNCTION( void, GetUniformfv, ( GfGLuint, GfGLint, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetUniformiv, ( GfGLuint, GfGLint, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribdv, ( GfGLuint, GfGLenum, GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribfv, ( GfGLuint, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribiv, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribPointerv, ( GfGLuint, GfGLenum, GfGLvoid ** ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsProgram, ( GfGLuint ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsShader, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, LinkProgram, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, ShaderSource, ( GfGLuint, GfGLsizei, const GfGLchar *const*, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, UseProgram, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, Uniform1f, ( GfGLint, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Uniform2f, ( GfGLint, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Uniform3f, ( GfGLint, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Uniform4f, ( GfGLint, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Uniform1i, ( GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, Uniform2i, ( GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, Uniform3i, ( GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, Uniform4i, ( GfGLint, GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, Uniform1fv, ( GfGLint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Uniform2fv, ( GfGLint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Uniform3fv, ( GfGLint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Uniform4fv, ( GfGLint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Uniform1iv, ( GfGLint, GfGLsizei, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, Uniform2iv, ( GfGLint, GfGLsizei, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, Uniform3iv, ( GfGLint, GfGLsizei, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, Uniform4iv, ( GfGLint, GfGLsizei, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, UniformMatrix2fv, ( GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, UniformMatrix3fv, ( GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, UniformMatrix4fv, ( GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ValidateProgram, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexAttrib1d, ( GfGLuint, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexAttrib1dv, ( GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib1f, ( GfGLuint, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, VertexAttrib1fv, ( GfGLuint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib1s, ( GfGLuint, GfGLshort ) ) \
    GF_GL_FUNCTION( void, VertexAttrib1sv, ( GfGLuint, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib2d, ( GfGLuint, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexAttrib2dv, ( GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib2f, ( GfGLuint, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, VertexAttrib2fv, ( GfGLuint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib2s, ( GfGLuint, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, VertexAttrib2sv, ( GfGLuint, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib3d, ( GfGLuint, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexAttrib3dv, ( GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib3f, ( GfGLuint, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, VertexAttrib3fv, ( GfGLuint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib3s, ( GfGLuint, GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, VertexAttrib3sv, ( GfGLuint, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4Nbv, ( GfGLuint, const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4Niv, ( GfGLuint, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4Nsv, ( GfGLuint, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4Nub, ( GfGLuint, GfGLubyte, GfGLubyte, GfGLubyte, GfGLubyte ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4Nubv, ( GfGLuint, const GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4Nuiv, ( GfGLuint, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4Nusv, ( GfGLuint, const GfGLushort * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4bv, ( GfGLuint, const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4d, ( GfGLuint, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4dv, ( GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4f, ( GfGLuint, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4fv, ( GfGLuint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4iv, ( GfGLuint, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4s, ( GfGLuint, GfGLshort, GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4sv, ( GfGLuint, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4ubv, ( GfGLuint, const GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4uiv, ( GfGLuint, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4usv, ( GfGLuint, const GfGLushort * ) ) \
    GF_GL_FUNCTION( void, VertexAttribPointer, ( GfGLuint, GfGLint, GfGLenum, GfGLboolean, GfGLsizei, const GfGLvoid * ) ) \
    \
    /* GL_VERSION_2_1 */ \
    GF_GL_FUNCTION( void, UniformMatrix2x3fv, ( GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, UniformMatrix3x2fv, ( GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, UniformMatrix2x4fv, ( GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, UniformMatrix4x2fv, ( GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, UniformMatrix3x4fv, ( GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, UniformMatrix4x3fv, ( GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    \
    /* GL_VERSION_3_0 */ \
    GF_GL_FUNCTION( void, ColorMaski, ( GfGLuint, GfGLboolean, GfGLboolean, GfGLboolean, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, GetBooleani_v, ( GfGLenum, GfGLuint, GfGLboolean * ) ) \
    GF_GL_FUNCTION( void, GetIntegeri_v, ( GfGLenum, GfGLuint, GfGLint * ) ) \
    GF_GL_FUNCTION( void, Enablei, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, Disablei, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsEnabledi, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, BeginTransformFeedback, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, EndTransformFeedback, ( ) ) \
    GF_GL_FUNCTION( void, BindBufferRange, ( GfGLenum, GfGLuint, GfGLuint, GfGLintptr, GfGLsizeiptr ) ) \
    GF_GL_FUNCTION( void, BindBufferBase, ( GfGLenum, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, TransformFeedbackVaryings, ( GfGLuint, GfGLsizei, const GfGLchar *const*, GfGLenum ) ) \
    GF_GL_FUNCTION( void, GetTransformFeedbackVarying, ( GfGLuint, GfGLuint, GfGLsizei, GfGLsizei *, GfGLsizei *, GfGLenum *, GfGLchar * ) ) \
    GF_GL_FUNCTION( void, ClampColor, ( GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, BeginConditionalRender, ( GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, EndConditionalRender, ( ) ) \
    GF_GL_FUNCTION( void, VertexAttribIPointer, ( GfGLuint, GfGLint, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribIiv, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribIuiv, ( GfGLuint, GfGLenum, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI1i, ( GfGLuint, GfGLint ) ) \
    GF_GL_FUNCTION( void, VertexAttribI2i, ( GfGLuint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, VertexAttribI3i, ( GfGLuint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, VertexAttribI4i, ( GfGLuint, GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, VertexAttribI1ui, ( GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexAttribI2ui, ( GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexAttribI3ui, ( GfGLuint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexAttribI4ui, ( GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexAttribI1iv, ( GfGLuint, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI2iv, ( GfGLuint, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI3iv, ( GfGLuint, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI4iv, ( GfGLuint, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI1uiv, ( GfGLuint, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI2uiv, ( GfGLuint, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI3uiv, ( GfGLuint, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI4uiv, ( GfGLuint, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI4bv, ( GfGLuint, const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI4sv, ( GfGLuint, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI4ubv, ( GfGLuint, const GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI4usv, ( GfGLuint, const GfGLushort * ) ) \
    GF_GL_FUNCTION( void, GetUniformuiv, ( GfGLuint, GfGLint, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, BindFragDataLocation, ( GfGLuint, GfGLuint, const GfGLchar * ) ) \
    GF_GL_FUNCTION( GfGLint, GetFragDataLocation, ( GfGLuint, const GfGLchar * ) ) \
    GF_GL_FUNCTION( void, Uniform1ui, ( GfGLint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, Uniform2ui, ( GfGLint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, Uniform3ui, ( GfGLint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, Uniform4ui, ( GfGLint, GfGLuint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, Uniform1uiv, ( GfGLint, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, Uniform2uiv, ( GfGLint, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, Uniform3uiv, ( GfGLint, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, Uniform4uiv, ( GfGLint, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, TexParameterIiv, ( GfGLenum, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, TexParameterIuiv, ( GfGLenum, GfGLenum, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GetTexParameterIiv, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetTexParameterIuiv, ( GfGLenum, GfGLenum, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, ClearBufferiv, ( GfGLenum, GfGLint, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, ClearBufferuiv, ( GfGLenum, GfGLint, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, ClearBufferfv, ( GfGLenum, GfGLint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ClearBufferfi, ( GfGLenum, GfGLint, GfGLfloat, GfGLint ) ) \
    GF_GL_FUNCTION( const GfGLubyte *, GetStringi, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsRenderbuffer, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, BindRenderbuffer, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, DeleteRenderbuffers, ( GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GenRenderbuffers, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, RenderbufferStorage, ( GfGLenum, GfGLenum, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, GetRenderbufferParameteriv, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsFramebuffer, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, BindFramebuffer, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, DeleteFramebuffers, ( GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GenFramebuffers, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( GfGLenum, CheckFramebufferStatus, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, FramebufferTexture1D, ( GfGLenum, GfGLenum, GfGLenum, GfGLuint, GfGLint ) ) \
    GF_GL_FUNCTION( void, FramebufferTexture2D, ( GfGLenum, GfGLenum, GfGLenum, GfGLuint, GfGLint ) ) \
    GF_GL_FUNCTION( void, FramebufferTexture3D, ( GfGLenum, GfGLenum, GfGLenum, GfGLuint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, FramebufferRenderbuffer, ( GfGLenum, GfGLenum, GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetFramebufferAttachmentParameteriv, ( GfGLenum, GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GenerateMipmap, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, BlitFramebuffer, ( GfGLint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLbitfield, GfGLenum ) ) \
    GF_GL_FUNCTION( void, RenderbufferStorageMultisample, ( GfGLenum, GfGLsizei, GfGLenum, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, FramebufferTextureLayer, ( GfGLenum, GfGLenum, GfGLuint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void *, MapBufferRange, ( GfGLenum, GfGLintptr, GfGLsizeiptr, GfGLbitfield ) ) \
    GF_GL_FUNCTION( void, FlushMappedBufferRange, ( GfGLenum, GfGLintptr, GfGLsizeiptr ) ) \
    GF_GL_FUNCTION( void, BindVertexArray, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, DeleteVertexArrays, ( GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GenVertexArrays, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsVertexArray, ( GfGLuint ) ) \
    \
    /* GL_VERSION_3_1 */ \
    GF_GL_FUNCTION( void, DrawArraysInstanced, ( GfGLenum, GfGLint, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, DrawElementsInstanced, ( GfGLenum, GfGLsizei, GfGLenum, const GfGLvoid *, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, TexBuffer, ( GfGLenum, GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, PrimitiveRestartIndex, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, CopyBufferSubData, ( GfGLenum, GfGLenum, GfGLintptr, GfGLintptr, GfGLsizeiptr ) ) \
    GF_GL_FUNCTION( void, GetUniformIndices, ( GfGLuint, GfGLsizei, const GfGLchar *const*, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GetActiveUniformsiv, ( GfGLuint, GfGLsizei, const GfGLuint *, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetActiveUniformName, ( GfGLuint, GfGLuint, GfGLsizei, GfGLsizei *, GfGLchar * ) ) \
    GF_GL_FUNCTION( GfGLuint, GetUniformBlockIndex, ( GfGLuint, const GfGLchar * ) ) \
    GF_GL_FUNCTION( void, GetActiveUniformBlockiv, ( GfGLuint, GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetActiveUniformBlockName, ( GfGLuint, GfGLuint, GfGLsizei, GfGLsizei *, GfGLchar * ) ) \
    GF_GL_FUNCTION( void, UniformBlockBinding, ( GfGLuint, GfGLuint, GfGLuint ) ) \
    \
    /* GL_VERSION_3_2 */ \
    GF_GL_FUNCTION( void, DrawElementsBaseVertex, ( GfGLenum, GfGLsizei, GfGLenum, const GfGLvoid *, GfGLint ) ) \
    GF_GL_FUNCTION( void, DrawRangeElementsBaseVertex, ( GfGLenum, GfGLuint, GfGLuint, GfGLsizei, GfGLenum, const GfGLvoid *, GfGLint ) ) \
    GF_GL_FUNCTION( void, DrawElementsInstancedBaseVertex, ( GfGLenum, GfGLsizei, GfGLenum, const GfGLvoid *, GfGLsizei, GfGLint ) ) \
    GF_GL_FUNCTION( void, MultiDrawElementsBaseVertex, ( GfGLenum, const GfGLsizei *, GfGLenum, const GfGLvoid *const*, GfGLsizei, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, ProvokingVertex, ( GfGLenum ) ) \
    GF_GL_FUNCTION( GfGLsync, FenceSync, ( GfGLenum, GfGLbitfield ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsSync, ( GfGLsync ) ) \
    GF_GL_FUNCTION( void, DeleteSync, ( GfGLsync ) ) \
    GF_GL_FUNCTION( GfGLenum, ClientWaitSync, ( GfGLsync, GfGLbitfield, GfGLuint64 ) ) \
    GF_GL_FUNCTION( void, WaitSync, ( GfGLsync, GfGLbitfield, GfGLuint64 ) ) \
    GF_GL_FUNCTION( void, GetInteger64v, ( GfGLenum, GfGLint64 * ) ) \
    GF_GL_FUNCTION( void, GetSynciv, ( GfGLsync, GfGLenum, GfGLsizei, GfGLsizei *, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetInteger64i_v, ( GfGLenum, GfGLuint, GfGLint64 * ) ) \
    GF_GL_FUNCTION( void, GetBufferParameteri64v, ( GfGLenum, GfGLenum, GfGLint64 * ) ) \
    GF_GL_FUNCTION( void, FramebufferTexture, ( GfGLenum, GfGLenum, GfGLuint, GfGLint ) ) \
    GF_GL_FUNCTION( void, TexImage2DMultisample, ( GfGLenum, GfGLsizei, GfGLint, GfGLsizei, GfGLsizei, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, TexImage3DMultisample, ( GfGLenum, GfGLsizei, GfGLint, GfGLsizei, GfGLsizei, GfGLsizei, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, GetMultisamplefv, ( GfGLenum, GfGLuint, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, SampleMaski, ( GfGLuint, GfGLbitfield ) ) \
    \
    /* GL_VERSION_3_3 */ \
    GF_GL_FUNCTION( void, BindFragDataLocationIndexed, ( GfGLuint, GfGLuint, GfGLuint, const GfGLchar * ) ) \
    GF_GL_FUNCTION( GfGLint, GetFragDataIndex, ( GfGLuint, const GfGLchar * ) ) \
    GF_GL_FUNCTION( void, GenSamplers, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, DeleteSamplers, ( GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsSampler, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, BindSampler, ( GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, SamplerParameteri, ( GfGLuint, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, SamplerParameteriv, ( GfGLuint, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, SamplerParameterf, ( GfGLuint, GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, SamplerParameterfv, ( GfGLuint, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, SamplerParameterIiv, ( GfGLuint, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, SamplerParameterIuiv, ( GfGLuint, GfGLenum, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GetSamplerParameteriv, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetSamplerParameterIiv, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetSamplerParameterfv, ( GfGLuint, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetSamplerParameterIuiv, ( GfGLuint, GfGLenum, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, QueryCounter, ( GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, GetQueryObjecti64v, ( GfGLuint, GfGLenum, GfGLint64 * ) ) \
    GF_GL_FUNCTION( void, GetQueryObjectui64v, ( GfGLuint, GfGLenum, GfGLuint64 * ) ) \
    GF_GL_FUNCTION( void, VertexAttribDivisor, ( GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexAttribP1ui, ( GfGLuint, GfGLenum, GfGLboolean, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexAttribP1uiv, ( GfGLuint, GfGLenum, GfGLboolean, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, VertexAttribP2ui, ( GfGLuint, GfGLenum, GfGLboolean, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexAttribP2uiv, ( GfGLuint, GfGLenum, GfGLboolean, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, VertexAttribP3ui, ( GfGLuint, GfGLenum, GfGLboolean, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexAttribP3uiv, ( GfGLuint, GfGLenum, GfGLboolean, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, VertexAttribP4ui, ( GfGLuint, GfGLenum, GfGLboolean, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexAttribP4uiv, ( GfGLuint, GfGLenum, GfGLboolean, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, VertexP2ui, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexP2uiv, ( GfGLenum, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, VertexP3ui, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexP3uiv, ( GfGLenum, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, VertexP4ui, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexP4uiv, ( GfGLenum, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, TexCoordP1ui, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, TexCoordP1uiv, ( GfGLenum, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, TexCoordP2ui, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, TexCoordP2uiv, ( GfGLenum, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, TexCoordP3ui, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, TexCoordP3uiv, ( GfGLenum, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, TexCoordP4ui, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, TexCoordP4uiv, ( GfGLenum, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoordP1ui, ( GfGLenum, GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, MultiTexCoordP1uiv, ( GfGLenum, GfGLenum, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoordP2ui, ( GfGLenum, GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, MultiTexCoordP2uiv, ( GfGLenum, GfGLenum, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoordP3ui, ( GfGLenum, GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, MultiTexCoordP3uiv, ( GfGLenum, GfGLenum, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoordP4ui, ( GfGLenum, GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, MultiTexCoordP4uiv, ( GfGLenum, GfGLenum, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, NormalP3ui, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, NormalP3uiv, ( GfGLenum, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, ColorP3ui, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, ColorP3uiv, ( GfGLenum, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, ColorP4ui, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, ColorP4uiv, ( GfGLenum, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, SecondaryColorP3ui, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, SecondaryColorP3uiv, ( GfGLenum, const GfGLuint * ) ) \
    \
    /* GL_VERSION_4_0 */ \
    GF_GL_FUNCTION( void, MinSampleShading, ( GfGLfloat ) ) \
    GF_GL_FUNCTION( void, BlendEquationi, ( GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, BlendEquationSeparatei, ( GfGLuint, GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, BlendFunci, ( GfGLuint, GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, BlendFuncSeparatei, ( GfGLuint, GfGLenum, GfGLenum, GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, DrawArraysIndirect, ( GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, DrawElementsIndirect, ( GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, Uniform1d, ( GfGLint, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, Uniform2d, ( GfGLint, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, Uniform3d, ( GfGLint, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, Uniform4d, ( GfGLint, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, Uniform1dv, ( GfGLint, GfGLsizei, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, Uniform2dv, ( GfGLint, GfGLsizei, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, Uniform3dv, ( GfGLint, GfGLsizei, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, Uniform4dv, ( GfGLint, GfGLsizei, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, UniformMatrix2dv, ( GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, UniformMatrix3dv, ( GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, UniformMatrix4dv, ( GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, UniformMatrix2x3dv, ( GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, UniformMatrix2x4dv, ( GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, UniformMatrix3x2dv, ( GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, UniformMatrix3x4dv, ( GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, UniformMatrix4x2dv, ( GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, UniformMatrix4x3dv, ( GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, GetUniformdv, ( GfGLuint, GfGLint, GfGLdouble * ) ) \
    GF_GL_FUNCTION( GfGLint, GetSubroutineUniformLocation, ( GfGLuint, GfGLenum, const GfGLchar * ) ) \
    GF_GL_FUNCTION( GfGLuint, GetSubroutineIndex, ( GfGLuint, GfGLenum, const GfGLchar * ) ) \
    GF_GL_FUNCTION( void, GetActiveSubroutineUniformiv, ( GfGLuint, GfGLenum, GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetActiveSubroutineUniformName, ( GfGLuint, GfGLenum, GfGLuint, GfGLsizei, GfGLsizei *, GfGLchar * ) ) \
    GF_GL_FUNCTION( void, GetActiveSubroutineName, ( GfGLuint, GfGLenum, GfGLuint, GfGLsizei, GfGLsizei *, GfGLchar * ) ) \
    GF_GL_FUNCTION( void, UniformSubroutinesuiv, ( GfGLenum, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GetUniformSubroutineuiv, ( GfGLenum, GfGLint, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GetProgramStageiv, ( GfGLuint, GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, PatchParameteri, ( GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, PatchParameterfv, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, BindTransformFeedback, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, DeleteTransformFeedbacks, ( GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GenTransformFeedbacks, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsTransformFeedback, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, PauseTransformFeedback, ( ) ) \
    GF_GL_FUNCTION( void, ResumeTransformFeedback, ( ) ) \
    GF_GL_FUNCTION( void, DrawTransformFeedback, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, DrawTransformFeedbackStream, ( GfGLenum, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, BeginQueryIndexed, ( GfGLenum, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, EndQueryIndexed, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetQueryIndexediv, ( GfGLenum, GfGLuint, GfGLenum, GfGLint * ) ) \
    \
    /* GL_VERSION_4_1 */ \
    GF_GL_FUNCTION( void, ReleaseShaderCompiler, ( ) ) \
    GF_GL_FUNCTION( void, ShaderBinary, ( GfGLsizei, const GfGLuint *, GfGLenum, const GfGLvoid *, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, GetShaderPrecisionFormat, ( GfGLenum, GfGLenum, GfGLint *, GfGLint * ) ) \
    GF_GL_FUNCTION( void, DepthRangef, ( GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ClearDepthf, ( GfGLfloat ) ) \
    GF_GL_FUNCTION( void, GetProgramBinary, ( GfGLuint, GfGLsizei, GfGLsizei *, GfGLenum *, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, ProgramBinary, ( GfGLuint, GfGLenum, const GfGLvoid *, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, ProgramParameteri, ( GfGLuint, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, UseProgramStages, ( GfGLuint, GfGLbitfield, GfGLuint ) ) \
    GF_GL_FUNCTION( void, ActiveShaderProgram, ( GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( GfGLuint, CreateShaderProgramv, ( GfGLenum, GfGLsizei, const GfGLchar *const* ) ) \
    GF_GL_FUNCTION( void, BindProgramPipeline, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, DeleteProgramPipelines, ( GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GenProgramPipelines, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsProgramPipeline, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetProgramPipelineiv, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform1i, ( GfGLuint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, ProgramUniform1iv, ( GfGLuint, GfGLint, GfGLsizei, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform1f, ( GfGLuint, GfGLint, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ProgramUniform1fv, ( GfGLuint, GfGLint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform1d, ( GfGLuint, GfGLint, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, ProgramUniform1dv, ( GfGLuint, GfGLint, GfGLsizei, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform1ui, ( GfGLuint, GfGLint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, ProgramUniform1uiv, ( GfGLuint, GfGLint, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform2i, ( GfGLuint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, ProgramUniform2iv, ( GfGLuint, GfGLint, GfGLsizei, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform2f, ( GfGLuint, GfGLint, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ProgramUniform2fv, ( GfGLuint, GfGLint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform2d, ( GfGLuint, GfGLint, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, ProgramUniform2dv, ( GfGLuint, GfGLint, GfGLsizei, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform2ui, ( GfGLuint, GfGLint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, ProgramUniform2uiv, ( GfGLuint, GfGLint, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform3i, ( GfGLuint, GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, ProgramUniform3iv, ( GfGLuint, GfGLint, GfGLsizei, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform3f, ( GfGLuint, GfGLint, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ProgramUniform3fv, ( GfGLuint, GfGLint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform3d, ( GfGLuint, GfGLint, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, ProgramUniform3dv, ( GfGLuint, GfGLint, GfGLsizei, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform3ui, ( GfGLuint, GfGLint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, ProgramUniform3uiv, ( GfGLuint, GfGLint, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform4i, ( GfGLuint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, ProgramUniform4iv, ( GfGLuint, GfGLint, GfGLsizei, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform4f, ( GfGLuint, GfGLint, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ProgramUniform4fv, ( GfGLuint, GfGLint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform4d, ( GfGLuint, GfGLint, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, ProgramUniform4dv, ( GfGLuint, GfGLint, GfGLsizei, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform4ui, ( GfGLuint, GfGLint, GfGLuint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, ProgramUniform4uiv, ( GfGLuint, GfGLint, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix2fv, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix3fv, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix4fv, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix2dv, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix3dv, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix4dv, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix2x3fv, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix3x2fv, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix2x4fv, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix4x2fv, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix3x4fv, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix4x3fv, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix2x3dv, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix3x2dv, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix2x4dv, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix4x2dv, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix3x4dv, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix4x3dv, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ValidateProgramPipeline, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetProgramPipelineInfoLog, ( GfGLuint, GfGLsizei, GfGLsizei *, GfGLchar * ) ) \
    GF_GL_FUNCTION( void, VertexAttribL1d, ( GfGLuint, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexAttribL2d, ( GfGLuint, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexAttribL3d, ( GfGLuint, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexAttribL4d, ( GfGLuint, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexAttribL1dv, ( GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttribL2dv, ( GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttribL3dv, ( GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttribL4dv, ( GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttribLPointer, ( GfGLuint, GfGLint, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribLdv, ( GfGLuint, GfGLenum, GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ViewportArrayv, ( GfGLuint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ViewportIndexedf, ( GfGLuint, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ViewportIndexedfv, ( GfGLuint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ScissorArrayv, ( GfGLuint, GfGLsizei, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, ScissorIndexed, ( GfGLuint, GfGLint, GfGLint, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, ScissorIndexedv, ( GfGLuint, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, DepthRangeArrayv, ( GfGLuint, GfGLsizei, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, DepthRangeIndexed, ( GfGLuint, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, GetFloati_v, ( GfGLenum, GfGLuint, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetDoublei_v, ( GfGLenum, GfGLuint, GfGLdouble * ) ) \
    \
    /* GL_VERSION_4_2 */ \
    GF_GL_FUNCTION( void, DrawArraysInstancedBaseInstance, ( GfGLenum, GfGLint, GfGLsizei, GfGLsizei, GfGLuint ) ) \
    GF_GL_FUNCTION( void, DrawElementsInstancedBaseInstance, ( GfGLenum, GfGLsizei, GfGLenum, const void *, GfGLsizei, GfGLuint ) ) \
    GF_GL_FUNCTION( void, DrawElementsInstancedBaseVertexBaseInstance, ( GfGLenum, GfGLsizei, GfGLenum, const void *, GfGLsizei, GfGLint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetInternalformativ, ( GfGLenum, GfGLenum, GfGLenum, GfGLsizei, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetActiveAtomicCounterBufferiv, ( GfGLuint, GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, BindImageTexture, ( GfGLuint, GfGLuint, GfGLint, GfGLboolean, GfGLint, GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, MemoryBarrier, ( GfGLbitfield ) ) \
    GF_GL_FUNCTION( void, TexStorage1D, ( GfGLenum, GfGLsizei, GfGLenum, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, TexStorage2D, ( GfGLenum, GfGLsizei, GfGLenum, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, TexStorage3D, ( GfGLenum, GfGLsizei, GfGLenum, GfGLsizei, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, DrawTransformFeedbackInstanced, ( GfGLenum, GfGLuint, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, DrawTransformFeedbackStreamInstanced, ( GfGLenum, GfGLuint, GfGLuint, GfGLsizei ) ) \
    \
    /* GL_VERSION_4_3 */ \
    GF_GL_FUNCTION( void, ClearBufferData, ( GfGLenum, GfGLenum, GfGLenum, GfGLenum, const void * ) ) \
    GF_GL_FUNCTION( void, ClearBufferSubData, ( GfGLenum, GfGLenum, GfGLintptr, GfGLsizeiptr, GfGLenum, GfGLenum, const void * ) ) \
    GF_GL_FUNCTION( void, DispatchCompute, ( GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, DispatchComputeIndirect, ( GfGLintptr ) ) \
    GF_GL_FUNCTION( void, CopyImageSubData, ( GfGLuint, GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLuint, GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, FramebufferParameteri, ( GfGLenum, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, GetFramebufferParameteriv, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetInternalformati64v, ( GfGLenum, GfGLenum, GfGLenum, GfGLsizei, GfGLint64 * ) ) \
    GF_GL_FUNCTION( void, InvalidateTexSubImage, ( GfGLuint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, InvalidateTexImage, ( GfGLuint, GfGLint ) ) \
    GF_GL_FUNCTION( void, InvalidateBufferSubData, ( GfGLuint, GfGLintptr, GfGLsizeiptr ) ) \
    GF_GL_FUNCTION( void, InvalidateBufferData, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, InvalidateFramebuffer, ( GfGLenum, GfGLsizei, const GfGLenum * ) ) \
    GF_GL_FUNCTION( void, InvalidateSubFramebuffer, ( GfGLenum, GfGLsizei, const GfGLenum *, GfGLint, GfGLint, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, MultiDrawArraysIndirect, ( GfGLenum, const void *, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, MultiDrawElementsIndirect, ( GfGLenum, GfGLenum, const void *, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, GetProgramInterfaceiv, ( GfGLuint, GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( GfGLuint, GetProgramResourceIndex, ( GfGLuint, GfGLenum, const GfGLchar * ) ) \
    GF_GL_FUNCTION( void, GetProgramResourceName, ( GfGLuint, GfGLenum, GfGLuint, GfGLsizei, GfGLsizei *, GfGLchar * ) ) \
    GF_GL_FUNCTION( void, GetProgramResourceiv, ( GfGLuint, GfGLenum, GfGLuint, GfGLsizei, const GfGLenum *, GfGLsizei, GfGLsizei *, GfGLint * ) ) \
    GF_GL_FUNCTION( GfGLint, GetProgramResourceLocation, ( GfGLuint, GfGLenum, const GfGLchar * ) ) \
    GF_GL_FUNCTION( GfGLint, GetProgramResourceLocationIndex, ( GfGLuint, GfGLenum, const GfGLchar * ) ) \
    GF_GL_FUNCTION( void, ShaderStorageBlockBinding, ( GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, TexBufferRange, ( GfGLenum, GfGLenum, GfGLuint, GfGLintptr, GfGLsizeiptr ) ) \
    GF_GL_FUNCTION( void, TexStorage2DMultisample, ( GfGLenum, GfGLsizei, GfGLenum, GfGLsizei, GfGLsizei, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, TexStorage3DMultisample, ( GfGLenum, GfGLsizei, GfGLenum, GfGLsizei, GfGLsizei, GfGLsizei, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, TextureView, ( GfGLuint, GfGLenum, GfGLuint, GfGLenum, GfGLuint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, BindVertexBuffer, ( GfGLuint, GfGLuint, GfGLintptr, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, VertexAttribFormat, ( GfGLuint, GfGLint, GfGLenum, GfGLboolean, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexAttribIFormat, ( GfGLuint, GfGLint, GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexAttribLFormat, ( GfGLuint, GfGLint, GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexAttribBinding, ( GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexBindingDivisor, ( GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, DebugMessageControl, ( GfGLenum, GfGLenum, GfGLenum, GfGLsizei, const GfGLuint *, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, DebugMessageInsert, ( GfGLenum, GfGLenum, GfGLuint, GfGLenum, GfGLsizei, const GfGLchar * ) ) \
    GF_GL_FUNCTION( void, DebugMessageCallback, ( GfGLDebugProc, const void * ) ) \
    GF_GL_FUNCTION( GfGLuint, GetDebugMessageLog, ( GfGLuint, GfGLsizei, GfGLenum *, GfGLenum *, GfGLuint *, GfGLenum *, GfGLsizei *, GfGLchar * ) ) \
    GF_GL_FUNCTION( void, PushDebugGroup, ( GfGLenum, GfGLuint, GfGLsizei, const GfGLchar * ) ) \
    GF_GL_FUNCTION( void, PopDebugGroup, ( ) ) \
    GF_GL_FUNCTION( void, ObjectLabel, ( GfGLenum, GfGLuint, GfGLsizei, const GfGLchar * ) ) \
    GF_GL_FUNCTION( void, GetObjectLabel, ( GfGLenum, GfGLuint, GfGLsizei, GfGLsizei *, GfGLchar * ) ) \
    GF_GL_FUNCTION( void, ObjectPtrLabel, ( const void *, GfGLsizei, const GfGLchar * ) ) \
    GF_GL_FUNCTION( void, GetObjectPtrLabel, ( const void *, GfGLsizei, GfGLsizei *, GfGLchar * ) ) \
    \
    /* GL_VERSION_4_4 */ \
    GF_GL_FUNCTION( void, BufferStorage, ( GfGLenum, GfGLsizeiptr, const void *, GfGLbitfield ) ) \
    GF_GL_FUNCTION( void, ClearTexImage, ( GfGLuint, GfGLint, GfGLenum, GfGLenum, const void * ) ) \
    GF_GL_FUNCTION( void, ClearTexSubImage, ( GfGLuint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLsizei, GfGLenum, GfGLenum, const void * ) ) \
    GF_GL_FUNCTION( void, BindBuffersBase, ( GfGLenum, GfGLuint, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, BindBuffersRange, ( GfGLenum, GfGLuint, GfGLsizei, const GfGLuint *, const GfGLintptr *, const GfGLsizeiptr * ) ) \
    GF_GL_FUNCTION( void, BindTextures, ( GfGLuint, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, BindSamplers, ( GfGLuint, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, BindImageTextures, ( GfGLuint, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, BindVertexBuffers, ( GfGLuint, GfGLsizei, const GfGLuint *, const GfGLintptr *, const GfGLsizei * ) ) \
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
    GF_GL_FUNCTION( GfGLuint64, GetTextureHandleARB, ( GfGLuint ) ) \
    GF_GL_FUNCTION( GfGLuint64, GetTextureSamplerHandleARB, ( GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, MakeTextureHandleResidentARB, ( GfGLuint64 ) ) \
    GF_GL_FUNCTION( void, MakeTextureHandleNonResidentARB, ( GfGLuint64 ) ) \
    GF_GL_FUNCTION( GfGLuint64, GetImageHandleARB, ( GfGLuint, GfGLint, GfGLboolean, GfGLint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, MakeImageHandleResidentARB, ( GfGLuint64, GfGLenum ) ) \
    GF_GL_FUNCTION( void, MakeImageHandleNonResidentARB, ( GfGLuint64 ) ) \
    GF_GL_FUNCTION( void, UniformHandleui64ARB, ( GfGLint, GfGLuint64 ) ) \
    GF_GL_FUNCTION( void, UniformHandleui64vARB, ( GfGLint, GfGLsizei, const GfGLuint64 * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformHandleui64ARB, ( GfGLuint, GfGLint, GfGLuint64 ) ) \
    GF_GL_FUNCTION( void, ProgramUniformHandleui64vARB, ( GfGLuint, GfGLint, GfGLsizei, const GfGLuint64 * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsTextureHandleResidentARB, ( GfGLuint64 ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsImageHandleResidentARB, ( GfGLuint64 ) ) \
    GF_GL_FUNCTION( void, VertexAttribL1ui64ARB, ( GfGLuint, GfGLuint64EXT ) ) \
    GF_GL_FUNCTION( void, VertexAttribL1ui64vARB, ( GfGLuint, const GfGLuint64EXT * ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribLui64vARB, ( GfGLuint, GfGLenum, GfGLuint64EXT * ) ) \
    \
    /* GL_ARB_blend_func_extended */ \
    \
    /* GL_ARB_buffer_storage */ \
    \
    /* GL_ARB_cl_event */ \
    GF_GL_FUNCTION( GfGLsync, CreateSyncFromCLeventARB, ( struct _cl_context *, struct _cl_event *, GfGLbitfield ) ) \
    \
    /* GL_ARB_clear_buffer_object */ \
    \
    /* GL_ARB_clear_texture */ \
    \
    /* GL_ARB_color_buffer_float */ \
    GF_GL_FUNCTION( void, ClampColorARB, ( GfGLenum, GfGLenum ) ) \
    \
    /* GL_ARB_compatibility */ \
    \
    /* GL_ARB_compressed_texture_pixel_storage */ \
    \
    /* GL_ARB_compute_shader */ \
    \
    /* GL_ARB_compute_variable_group_size */ \
    GF_GL_FUNCTION( void, DispatchComputeGroupSizeARB, ( GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint ) ) \
    \
    /* GL_ARB_conservative_depth */ \
    \
    /* GL_ARB_copy_buffer */ \
    \
    /* GL_ARB_copy_image */ \
    \
    /* GL_ARB_debug_output */ \
    GF_GL_FUNCTION( void, DebugMessageControlARB, ( GfGLenum, GfGLenum, GfGLenum, GfGLsizei, const GfGLuint *, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, DebugMessageInsertARB, ( GfGLenum, GfGLenum, GfGLuint, GfGLenum, GfGLsizei, const GfGLchar * ) ) \
    GF_GL_FUNCTION( void, DebugMessageCallbackARB, ( GfGLDebugProcARB, const void * ) ) \
    GF_GL_FUNCTION( GfGLuint, GetDebugMessageLogARB, ( GfGLuint, GfGLsizei, GfGLenum *, GfGLenum *, GfGLuint *, GfGLenum *, GfGLsizei *, GfGLchar * ) ) \
    \
    /* GL_ARB_depth_buffer_float */ \
    \
    /* GL_ARB_depth_clamp */ \
    \
    /* GL_ARB_depth_texture */ \
    \
    /* GL_ARB_draw_buffers */ \
    GF_GL_FUNCTION( void, DrawBuffersARB, ( GfGLsizei, const GfGLenum * ) ) \
    \
    /* GL_ARB_draw_buffers_blend */ \
    GF_GL_FUNCTION( void, BlendEquationiARB, ( GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, BlendEquationSeparateiARB, ( GfGLuint, GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, BlendFunciARB, ( GfGLuint, GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, BlendFuncSeparateiARB, ( GfGLuint, GfGLenum, GfGLenum, GfGLenum, GfGLenum ) ) \
    \
    /* GL_ARB_draw_elements_base_vertex */ \
    \
    /* GL_ARB_draw_indirect */ \
    \
    /* GL_ARB_draw_instanced */ \
    GF_GL_FUNCTION( void, DrawArraysInstancedARB, ( GfGLenum, GfGLint, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, DrawElementsInstancedARB, ( GfGLenum, GfGLsizei, GfGLenum, const GfGLvoid *, GfGLsizei ) ) \
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
    GF_GL_FUNCTION( void, ProgramStringARB, ( GfGLenum, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, BindProgramARB, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, DeleteProgramsARB, ( GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GenProgramsARB, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, ProgramEnvParameter4dARB, ( GfGLenum, GfGLuint, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, ProgramEnvParameter4dvARB, ( GfGLenum, GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramEnvParameter4fARB, ( GfGLenum, GfGLuint, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ProgramEnvParameter4fvARB, ( GfGLenum, GfGLuint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramLocalParameter4dARB, ( GfGLenum, GfGLuint, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, ProgramLocalParameter4dvARB, ( GfGLenum, GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramLocalParameter4fARB, ( GfGLenum, GfGLuint, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ProgramLocalParameter4fvARB, ( GfGLenum, GfGLuint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetProgramEnvParameterdvARB, ( GfGLenum, GfGLuint, GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, GetProgramEnvParameterfvARB, ( GfGLenum, GfGLuint, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetProgramLocalParameterdvARB, ( GfGLenum, GfGLuint, GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, GetProgramLocalParameterfvARB, ( GfGLenum, GfGLuint, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetProgramivARB, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetProgramStringARB, ( GfGLenum, GfGLenum, GfGLvoid * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsProgramARB, ( GfGLuint ) ) \
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
    GF_GL_FUNCTION( void, ProgramParameteriARB, ( GfGLuint, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, FramebufferTextureARB, ( GfGLenum, GfGLenum, GfGLuint, GfGLint ) ) \
    GF_GL_FUNCTION( void, FramebufferTextureLayerARB, ( GfGLenum, GfGLenum, GfGLuint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, FramebufferTextureFaceARB, ( GfGLenum, GfGLenum, GfGLuint, GfGLint, GfGLenum ) ) \
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
    GF_GL_FUNCTION( void, ColorTable, ( GfGLenum, GfGLenum, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, ColorTableParameterfv, ( GfGLenum, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ColorTableParameteriv, ( GfGLenum, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, CopyColorTable, ( GfGLenum, GfGLenum, GfGLint, GfGLint, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, GetColorTable, ( GfGLenum, GfGLenum, GfGLenum, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetColorTableParameterfv, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetColorTableParameteriv, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, ColorSubTable, ( GfGLenum, GfGLsizei, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CopyColorSubTable, ( GfGLenum, GfGLsizei, GfGLint, GfGLint, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, ConvolutionFilter1D, ( GfGLenum, GfGLenum, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, ConvolutionFilter2D, ( GfGLenum, GfGLenum, GfGLsizei, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, ConvolutionParameterf, ( GfGLenum, GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ConvolutionParameterfv, ( GfGLenum, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ConvolutionParameteri, ( GfGLenum, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, ConvolutionParameteriv, ( GfGLenum, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, CopyConvolutionFilter1D, ( GfGLenum, GfGLenum, GfGLint, GfGLint, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, CopyConvolutionFilter2D, ( GfGLenum, GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, GetConvolutionFilter, ( GfGLenum, GfGLenum, GfGLenum, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetConvolutionParameterfv, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetConvolutionParameteriv, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetSeparableFilter, ( GfGLenum, GfGLenum, GfGLenum, GfGLvoid *, GfGLvoid *, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, SeparableFilter2D, ( GfGLenum, GfGLenum, GfGLsizei, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid *, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetHistogram, ( GfGLenum, GfGLboolean, GfGLenum, GfGLenum, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetHistogramParameterfv, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetHistogramParameteriv, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetMinmax, ( GfGLenum, GfGLboolean, GfGLenum, GfGLenum, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetMinmaxParameterfv, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetMinmaxParameteriv, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, Histogram, ( GfGLenum, GfGLsizei, GfGLenum, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, Minmax, ( GfGLenum, GfGLenum, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, ResetHistogram, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, ResetMinmax, ( GfGLenum ) ) \
    \
    /* GL_ARB_indirect_parameters */ \
    GF_GL_FUNCTION( void, MultiDrawArraysIndirectCountARB, ( GfGLenum, GfGLintptr, GfGLintptr, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, MultiDrawElementsIndirectCountARB, ( GfGLenum, GfGLenum, GfGLintptr, GfGLintptr, GfGLsizei, GfGLsizei ) ) \
    \
    /* GL_ARB_instanced_arrays */ \
    GF_GL_FUNCTION( void, VertexAttribDivisorARB, ( GfGLuint, GfGLuint ) ) \
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
    GF_GL_FUNCTION( void, CurrentPaletteMatrixARB, ( GfGLint ) ) \
    GF_GL_FUNCTION( void, MatrixIndexubvARB, ( GfGLint, const GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, MatrixIndexusvARB, ( GfGLint, const GfGLushort * ) ) \
    GF_GL_FUNCTION( void, MatrixIndexuivARB, ( GfGLint, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, MatrixIndexPointerARB, ( GfGLint, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    \
    /* GL_ARB_multi_bind */ \
    \
    /* GL_ARB_multi_draw_indirect */ \
    \
    /* GL_ARB_multisample */ \
    GF_GL_FUNCTION( void, SampleCoverageARB, ( GfGLfloat, GfGLboolean ) ) \
    \
    /* GL_ARB_multitexture */ \
    GF_GL_FUNCTION( void, ActiveTextureARB, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, ClientActiveTextureARB, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord1dARB, ( GfGLenum, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord1dvARB, ( GfGLenum, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord1fARB, ( GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord1fvARB, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord1iARB, ( GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord1ivARB, ( GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord1sARB, ( GfGLenum, GfGLshort ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord1svARB, ( GfGLenum, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord2dARB, ( GfGLenum, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord2dvARB, ( GfGLenum, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord2fARB, ( GfGLenum, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord2fvARB, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord2iARB, ( GfGLenum, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord2ivARB, ( GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord2sARB, ( GfGLenum, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord2svARB, ( GfGLenum, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord3dARB, ( GfGLenum, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord3dvARB, ( GfGLenum, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord3fARB, ( GfGLenum, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord3fvARB, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord3iARB, ( GfGLenum, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord3ivARB, ( GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord3sARB, ( GfGLenum, GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord3svARB, ( GfGLenum, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord4dARB, ( GfGLenum, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord4dvARB, ( GfGLenum, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord4fARB, ( GfGLenum, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord4fvARB, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord4iARB, ( GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord4ivARB, ( GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord4sARB, ( GfGLenum, GfGLshort, GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord4svARB, ( GfGLenum, const GfGLshort * ) ) \
    \
    /* GL_ARB_occlusion_query */ \
    GF_GL_FUNCTION( void, GenQueriesARB, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, DeleteQueriesARB, ( GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsQueryARB, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, BeginQueryARB, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, EndQueryARB, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, GetQueryivARB, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetQueryObjectivARB, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetQueryObjectuivARB, ( GfGLuint, GfGLenum, GfGLuint * ) ) \
    \
    /* GL_ARB_occlusion_query2 */ \
    \
    /* GL_ARB_pixel_buffer_object */ \
    \
    /* GL_ARB_point_parameters */ \
    GF_GL_FUNCTION( void, PointParameterfARB, ( GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, PointParameterfvARB, ( GfGLenum, const GfGLfloat * ) ) \
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
    GF_GL_FUNCTION( GfGLenum, GetGraphicsResetStatusARB, ( ) ) \
    GF_GL_FUNCTION( void, GetnTexImageARB, ( GfGLenum, GfGLint, GfGLenum, GfGLenum, GfGLsizei, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, ReadnPixelsARB, ( GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLenum, GfGLenum, GfGLsizei, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetnCompressedTexImageARB, ( GfGLenum, GfGLint, GfGLsizei, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetnUniformfvARB, ( GfGLuint, GfGLint, GfGLsizei, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetnUniformivARB, ( GfGLuint, GfGLint, GfGLsizei, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetnUniformuivARB, ( GfGLuint, GfGLint, GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GetnUniformdvARB, ( GfGLuint, GfGLint, GfGLsizei, GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, GetnMapdvARB, ( GfGLenum, GfGLenum, GfGLsizei, GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, GetnMapfvARB, ( GfGLenum, GfGLenum, GfGLsizei, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetnMapivARB, ( GfGLenum, GfGLenum, GfGLsizei, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetnPixelMapfvARB, ( GfGLenum, GfGLsizei, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetnPixelMapuivARB, ( GfGLenum, GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GetnPixelMapusvARB, ( GfGLenum, GfGLsizei, GfGLushort * ) ) \
    GF_GL_FUNCTION( void, GetnPolygonStippleARB, ( GfGLsizei, GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, GetnColorTableARB, ( GfGLenum, GfGLenum, GfGLenum, GfGLsizei, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetnConvolutionFilterARB, ( GfGLenum, GfGLenum, GfGLenum, GfGLsizei, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetnSeparableFilterARB, ( GfGLenum, GfGLenum, GfGLenum, GfGLsizei, GfGLvoid *, GfGLsizei, GfGLvoid *, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetnHistogramARB, ( GfGLenum, GfGLboolean, GfGLenum, GfGLenum, GfGLsizei, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetnMinmaxARB, ( GfGLenum, GfGLboolean, GfGLenum, GfGLenum, GfGLsizei, GfGLvoid * ) ) \
    \
    /* GL_ARB_robustness_isolation */ \
    \
    /* GL_ARB_sample_shading */ \
    GF_GL_FUNCTION( void, MinSampleShadingARB, ( GfGLfloat ) ) \
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
    GF_GL_FUNCTION( void, DeleteObjectARB, ( GfGLhandleARB ) ) \
    GF_GL_FUNCTION( GfGLhandleARB, GetHandleARB, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, DetachObjectARB, ( GfGLhandleARB, GfGLhandleARB ) ) \
    GF_GL_FUNCTION( GfGLhandleARB, CreateShaderObjectARB, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, ShaderSourceARB, ( GfGLhandleARB, GfGLsizei, const GfGLcharARB **, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, CompileShaderARB, ( GfGLhandleARB ) ) \
    GF_GL_FUNCTION( GfGLhandleARB, CreateProgramObjectARB, ( ) ) \
    GF_GL_FUNCTION( void, AttachObjectARB, ( GfGLhandleARB, GfGLhandleARB ) ) \
    GF_GL_FUNCTION( void, LinkProgramARB, ( GfGLhandleARB ) ) \
    GF_GL_FUNCTION( void, UseProgramObjectARB, ( GfGLhandleARB ) ) \
    GF_GL_FUNCTION( void, ValidateProgramARB, ( GfGLhandleARB ) ) \
    GF_GL_FUNCTION( void, Uniform1fARB, ( GfGLint, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Uniform2fARB, ( GfGLint, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Uniform3fARB, ( GfGLint, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Uniform4fARB, ( GfGLint, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Uniform1iARB, ( GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, Uniform2iARB, ( GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, Uniform3iARB, ( GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, Uniform4iARB, ( GfGLint, GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, Uniform1fvARB, ( GfGLint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Uniform2fvARB, ( GfGLint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Uniform3fvARB, ( GfGLint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Uniform4fvARB, ( GfGLint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Uniform1ivARB, ( GfGLint, GfGLsizei, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, Uniform2ivARB, ( GfGLint, GfGLsizei, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, Uniform3ivARB, ( GfGLint, GfGLsizei, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, Uniform4ivARB, ( GfGLint, GfGLsizei, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, UniformMatrix2fvARB, ( GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, UniformMatrix3fvARB, ( GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, UniformMatrix4fvARB, ( GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetObjectParameterfvARB, ( GfGLhandleARB, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetObjectParameterivARB, ( GfGLhandleARB, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetInfoLogARB, ( GfGLhandleARB, GfGLsizei, GfGLsizei *, GfGLcharARB * ) ) \
    GF_GL_FUNCTION( void, GetAttachedObjectsARB, ( GfGLhandleARB, GfGLsizei, GfGLsizei *, GfGLhandleARB * ) ) \
    GF_GL_FUNCTION( GfGLint, GetUniformLocationARB, ( GfGLhandleARB, const GfGLcharARB * ) ) \
    GF_GL_FUNCTION( void, GetActiveUniformARB, ( GfGLhandleARB, GfGLuint, GfGLsizei, GfGLsizei *, GfGLint *, GfGLenum *, GfGLcharARB * ) ) \
    GF_GL_FUNCTION( void, GetUniformfvARB, ( GfGLhandleARB, GfGLint, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetUniformivARB, ( GfGLhandleARB, GfGLint, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetShaderSourceARB, ( GfGLhandleARB, GfGLsizei, GfGLsizei *, GfGLcharARB * ) ) \
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
    GF_GL_FUNCTION( void, NamedStringARB, ( GfGLenum, GfGLint, const GfGLchar *, GfGLint, const GfGLchar * ) ) \
    GF_GL_FUNCTION( void, DeleteNamedStringARB, ( GfGLint, const GfGLchar * ) ) \
    GF_GL_FUNCTION( void, CompileShaderIncludeARB, ( GfGLuint, GfGLsizei, const GfGLchar *const*, const GfGLint * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsNamedStringARB, ( GfGLint, const GfGLchar * ) ) \
    GF_GL_FUNCTION( void, GetNamedStringARB, ( GfGLint, const GfGLchar *, GfGLsizei, GfGLint *, GfGLchar * ) ) \
    GF_GL_FUNCTION( void, GetNamedStringivARB, ( GfGLint, const GfGLchar *, GfGLenum, GfGLint * ) ) \
    \
    /* GL_ARB_shading_language_packing */ \
    \
    /* GL_ARB_shadow */ \
    \
    /* GL_ARB_shadow_ambient */ \
    \
    /* GL_ARB_sparse_texture */ \
    GF_GL_FUNCTION( void, TexPageCommitmentARB, ( GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLsizei, GfGLboolean ) ) \
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
    GF_GL_FUNCTION( void, TexBufferARB, ( GfGLenum, GfGLenum, GfGLuint ) ) \
    \
    /* GL_ARB_texture_buffer_object_rgb32 */ \
    \
    /* GL_ARB_texture_buffer_range */ \
    \
    /* GL_ARB_texture_compression */ \
    GF_GL_FUNCTION( void, CompressedTexImage3DARB, ( GfGLenum, GfGLint, GfGLenum, GfGLsizei, GfGLsizei, GfGLsizei, GfGLint, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CompressedTexImage2DARB, ( GfGLenum, GfGLint, GfGLenum, GfGLsizei, GfGLsizei, GfGLint, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CompressedTexImage1DARB, ( GfGLenum, GfGLint, GfGLenum, GfGLsizei, GfGLint, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CompressedTexSubImage3DARB, ( GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLsizei, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CompressedTexSubImage2DARB, ( GfGLenum, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CompressedTexSubImage1DARB, ( GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetCompressedTexImageARB, ( GfGLenum, GfGLint, GfGLvoid * ) ) \
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
    GF_GL_FUNCTION( void, LoadTransposeMatrixfARB, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, LoadTransposeMatrixdARB, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, MultTransposeMatrixfARB, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, MultTransposeMatrixdARB, ( const GfGLdouble * ) ) \
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
    GF_GL_FUNCTION( void, WeightbvARB, ( GfGLint, const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, WeightsvARB, ( GfGLint, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, WeightivARB, ( GfGLint, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, WeightfvARB, ( GfGLint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, WeightdvARB, ( GfGLint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, WeightubvARB, ( GfGLint, const GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, WeightusvARB, ( GfGLint, const GfGLushort * ) ) \
    GF_GL_FUNCTION( void, WeightuivARB, ( GfGLint, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, WeightPointerARB, ( GfGLint, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, VertexBlendARB, ( GfGLint ) ) \
    \
    /* GL_ARB_vertex_buffer_object */ \
    GF_GL_FUNCTION( void, BindBufferARB, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, DeleteBuffersARB, ( GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GenBuffersARB, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsBufferARB, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, BufferDataARB, ( GfGLenum, GfGLsizeiptrARB, const GfGLvoid *, GfGLenum ) ) \
    GF_GL_FUNCTION( void, BufferSubDataARB, ( GfGLenum, GfGLintptrARB, GfGLsizeiptrARB, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetBufferSubDataARB, ( GfGLenum, GfGLintptrARB, GfGLsizeiptrARB, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void *, MapBufferARB, ( GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( GfGLboolean, UnmapBufferARB, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, GetBufferParameterivARB, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetBufferPointervARB, ( GfGLenum, GfGLenum, GfGLvoid ** ) ) \
    \
    /* GL_ARB_vertex_program */ \
    GF_GL_FUNCTION( void, VertexAttrib1dARB, ( GfGLuint, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexAttrib1dvARB, ( GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib1fARB, ( GfGLuint, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, VertexAttrib1fvARB, ( GfGLuint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib1sARB, ( GfGLuint, GfGLshort ) ) \
    GF_GL_FUNCTION( void, VertexAttrib1svARB, ( GfGLuint, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib2dARB, ( GfGLuint, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexAttrib2dvARB, ( GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib2fARB, ( GfGLuint, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, VertexAttrib2fvARB, ( GfGLuint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib2sARB, ( GfGLuint, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, VertexAttrib2svARB, ( GfGLuint, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib3dARB, ( GfGLuint, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexAttrib3dvARB, ( GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib3fARB, ( GfGLuint, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, VertexAttrib3fvARB, ( GfGLuint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib3sARB, ( GfGLuint, GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, VertexAttrib3svARB, ( GfGLuint, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4NbvARB, ( GfGLuint, const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4NivARB, ( GfGLuint, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4NsvARB, ( GfGLuint, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4NubARB, ( GfGLuint, GfGLubyte, GfGLubyte, GfGLubyte, GfGLubyte ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4NubvARB, ( GfGLuint, const GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4NuivARB, ( GfGLuint, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4NusvARB, ( GfGLuint, const GfGLushort * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4bvARB, ( GfGLuint, const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4dARB, ( GfGLuint, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4dvARB, ( GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4fARB, ( GfGLuint, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4fvARB, ( GfGLuint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4ivARB, ( GfGLuint, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4sARB, ( GfGLuint, GfGLshort, GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4svARB, ( GfGLuint, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4ubvARB, ( GfGLuint, const GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4uivARB, ( GfGLuint, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4usvARB, ( GfGLuint, const GfGLushort * ) ) \
    GF_GL_FUNCTION( void, VertexAttribPointerARB, ( GfGLuint, GfGLint, GfGLenum, GfGLboolean, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, EnableVertexAttribArrayARB, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, DisableVertexAttribArrayARB, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribdvARB, ( GfGLuint, GfGLenum, GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribfvARB, ( GfGLuint, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribivARB, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribPointervARB, ( GfGLuint, GfGLenum, GfGLvoid ** ) ) \
    \
    /* GL_ARB_vertex_shader */ \
    GF_GL_FUNCTION( void, BindAttribLocationARB, ( GfGLhandleARB, GfGLuint, const GfGLcharARB * ) ) \
    GF_GL_FUNCTION( void, GetActiveAttribARB, ( GfGLhandleARB, GfGLuint, GfGLsizei, GfGLsizei *, GfGLint *, GfGLenum *, GfGLcharARB * ) ) \
    GF_GL_FUNCTION( GfGLint, GetAttribLocationARB, ( GfGLhandleARB, const GfGLcharARB * ) ) \
    \
    /* GL_ARB_vertex_type_10f_11f_11f_rev */ \
    \
    /* GL_ARB_vertex_type_2_10_10_10_rev */ \
    \
    /* GL_ARB_viewport_array */ \
    \
    /* GL_ARB_window_pos */ \
    GF_GL_FUNCTION( void, WindowPos2dARB, ( GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, WindowPos2dvARB, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, WindowPos2fARB, ( GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, WindowPos2fvARB, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, WindowPos2iARB, ( GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, WindowPos2ivARB, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, WindowPos2sARB, ( GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, WindowPos2svARB, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, WindowPos3dARB, ( GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, WindowPos3dvARB, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, WindowPos3fARB, ( GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, WindowPos3fvARB, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, WindowPos3iARB, ( GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, WindowPos3ivARB, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, WindowPos3sARB, ( GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, WindowPos3svARB, ( const GfGLshort * ) ) \
    \
    /* GL_KHR_debug */ \
    \
    /* GL_KHR_texture_compression_astc_ldr */ \
    \
    /* GL_OES_byte_coordinates */ \
    GF_GL_FUNCTION( void, MultiTexCoord1bOES, ( GfGLenum, GfGLbyte ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord1bvOES, ( GfGLenum, const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord2bOES, ( GfGLenum, GfGLbyte, GfGLbyte ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord2bvOES, ( GfGLenum, const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord3bOES, ( GfGLenum, GfGLbyte, GfGLbyte, GfGLbyte ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord3bvOES, ( GfGLenum, const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord4bOES, ( GfGLenum, GfGLbyte, GfGLbyte, GfGLbyte, GfGLbyte ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord4bvOES, ( GfGLenum, const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, TexCoord1bOES, ( GfGLbyte ) ) \
    GF_GL_FUNCTION( void, TexCoord1bvOES, ( const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, TexCoord2bOES, ( GfGLbyte, GfGLbyte ) ) \
    GF_GL_FUNCTION( void, TexCoord2bvOES, ( const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, TexCoord3bOES, ( GfGLbyte, GfGLbyte, GfGLbyte ) ) \
    GF_GL_FUNCTION( void, TexCoord3bvOES, ( const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, TexCoord4bOES, ( GfGLbyte, GfGLbyte, GfGLbyte, GfGLbyte ) ) \
    GF_GL_FUNCTION( void, TexCoord4bvOES, ( const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, Vertex2bOES, ( GfGLbyte ) ) \
    GF_GL_FUNCTION( void, Vertex2bvOES, ( const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, Vertex3bOES, ( GfGLbyte, GfGLbyte ) ) \
    GF_GL_FUNCTION( void, Vertex3bvOES, ( const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, Vertex4bOES, ( GfGLbyte, GfGLbyte, GfGLbyte ) ) \
    GF_GL_FUNCTION( void, Vertex4bvOES, ( const GfGLbyte * ) ) \
    \
    /* GL_OES_compressed_paletted_texture */ \
    \
    /* GL_OES_fixed_point */ \
    GF_GL_FUNCTION( void, AlphaFuncxOES, ( GfGLenum, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, ClearColorxOES, ( GfGLfixed, GfGLfixed, GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, ClearDepthxOES, ( GfGLfixed ) ) \
    GF_GL_FUNCTION( void, ClipPlanexOES, ( GfGLenum, const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, Color4xOES, ( GfGLfixed, GfGLfixed, GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, DepthRangexOES, ( GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, FogxOES, ( GfGLenum, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, FogxvOES, ( GfGLenum, const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, FrustumxOES, ( GfGLfixed, GfGLfixed, GfGLfixed, GfGLfixed, GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, GetClipPlanexOES, ( GfGLenum, GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, GetFixedvOES, ( GfGLenum, GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, GetTexEnvxvOES, ( GfGLenum, GfGLenum, GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, GetTexParameterxvOES, ( GfGLenum, GfGLenum, GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, LightModelxOES, ( GfGLenum, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, LightModelxvOES, ( GfGLenum, const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, LightxOES, ( GfGLenum, GfGLenum, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, LightxvOES, ( GfGLenum, GfGLenum, const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, LineWidthxOES, ( GfGLfixed ) ) \
    GF_GL_FUNCTION( void, LoadMatrixxOES, ( const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, MaterialxOES, ( GfGLenum, GfGLenum, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, MaterialxvOES, ( GfGLenum, GfGLenum, const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, MultMatrixxOES, ( const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord4xOES, ( GfGLenum, GfGLfixed, GfGLfixed, GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, Normal3xOES, ( GfGLfixed, GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, OrthoxOES, ( GfGLfixed, GfGLfixed, GfGLfixed, GfGLfixed, GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, PointParameterxvOES, ( GfGLenum, const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, PointSizexOES, ( GfGLfixed ) ) \
    GF_GL_FUNCTION( void, PolygonOffsetxOES, ( GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, RotatexOES, ( GfGLfixed, GfGLfixed, GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, SampleCoverageOES, ( GfGLfixed, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, ScalexOES, ( GfGLfixed, GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, TexEnvxOES, ( GfGLenum, GfGLenum, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, TexEnvxvOES, ( GfGLenum, GfGLenum, const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, TexParameterxOES, ( GfGLenum, GfGLenum, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, TexParameterxvOES, ( GfGLenum, GfGLenum, const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, TranslatexOES, ( GfGLfixed, GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, AccumxOES, ( GfGLenum, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, BitmapxOES, ( GfGLsizei, GfGLsizei, GfGLfixed, GfGLfixed, GfGLfixed, GfGLfixed, const GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, BlendColorxOES, ( GfGLfixed, GfGLfixed, GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, ClearAccumxOES, ( GfGLfixed, GfGLfixed, GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, Color3xOES, ( GfGLfixed, GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, Color3xvOES, ( const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, Color4xvOES, ( const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, ConvolutionParameterxOES, ( GfGLenum, GfGLenum, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, ConvolutionParameterxvOES, ( GfGLenum, GfGLenum, const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, EvalCoord1xOES, ( GfGLfixed ) ) \
    GF_GL_FUNCTION( void, EvalCoord1xvOES, ( const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, EvalCoord2xOES, ( GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, EvalCoord2xvOES, ( const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, FeedbackBufferxOES, ( GfGLsizei, GfGLenum, const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, GetConvolutionParameterxvOES, ( GfGLenum, GfGLenum, GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, GetHistogramParameterxvOES, ( GfGLenum, GfGLenum, GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, GetLightxOES, ( GfGLenum, GfGLenum, GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, GetMapxvOES, ( GfGLenum, GfGLenum, GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, GetMaterialxOES, ( GfGLenum, GfGLenum, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, GetPixelMapxv, ( GfGLenum, GfGLint, GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, GetTexGenxvOES, ( GfGLenum, GfGLenum, GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, GetTexLevelParameterxvOES, ( GfGLenum, GfGLint, GfGLenum, GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, IndexxOES, ( GfGLfixed ) ) \
    GF_GL_FUNCTION( void, IndexxvOES, ( const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, LoadTransposeMatrixxOES, ( const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, Map1xOES, ( GfGLenum, GfGLfixed, GfGLfixed, GfGLint, GfGLint, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, Map2xOES, ( GfGLenum, GfGLfixed, GfGLfixed, GfGLint, GfGLint, GfGLfixed, GfGLfixed, GfGLint, GfGLint, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, MapGrid1xOES, ( GfGLint, GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, MapGrid2xOES, ( GfGLint, GfGLfixed, GfGLfixed, GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, MultTransposeMatrixxOES, ( const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord1xOES, ( GfGLenum, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord1xvOES, ( GfGLenum, const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord2xOES, ( GfGLenum, GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord2xvOES, ( GfGLenum, const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord3xOES, ( GfGLenum, GfGLfixed, GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord3xvOES, ( GfGLenum, const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord4xvOES, ( GfGLenum, const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, Normal3xvOES, ( const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, PassThroughxOES, ( GfGLfixed ) ) \
    GF_GL_FUNCTION( void, PixelMapx, ( GfGLenum, GfGLint, const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, PixelStorex, ( GfGLenum, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, PixelTransferxOES, ( GfGLenum, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, PixelZoomxOES, ( GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, PrioritizeTexturesxOES, ( GfGLsizei, const GfGLuint *, const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, RasterPos2xOES, ( GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, RasterPos2xvOES, ( const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, RasterPos3xOES, ( GfGLfixed, GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, RasterPos3xvOES, ( const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, RasterPos4xOES, ( GfGLfixed, GfGLfixed, GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, RasterPos4xvOES, ( const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, RectxOES, ( GfGLfixed, GfGLfixed, GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, RectxvOES, ( const GfGLfixed *, const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, TexCoord1xOES, ( GfGLfixed ) ) \
    GF_GL_FUNCTION( void, TexCoord1xvOES, ( const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, TexCoord2xOES, ( GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, TexCoord2xvOES, ( const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, TexCoord3xOES, ( GfGLfixed, GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, TexCoord3xvOES, ( const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, TexCoord4xOES, ( GfGLfixed, GfGLfixed, GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, TexCoord4xvOES, ( const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, TexGenxOES, ( GfGLenum, GfGLenum, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, TexGenxvOES, ( GfGLenum, GfGLenum, const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, Vertex2xOES, ( GfGLfixed ) ) \
    GF_GL_FUNCTION( void, Vertex2xvOES, ( const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, Vertex3xOES, ( GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, Vertex3xvOES, ( const GfGLfixed * ) ) \
    GF_GL_FUNCTION( void, Vertex4xOES, ( GfGLfixed, GfGLfixed, GfGLfixed ) ) \
    GF_GL_FUNCTION( void, Vertex4xvOES, ( const GfGLfixed * ) ) \
    \
    /* GL_OES_query_matrix */ \
    GF_GL_FUNCTION( GfGLbitfield, QueryMatrixxOES, ( GfGLfixed *, GfGLint * ) ) \
    \
    /* GL_OES_read_format */ \
    \
    /* GL_OES_single_precision */ \
    GF_GL_FUNCTION( void, ClearDepthfOES, ( GfGLclampf ) ) \
    GF_GL_FUNCTION( void, ClipPlanefOES, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, DepthRangefOES, ( GfGLclampf, GfGLclampf ) ) \
    GF_GL_FUNCTION( void, FrustumfOES, ( GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, GetClipPlanefOES, ( GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, OrthofOES, ( GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    \
    /* GL_3DFX_multisample */ \
    \
    /* GL_3DFX_tbuffer */ \
    GF_GL_FUNCTION( void, TbufferMask3DFX, ( GfGLuint ) ) \
    \
    /* GL_3DFX_texture_compression_FXT1 */ \
    \
    /* GL_AMD_blend_minmax_factor */ \
    \
    /* GL_AMD_conservative_depth */ \
    \
    /* GL_AMD_debug_output */ \
    GF_GL_FUNCTION( void, DebugMessageEnableAMD, ( GfGLenum, GfGLenum, GfGLsizei, const GfGLuint *, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, DebugMessageInsertAMD, ( GfGLenum, GfGLenum, GfGLuint, GfGLsizei, const GfGLchar * ) ) \
    GF_GL_FUNCTION( void, DebugMessageCallbackAMD, ( GfGLDebugProcAMD, void * ) ) \
    GF_GL_FUNCTION( GfGLuint, GetDebugMessageLogAMD, ( GfGLuint, GfGLsizei, GfGLenum *, GfGLuint *, GfGLuint *, GfGLsizei *, GfGLchar * ) ) \
    \
    /* GL_AMD_depth_clamp_separate */ \
    \
    /* GL_AMD_draw_buffers_blend */ \
    GF_GL_FUNCTION( void, BlendFuncIndexedAMD, ( GfGLuint, GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, BlendFuncSeparateIndexedAMD, ( GfGLuint, GfGLenum, GfGLenum, GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, BlendEquationIndexedAMD, ( GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, BlendEquationSeparateIndexedAMD, ( GfGLuint, GfGLenum, GfGLenum ) ) \
    \
    /* GL_AMD_interleaved_elements */ \
    GF_GL_FUNCTION( void, VertexAttribParameteriAMD, ( GfGLuint, GfGLenum, GfGLint ) ) \
    \
    /* GL_AMD_multi_draw_indirect */ \
    GF_GL_FUNCTION( void, MultiDrawArraysIndirectAMD, ( GfGLenum, const GfGLvoid *, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, MultiDrawElementsIndirectAMD, ( GfGLenum, GfGLenum, const GfGLvoid *, GfGLsizei, GfGLsizei ) ) \
    \
    /* GL_AMD_name_gen_delete */ \
    GF_GL_FUNCTION( void, GenNamesAMD, ( GfGLenum, GfGLuint, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, DeleteNamesAMD, ( GfGLenum, GfGLuint, const GfGLuint * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsNameAMD, ( GfGLenum, GfGLuint ) ) \
    \
    /* GL_AMD_performance_monitor */ \
    GF_GL_FUNCTION( void, GetPerfMonitorGroupsAMD, ( GfGLint *, GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GetPerfMonitorCountersAMD, ( GfGLuint, GfGLint *, GfGLint *, GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GetPerfMonitorGroupStringAMD, ( GfGLuint, GfGLsizei, GfGLsizei *, GfGLchar * ) ) \
    GF_GL_FUNCTION( void, GetPerfMonitorCounterStringAMD, ( GfGLuint, GfGLuint, GfGLsizei, GfGLsizei *, GfGLchar * ) ) \
    GF_GL_FUNCTION( void, GetPerfMonitorCounterInfoAMD, ( GfGLuint, GfGLuint, GfGLenum, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GenPerfMonitorsAMD, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, DeletePerfMonitorsAMD, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, SelectPerfMonitorCountersAMD, ( GfGLuint, GfGLboolean, GfGLuint, GfGLint, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, BeginPerfMonitorAMD, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, EndPerfMonitorAMD, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetPerfMonitorCounterDataAMD, ( GfGLuint, GfGLenum, GfGLsizei, GfGLuint *, GfGLint * ) ) \
    \
    /* GL_AMD_pinned_memory */ \
    \
    /* GL_AMD_query_buffer_object */ \
    \
    /* GL_AMD_sample_positions */ \
    GF_GL_FUNCTION( void, SetMultisamplefvAMD, ( GfGLenum, GfGLuint, const GfGLfloat * ) ) \
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
    GF_GL_FUNCTION( void, TexStorageSparseAMD, ( GfGLenum, GfGLenum, GfGLsizei, GfGLsizei, GfGLsizei, GfGLsizei, GfGLbitfield ) ) \
    GF_GL_FUNCTION( void, TextureStorageSparseAMD, ( GfGLuint, GfGLenum, GfGLenum, GfGLsizei, GfGLsizei, GfGLsizei, GfGLsizei, GfGLbitfield ) ) \
    \
    /* GL_AMD_stencil_operation_extended */ \
    GF_GL_FUNCTION( void, StencilOpValueAMD, ( GfGLenum, GfGLuint ) ) \
    \
    /* GL_AMD_texture_texture4 */ \
    \
    /* GL_AMD_transform_feedback3_lines_triangles */ \
    \
    /* GL_AMD_vertex_shader_layer */ \
    \
    /* GL_AMD_vertex_shader_tessellator */ \
    GF_GL_FUNCTION( void, TessellationFactorAMD, ( GfGLfloat ) ) \
    GF_GL_FUNCTION( void, TessellationModeAMD, ( GfGLenum ) ) \
    \
    /* GL_AMD_vertex_shader_viewport_index */ \
    \
    /* GL_APPLE_aux_depth_stencil */ \
    \
    /* GL_APPLE_client_storage */ \
    \
    /* GL_APPLE_element_array */ \
    GF_GL_FUNCTION( void, ElementPointerAPPLE, ( GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, DrawElementArrayAPPLE, ( GfGLenum, GfGLint, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, DrawRangeElementArrayAPPLE, ( GfGLenum, GfGLuint, GfGLuint, GfGLint, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, MultiDrawElementArrayAPPLE, ( GfGLenum, const GfGLint *, const GfGLsizei *, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, MultiDrawRangeElementArrayAPPLE, ( GfGLenum, GfGLuint, GfGLuint, const GfGLint *, const GfGLsizei *, GfGLsizei ) ) \
    \
    /* GL_APPLE_fence */ \
    GF_GL_FUNCTION( void, GenFencesAPPLE, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, DeleteFencesAPPLE, ( GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, SetFenceAPPLE, ( GfGLuint ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsFenceAPPLE, ( GfGLuint ) ) \
    GF_GL_FUNCTION( GfGLboolean, TestFenceAPPLE, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, FinishFenceAPPLE, ( GfGLuint ) ) \
    GF_GL_FUNCTION( GfGLboolean, TestObjectAPPLE, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, FinishObjectAPPLE, ( GfGLenum, GfGLint ) ) \
    \
    /* GL_APPLE_float_pixels */ \
    \
    /* GL_APPLE_flush_buffer_range */ \
    GF_GL_FUNCTION( void, BufferParameteriAPPLE, ( GfGLenum, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, FlushMappedBufferRangeAPPLE, ( GfGLenum, GfGLintptr, GfGLsizeiptr ) ) \
    \
    /* GL_APPLE_object_purgeable */ \
    GF_GL_FUNCTION( GfGLenum, ObjectPurgeableAPPLE, ( GfGLenum, GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( GfGLenum, ObjectUnpurgeableAPPLE, ( GfGLenum, GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, GetObjectParameterivAPPLE, ( GfGLenum, GfGLuint, GfGLenum, GfGLint * ) ) \
    \
    /* GL_APPLE_rgb_422 */ \
    \
    /* GL_APPLE_row_bytes */ \
    \
    /* GL_APPLE_specular_vector */ \
    \
    /* GL_APPLE_texture_range */ \
    GF_GL_FUNCTION( void, TextureRangeAPPLE, ( GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetTexParameterPointervAPPLE, ( GfGLenum, GfGLenum, GfGLvoid ** ) ) \
    \
    /* GL_APPLE_transform_hint */ \
    \
    /* GL_APPLE_vertex_array_object */ \
    GF_GL_FUNCTION( void, BindVertexArrayAPPLE, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, DeleteVertexArraysAPPLE, ( GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GenVertexArraysAPPLE, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsVertexArrayAPPLE, ( GfGLuint ) ) \
    \
    /* GL_APPLE_vertex_array_range */ \
    GF_GL_FUNCTION( void, VertexArrayRangeAPPLE, ( GfGLsizei, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, FlushVertexArrayRangeAPPLE, ( GfGLsizei, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, VertexArrayParameteriAPPLE, ( GfGLenum, GfGLint ) ) \
    \
    /* GL_APPLE_vertex_program_evaluators */ \
    GF_GL_FUNCTION( void, EnableVertexAttribAPPLE, ( GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, DisableVertexAttribAPPLE, ( GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsVertexAttribEnabledAPPLE, ( GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, MapVertexAttrib1dAPPLE, ( GfGLuint, GfGLuint, GfGLdouble, GfGLdouble, GfGLint, GfGLint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, MapVertexAttrib1fAPPLE, ( GfGLuint, GfGLuint, GfGLfloat, GfGLfloat, GfGLint, GfGLint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, MapVertexAttrib2dAPPLE, ( GfGLuint, GfGLuint, GfGLdouble, GfGLdouble, GfGLint, GfGLint, GfGLdouble, GfGLdouble, GfGLint, GfGLint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, MapVertexAttrib2fAPPLE, ( GfGLuint, GfGLuint, GfGLfloat, GfGLfloat, GfGLint, GfGLint, GfGLfloat, GfGLfloat, GfGLint, GfGLint, const GfGLfloat * ) ) \
    \
    /* GL_APPLE_ycbcr_422 */ \
    \
    /* GL_ATI_draw_buffers */ \
    GF_GL_FUNCTION( void, DrawBuffersATI, ( GfGLsizei, const GfGLenum * ) ) \
    \
    /* GL_ATI_element_array */ \
    GF_GL_FUNCTION( void, ElementPointerATI, ( GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, DrawElementArrayATI, ( GfGLenum, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, DrawRangeElementArrayATI, ( GfGLenum, GfGLuint, GfGLuint, GfGLsizei ) ) \
    \
    /* GL_ATI_envmap_bumpmap */ \
    GF_GL_FUNCTION( void, TexBumpParameterivATI, ( GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, TexBumpParameterfvATI, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetTexBumpParameterivATI, ( GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetTexBumpParameterfvATI, ( GfGLenum, GfGLfloat * ) ) \
    \
    /* GL_ATI_fragment_shader */ \
    GF_GL_FUNCTION( GfGLuint, GenFragmentShadersATI, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, BindFragmentShaderATI, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, DeleteFragmentShaderATI, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, BeginFragmentShaderATI, ( ) ) \
    GF_GL_FUNCTION( void, EndFragmentShaderATI, ( ) ) \
    GF_GL_FUNCTION( void, PassTexCoordATI, ( GfGLuint, GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, SampleMapATI, ( GfGLuint, GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, ColorFragmentOp1ATI, ( GfGLenum, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, ColorFragmentOp2ATI, ( GfGLenum, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, ColorFragmentOp3ATI, ( GfGLenum, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, AlphaFragmentOp1ATI, ( GfGLenum, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, AlphaFragmentOp2ATI, ( GfGLenum, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, AlphaFragmentOp3ATI, ( GfGLenum, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, SetFragmentShaderConstantATI, ( GfGLuint, const GfGLfloat * ) ) \
    \
    /* GL_ATI_map_object_buffer */ \
    GF_GL_FUNCTION( void *, MapObjectBufferATI, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, UnmapObjectBufferATI, ( GfGLuint ) ) \
    \
    /* GL_ATI_meminfo */ \
    \
    /* GL_ATI_pixel_format_float */ \
    \
    /* GL_ATI_pn_triangles */ \
    GF_GL_FUNCTION( void, PNTrianglesiATI, ( GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, PNTrianglesfATI, ( GfGLenum, GfGLfloat ) ) \
    \
    /* GL_ATI_separate_stencil */ \
    GF_GL_FUNCTION( void, StencilOpSeparateATI, ( GfGLenum, GfGLenum, GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, StencilFuncSeparateATI, ( GfGLenum, GfGLenum, GfGLint, GfGLuint ) ) \
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
    GF_GL_FUNCTION( GfGLuint, NewObjectBufferATI, ( GfGLsizei, const GfGLvoid *, GfGLenum ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsObjectBufferATI, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, UpdateObjectBufferATI, ( GfGLuint, GfGLuint, GfGLsizei, const GfGLvoid *, GfGLenum ) ) \
    GF_GL_FUNCTION( void, GetObjectBufferfvATI, ( GfGLuint, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetObjectBufferivATI, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, FreeObjectBufferATI, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, ArrayObjectATI, ( GfGLenum, GfGLint, GfGLenum, GfGLsizei, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetArrayObjectfvATI, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetArrayObjectivATI, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, VariantArrayObjectATI, ( GfGLuint, GfGLenum, GfGLsizei, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetVariantArrayObjectfvATI, ( GfGLuint, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetVariantArrayObjectivATI, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    \
    /* GL_ATI_vertex_attrib_array_object */ \
    GF_GL_FUNCTION( void, VertexAttribArrayObjectATI, ( GfGLuint, GfGLint, GfGLenum, GfGLboolean, GfGLsizei, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribArrayObjectfvATI, ( GfGLuint, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribArrayObjectivATI, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    \
    /* GL_ATI_vertex_streams */ \
    GF_GL_FUNCTION( void, VertexStream1sATI, ( GfGLenum, GfGLshort ) ) \
    GF_GL_FUNCTION( void, VertexStream1svATI, ( GfGLenum, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexStream1iATI, ( GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, VertexStream1ivATI, ( GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, VertexStream1fATI, ( GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, VertexStream1fvATI, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VertexStream1dATI, ( GfGLenum, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexStream1dvATI, ( GfGLenum, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexStream2sATI, ( GfGLenum, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, VertexStream2svATI, ( GfGLenum, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexStream2iATI, ( GfGLenum, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, VertexStream2ivATI, ( GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, VertexStream2fATI, ( GfGLenum, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, VertexStream2fvATI, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VertexStream2dATI, ( GfGLenum, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexStream2dvATI, ( GfGLenum, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexStream3sATI, ( GfGLenum, GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, VertexStream3svATI, ( GfGLenum, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexStream3iATI, ( GfGLenum, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, VertexStream3ivATI, ( GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, VertexStream3fATI, ( GfGLenum, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, VertexStream3fvATI, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VertexStream3dATI, ( GfGLenum, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexStream3dvATI, ( GfGLenum, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexStream4sATI, ( GfGLenum, GfGLshort, GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, VertexStream4svATI, ( GfGLenum, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexStream4iATI, ( GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, VertexStream4ivATI, ( GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, VertexStream4fATI, ( GfGLenum, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, VertexStream4fvATI, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VertexStream4dATI, ( GfGLenum, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexStream4dvATI, ( GfGLenum, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, NormalStream3bATI, ( GfGLenum, GfGLbyte, GfGLbyte, GfGLbyte ) ) \
    GF_GL_FUNCTION( void, NormalStream3bvATI, ( GfGLenum, const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, NormalStream3sATI, ( GfGLenum, GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, NormalStream3svATI, ( GfGLenum, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, NormalStream3iATI, ( GfGLenum, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, NormalStream3ivATI, ( GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, NormalStream3fATI, ( GfGLenum, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, NormalStream3fvATI, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, NormalStream3dATI, ( GfGLenum, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, NormalStream3dvATI, ( GfGLenum, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ClientActiveVertexStreamATI, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, VertexBlendEnviATI, ( GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, VertexBlendEnvfATI, ( GfGLenum, GfGLfloat ) ) \
    \
    /* GL_EXT_422_pixels */ \
    \
    /* GL_EXT_abgr */ \
    \
    /* GL_EXT_bgra */ \
    \
    /* GL_EXT_bindable_uniform */ \
    GF_GL_FUNCTION( void, UniformBufferEXT, ( GfGLuint, GfGLint, GfGLuint ) ) \
    GF_GL_FUNCTION( GfGLint, GetUniformBufferSizeEXT, ( GfGLuint, GfGLint ) ) \
    GF_GL_FUNCTION( GfGLintptr, GetUniformOffsetEXT, ( GfGLuint, GfGLint ) ) \
    \
    /* GL_EXT_blend_color */ \
    GF_GL_FUNCTION( void, BlendColorEXT, ( GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    \
    /* GL_EXT_blend_equation_separate */ \
    GF_GL_FUNCTION( void, BlendEquationSeparateEXT, ( GfGLenum, GfGLenum ) ) \
    \
    /* GL_EXT_blend_func_separate */ \
    GF_GL_FUNCTION( void, BlendFuncSeparateEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLenum ) ) \
    \
    /* GL_EXT_blend_logic_op */ \
    \
    /* GL_EXT_blend_minmax */ \
    GF_GL_FUNCTION( void, BlendEquationEXT, ( GfGLenum ) ) \
    \
    /* GL_EXT_blend_subtract */ \
    \
    /* GL_EXT_clip_volume_hint */ \
    \
    /* GL_EXT_cmyka */ \
    \
    /* GL_EXT_color_subtable */ \
    GF_GL_FUNCTION( void, ColorSubTableEXT, ( GfGLenum, GfGLsizei, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CopyColorSubTableEXT, ( GfGLenum, GfGLsizei, GfGLint, GfGLint, GfGLsizei ) ) \
    \
    /* GL_EXT_compiled_vertex_array */ \
    GF_GL_FUNCTION( void, LockArraysEXT, ( GfGLint, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, UnlockArraysEXT, ( ) ) \
    \
    /* GL_EXT_convolution */ \
    GF_GL_FUNCTION( void, ConvolutionFilter1DEXT, ( GfGLenum, GfGLenum, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, ConvolutionFilter2DEXT, ( GfGLenum, GfGLenum, GfGLsizei, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, ConvolutionParameterfEXT, ( GfGLenum, GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ConvolutionParameterfvEXT, ( GfGLenum, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ConvolutionParameteriEXT, ( GfGLenum, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, ConvolutionParameterivEXT, ( GfGLenum, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, CopyConvolutionFilter1DEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLint, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, CopyConvolutionFilter2DEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, GetConvolutionFilterEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetConvolutionParameterfvEXT, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetConvolutionParameterivEXT, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetSeparableFilterEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLvoid *, GfGLvoid *, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, SeparableFilter2DEXT, ( GfGLenum, GfGLenum, GfGLsizei, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid *, const GfGLvoid * ) ) \
    \
    /* GL_EXT_coordinate_frame */ \
    GF_GL_FUNCTION( void, Tangent3bEXT, ( GfGLbyte, GfGLbyte, GfGLbyte ) ) \
    GF_GL_FUNCTION( void, Tangent3bvEXT, ( const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, Tangent3dEXT, ( GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, Tangent3dvEXT, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, Tangent3fEXT, ( GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Tangent3fvEXT, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Tangent3iEXT, ( GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, Tangent3ivEXT, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, Tangent3sEXT, ( GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, Tangent3svEXT, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, Binormal3bEXT, ( GfGLbyte, GfGLbyte, GfGLbyte ) ) \
    GF_GL_FUNCTION( void, Binormal3bvEXT, ( const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, Binormal3dEXT, ( GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, Binormal3dvEXT, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, Binormal3fEXT, ( GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Binormal3fvEXT, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Binormal3iEXT, ( GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, Binormal3ivEXT, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, Binormal3sEXT, ( GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, Binormal3svEXT, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, TangentPointerEXT, ( GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, BinormalPointerEXT, ( GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    \
    /* GL_EXT_copy_texture */ \
    GF_GL_FUNCTION( void, CopyTexImage1DEXT, ( GfGLenum, GfGLint, GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLint ) ) \
    GF_GL_FUNCTION( void, CopyTexImage2DEXT, ( GfGLenum, GfGLint, GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLint ) ) \
    GF_GL_FUNCTION( void, CopyTexSubImage1DEXT, ( GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, CopyTexSubImage2DEXT, ( GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, CopyTexSubImage3DEXT, ( GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei ) ) \
    \
    /* GL_EXT_cull_vertex */ \
    GF_GL_FUNCTION( void, CullParameterdvEXT, ( GfGLenum, GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, CullParameterfvEXT, ( GfGLenum, GfGLfloat * ) ) \
    \
    /* GL_EXT_depth_bounds_test */ \
    GF_GL_FUNCTION( void, DepthBoundsEXT, ( GfGLclampd, GfGLclampd ) ) \
    \
    /* GL_EXT_direct_state_access */ \
    GF_GL_FUNCTION( void, MatrixLoadfEXT, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, MatrixLoaddEXT, ( GfGLenum, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, MatrixMultfEXT, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, MatrixMultdEXT, ( GfGLenum, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, MatrixLoadIdentityEXT, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, MatrixRotatefEXT, ( GfGLenum, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, MatrixRotatedEXT, ( GfGLenum, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, MatrixScalefEXT, ( GfGLenum, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, MatrixScaledEXT, ( GfGLenum, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, MatrixTranslatefEXT, ( GfGLenum, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, MatrixTranslatedEXT, ( GfGLenum, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, MatrixFrustumEXT, ( GfGLenum, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, MatrixOrthoEXT, ( GfGLenum, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, MatrixPopEXT, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, MatrixPushEXT, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, ClientAttribDefaultEXT, ( GfGLbitfield ) ) \
    GF_GL_FUNCTION( void, PushClientAttribDefaultEXT, ( GfGLbitfield ) ) \
    GF_GL_FUNCTION( void, TextureParameterfEXT, ( GfGLuint, GfGLenum, GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, TextureParameterfvEXT, ( GfGLuint, GfGLenum, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, TextureParameteriEXT, ( GfGLuint, GfGLenum, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, TextureParameterivEXT, ( GfGLuint, GfGLenum, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, TextureImage1DEXT, ( GfGLuint, GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLint, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, TextureImage2DEXT, ( GfGLuint, GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLint, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, TextureSubImage1DEXT, ( GfGLuint, GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, TextureSubImage2DEXT, ( GfGLuint, GfGLenum, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CopyTextureImage1DEXT, ( GfGLuint, GfGLenum, GfGLint, GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLint ) ) \
    GF_GL_FUNCTION( void, CopyTextureImage2DEXT, ( GfGLuint, GfGLenum, GfGLint, GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLint ) ) \
    GF_GL_FUNCTION( void, CopyTextureSubImage1DEXT, ( GfGLuint, GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, CopyTextureSubImage2DEXT, ( GfGLuint, GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, GetTextureImageEXT, ( GfGLuint, GfGLenum, GfGLint, GfGLenum, GfGLenum, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetTextureParameterfvEXT, ( GfGLuint, GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetTextureParameterivEXT, ( GfGLuint, GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetTextureLevelParameterfvEXT, ( GfGLuint, GfGLenum, GfGLint, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetTextureLevelParameterivEXT, ( GfGLuint, GfGLenum, GfGLint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, TextureImage3DEXT, ( GfGLuint, GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLsizei, GfGLint, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, TextureSubImage3DEXT, ( GfGLuint, GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CopyTextureSubImage3DEXT, ( GfGLuint, GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, BindMultiTextureEXT, ( GfGLenum, GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, MultiTexCoordPointerEXT, ( GfGLenum, GfGLint, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, MultiTexEnvfEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, MultiTexEnvfvEXT, ( GfGLenum, GfGLenum, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, MultiTexEnviEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, MultiTexEnvivEXT, ( GfGLenum, GfGLenum, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, MultiTexGendEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, MultiTexGendvEXT, ( GfGLenum, GfGLenum, GfGLenum, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, MultiTexGenfEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, MultiTexGenfvEXT, ( GfGLenum, GfGLenum, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, MultiTexGeniEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, MultiTexGenivEXT, ( GfGLenum, GfGLenum, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetMultiTexEnvfvEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetMultiTexEnvivEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetMultiTexGendvEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, GetMultiTexGenfvEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetMultiTexGenivEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, MultiTexParameteriEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, MultiTexParameterivEXT, ( GfGLenum, GfGLenum, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, MultiTexParameterfEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, MultiTexParameterfvEXT, ( GfGLenum, GfGLenum, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, MultiTexImage1DEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLint, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, MultiTexImage2DEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLint, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, MultiTexSubImage1DEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, MultiTexSubImage2DEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CopyMultiTexImage1DEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLint ) ) \
    GF_GL_FUNCTION( void, CopyMultiTexImage2DEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLint ) ) \
    GF_GL_FUNCTION( void, CopyMultiTexSubImage1DEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, CopyMultiTexSubImage2DEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, GetMultiTexImageEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLenum, GfGLenum, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetMultiTexParameterfvEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetMultiTexParameterivEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetMultiTexLevelParameterfvEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetMultiTexLevelParameterivEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, MultiTexImage3DEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLsizei, GfGLint, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, MultiTexSubImage3DEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CopyMultiTexSubImage3DEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, EnableClientStateIndexedEXT, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, DisableClientStateIndexedEXT, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetFloatIndexedvEXT, ( GfGLenum, GfGLuint, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetDoubleIndexedvEXT, ( GfGLenum, GfGLuint, GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, GetPointerIndexedvEXT, ( GfGLenum, GfGLuint, GfGLvoid ** ) ) \
    GF_GL_FUNCTION( void, EnableIndexedEXT, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, DisableIndexedEXT, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsEnabledIndexedEXT, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetIntegerIndexedvEXT, ( GfGLenum, GfGLuint, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetBooleanIndexedvEXT, ( GfGLenum, GfGLuint, GfGLboolean * ) ) \
    GF_GL_FUNCTION( void, CompressedTextureImage3DEXT, ( GfGLuint, GfGLenum, GfGLint, GfGLenum, GfGLsizei, GfGLsizei, GfGLsizei, GfGLint, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CompressedTextureImage2DEXT, ( GfGLuint, GfGLenum, GfGLint, GfGLenum, GfGLsizei, GfGLsizei, GfGLint, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CompressedTextureImage1DEXT, ( GfGLuint, GfGLenum, GfGLint, GfGLenum, GfGLsizei, GfGLint, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CompressedTextureSubImage3DEXT, ( GfGLuint, GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLsizei, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CompressedTextureSubImage2DEXT, ( GfGLuint, GfGLenum, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CompressedTextureSubImage1DEXT, ( GfGLuint, GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetCompressedTextureImageEXT, ( GfGLuint, GfGLenum, GfGLint, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CompressedMultiTexImage3DEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLenum, GfGLsizei, GfGLsizei, GfGLsizei, GfGLint, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CompressedMultiTexImage2DEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLenum, GfGLsizei, GfGLsizei, GfGLint, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CompressedMultiTexImage1DEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLenum, GfGLsizei, GfGLint, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CompressedMultiTexSubImage3DEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLsizei, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CompressedMultiTexSubImage2DEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, CompressedMultiTexSubImage1DEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetCompressedMultiTexImageEXT, ( GfGLenum, GfGLenum, GfGLint, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, MatrixLoadTransposefEXT, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, MatrixLoadTransposedEXT, ( GfGLenum, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, MatrixMultTransposefEXT, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, MatrixMultTransposedEXT, ( GfGLenum, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, NamedBufferDataEXT, ( GfGLuint, GfGLsizeiptr, const GfGLvoid *, GfGLenum ) ) \
    GF_GL_FUNCTION( void, NamedBufferSubDataEXT, ( GfGLuint, GfGLintptr, GfGLsizeiptr, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void *, MapNamedBufferEXT, ( GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( GfGLboolean, UnmapNamedBufferEXT, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetNamedBufferParameterivEXT, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetNamedBufferPointervEXT, ( GfGLuint, GfGLenum, GfGLvoid ** ) ) \
    GF_GL_FUNCTION( void, GetNamedBufferSubDataEXT, ( GfGLuint, GfGLintptr, GfGLsizeiptr, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform1fEXT, ( GfGLuint, GfGLint, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ProgramUniform2fEXT, ( GfGLuint, GfGLint, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ProgramUniform3fEXT, ( GfGLuint, GfGLint, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ProgramUniform4fEXT, ( GfGLuint, GfGLint, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ProgramUniform1iEXT, ( GfGLuint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, ProgramUniform2iEXT, ( GfGLuint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, ProgramUniform3iEXT, ( GfGLuint, GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, ProgramUniform4iEXT, ( GfGLuint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, ProgramUniform1fvEXT, ( GfGLuint, GfGLint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform2fvEXT, ( GfGLuint, GfGLint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform3fvEXT, ( GfGLuint, GfGLint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform4fvEXT, ( GfGLuint, GfGLint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform1ivEXT, ( GfGLuint, GfGLint, GfGLsizei, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform2ivEXT, ( GfGLuint, GfGLint, GfGLsizei, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform3ivEXT, ( GfGLuint, GfGLint, GfGLsizei, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform4ivEXT, ( GfGLuint, GfGLint, GfGLsizei, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix2fvEXT, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix3fvEXT, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix4fvEXT, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix2x3fvEXT, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix3x2fvEXT, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix2x4fvEXT, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix4x2fvEXT, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix3x4fvEXT, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix4x3fvEXT, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, TextureBufferEXT, ( GfGLuint, GfGLenum, GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, MultiTexBufferEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, TextureParameterIivEXT, ( GfGLuint, GfGLenum, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, TextureParameterIuivEXT, ( GfGLuint, GfGLenum, GfGLenum, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GetTextureParameterIivEXT, ( GfGLuint, GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetTextureParameterIuivEXT, ( GfGLuint, GfGLenum, GfGLenum, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, MultiTexParameterIivEXT, ( GfGLenum, GfGLenum, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, MultiTexParameterIuivEXT, ( GfGLenum, GfGLenum, GfGLenum, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GetMultiTexParameterIivEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetMultiTexParameterIuivEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform1uiEXT, ( GfGLuint, GfGLint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, ProgramUniform2uiEXT, ( GfGLuint, GfGLint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, ProgramUniform3uiEXT, ( GfGLuint, GfGLint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, ProgramUniform4uiEXT, ( GfGLuint, GfGLint, GfGLuint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, ProgramUniform1uivEXT, ( GfGLuint, GfGLint, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform2uivEXT, ( GfGLuint, GfGLint, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform3uivEXT, ( GfGLuint, GfGLint, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform4uivEXT, ( GfGLuint, GfGLint, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, NamedProgramLocalParameters4fvEXT, ( GfGLuint, GfGLenum, GfGLuint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, NamedProgramLocalParameterI4iEXT, ( GfGLuint, GfGLenum, GfGLuint, GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, NamedProgramLocalParameterI4ivEXT, ( GfGLuint, GfGLenum, GfGLuint, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, NamedProgramLocalParametersI4ivEXT, ( GfGLuint, GfGLenum, GfGLuint, GfGLsizei, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, NamedProgramLocalParameterI4uiEXT, ( GfGLuint, GfGLenum, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, NamedProgramLocalParameterI4uivEXT, ( GfGLuint, GfGLenum, GfGLuint, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, NamedProgramLocalParametersI4uivEXT, ( GfGLuint, GfGLenum, GfGLuint, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GetNamedProgramLocalParameterIivEXT, ( GfGLuint, GfGLenum, GfGLuint, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetNamedProgramLocalParameterIuivEXT, ( GfGLuint, GfGLenum, GfGLuint, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, EnableClientStateiEXT, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, DisableClientStateiEXT, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetFloati_vEXT, ( GfGLenum, GfGLuint, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetDoublei_vEXT, ( GfGLenum, GfGLuint, GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, GetPointeri_vEXT, ( GfGLenum, GfGLuint, GfGLvoid ** ) ) \
    GF_GL_FUNCTION( void, NamedProgramStringEXT, ( GfGLuint, GfGLenum, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, NamedProgramLocalParameter4dEXT, ( GfGLuint, GfGLenum, GfGLuint, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, NamedProgramLocalParameter4dvEXT, ( GfGLuint, GfGLenum, GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, NamedProgramLocalParameter4fEXT, ( GfGLuint, GfGLenum, GfGLuint, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, NamedProgramLocalParameter4fvEXT, ( GfGLuint, GfGLenum, GfGLuint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetNamedProgramLocalParameterdvEXT, ( GfGLuint, GfGLenum, GfGLuint, GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, GetNamedProgramLocalParameterfvEXT, ( GfGLuint, GfGLenum, GfGLuint, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetNamedProgramivEXT, ( GfGLuint, GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetNamedProgramStringEXT, ( GfGLuint, GfGLenum, GfGLenum, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, NamedRenderbufferStorageEXT, ( GfGLuint, GfGLenum, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, GetNamedRenderbufferParameterivEXT, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, NamedRenderbufferStorageMultisampleEXT, ( GfGLuint, GfGLsizei, GfGLenum, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, NamedRenderbufferStorageMultisampleCoverageEXT, ( GfGLuint, GfGLsizei, GfGLsizei, GfGLenum, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( GfGLenum, CheckNamedFramebufferStatusEXT, ( GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, NamedFramebufferTexture1DEXT, ( GfGLuint, GfGLenum, GfGLenum, GfGLuint, GfGLint ) ) \
    GF_GL_FUNCTION( void, NamedFramebufferTexture2DEXT, ( GfGLuint, GfGLenum, GfGLenum, GfGLuint, GfGLint ) ) \
    GF_GL_FUNCTION( void, NamedFramebufferTexture3DEXT, ( GfGLuint, GfGLenum, GfGLenum, GfGLuint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, NamedFramebufferRenderbufferEXT, ( GfGLuint, GfGLenum, GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetNamedFramebufferAttachmentParameterivEXT, ( GfGLuint, GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GenerateTextureMipmapEXT, ( GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, GenerateMultiTexMipmapEXT, ( GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, FramebufferDrawBufferEXT, ( GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, FramebufferDrawBuffersEXT, ( GfGLuint, GfGLsizei, const GfGLenum * ) ) \
    GF_GL_FUNCTION( void, FramebufferReadBufferEXT, ( GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, GetFramebufferParameterivEXT, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, NamedCopyBufferSubDataEXT, ( GfGLuint, GfGLuint, GfGLintptr, GfGLintptr, GfGLsizeiptr ) ) \
    GF_GL_FUNCTION( void, NamedFramebufferTextureEXT, ( GfGLuint, GfGLenum, GfGLuint, GfGLint ) ) \
    GF_GL_FUNCTION( void, NamedFramebufferTextureLayerEXT, ( GfGLuint, GfGLenum, GfGLuint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, NamedFramebufferTextureFaceEXT, ( GfGLuint, GfGLenum, GfGLuint, GfGLint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, TextureRenderbufferEXT, ( GfGLuint, GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, MultiTexRenderbufferEXT, ( GfGLenum, GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexArrayVertexOffsetEXT, ( GfGLuint, GfGLuint, GfGLint, GfGLenum, GfGLsizei, GfGLintptr ) ) \
    GF_GL_FUNCTION( void, VertexArrayColorOffsetEXT, ( GfGLuint, GfGLuint, GfGLint, GfGLenum, GfGLsizei, GfGLintptr ) ) \
    GF_GL_FUNCTION( void, VertexArrayEdgeFlagOffsetEXT, ( GfGLuint, GfGLuint, GfGLsizei, GfGLintptr ) ) \
    GF_GL_FUNCTION( void, VertexArrayIndexOffsetEXT, ( GfGLuint, GfGLuint, GfGLenum, GfGLsizei, GfGLintptr ) ) \
    GF_GL_FUNCTION( void, VertexArrayNormalOffsetEXT, ( GfGLuint, GfGLuint, GfGLenum, GfGLsizei, GfGLintptr ) ) \
    GF_GL_FUNCTION( void, VertexArrayTexCoordOffsetEXT, ( GfGLuint, GfGLuint, GfGLint, GfGLenum, GfGLsizei, GfGLintptr ) ) \
    GF_GL_FUNCTION( void, VertexArrayMultiTexCoordOffsetEXT, ( GfGLuint, GfGLuint, GfGLenum, GfGLint, GfGLenum, GfGLsizei, GfGLintptr ) ) \
    GF_GL_FUNCTION( void, VertexArrayFogCoordOffsetEXT, ( GfGLuint, GfGLuint, GfGLenum, GfGLsizei, GfGLintptr ) ) \
    GF_GL_FUNCTION( void, VertexArraySecondaryColorOffsetEXT, ( GfGLuint, GfGLuint, GfGLint, GfGLenum, GfGLsizei, GfGLintptr ) ) \
    GF_GL_FUNCTION( void, VertexArrayVertexAttribOffsetEXT, ( GfGLuint, GfGLuint, GfGLuint, GfGLint, GfGLenum, GfGLboolean, GfGLsizei, GfGLintptr ) ) \
    GF_GL_FUNCTION( void, VertexArrayVertexAttribIOffsetEXT, ( GfGLuint, GfGLuint, GfGLuint, GfGLint, GfGLenum, GfGLsizei, GfGLintptr ) ) \
    GF_GL_FUNCTION( void, EnableVertexArrayEXT, ( GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, DisableVertexArrayEXT, ( GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, EnableVertexArrayAttribEXT, ( GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, DisableVertexArrayAttribEXT, ( GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetVertexArrayIntegervEXT, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetVertexArrayPointervEXT, ( GfGLuint, GfGLenum, GfGLvoid ** ) ) \
    GF_GL_FUNCTION( void, GetVertexArrayIntegeri_vEXT, ( GfGLuint, GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetVertexArrayPointeri_vEXT, ( GfGLuint, GfGLuint, GfGLenum, GfGLvoid ** ) ) \
    GF_GL_FUNCTION( void *, MapNamedBufferRangeEXT, ( GfGLuint, GfGLintptr, GfGLsizeiptr, GfGLbitfield ) ) \
    GF_GL_FUNCTION( void, FlushMappedNamedBufferRangeEXT, ( GfGLuint, GfGLintptr, GfGLsizeiptr ) ) \
    GF_GL_FUNCTION( void, NamedBufferStorageEXT, ( GfGLuint, GfGLsizeiptr, const void *, GfGLbitfield ) ) \
    GF_GL_FUNCTION( void, ClearNamedBufferDataEXT, ( GfGLuint, GfGLenum, GfGLenum, GfGLenum, const void * ) ) \
    GF_GL_FUNCTION( void, ClearNamedBufferSubDataEXT, ( GfGLuint, GfGLenum, GfGLenum, GfGLenum, GfGLsizeiptr, GfGLsizeiptr, const void * ) ) \
    GF_GL_FUNCTION( void, NamedFramebufferParameteriEXT, ( GfGLuint, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, GetNamedFramebufferParameterivEXT, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform1dEXT, ( GfGLuint, GfGLint, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, ProgramUniform2dEXT, ( GfGLuint, GfGLint, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, ProgramUniform3dEXT, ( GfGLuint, GfGLint, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, ProgramUniform4dEXT, ( GfGLuint, GfGLint, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, ProgramUniform1dvEXT, ( GfGLuint, GfGLint, GfGLsizei, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform2dvEXT, ( GfGLuint, GfGLint, GfGLsizei, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform3dvEXT, ( GfGLuint, GfGLint, GfGLsizei, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform4dvEXT, ( GfGLuint, GfGLint, GfGLsizei, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix2dvEXT, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix3dvEXT, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix4dvEXT, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix2x3dvEXT, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix2x4dvEXT, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix3x2dvEXT, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix3x4dvEXT, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix4x2dvEXT, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformMatrix4x3dvEXT, ( GfGLuint, GfGLint, GfGLsizei, GfGLboolean, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, TextureBufferRangeEXT, ( GfGLuint, GfGLenum, GfGLenum, GfGLuint, GfGLintptr, GfGLsizeiptr ) ) \
    GF_GL_FUNCTION( void, TextureStorage1DEXT, ( GfGLuint, GfGLenum, GfGLsizei, GfGLenum, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, TextureStorage2DEXT, ( GfGLuint, GfGLenum, GfGLsizei, GfGLenum, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, TextureStorage3DEXT, ( GfGLuint, GfGLenum, GfGLsizei, GfGLenum, GfGLsizei, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, TextureStorage2DMultisampleEXT, ( GfGLuint, GfGLenum, GfGLsizei, GfGLenum, GfGLsizei, GfGLsizei, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, TextureStorage3DMultisampleEXT, ( GfGLuint, GfGLenum, GfGLsizei, GfGLenum, GfGLsizei, GfGLsizei, GfGLsizei, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, VertexArrayBindVertexBufferEXT, ( GfGLuint, GfGLuint, GfGLuint, GfGLintptr, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, VertexArrayVertexAttribFormatEXT, ( GfGLuint, GfGLuint, GfGLint, GfGLenum, GfGLboolean, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexArrayVertexAttribIFormatEXT, ( GfGLuint, GfGLuint, GfGLint, GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexArrayVertexAttribLFormatEXT, ( GfGLuint, GfGLuint, GfGLint, GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexArrayVertexAttribBindingEXT, ( GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexArrayVertexBindingDivisorEXT, ( GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexArrayVertexAttribLOffsetEXT, ( GfGLuint, GfGLuint, GfGLuint, GfGLint, GfGLenum, GfGLsizei, GfGLintptr ) ) \
    GF_GL_FUNCTION( void, TexturePageCommitmentEXT, ( GfGLuint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLsizei, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, VertexArrayVertexAttribDivisorEXT, ( GfGLuint, GfGLuint, GfGLuint ) ) \
    \
    /* GL_EXT_draw_buffers2 */ \
    GF_GL_FUNCTION( void, ColorMaskIndexedEXT, ( GfGLuint, GfGLboolean, GfGLboolean, GfGLboolean, GfGLboolean ) ) \
    \
    /* GL_EXT_draw_instanced */ \
    GF_GL_FUNCTION( void, DrawArraysInstancedEXT, ( GfGLenum, GfGLint, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, DrawElementsInstancedEXT, ( GfGLenum, GfGLsizei, GfGLenum, const GfGLvoid *, GfGLsizei ) ) \
    \
    /* GL_EXT_draw_range_elements */ \
    GF_GL_FUNCTION( void, DrawRangeElementsEXT, ( GfGLenum, GfGLuint, GfGLuint, GfGLsizei, GfGLenum, const GfGLvoid * ) ) \
    \
    /* GL_EXT_fog_coord */ \
    GF_GL_FUNCTION( void, FogCoordfEXT, ( GfGLfloat ) ) \
    GF_GL_FUNCTION( void, FogCoordfvEXT, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, FogCoorddEXT, ( GfGLdouble ) ) \
    GF_GL_FUNCTION( void, FogCoorddvEXT, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, FogCoordPointerEXT, ( GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    \
    /* GL_EXT_framebuffer_blit */ \
    GF_GL_FUNCTION( void, BlitFramebufferEXT, ( GfGLint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLbitfield, GfGLenum ) ) \
    \
    /* GL_EXT_framebuffer_multisample */ \
    GF_GL_FUNCTION( void, RenderbufferStorageMultisampleEXT, ( GfGLenum, GfGLsizei, GfGLenum, GfGLsizei, GfGLsizei ) ) \
    \
    /* GL_EXT_framebuffer_multisample_blit_scaled */ \
    \
    /* GL_EXT_framebuffer_object */ \
    GF_GL_FUNCTION( GfGLboolean, IsRenderbufferEXT, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, BindRenderbufferEXT, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, DeleteRenderbuffersEXT, ( GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GenRenderbuffersEXT, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, RenderbufferStorageEXT, ( GfGLenum, GfGLenum, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, GetRenderbufferParameterivEXT, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsFramebufferEXT, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, BindFramebufferEXT, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, DeleteFramebuffersEXT, ( GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GenFramebuffersEXT, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( GfGLenum, CheckFramebufferStatusEXT, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, FramebufferTexture1DEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLuint, GfGLint ) ) \
    GF_GL_FUNCTION( void, FramebufferTexture2DEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLuint, GfGLint ) ) \
    GF_GL_FUNCTION( void, FramebufferTexture3DEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLuint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, FramebufferRenderbufferEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetFramebufferAttachmentParameterivEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GenerateMipmapEXT, ( GfGLenum ) ) \
    \
    /* GL_EXT_framebuffer_sRGB */ \
    \
    /* GL_EXT_geometry_shader4 */ \
    GF_GL_FUNCTION( void, ProgramParameteriEXT, ( GfGLuint, GfGLenum, GfGLint ) ) \
    \
    /* GL_EXT_gpu_program_parameters */ \
    GF_GL_FUNCTION( void, ProgramEnvParameters4fvEXT, ( GfGLenum, GfGLuint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramLocalParameters4fvEXT, ( GfGLenum, GfGLuint, GfGLsizei, const GfGLfloat * ) ) \
    \
    /* GL_EXT_gpu_shader4 */ \
    GF_GL_FUNCTION( void, GetUniformuivEXT, ( GfGLuint, GfGLint, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, BindFragDataLocationEXT, ( GfGLuint, GfGLuint, const GfGLchar * ) ) \
    GF_GL_FUNCTION( GfGLint, GetFragDataLocationEXT, ( GfGLuint, const GfGLchar * ) ) \
    GF_GL_FUNCTION( void, Uniform1uiEXT, ( GfGLint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, Uniform2uiEXT, ( GfGLint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, Uniform3uiEXT, ( GfGLint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, Uniform4uiEXT, ( GfGLint, GfGLuint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, Uniform1uivEXT, ( GfGLint, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, Uniform2uivEXT, ( GfGLint, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, Uniform3uivEXT, ( GfGLint, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, Uniform4uivEXT, ( GfGLint, GfGLsizei, const GfGLuint * ) ) \
    \
    /* GL_EXT_histogram */ \
    GF_GL_FUNCTION( void, GetHistogramEXT, ( GfGLenum, GfGLboolean, GfGLenum, GfGLenum, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetHistogramParameterfvEXT, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetHistogramParameterivEXT, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetMinmaxEXT, ( GfGLenum, GfGLboolean, GfGLenum, GfGLenum, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetMinmaxParameterfvEXT, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetMinmaxParameterivEXT, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, HistogramEXT, ( GfGLenum, GfGLsizei, GfGLenum, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, MinmaxEXT, ( GfGLenum, GfGLenum, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, ResetHistogramEXT, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, ResetMinmaxEXT, ( GfGLenum ) ) \
    \
    /* GL_EXT_index_array_formats */ \
    \
    /* GL_EXT_index_func */ \
    GF_GL_FUNCTION( void, IndexFuncEXT, ( GfGLenum, GfGLclampf ) ) \
    \
    /* GL_EXT_index_material */ \
    GF_GL_FUNCTION( void, IndexMaterialEXT, ( GfGLenum, GfGLenum ) ) \
    \
    /* GL_EXT_index_texture */ \
    \
    /* GL_EXT_light_texture */ \
    GF_GL_FUNCTION( void, ApplyTextureEXT, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, TextureLightEXT, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, TextureMaterialEXT, ( GfGLenum, GfGLenum ) ) \
    \
    /* GL_EXT_misc_attribute */ \
    \
    /* GL_EXT_multi_draw_arrays */ \
    GF_GL_FUNCTION( void, MultiDrawArraysEXT, ( GfGLenum, const GfGLint *, const GfGLsizei *, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, MultiDrawElementsEXT, ( GfGLenum, const GfGLsizei *, GfGLenum, const GfGLvoid *const*, GfGLsizei ) ) \
    \
    /* GL_EXT_multisample */ \
    GF_GL_FUNCTION( void, SampleMaskEXT, ( GfGLclampf, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, SamplePatternEXT, ( GfGLenum ) ) \
    \
    /* GL_EXT_packed_depth_stencil */ \
    \
    /* GL_EXT_packed_float */ \
    \
    /* GL_EXT_packed_pixels */ \
    \
    /* GL_EXT_paletted_texture */ \
    GF_GL_FUNCTION( void, ColorTableEXT, ( GfGLenum, GfGLenum, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetColorTableEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetColorTableParameterivEXT, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetColorTableParameterfvEXT, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    \
    /* GL_EXT_pixel_buffer_object */ \
    \
    /* GL_EXT_pixel_transform */ \
    GF_GL_FUNCTION( void, PixelTransformParameteriEXT, ( GfGLenum, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, PixelTransformParameterfEXT, ( GfGLenum, GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, PixelTransformParameterivEXT, ( GfGLenum, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, PixelTransformParameterfvEXT, ( GfGLenum, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetPixelTransformParameterivEXT, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetPixelTransformParameterfvEXT, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    \
    /* GL_EXT_pixel_transform_color_table */ \
    \
    /* GL_EXT_point_parameters */ \
    GF_GL_FUNCTION( void, PointParameterfEXT, ( GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, PointParameterfvEXT, ( GfGLenum, const GfGLfloat * ) ) \
    \
    /* GL_EXT_polygon_offset */ \
    GF_GL_FUNCTION( void, PolygonOffsetEXT, ( GfGLfloat, GfGLfloat ) ) \
    \
    /* GL_EXT_provoking_vertex */ \
    GF_GL_FUNCTION( void, ProvokingVertexEXT, ( GfGLenum ) ) \
    \
    /* GL_EXT_rescale_normal */ \
    \
    /* GL_EXT_secondary_color */ \
    GF_GL_FUNCTION( void, SecondaryColor3bEXT, ( GfGLbyte, GfGLbyte, GfGLbyte ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3bvEXT, ( const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3dEXT, ( GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3dvEXT, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3fEXT, ( GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3fvEXT, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3iEXT, ( GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3ivEXT, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3sEXT, ( GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3svEXT, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3ubEXT, ( GfGLubyte, GfGLubyte, GfGLubyte ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3ubvEXT, ( const GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3uiEXT, ( GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3uivEXT, ( const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3usEXT, ( GfGLushort, GfGLushort, GfGLushort ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3usvEXT, ( const GfGLushort * ) ) \
    GF_GL_FUNCTION( void, SecondaryColorPointerEXT, ( GfGLint, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    \
    /* GL_EXT_separate_shader_objects */ \
    GF_GL_FUNCTION( void, UseShaderProgramEXT, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, ActiveProgramEXT, ( GfGLuint ) ) \
    GF_GL_FUNCTION( GfGLuint, CreateShaderProgramEXT, ( GfGLenum, const GfGLchar * ) ) \
    \
    /* GL_EXT_separate_specular_color */ \
    \
    /* GL_EXT_shader_image_load_store */ \
    GF_GL_FUNCTION( void, BindImageTextureEXT, ( GfGLuint, GfGLuint, GfGLint, GfGLboolean, GfGLint, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, MemoryBarrierEXT, ( GfGLbitfield ) ) \
    \
    /* GL_EXT_shadow_funcs */ \
    \
    /* GL_EXT_shared_texture_palette */ \
    \
    /* GL_EXT_stencil_clear_tag */ \
    GF_GL_FUNCTION( void, StencilClearTagEXT, ( GfGLsizei, GfGLuint ) ) \
    \
    /* GL_EXT_stencil_two_side */ \
    GF_GL_FUNCTION( void, ActiveStencilFaceEXT, ( GfGLenum ) ) \
    \
    /* GL_EXT_stencil_wrap */ \
    \
    /* GL_EXT_subtexture */ \
    GF_GL_FUNCTION( void, TexSubImage1DEXT, ( GfGLenum, GfGLint, GfGLint, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, TexSubImage2DEXT, ( GfGLenum, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    \
    /* GL_EXT_texture */ \
    \
    /* GL_EXT_texture3D */ \
    GF_GL_FUNCTION( void, TexImage3DEXT, ( GfGLenum, GfGLint, GfGLenum, GfGLsizei, GfGLsizei, GfGLsizei, GfGLint, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, TexSubImage3DEXT, ( GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    \
    /* GL_EXT_texture_array */ \
    \
    /* GL_EXT_texture_buffer_object */ \
    GF_GL_FUNCTION( void, TexBufferEXT, ( GfGLenum, GfGLenum, GfGLuint ) ) \
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
    GF_GL_FUNCTION( void, TexParameterIivEXT, ( GfGLenum, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, TexParameterIuivEXT, ( GfGLenum, GfGLenum, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GetTexParameterIivEXT, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetTexParameterIuivEXT, ( GfGLenum, GfGLenum, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, ClearColorIiEXT, ( GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, ClearColorIuiEXT, ( GfGLuint, GfGLuint, GfGLuint, GfGLuint ) ) \
    \
    /* GL_EXT_texture_lod_bias */ \
    \
    /* GL_EXT_texture_mirror_clamp */ \
    \
    /* GL_EXT_texture_object */ \
    GF_GL_FUNCTION( GfGLboolean, AreTexturesResidentEXT, ( GfGLsizei, const GfGLuint *, GfGLboolean * ) ) \
    GF_GL_FUNCTION( void, BindTextureEXT, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, DeleteTexturesEXT, ( GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GenTexturesEXT, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsTextureEXT, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, PrioritizeTexturesEXT, ( GfGLsizei, const GfGLuint *, const GfGLclampf * ) ) \
    \
    /* GL_EXT_texture_perturb_normal */ \
    GF_GL_FUNCTION( void, TextureNormalEXT, ( GfGLenum ) ) \
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
    GF_GL_FUNCTION( void, GetQueryObjecti64vEXT, ( GfGLuint, GfGLenum, GfGLint64 * ) ) \
    GF_GL_FUNCTION( void, GetQueryObjectui64vEXT, ( GfGLuint, GfGLenum, GfGLuint64 * ) ) \
    \
    /* GL_EXT_transform_feedback */ \
    GF_GL_FUNCTION( void, BeginTransformFeedbackEXT, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, EndTransformFeedbackEXT, ( ) ) \
    GF_GL_FUNCTION( void, BindBufferRangeEXT, ( GfGLenum, GfGLuint, GfGLuint, GfGLintptr, GfGLsizeiptr ) ) \
    GF_GL_FUNCTION( void, BindBufferOffsetEXT, ( GfGLenum, GfGLuint, GfGLuint, GfGLintptr ) ) \
    GF_GL_FUNCTION( void, BindBufferBaseEXT, ( GfGLenum, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, TransformFeedbackVaryingsEXT, ( GfGLuint, GfGLsizei, const GfGLchar *const*, GfGLenum ) ) \
    GF_GL_FUNCTION( void, GetTransformFeedbackVaryingEXT, ( GfGLuint, GfGLuint, GfGLsizei, GfGLsizei *, GfGLsizei *, GfGLenum *, GfGLchar * ) ) \
    \
    /* GL_EXT_vertex_array */ \
    GF_GL_FUNCTION( void, ArrayElementEXT, ( GfGLint ) ) \
    GF_GL_FUNCTION( void, ColorPointerEXT, ( GfGLint, GfGLenum, GfGLsizei, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, DrawArraysEXT, ( GfGLenum, GfGLint, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, EdgeFlagPointerEXT, ( GfGLsizei, GfGLsizei, const GfGLboolean * ) ) \
    GF_GL_FUNCTION( void, GetPointervEXT, ( GfGLenum, GfGLvoid ** ) ) \
    GF_GL_FUNCTION( void, IndexPointerEXT, ( GfGLenum, GfGLsizei, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, NormalPointerEXT, ( GfGLenum, GfGLsizei, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, TexCoordPointerEXT, ( GfGLint, GfGLenum, GfGLsizei, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, VertexPointerEXT, ( GfGLint, GfGLenum, GfGLsizei, GfGLsizei, const GfGLvoid * ) ) \
    \
    /* GL_EXT_vertex_array_bgra */ \
    \
    /* GL_EXT_vertex_attrib_64bit */ \
    GF_GL_FUNCTION( void, VertexAttribL1dEXT, ( GfGLuint, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexAttribL2dEXT, ( GfGLuint, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexAttribL3dEXT, ( GfGLuint, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexAttribL4dEXT, ( GfGLuint, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexAttribL1dvEXT, ( GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttribL2dvEXT, ( GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttribL3dvEXT, ( GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttribL4dvEXT, ( GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttribLPointerEXT, ( GfGLuint, GfGLint, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribLdvEXT, ( GfGLuint, GfGLenum, GfGLdouble * ) ) \
    \
    /* GL_EXT_vertex_shader */ \
    GF_GL_FUNCTION( void, BeginVertexShaderEXT, ( ) ) \
    GF_GL_FUNCTION( void, EndVertexShaderEXT, ( ) ) \
    GF_GL_FUNCTION( void, BindVertexShaderEXT, ( GfGLuint ) ) \
    GF_GL_FUNCTION( GfGLuint, GenVertexShadersEXT, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, DeleteVertexShaderEXT, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, ShaderOp1EXT, ( GfGLenum, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, ShaderOp2EXT, ( GfGLenum, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, ShaderOp3EXT, ( GfGLenum, GfGLuint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, SwizzleEXT, ( GfGLuint, GfGLuint, GfGLenum, GfGLenum, GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, WriteMaskEXT, ( GfGLuint, GfGLuint, GfGLenum, GfGLenum, GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, InsertComponentEXT, ( GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, ExtractComponentEXT, ( GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( GfGLuint, GenSymbolsEXT, ( GfGLenum, GfGLenum, GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, SetInvariantEXT, ( GfGLuint, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, SetLocalConstantEXT, ( GfGLuint, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, VariantbvEXT, ( GfGLuint, const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, VariantsvEXT, ( GfGLuint, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VariantivEXT, ( GfGLuint, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, VariantfvEXT, ( GfGLuint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VariantdvEXT, ( GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VariantubvEXT, ( GfGLuint, const GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, VariantusvEXT, ( GfGLuint, const GfGLushort * ) ) \
    GF_GL_FUNCTION( void, VariantuivEXT, ( GfGLuint, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, VariantPointerEXT, ( GfGLuint, GfGLenum, GfGLuint, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, EnableVariantClientStateEXT, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, DisableVariantClientStateEXT, ( GfGLuint ) ) \
    GF_GL_FUNCTION( GfGLuint, BindLightParameterEXT, ( GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( GfGLuint, BindMaterialParameterEXT, ( GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( GfGLuint, BindTexGenParameterEXT, ( GfGLenum, GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( GfGLuint, BindTextureUnitParameterEXT, ( GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( GfGLuint, BindParameterEXT, ( GfGLenum ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsVariantEnabledEXT, ( GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, GetVariantBooleanvEXT, ( GfGLuint, GfGLenum, GfGLboolean * ) ) \
    GF_GL_FUNCTION( void, GetVariantIntegervEXT, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetVariantFloatvEXT, ( GfGLuint, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetVariantPointervEXT, ( GfGLuint, GfGLenum, GfGLvoid ** ) ) \
    GF_GL_FUNCTION( void, GetInvariantBooleanvEXT, ( GfGLuint, GfGLenum, GfGLboolean * ) ) \
    GF_GL_FUNCTION( void, GetInvariantIntegervEXT, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetInvariantFloatvEXT, ( GfGLuint, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetLocalConstantBooleanvEXT, ( GfGLuint, GfGLenum, GfGLboolean * ) ) \
    GF_GL_FUNCTION( void, GetLocalConstantIntegervEXT, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetLocalConstantFloatvEXT, ( GfGLuint, GfGLenum, GfGLfloat * ) ) \
    \
    /* GL_EXT_vertex_weighting */ \
    GF_GL_FUNCTION( void, VertexWeightfEXT, ( GfGLfloat ) ) \
    GF_GL_FUNCTION( void, VertexWeightfvEXT, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VertexWeightPointerEXT, ( GfGLint, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    \
    /* GL_EXT_x11_sync_object */ \
    GF_GL_FUNCTION( GfGLsync, ImportSyncEXT, ( GfGLenum, GfGLintptr, GfGLbitfield ) ) \
    \
    /* GL_GREMEDY_frame_terminator */ \
    GF_GL_FUNCTION( void, FrameTerminatorGREMEDY, ( ) ) \
    \
    /* GL_GREMEDY_string_marker */ \
    GF_GL_FUNCTION( void, StringMarkerGREMEDY, ( GfGLsizei, const GfGLvoid * ) ) \
    \
    /* GL_HP_convolution_border_modes */ \
    \
    /* GL_HP_image_transform */ \
    GF_GL_FUNCTION( void, ImageTransformParameteriHP, ( GfGLenum, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, ImageTransformParameterfHP, ( GfGLenum, GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ImageTransformParameterivHP, ( GfGLenum, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, ImageTransformParameterfvHP, ( GfGLenum, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetImageTransformParameterivHP, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetImageTransformParameterfvHP, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    \
    /* GL_HP_occlusion_test */ \
    \
    /* GL_HP_texture_lighting */ \
    \
    /* GL_IBM_cull_vertex */ \
    \
    /* GL_IBM_multimode_draw_arrays */ \
    GF_GL_FUNCTION( void, MultiModeDrawArraysIBM, ( const GfGLenum *, const GfGLint *, const GfGLsizei *, GfGLsizei, GfGLint ) ) \
    GF_GL_FUNCTION( void, MultiModeDrawElementsIBM, ( const GfGLenum *, const GfGLsizei *, GfGLenum, const GfGLvoid *const*, GfGLsizei, GfGLint ) ) \
    \
    /* GL_IBM_rasterpos_clip */ \
    \
    /* GL_IBM_static_data */ \
    GF_GL_FUNCTION( void, FlushStaticDataIBM, ( GfGLenum ) ) \
    \
    /* GL_IBM_texture_mirrored_repeat */ \
    \
    /* GL_IBM_vertex_array_lists */ \
    GF_GL_FUNCTION( void, ColorPointerListIBM, ( GfGLint, GfGLenum, GfGLint, const GfGLvoid **, GfGLint ) ) \
    GF_GL_FUNCTION( void, SecondaryColorPointerListIBM, ( GfGLint, GfGLenum, GfGLint, const GfGLvoid **, GfGLint ) ) \
    GF_GL_FUNCTION( void, EdgeFlagPointerListIBM, ( GfGLint, const GfGLboolean **, GfGLint ) ) \
    GF_GL_FUNCTION( void, FogCoordPointerListIBM, ( GfGLenum, GfGLint, const GfGLvoid **, GfGLint ) ) \
    GF_GL_FUNCTION( void, IndexPointerListIBM, ( GfGLenum, GfGLint, const GfGLvoid **, GfGLint ) ) \
    GF_GL_FUNCTION( void, NormalPointerListIBM, ( GfGLenum, GfGLint, const GfGLvoid **, GfGLint ) ) \
    GF_GL_FUNCTION( void, TexCoordPointerListIBM, ( GfGLint, GfGLenum, GfGLint, const GfGLvoid **, GfGLint ) ) \
    GF_GL_FUNCTION( void, VertexPointerListIBM, ( GfGLint, GfGLenum, GfGLint, const GfGLvoid **, GfGLint ) ) \
    \
    /* GL_INGR_blend_func_separate */ \
    GF_GL_FUNCTION( void, BlendFuncSeparateINGR, ( GfGLenum, GfGLenum, GfGLenum, GfGLenum ) ) \
    \
    /* GL_INGR_color_clamp */ \
    \
    /* GL_INGR_interlace_read */ \
    \
    /* GL_INTEL_map_texture */ \
    GF_GL_FUNCTION( void, SyncTextureINTEL, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, UnmapTexture2DINTEL, ( GfGLuint, GfGLint ) ) \
    GF_GL_FUNCTION( void *, MapTexture2DINTEL, ( GfGLuint, GfGLint, GfGLbitfield, const GfGLint *, const GfGLenum * ) ) \
    \
    /* GL_INTEL_parallel_arrays */ \
    GF_GL_FUNCTION( void, VertexPointervINTEL, ( GfGLint, GfGLenum, const GfGLvoid ** ) ) \
    GF_GL_FUNCTION( void, NormalPointervINTEL, ( GfGLenum, const GfGLvoid ** ) ) \
    GF_GL_FUNCTION( void, ColorPointervINTEL, ( GfGLint, GfGLenum, const GfGLvoid ** ) ) \
    GF_GL_FUNCTION( void, TexCoordPointervINTEL, ( GfGLint, GfGLenum, const GfGLvoid ** ) ) \
    \
    /* GL_MESAX_texture_stack */ \
    \
    /* GL_MESA_pack_invert */ \
    \
    /* GL_MESA_resize_buffers */ \
    GF_GL_FUNCTION( void, ResizeBuffersMESA, ( ) ) \
    \
    /* GL_MESA_window_pos */ \
    GF_GL_FUNCTION( void, WindowPos2dMESA, ( GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, WindowPos2dvMESA, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, WindowPos2fMESA, ( GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, WindowPos2fvMESA, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, WindowPos2iMESA, ( GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, WindowPos2ivMESA, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, WindowPos2sMESA, ( GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, WindowPos2svMESA, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, WindowPos3dMESA, ( GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, WindowPos3dvMESA, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, WindowPos3fMESA, ( GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, WindowPos3fvMESA, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, WindowPos3iMESA, ( GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, WindowPos3ivMESA, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, WindowPos3sMESA, ( GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, WindowPos3svMESA, ( const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, WindowPos4dMESA, ( GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, WindowPos4dvMESA, ( const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, WindowPos4fMESA, ( GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, WindowPos4fvMESA, ( const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, WindowPos4iMESA, ( GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, WindowPos4ivMESA, ( const GfGLint * ) ) \
    GF_GL_FUNCTION( void, WindowPos4sMESA, ( GfGLshort, GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, WindowPos4svMESA, ( const GfGLshort * ) ) \
    \
    /* GL_MESA_ycbcr_texture */ \
    \
    /* GL_NVX_conditional_render */ \
    GF_GL_FUNCTION( void, BeginConditionalRenderNVX, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, EndConditionalRenderNVX, ( ) ) \
    \
    /* GL_NV_bindless_multi_draw_indirect */ \
    GF_GL_FUNCTION( void, MultiDrawArraysIndirectBindlessNV, ( GfGLenum, const GfGLvoid *, GfGLsizei, GfGLsizei, GfGLint ) ) \
    GF_GL_FUNCTION( void, MultiDrawElementsIndirectBindlessNV, ( GfGLenum, GfGLenum, const GfGLvoid *, GfGLsizei, GfGLsizei, GfGLint ) ) \
    \
    /* GL_NV_bindless_texture */ \
    GF_GL_FUNCTION( GfGLuint64, GetTextureHandleNV, ( GfGLuint ) ) \
    GF_GL_FUNCTION( GfGLuint64, GetTextureSamplerHandleNV, ( GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, MakeTextureHandleResidentNV, ( GfGLuint64 ) ) \
    GF_GL_FUNCTION( void, MakeTextureHandleNonResidentNV, ( GfGLuint64 ) ) \
    GF_GL_FUNCTION( GfGLuint64, GetImageHandleNV, ( GfGLuint, GfGLint, GfGLboolean, GfGLint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, MakeImageHandleResidentNV, ( GfGLuint64, GfGLenum ) ) \
    GF_GL_FUNCTION( void, MakeImageHandleNonResidentNV, ( GfGLuint64 ) ) \
    GF_GL_FUNCTION( void, UniformHandleui64NV, ( GfGLint, GfGLuint64 ) ) \
    GF_GL_FUNCTION( void, UniformHandleui64vNV, ( GfGLint, GfGLsizei, const GfGLuint64 * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformHandleui64NV, ( GfGLuint, GfGLint, GfGLuint64 ) ) \
    GF_GL_FUNCTION( void, ProgramUniformHandleui64vNV, ( GfGLuint, GfGLint, GfGLsizei, const GfGLuint64 * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsTextureHandleResidentNV, ( GfGLuint64 ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsImageHandleResidentNV, ( GfGLuint64 ) ) \
    \
    /* GL_NV_blend_equation_advanced */ \
    GF_GL_FUNCTION( void, BlendParameteriNV, ( GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, BlendBarrierNV, ( ) ) \
    \
    /* GL_NV_blend_equation_advanced_coherent */ \
    \
    /* GL_NV_blend_square */ \
    \
    /* GL_NV_compute_program5 */ \
    \
    /* GL_NV_conditional_render */ \
    GF_GL_FUNCTION( void, BeginConditionalRenderNV, ( GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, EndConditionalRenderNV, ( ) ) \
    \
    /* GL_NV_copy_depth_to_color */ \
    \
    /* GL_NV_copy_image */ \
    GF_GL_FUNCTION( void, CopyImageSubDataNV, ( GfGLuint, GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLuint, GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLsizei ) ) \
    \
    /* GL_NV_deep_texture3D */ \
    \
    /* GL_NV_depth_buffer_float */ \
    GF_GL_FUNCTION( void, DepthRangedNV, ( GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, ClearDepthdNV, ( GfGLdouble ) ) \
    GF_GL_FUNCTION( void, DepthBoundsdNV, ( GfGLdouble, GfGLdouble ) ) \
    \
    /* GL_NV_depth_clamp */ \
    \
    /* GL_NV_draw_texture */ \
    GF_GL_FUNCTION( void, DrawTextureNV, ( GfGLuint, GfGLuint, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    \
    /* GL_NV_evaluators */ \
    GF_GL_FUNCTION( void, MapControlPointsNV, ( GfGLenum, GfGLuint, GfGLenum, GfGLsizei, GfGLsizei, GfGLint, GfGLint, GfGLboolean, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, MapParameterivNV, ( GfGLenum, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, MapParameterfvNV, ( GfGLenum, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetMapControlPointsNV, ( GfGLenum, GfGLuint, GfGLenum, GfGLsizei, GfGLsizei, GfGLboolean, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetMapParameterivNV, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetMapParameterfvNV, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetMapAttribParameterivNV, ( GfGLenum, GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetMapAttribParameterfvNV, ( GfGLenum, GfGLuint, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, EvalMapsNV, ( GfGLenum, GfGLenum ) ) \
    \
    /* GL_NV_explicit_multisample */ \
    GF_GL_FUNCTION( void, GetMultisamplefvNV, ( GfGLenum, GfGLuint, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, SampleMaskIndexedNV, ( GfGLuint, GfGLbitfield ) ) \
    GF_GL_FUNCTION( void, TexRenderbufferNV, ( GfGLenum, GfGLuint ) ) \
    \
    /* GL_NV_fence */ \
    GF_GL_FUNCTION( void, DeleteFencesNV, ( GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GenFencesNV, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsFenceNV, ( GfGLuint ) ) \
    GF_GL_FUNCTION( GfGLboolean, TestFenceNV, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetFenceivNV, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, FinishFenceNV, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, SetFenceNV, ( GfGLuint, GfGLenum ) ) \
    \
    /* GL_NV_float_buffer */ \
    \
    /* GL_NV_fog_distance */ \
    \
    /* GL_NV_fragment_program */ \
    GF_GL_FUNCTION( void, ProgramNamedParameter4fNV, ( GfGLuint, GfGLsizei, const GfGLubyte *, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ProgramNamedParameter4fvNV, ( GfGLuint, GfGLsizei, const GfGLubyte *, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramNamedParameter4dNV, ( GfGLuint, GfGLsizei, const GfGLubyte *, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, ProgramNamedParameter4dvNV, ( GfGLuint, GfGLsizei, const GfGLubyte *, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, GetProgramNamedParameterfvNV, ( GfGLuint, GfGLsizei, const GfGLubyte *, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetProgramNamedParameterdvNV, ( GfGLuint, GfGLsizei, const GfGLubyte *, GfGLdouble * ) ) \
    \
    /* GL_NV_fragment_program2 */ \
    \
    /* GL_NV_fragment_program4 */ \
    \
    /* GL_NV_fragment_program_option */ \
    \
    /* GL_NV_framebuffer_multisample_coverage */ \
    GF_GL_FUNCTION( void, RenderbufferStorageMultisampleCoverageNV, ( GfGLenum, GfGLsizei, GfGLsizei, GfGLenum, GfGLsizei, GfGLsizei ) ) \
    \
    /* GL_NV_geometry_program4 */ \
    GF_GL_FUNCTION( void, ProgramVertexLimitNV, ( GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, FramebufferTextureEXT, ( GfGLenum, GfGLenum, GfGLuint, GfGLint ) ) \
    GF_GL_FUNCTION( void, FramebufferTextureLayerEXT, ( GfGLenum, GfGLenum, GfGLuint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, FramebufferTextureFaceEXT, ( GfGLenum, GfGLenum, GfGLuint, GfGLint, GfGLenum ) ) \
    \
    /* GL_NV_geometry_shader4 */ \
    \
    /* GL_NV_gpu_program4 */ \
    GF_GL_FUNCTION( void, ProgramLocalParameterI4iNV, ( GfGLenum, GfGLuint, GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, ProgramLocalParameterI4ivNV, ( GfGLenum, GfGLuint, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, ProgramLocalParametersI4ivNV, ( GfGLenum, GfGLuint, GfGLsizei, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, ProgramLocalParameterI4uiNV, ( GfGLenum, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, ProgramLocalParameterI4uivNV, ( GfGLenum, GfGLuint, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, ProgramLocalParametersI4uivNV, ( GfGLenum, GfGLuint, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, ProgramEnvParameterI4iNV, ( GfGLenum, GfGLuint, GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, ProgramEnvParameterI4ivNV, ( GfGLenum, GfGLuint, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, ProgramEnvParametersI4ivNV, ( GfGLenum, GfGLuint, GfGLsizei, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, ProgramEnvParameterI4uiNV, ( GfGLenum, GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, ProgramEnvParameterI4uivNV, ( GfGLenum, GfGLuint, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, ProgramEnvParametersI4uivNV, ( GfGLenum, GfGLuint, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GetProgramLocalParameterIivNV, ( GfGLenum, GfGLuint, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetProgramLocalParameterIuivNV, ( GfGLenum, GfGLuint, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GetProgramEnvParameterIivNV, ( GfGLenum, GfGLuint, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetProgramEnvParameterIuivNV, ( GfGLenum, GfGLuint, GfGLuint * ) ) \
    \
    /* GL_NV_gpu_program5 */ \
    GF_GL_FUNCTION( void, ProgramSubroutineParametersuivNV, ( GfGLenum, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GetProgramSubroutineParameteruivNV, ( GfGLenum, GfGLuint, GfGLuint * ) ) \
    \
    /* GL_NV_gpu_program5_mem_extended */ \
    \
    /* GL_NV_gpu_shader5 */ \
    GF_GL_FUNCTION( void, Uniform1i64NV, ( GfGLint, GfGLint64EXT ) ) \
    GF_GL_FUNCTION( void, Uniform2i64NV, ( GfGLint, GfGLint64EXT, GfGLint64EXT ) ) \
    GF_GL_FUNCTION( void, Uniform3i64NV, ( GfGLint, GfGLint64EXT, GfGLint64EXT, GfGLint64EXT ) ) \
    GF_GL_FUNCTION( void, Uniform4i64NV, ( GfGLint, GfGLint64EXT, GfGLint64EXT, GfGLint64EXT, GfGLint64EXT ) ) \
    GF_GL_FUNCTION( void, Uniform1i64vNV, ( GfGLint, GfGLsizei, const GfGLint64EXT * ) ) \
    GF_GL_FUNCTION( void, Uniform2i64vNV, ( GfGLint, GfGLsizei, const GfGLint64EXT * ) ) \
    GF_GL_FUNCTION( void, Uniform3i64vNV, ( GfGLint, GfGLsizei, const GfGLint64EXT * ) ) \
    GF_GL_FUNCTION( void, Uniform4i64vNV, ( GfGLint, GfGLsizei, const GfGLint64EXT * ) ) \
    GF_GL_FUNCTION( void, Uniform1ui64NV, ( GfGLint, GfGLuint64EXT ) ) \
    GF_GL_FUNCTION( void, Uniform2ui64NV, ( GfGLint, GfGLuint64EXT, GfGLuint64EXT ) ) \
    GF_GL_FUNCTION( void, Uniform3ui64NV, ( GfGLint, GfGLuint64EXT, GfGLuint64EXT, GfGLuint64EXT ) ) \
    GF_GL_FUNCTION( void, Uniform4ui64NV, ( GfGLint, GfGLuint64EXT, GfGLuint64EXT, GfGLuint64EXT, GfGLuint64EXT ) ) \
    GF_GL_FUNCTION( void, Uniform1ui64vNV, ( GfGLint, GfGLsizei, const GfGLuint64EXT * ) ) \
    GF_GL_FUNCTION( void, Uniform2ui64vNV, ( GfGLint, GfGLsizei, const GfGLuint64EXT * ) ) \
    GF_GL_FUNCTION( void, Uniform3ui64vNV, ( GfGLint, GfGLsizei, const GfGLuint64EXT * ) ) \
    GF_GL_FUNCTION( void, Uniform4ui64vNV, ( GfGLint, GfGLsizei, const GfGLuint64EXT * ) ) \
    GF_GL_FUNCTION( void, GetUniformi64vNV, ( GfGLuint, GfGLint, GfGLint64EXT * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform1i64NV, ( GfGLuint, GfGLint, GfGLint64EXT ) ) \
    GF_GL_FUNCTION( void, ProgramUniform2i64NV, ( GfGLuint, GfGLint, GfGLint64EXT, GfGLint64EXT ) ) \
    GF_GL_FUNCTION( void, ProgramUniform3i64NV, ( GfGLuint, GfGLint, GfGLint64EXT, GfGLint64EXT, GfGLint64EXT ) ) \
    GF_GL_FUNCTION( void, ProgramUniform4i64NV, ( GfGLuint, GfGLint, GfGLint64EXT, GfGLint64EXT, GfGLint64EXT, GfGLint64EXT ) ) \
    GF_GL_FUNCTION( void, ProgramUniform1i64vNV, ( GfGLuint, GfGLint, GfGLsizei, const GfGLint64EXT * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform2i64vNV, ( GfGLuint, GfGLint, GfGLsizei, const GfGLint64EXT * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform3i64vNV, ( GfGLuint, GfGLint, GfGLsizei, const GfGLint64EXT * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform4i64vNV, ( GfGLuint, GfGLint, GfGLsizei, const GfGLint64EXT * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform1ui64NV, ( GfGLuint, GfGLint, GfGLuint64EXT ) ) \
    GF_GL_FUNCTION( void, ProgramUniform2ui64NV, ( GfGLuint, GfGLint, GfGLuint64EXT, GfGLuint64EXT ) ) \
    GF_GL_FUNCTION( void, ProgramUniform3ui64NV, ( GfGLuint, GfGLint, GfGLuint64EXT, GfGLuint64EXT, GfGLuint64EXT ) ) \
    GF_GL_FUNCTION( void, ProgramUniform4ui64NV, ( GfGLuint, GfGLint, GfGLuint64EXT, GfGLuint64EXT, GfGLuint64EXT, GfGLuint64EXT ) ) \
    GF_GL_FUNCTION( void, ProgramUniform1ui64vNV, ( GfGLuint, GfGLint, GfGLsizei, const GfGLuint64EXT * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform2ui64vNV, ( GfGLuint, GfGLint, GfGLsizei, const GfGLuint64EXT * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform3ui64vNV, ( GfGLuint, GfGLint, GfGLsizei, const GfGLuint64EXT * ) ) \
    GF_GL_FUNCTION( void, ProgramUniform4ui64vNV, ( GfGLuint, GfGLint, GfGLsizei, const GfGLuint64EXT * ) ) \
    \
    /* GL_NV_half_float */ \
    GF_GL_FUNCTION( void, Vertex2hNV, ( GfGLhalfNV, GfGLhalfNV ) ) \
    GF_GL_FUNCTION( void, Vertex2hvNV, ( const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, Vertex3hNV, ( GfGLhalfNV, GfGLhalfNV, GfGLhalfNV ) ) \
    GF_GL_FUNCTION( void, Vertex3hvNV, ( const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, Vertex4hNV, ( GfGLhalfNV, GfGLhalfNV, GfGLhalfNV, GfGLhalfNV ) ) \
    GF_GL_FUNCTION( void, Vertex4hvNV, ( const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, Normal3hNV, ( GfGLhalfNV, GfGLhalfNV, GfGLhalfNV ) ) \
    GF_GL_FUNCTION( void, Normal3hvNV, ( const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, Color3hNV, ( GfGLhalfNV, GfGLhalfNV, GfGLhalfNV ) ) \
    GF_GL_FUNCTION( void, Color3hvNV, ( const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, Color4hNV, ( GfGLhalfNV, GfGLhalfNV, GfGLhalfNV, GfGLhalfNV ) ) \
    GF_GL_FUNCTION( void, Color4hvNV, ( const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, TexCoord1hNV, ( GfGLhalfNV ) ) \
    GF_GL_FUNCTION( void, TexCoord1hvNV, ( const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, TexCoord2hNV, ( GfGLhalfNV, GfGLhalfNV ) ) \
    GF_GL_FUNCTION( void, TexCoord2hvNV, ( const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, TexCoord3hNV, ( GfGLhalfNV, GfGLhalfNV, GfGLhalfNV ) ) \
    GF_GL_FUNCTION( void, TexCoord3hvNV, ( const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, TexCoord4hNV, ( GfGLhalfNV, GfGLhalfNV, GfGLhalfNV, GfGLhalfNV ) ) \
    GF_GL_FUNCTION( void, TexCoord4hvNV, ( const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord1hNV, ( GfGLenum, GfGLhalfNV ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord1hvNV, ( GfGLenum, const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord2hNV, ( GfGLenum, GfGLhalfNV, GfGLhalfNV ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord2hvNV, ( GfGLenum, const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord3hNV, ( GfGLenum, GfGLhalfNV, GfGLhalfNV, GfGLhalfNV ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord3hvNV, ( GfGLenum, const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord4hNV, ( GfGLenum, GfGLhalfNV, GfGLhalfNV, GfGLhalfNV, GfGLhalfNV ) ) \
    GF_GL_FUNCTION( void, MultiTexCoord4hvNV, ( GfGLenum, const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, FogCoordhNV, ( GfGLhalfNV ) ) \
    GF_GL_FUNCTION( void, FogCoordhvNV, ( const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3hNV, ( GfGLhalfNV, GfGLhalfNV, GfGLhalfNV ) ) \
    GF_GL_FUNCTION( void, SecondaryColor3hvNV, ( const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, VertexWeighthNV, ( GfGLhalfNV ) ) \
    GF_GL_FUNCTION( void, VertexWeighthvNV, ( const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib1hNV, ( GfGLuint, GfGLhalfNV ) ) \
    GF_GL_FUNCTION( void, VertexAttrib1hvNV, ( GfGLuint, const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib2hNV, ( GfGLuint, GfGLhalfNV, GfGLhalfNV ) ) \
    GF_GL_FUNCTION( void, VertexAttrib2hvNV, ( GfGLuint, const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib3hNV, ( GfGLuint, GfGLhalfNV, GfGLhalfNV, GfGLhalfNV ) ) \
    GF_GL_FUNCTION( void, VertexAttrib3hvNV, ( GfGLuint, const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4hNV, ( GfGLuint, GfGLhalfNV, GfGLhalfNV, GfGLhalfNV, GfGLhalfNV ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4hvNV, ( GfGLuint, const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, VertexAttribs1hvNV, ( GfGLuint, GfGLsizei, const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, VertexAttribs2hvNV, ( GfGLuint, GfGLsizei, const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, VertexAttribs3hvNV, ( GfGLuint, GfGLsizei, const GfGLhalfNV * ) ) \
    GF_GL_FUNCTION( void, VertexAttribs4hvNV, ( GfGLuint, GfGLsizei, const GfGLhalfNV * ) ) \
    \
    /* GL_NV_light_max_exponent */ \
    \
    /* GL_NV_multisample_coverage */ \
    \
    /* GL_NV_multisample_filter_hint */ \
    \
    /* GL_NV_occlusion_query */ \
    GF_GL_FUNCTION( void, GenOcclusionQueriesNV, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, DeleteOcclusionQueriesNV, ( GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsOcclusionQueryNV, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, BeginOcclusionQueryNV, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, EndOcclusionQueryNV, ( ) ) \
    GF_GL_FUNCTION( void, GetOcclusionQueryivNV, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetOcclusionQueryuivNV, ( GfGLuint, GfGLenum, GfGLuint * ) ) \
    \
    /* GL_NV_packed_depth_stencil */ \
    \
    /* GL_NV_parameter_buffer_object */ \
    GF_GL_FUNCTION( void, ProgramBufferParametersfvNV, ( GfGLenum, GfGLuint, GfGLuint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramBufferParametersIivNV, ( GfGLenum, GfGLuint, GfGLuint, GfGLsizei, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, ProgramBufferParametersIuivNV, ( GfGLenum, GfGLuint, GfGLuint, GfGLsizei, const GfGLuint * ) ) \
    \
    /* GL_NV_parameter_buffer_object2 */ \
    \
    /* GL_NV_path_rendering */ \
    GF_GL_FUNCTION( GfGLuint, GenPathsNV, ( GfGLsizei ) ) \
    GF_GL_FUNCTION( void, DeletePathsNV, ( GfGLuint, GfGLsizei ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsPathNV, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, PathCommandsNV, ( GfGLuint, GfGLsizei, const GfGLubyte *, GfGLsizei, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, PathCoordsNV, ( GfGLuint, GfGLsizei, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, PathSubCommandsNV, ( GfGLuint, GfGLsizei, GfGLsizei, GfGLsizei, const GfGLubyte *, GfGLsizei, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, PathSubCoordsNV, ( GfGLuint, GfGLsizei, GfGLsizei, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, PathStringNV, ( GfGLuint, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, PathGlyphsNV, ( GfGLuint, GfGLenum, const GfGLvoid *, GfGLbitfield, GfGLsizei, GfGLenum, const GfGLvoid *, GfGLenum, GfGLuint, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, PathGlyphRangeNV, ( GfGLuint, GfGLenum, const GfGLvoid *, GfGLbitfield, GfGLuint, GfGLsizei, GfGLenum, GfGLuint, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, WeightPathsNV, ( GfGLuint, GfGLsizei, const GfGLuint *, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, CopyPathNV, ( GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, InterpolatePathsNV, ( GfGLuint, GfGLuint, GfGLuint, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, TransformPathNV, ( GfGLuint, GfGLuint, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, PathParameterivNV, ( GfGLuint, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, PathParameteriNV, ( GfGLuint, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, PathParameterfvNV, ( GfGLuint, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, PathParameterfNV, ( GfGLuint, GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, PathDashArrayNV, ( GfGLuint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, PathStencilFuncNV, ( GfGLenum, GfGLint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, PathStencilDepthOffsetNV, ( GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, StencilFillPathNV, ( GfGLuint, GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, StencilStrokePathNV, ( GfGLuint, GfGLint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, StencilFillPathInstancedNV, ( GfGLsizei, GfGLenum, const GfGLvoid *, GfGLuint, GfGLenum, GfGLuint, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, StencilStrokePathInstancedNV, ( GfGLsizei, GfGLenum, const GfGLvoid *, GfGLuint, GfGLint, GfGLuint, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, PathCoverDepthFuncNV, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, PathColorGenNV, ( GfGLenum, GfGLenum, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, PathTexGenNV, ( GfGLenum, GfGLenum, GfGLint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, PathFogGenNV, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, CoverFillPathNV, ( GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, CoverStrokePathNV, ( GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, CoverFillPathInstancedNV, ( GfGLsizei, GfGLenum, const GfGLvoid *, GfGLuint, GfGLenum, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, CoverStrokePathInstancedNV, ( GfGLsizei, GfGLenum, const GfGLvoid *, GfGLuint, GfGLenum, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetPathParameterivNV, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetPathParameterfvNV, ( GfGLuint, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetPathCommandsNV, ( GfGLuint, GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, GetPathCoordsNV, ( GfGLuint, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetPathDashArrayNV, ( GfGLuint, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetPathMetricsNV, ( GfGLbitfield, GfGLsizei, GfGLenum, const GfGLvoid *, GfGLuint, GfGLsizei, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetPathMetricRangeNV, ( GfGLbitfield, GfGLuint, GfGLsizei, GfGLsizei, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetPathSpacingNV, ( GfGLenum, GfGLsizei, GfGLenum, const GfGLvoid *, GfGLuint, GfGLfloat, GfGLfloat, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetPathColorGenivNV, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetPathColorGenfvNV, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetPathTexGenivNV, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetPathTexGenfvNV, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsPointInFillPathNV, ( GfGLuint, GfGLuint, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsPointInStrokePathNV, ( GfGLuint, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( GfGLfloat, GetPathLengthNV, ( GfGLuint, GfGLsizei, GfGLsizei ) ) \
    GF_GL_FUNCTION( GfGLboolean, PointAlongPathNV, ( GfGLuint, GfGLsizei, GfGLsizei, GfGLfloat, GfGLfloat *, GfGLfloat *, GfGLfloat *, GfGLfloat * ) ) \
    \
    /* GL_NV_pixel_data_range */ \
    GF_GL_FUNCTION( void, PixelDataRangeNV, ( GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, FlushPixelDataRangeNV, ( GfGLenum ) ) \
    \
    /* GL_NV_point_sprite */ \
    GF_GL_FUNCTION( void, PointParameteriNV, ( GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, PointParameterivNV, ( GfGLenum, const GfGLint * ) ) \
    \
    /* GL_NV_present_video */ \
    GF_GL_FUNCTION( void, PresentFrameKeyedNV, ( GfGLuint, GfGLuint64EXT, GfGLuint, GfGLuint, GfGLenum, GfGLenum, GfGLuint, GfGLuint, GfGLenum, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, PresentFrameDualFillNV, ( GfGLuint, GfGLuint64EXT, GfGLuint, GfGLuint, GfGLenum, GfGLenum, GfGLuint, GfGLenum, GfGLuint, GfGLenum, GfGLuint, GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetVideoivNV, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetVideouivNV, ( GfGLuint, GfGLenum, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GetVideoi64vNV, ( GfGLuint, GfGLenum, GfGLint64EXT * ) ) \
    GF_GL_FUNCTION( void, GetVideoui64vNV, ( GfGLuint, GfGLenum, GfGLuint64EXT * ) ) \
    \
    /* GL_NV_primitive_restart */ \
    GF_GL_FUNCTION( void, PrimitiveRestartNV, ( ) ) \
    GF_GL_FUNCTION( void, PrimitiveRestartIndexNV, ( GfGLuint ) ) \
    \
    /* GL_NV_register_combiners */ \
    GF_GL_FUNCTION( void, CombinerParameterfvNV, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, CombinerParameterfNV, ( GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, CombinerParameterivNV, ( GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, CombinerParameteriNV, ( GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, CombinerInputNV, ( GfGLenum, GfGLenum, GfGLenum, GfGLenum, GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, CombinerOutputNV, ( GfGLenum, GfGLenum, GfGLenum, GfGLenum, GfGLenum, GfGLenum, GfGLenum, GfGLboolean, GfGLboolean, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, FinalCombinerInputNV, ( GfGLenum, GfGLenum, GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, GetCombinerInputParameterfvNV, ( GfGLenum, GfGLenum, GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetCombinerInputParameterivNV, ( GfGLenum, GfGLenum, GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetCombinerOutputParameterfvNV, ( GfGLenum, GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetCombinerOutputParameterivNV, ( GfGLenum, GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetFinalCombinerInputParameterfvNV, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetFinalCombinerInputParameterivNV, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    \
    /* GL_NV_register_combiners2 */ \
    GF_GL_FUNCTION( void, CombinerStageParameterfvNV, ( GfGLenum, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetCombinerStageParameterfvNV, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    \
    /* GL_NV_shader_atomic_counters */ \
    \
    /* GL_NV_shader_atomic_float */ \
    \
    /* GL_NV_shader_buffer_load */ \
    GF_GL_FUNCTION( void, MakeBufferResidentNV, ( GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, MakeBufferNonResidentNV, ( GfGLenum ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsBufferResidentNV, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, MakeNamedBufferResidentNV, ( GfGLuint, GfGLenum ) ) \
    GF_GL_FUNCTION( void, MakeNamedBufferNonResidentNV, ( GfGLuint ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsNamedBufferResidentNV, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetBufferParameterui64vNV, ( GfGLenum, GfGLenum, GfGLuint64EXT * ) ) \
    GF_GL_FUNCTION( void, GetNamedBufferParameterui64vNV, ( GfGLuint, GfGLenum, GfGLuint64EXT * ) ) \
    GF_GL_FUNCTION( void, GetIntegerui64vNV, ( GfGLenum, GfGLuint64EXT * ) ) \
    GF_GL_FUNCTION( void, Uniformui64NV, ( GfGLint, GfGLuint64EXT ) ) \
    GF_GL_FUNCTION( void, Uniformui64vNV, ( GfGLint, GfGLsizei, const GfGLuint64EXT * ) ) \
    GF_GL_FUNCTION( void, GetUniformui64vNV, ( GfGLuint, GfGLint, GfGLuint64EXT * ) ) \
    GF_GL_FUNCTION( void, ProgramUniformui64NV, ( GfGLuint, GfGLint, GfGLuint64EXT ) ) \
    GF_GL_FUNCTION( void, ProgramUniformui64vNV, ( GfGLuint, GfGLint, GfGLsizei, const GfGLuint64EXT * ) ) \
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
    GF_GL_FUNCTION( void, TextureBarrierNV, ( ) ) \
    \
    /* GL_NV_texture_compression_vtc */ \
    \
    /* GL_NV_texture_env_combine4 */ \
    \
    /* GL_NV_texture_expand_normal */ \
    \
    /* GL_NV_texture_multisample */ \
    GF_GL_FUNCTION( void, TexImage2DMultisampleCoverageNV, ( GfGLenum, GfGLsizei, GfGLsizei, GfGLint, GfGLsizei, GfGLsizei, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, TexImage3DMultisampleCoverageNV, ( GfGLenum, GfGLsizei, GfGLsizei, GfGLint, GfGLsizei, GfGLsizei, GfGLsizei, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, TextureImage2DMultisampleNV, ( GfGLuint, GfGLenum, GfGLsizei, GfGLint, GfGLsizei, GfGLsizei, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, TextureImage3DMultisampleNV, ( GfGLuint, GfGLenum, GfGLsizei, GfGLint, GfGLsizei, GfGLsizei, GfGLsizei, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, TextureImage2DMultisampleCoverageNV, ( GfGLuint, GfGLenum, GfGLsizei, GfGLsizei, GfGLint, GfGLsizei, GfGLsizei, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, TextureImage3DMultisampleCoverageNV, ( GfGLuint, GfGLenum, GfGLsizei, GfGLsizei, GfGLint, GfGLsizei, GfGLsizei, GfGLsizei, GfGLboolean ) ) \
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
    GF_GL_FUNCTION( void, BeginTransformFeedbackNV, ( GfGLenum ) ) \
    GF_GL_FUNCTION( void, EndTransformFeedbackNV, ( ) ) \
    GF_GL_FUNCTION( void, TransformFeedbackAttribsNV, ( GfGLuint, const GfGLint *, GfGLenum ) ) \
    GF_GL_FUNCTION( void, BindBufferRangeNV, ( GfGLenum, GfGLuint, GfGLuint, GfGLintptr, GfGLsizeiptr ) ) \
    GF_GL_FUNCTION( void, BindBufferOffsetNV, ( GfGLenum, GfGLuint, GfGLuint, GfGLintptr ) ) \
    GF_GL_FUNCTION( void, BindBufferBaseNV, ( GfGLenum, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, TransformFeedbackVaryingsNV, ( GfGLuint, GfGLsizei, const GfGLint *, GfGLenum ) ) \
    GF_GL_FUNCTION( void, ActiveVaryingNV, ( GfGLuint, const GfGLchar * ) ) \
    GF_GL_FUNCTION( GfGLint, GetVaryingLocationNV, ( GfGLuint, const GfGLchar * ) ) \
    GF_GL_FUNCTION( void, GetActiveVaryingNV, ( GfGLuint, GfGLuint, GfGLsizei, GfGLsizei *, GfGLsizei *, GfGLenum *, GfGLchar * ) ) \
    GF_GL_FUNCTION( void, GetTransformFeedbackVaryingNV, ( GfGLuint, GfGLuint, GfGLint * ) ) \
    GF_GL_FUNCTION( void, TransformFeedbackStreamAttribsNV, ( GfGLsizei, const GfGLint *, GfGLsizei, const GfGLint *, GfGLenum ) ) \
    \
    /* GL_NV_transform_feedback2 */ \
    GF_GL_FUNCTION( void, BindTransformFeedbackNV, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, DeleteTransformFeedbacksNV, ( GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GenTransformFeedbacksNV, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsTransformFeedbackNV, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, PauseTransformFeedbackNV, ( ) ) \
    GF_GL_FUNCTION( void, ResumeTransformFeedbackNV, ( ) ) \
    GF_GL_FUNCTION( void, DrawTransformFeedbackNV, ( GfGLenum, GfGLuint ) ) \
    \
    /* GL_NV_vdpau_interop */ \
    GF_GL_FUNCTION( void, VDPAUInitNV, ( const GfGLvoid *, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, VDPAUFiniNV, ( ) ) \
    GF_GL_FUNCTION( GfGLvdpauSurfaceNV, VDPAURegisterVideoSurfaceNV, ( const GfGLvoid *, GfGLenum, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( GfGLvdpauSurfaceNV, VDPAURegisterOutputSurfaceNV, ( const GfGLvoid *, GfGLenum, GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, VDPAUIsSurfaceNV, ( GfGLvdpauSurfaceNV ) ) \
    GF_GL_FUNCTION( void, VDPAUUnregisterSurfaceNV, ( GfGLvdpauSurfaceNV ) ) \
    GF_GL_FUNCTION( void, VDPAUGetSurfaceivNV, ( GfGLvdpauSurfaceNV, GfGLenum, GfGLsizei, GfGLsizei *, GfGLint * ) ) \
    GF_GL_FUNCTION( void, VDPAUSurfaceAccessNV, ( GfGLvdpauSurfaceNV, GfGLenum ) ) \
    GF_GL_FUNCTION( void, VDPAUMapSurfacesNV, ( GfGLsizei, const GfGLvdpauSurfaceNV * ) ) \
    GF_GL_FUNCTION( void, VDPAUUnmapSurfacesNV, ( GfGLsizei, const GfGLvdpauSurfaceNV * ) ) \
    \
    /* GL_NV_vertex_array_range */ \
    GF_GL_FUNCTION( void, FlushVertexArrayRangeNV, ( ) ) \
    GF_GL_FUNCTION( void, VertexArrayRangeNV, ( GfGLsizei, const GfGLvoid * ) ) \
    \
    /* GL_NV_vertex_array_range2 */ \
    \
    /* GL_NV_vertex_attrib_integer_64bit */ \
    GF_GL_FUNCTION( void, VertexAttribL1i64NV, ( GfGLuint, GfGLint64EXT ) ) \
    GF_GL_FUNCTION( void, VertexAttribL2i64NV, ( GfGLuint, GfGLint64EXT, GfGLint64EXT ) ) \
    GF_GL_FUNCTION( void, VertexAttribL3i64NV, ( GfGLuint, GfGLint64EXT, GfGLint64EXT, GfGLint64EXT ) ) \
    GF_GL_FUNCTION( void, VertexAttribL4i64NV, ( GfGLuint, GfGLint64EXT, GfGLint64EXT, GfGLint64EXT, GfGLint64EXT ) ) \
    GF_GL_FUNCTION( void, VertexAttribL1i64vNV, ( GfGLuint, const GfGLint64EXT * ) ) \
    GF_GL_FUNCTION( void, VertexAttribL2i64vNV, ( GfGLuint, const GfGLint64EXT * ) ) \
    GF_GL_FUNCTION( void, VertexAttribL3i64vNV, ( GfGLuint, const GfGLint64EXT * ) ) \
    GF_GL_FUNCTION( void, VertexAttribL4i64vNV, ( GfGLuint, const GfGLint64EXT * ) ) \
    GF_GL_FUNCTION( void, VertexAttribL1ui64NV, ( GfGLuint, GfGLuint64EXT ) ) \
    GF_GL_FUNCTION( void, VertexAttribL2ui64NV, ( GfGLuint, GfGLuint64EXT, GfGLuint64EXT ) ) \
    GF_GL_FUNCTION( void, VertexAttribL3ui64NV, ( GfGLuint, GfGLuint64EXT, GfGLuint64EXT, GfGLuint64EXT ) ) \
    GF_GL_FUNCTION( void, VertexAttribL4ui64NV, ( GfGLuint, GfGLuint64EXT, GfGLuint64EXT, GfGLuint64EXT, GfGLuint64EXT ) ) \
    GF_GL_FUNCTION( void, VertexAttribL1ui64vNV, ( GfGLuint, const GfGLuint64EXT * ) ) \
    GF_GL_FUNCTION( void, VertexAttribL2ui64vNV, ( GfGLuint, const GfGLuint64EXT * ) ) \
    GF_GL_FUNCTION( void, VertexAttribL3ui64vNV, ( GfGLuint, const GfGLuint64EXT * ) ) \
    GF_GL_FUNCTION( void, VertexAttribL4ui64vNV, ( GfGLuint, const GfGLuint64EXT * ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribLi64vNV, ( GfGLuint, GfGLenum, GfGLint64EXT * ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribLui64vNV, ( GfGLuint, GfGLenum, GfGLuint64EXT * ) ) \
    GF_GL_FUNCTION( void, VertexAttribLFormatNV, ( GfGLuint, GfGLint, GfGLenum, GfGLsizei ) ) \
    \
    /* GL_NV_vertex_buffer_unified_memory */ \
    GF_GL_FUNCTION( void, BufferAddressRangeNV, ( GfGLenum, GfGLuint, GfGLuint64EXT, GfGLsizeiptr ) ) \
    GF_GL_FUNCTION( void, VertexFormatNV, ( GfGLint, GfGLenum, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, NormalFormatNV, ( GfGLenum, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, ColorFormatNV, ( GfGLint, GfGLenum, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, IndexFormatNV, ( GfGLenum, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, TexCoordFormatNV, ( GfGLint, GfGLenum, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, EdgeFlagFormatNV, ( GfGLsizei ) ) \
    GF_GL_FUNCTION( void, SecondaryColorFormatNV, ( GfGLint, GfGLenum, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, FogCoordFormatNV, ( GfGLenum, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, VertexAttribFormatNV, ( GfGLuint, GfGLint, GfGLenum, GfGLboolean, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, VertexAttribIFormatNV, ( GfGLuint, GfGLint, GfGLenum, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, GetIntegerui64i_vNV, ( GfGLenum, GfGLuint, GfGLuint64EXT * ) ) \
    \
    /* GL_NV_vertex_program */ \
    GF_GL_FUNCTION( GfGLboolean, AreProgramsResidentNV, ( GfGLsizei, const GfGLuint *, GfGLboolean * ) ) \
    GF_GL_FUNCTION( void, BindProgramNV, ( GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, DeleteProgramsNV, ( GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, ExecuteProgramNV, ( GfGLenum, GfGLuint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GenProgramsNV, ( GfGLsizei, GfGLuint * ) ) \
    GF_GL_FUNCTION( void, GetProgramParameterdvNV, ( GfGLenum, GfGLuint, GfGLenum, GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, GetProgramParameterfvNV, ( GfGLenum, GfGLuint, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetProgramivNV, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetProgramStringNV, ( GfGLuint, GfGLenum, GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, GetTrackMatrixivNV, ( GfGLenum, GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribdvNV, ( GfGLuint, GfGLenum, GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribfvNV, ( GfGLuint, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribivNV, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribPointervNV, ( GfGLuint, GfGLenum, GfGLvoid ** ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsProgramNV, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, LoadProgramNV, ( GfGLenum, GfGLuint, GfGLsizei, const GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, ProgramParameter4dNV, ( GfGLenum, GfGLuint, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, ProgramParameter4dvNV, ( GfGLenum, GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramParameter4fNV, ( GfGLenum, GfGLuint, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ProgramParameter4fvNV, ( GfGLenum, GfGLuint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ProgramParameters4dvNV, ( GfGLenum, GfGLuint, GfGLsizei, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, ProgramParameters4fvNV, ( GfGLenum, GfGLuint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, RequestResidentProgramsNV, ( GfGLsizei, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, TrackMatrixNV, ( GfGLenum, GfGLuint, GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, VertexAttribPointerNV, ( GfGLuint, GfGLint, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib1dNV, ( GfGLuint, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexAttrib1dvNV, ( GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib1fNV, ( GfGLuint, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, VertexAttrib1fvNV, ( GfGLuint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib1sNV, ( GfGLuint, GfGLshort ) ) \
    GF_GL_FUNCTION( void, VertexAttrib1svNV, ( GfGLuint, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib2dNV, ( GfGLuint, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexAttrib2dvNV, ( GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib2fNV, ( GfGLuint, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, VertexAttrib2fvNV, ( GfGLuint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib2sNV, ( GfGLuint, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, VertexAttrib2svNV, ( GfGLuint, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib3dNV, ( GfGLuint, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexAttrib3dvNV, ( GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib3fNV, ( GfGLuint, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, VertexAttrib3fvNV, ( GfGLuint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib3sNV, ( GfGLuint, GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, VertexAttrib3svNV, ( GfGLuint, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4dNV, ( GfGLuint, GfGLdouble, GfGLdouble, GfGLdouble, GfGLdouble ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4dvNV, ( GfGLuint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4fNV, ( GfGLuint, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4fvNV, ( GfGLuint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4sNV, ( GfGLuint, GfGLshort, GfGLshort, GfGLshort, GfGLshort ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4svNV, ( GfGLuint, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4ubNV, ( GfGLuint, GfGLubyte, GfGLubyte, GfGLubyte, GfGLubyte ) ) \
    GF_GL_FUNCTION( void, VertexAttrib4ubvNV, ( GfGLuint, const GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, VertexAttribs1dvNV, ( GfGLuint, GfGLsizei, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttribs1fvNV, ( GfGLuint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VertexAttribs1svNV, ( GfGLuint, GfGLsizei, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexAttribs2dvNV, ( GfGLuint, GfGLsizei, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttribs2fvNV, ( GfGLuint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VertexAttribs2svNV, ( GfGLuint, GfGLsizei, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexAttribs3dvNV, ( GfGLuint, GfGLsizei, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttribs3fvNV, ( GfGLuint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VertexAttribs3svNV, ( GfGLuint, GfGLsizei, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexAttribs4dvNV, ( GfGLuint, GfGLsizei, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, VertexAttribs4fvNV, ( GfGLuint, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VertexAttribs4svNV, ( GfGLuint, GfGLsizei, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexAttribs4ubvNV, ( GfGLuint, GfGLsizei, const GfGLubyte * ) ) \
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
    GF_GL_FUNCTION( void, VertexAttribI1iEXT, ( GfGLuint, GfGLint ) ) \
    GF_GL_FUNCTION( void, VertexAttribI2iEXT, ( GfGLuint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, VertexAttribI3iEXT, ( GfGLuint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, VertexAttribI4iEXT, ( GfGLuint, GfGLint, GfGLint, GfGLint, GfGLint ) ) \
    GF_GL_FUNCTION( void, VertexAttribI1uiEXT, ( GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexAttribI2uiEXT, ( GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexAttribI3uiEXT, ( GfGLuint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexAttribI4uiEXT, ( GfGLuint, GfGLuint, GfGLuint, GfGLuint, GfGLuint ) ) \
    GF_GL_FUNCTION( void, VertexAttribI1ivEXT, ( GfGLuint, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI2ivEXT, ( GfGLuint, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI3ivEXT, ( GfGLuint, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI4ivEXT, ( GfGLuint, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI1uivEXT, ( GfGLuint, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI2uivEXT, ( GfGLuint, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI3uivEXT, ( GfGLuint, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI4uivEXT, ( GfGLuint, const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI4bvEXT, ( GfGLuint, const GfGLbyte * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI4svEXT, ( GfGLuint, const GfGLshort * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI4ubvEXT, ( GfGLuint, const GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, VertexAttribI4usvEXT, ( GfGLuint, const GfGLushort * ) ) \
    GF_GL_FUNCTION( void, VertexAttribIPointerEXT, ( GfGLuint, GfGLint, GfGLenum, GfGLsizei, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribIivEXT, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetVertexAttribIuivEXT, ( GfGLuint, GfGLenum, GfGLuint * ) ) \
    \
    /* GL_NV_video_capture */ \
    GF_GL_FUNCTION( void, BeginVideoCaptureNV, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, BindVideoCaptureStreamBufferNV, ( GfGLuint, GfGLuint, GfGLenum, GfGLintptrARB ) ) \
    GF_GL_FUNCTION( void, BindVideoCaptureStreamTextureNV, ( GfGLuint, GfGLuint, GfGLenum, GfGLenum, GfGLuint ) ) \
    GF_GL_FUNCTION( void, EndVideoCaptureNV, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, GetVideoCaptureivNV, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetVideoCaptureStreamivNV, ( GfGLuint, GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetVideoCaptureStreamfvNV, ( GfGLuint, GfGLuint, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetVideoCaptureStreamdvNV, ( GfGLuint, GfGLuint, GfGLenum, GfGLdouble * ) ) \
    GF_GL_FUNCTION( GfGLenum, VideoCaptureNV, ( GfGLuint, GfGLuint *, GfGLuint64EXT * ) ) \
    GF_GL_FUNCTION( void, VideoCaptureStreamParameterivNV, ( GfGLuint, GfGLuint, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, VideoCaptureStreamParameterfvNV, ( GfGLuint, GfGLuint, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, VideoCaptureStreamParameterdvNV, ( GfGLuint, GfGLuint, GfGLenum, const GfGLdouble * ) ) \
    \
    /* GL_OML_interlace */ \
    \
    /* GL_OML_resample */ \
    \
    /* GL_OML_subsample */ \
    \
    /* GL_PGI_misc_hints */ \
    GF_GL_FUNCTION( void, HintPGI, ( GfGLenum, GfGLint ) ) \
    \
    /* GL_PGI_vertex_hints */ \
    \
    /* GL_REND_screen_coordinates */ \
    \
    /* GL_S3_s3tc */ \
    \
    /* GL_SGIS_detail_texture */ \
    GF_GL_FUNCTION( void, DetailTexFuncSGIS, ( GfGLenum, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetDetailTexFuncSGIS, ( GfGLenum, GfGLfloat * ) ) \
    \
    /* GL_SGIS_fog_function */ \
    GF_GL_FUNCTION( void, FogFuncSGIS, ( GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetFogFuncSGIS, ( GfGLfloat * ) ) \
    \
    /* GL_SGIS_generate_mipmap */ \
    \
    /* GL_SGIS_multisample */ \
    GF_GL_FUNCTION( void, SampleMaskSGIS, ( GfGLclampf, GfGLboolean ) ) \
    GF_GL_FUNCTION( void, SamplePatternSGIS, ( GfGLenum ) ) \
    \
    /* GL_SGIS_pixel_texture */ \
    GF_GL_FUNCTION( void, PixelTexGenParameteriSGIS, ( GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, PixelTexGenParameterivSGIS, ( GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, PixelTexGenParameterfSGIS, ( GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, PixelTexGenParameterfvSGIS, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetPixelTexGenParameterivSGIS, ( GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetPixelTexGenParameterfvSGIS, ( GfGLenum, GfGLfloat * ) ) \
    \
    /* GL_SGIS_point_line_texgen */ \
    \
    /* GL_SGIS_point_parameters */ \
    GF_GL_FUNCTION( void, PointParameterfSGIS, ( GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, PointParameterfvSGIS, ( GfGLenum, const GfGLfloat * ) ) \
    \
    /* GL_SGIS_sharpen_texture */ \
    GF_GL_FUNCTION( void, SharpenTexFuncSGIS, ( GfGLenum, GfGLsizei, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetSharpenTexFuncSGIS, ( GfGLenum, GfGLfloat * ) ) \
    \
    /* GL_SGIS_texture4D */ \
    GF_GL_FUNCTION( void, TexImage4DSGIS, ( GfGLenum, GfGLint, GfGLenum, GfGLsizei, GfGLsizei, GfGLsizei, GfGLsizei, GfGLint, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, TexSubImage4DSGIS, ( GfGLenum, GfGLint, GfGLint, GfGLint, GfGLint, GfGLint, GfGLsizei, GfGLsizei, GfGLsizei, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    \
    /* GL_SGIS_texture_border_clamp */ \
    \
    /* GL_SGIS_texture_color_mask */ \
    GF_GL_FUNCTION( void, TextureColorMaskSGIS, ( GfGLboolean, GfGLboolean, GfGLboolean, GfGLboolean ) ) \
    \
    /* GL_SGIS_texture_edge_clamp */ \
    \
    /* GL_SGIS_texture_filter4 */ \
    GF_GL_FUNCTION( void, GetTexFilterFuncSGIS, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, TexFilterFuncSGIS, ( GfGLenum, GfGLenum, GfGLsizei, const GfGLfloat * ) ) \
    \
    /* GL_SGIS_texture_lod */ \
    \
    /* GL_SGIS_texture_select */ \
    \
    /* GL_SGIX_async */ \
    GF_GL_FUNCTION( void, AsyncMarkerSGIX, ( GfGLuint ) ) \
    GF_GL_FUNCTION( GfGLint, FinishAsyncSGIX, ( GfGLuint * ) ) \
    GF_GL_FUNCTION( GfGLint, PollAsyncSGIX, ( GfGLuint * ) ) \
    GF_GL_FUNCTION( GfGLuint, GenAsyncMarkersSGIX, ( GfGLsizei ) ) \
    GF_GL_FUNCTION( void, DeleteAsyncMarkersSGIX, ( GfGLuint, GfGLsizei ) ) \
    GF_GL_FUNCTION( GfGLboolean, IsAsyncMarkerSGIX, ( GfGLuint ) ) \
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
    GF_GL_FUNCTION( void, FlushRasterSGIX, ( ) ) \
    \
    /* GL_SGIX_fog_offset */ \
    \
    /* GL_SGIX_fragment_lighting */ \
    GF_GL_FUNCTION( void, FragmentColorMaterialSGIX, ( GfGLenum, GfGLenum ) ) \
    GF_GL_FUNCTION( void, FragmentLightfSGIX, ( GfGLenum, GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, FragmentLightfvSGIX, ( GfGLenum, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, FragmentLightiSGIX, ( GfGLenum, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, FragmentLightivSGIX, ( GfGLenum, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, FragmentLightModelfSGIX, ( GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, FragmentLightModelfvSGIX, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, FragmentLightModeliSGIX, ( GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, FragmentLightModelivSGIX, ( GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, FragmentMaterialfSGIX, ( GfGLenum, GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, FragmentMaterialfvSGIX, ( GfGLenum, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, FragmentMaterialiSGIX, ( GfGLenum, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, FragmentMaterialivSGIX, ( GfGLenum, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetFragmentLightfvSGIX, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetFragmentLightivSGIX, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, GetFragmentMaterialfvSGIX, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetFragmentMaterialivSGIX, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, LightEnviSGIX, ( GfGLenum, GfGLint ) ) \
    \
    /* GL_SGIX_framezoom */ \
    GF_GL_FUNCTION( void, FrameZoomSGIX, ( GfGLint ) ) \
    \
    /* GL_SGIX_igloo_interface */ \
    GF_GL_FUNCTION( void, IglooInterfaceSGIX, ( GfGLenum, const GfGLvoid * ) ) \
    \
    /* GL_SGIX_instruments */ \
    GF_GL_FUNCTION( GfGLint, GetInstrumentsSGIX, ( ) ) \
    GF_GL_FUNCTION( void, InstrumentsBufferSGIX, ( GfGLsizei, GfGLint * ) ) \
    GF_GL_FUNCTION( GfGLint, PollInstrumentsSGIX, ( GfGLint * ) ) \
    GF_GL_FUNCTION( void, ReadInstrumentsSGIX, ( GfGLint ) ) \
    GF_GL_FUNCTION( void, StartInstrumentsSGIX, ( ) ) \
    GF_GL_FUNCTION( void, StopInstrumentsSGIX, ( GfGLint ) ) \
    \
    /* GL_SGIX_interlace */ \
    \
    /* GL_SGIX_ir_instrument1 */ \
    \
    /* GL_SGIX_list_priority */ \
    GF_GL_FUNCTION( void, GetListParameterfvSGIX, ( GfGLuint, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetListParameterivSGIX, ( GfGLuint, GfGLenum, GfGLint * ) ) \
    GF_GL_FUNCTION( void, ListParameterfSGIX, ( GfGLuint, GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ListParameterfvSGIX, ( GfGLuint, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ListParameteriSGIX, ( GfGLuint, GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, ListParameterivSGIX, ( GfGLuint, GfGLenum, const GfGLint * ) ) \
    \
    /* GL_SGIX_pixel_texture */ \
    GF_GL_FUNCTION( void, PixelTexGenSGIX, ( GfGLenum ) ) \
    \
    /* GL_SGIX_pixel_tiles */ \
    \
    /* GL_SGIX_polynomial_ffd */ \
    GF_GL_FUNCTION( void, DeformationMap3dSGIX, ( GfGLenum, GfGLdouble, GfGLdouble, GfGLint, GfGLint, GfGLdouble, GfGLdouble, GfGLint, GfGLint, GfGLdouble, GfGLdouble, GfGLint, GfGLint, const GfGLdouble * ) ) \
    GF_GL_FUNCTION( void, DeformationMap3fSGIX, ( GfGLenum, GfGLfloat, GfGLfloat, GfGLint, GfGLint, GfGLfloat, GfGLfloat, GfGLint, GfGLint, GfGLfloat, GfGLfloat, GfGLint, GfGLint, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, DeformSGIX, ( GfGLbitfield ) ) \
    GF_GL_FUNCTION( void, LoadIdentityDeformationMapSGIX, ( GfGLbitfield ) ) \
    \
    /* GL_SGIX_reference_plane */ \
    GF_GL_FUNCTION( void, ReferencePlaneSGIX, ( const GfGLdouble * ) ) \
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
    GF_GL_FUNCTION( void, SpriteParameterfSGIX, ( GfGLenum, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, SpriteParameterfvSGIX, ( GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, SpriteParameteriSGIX, ( GfGLenum, GfGLint ) ) \
    GF_GL_FUNCTION( void, SpriteParameterivSGIX, ( GfGLenum, const GfGLint * ) ) \
    \
    /* GL_SGIX_subsample */ \
    \
    /* GL_SGIX_tag_sample_buffer */ \
    GF_GL_FUNCTION( void, TagSampleBufferSGIX, ( ) ) \
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
    GF_GL_FUNCTION( void, ColorTableSGI, ( GfGLenum, GfGLenum, GfGLsizei, GfGLenum, GfGLenum, const GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, ColorTableParameterfvSGI, ( GfGLenum, GfGLenum, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ColorTableParameterivSGI, ( GfGLenum, GfGLenum, const GfGLint * ) ) \
    GF_GL_FUNCTION( void, CopyColorTableSGI, ( GfGLenum, GfGLenum, GfGLint, GfGLint, GfGLsizei ) ) \
    GF_GL_FUNCTION( void, GetColorTableSGI, ( GfGLenum, GfGLenum, GfGLenum, GfGLvoid * ) ) \
    GF_GL_FUNCTION( void, GetColorTableParameterfvSGI, ( GfGLenum, GfGLenum, GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, GetColorTableParameterivSGI, ( GfGLenum, GfGLenum, GfGLint * ) ) \
    \
    /* GL_SGI_texture_color_table */ \
    \
    /* GL_SUNX_constant_data */ \
    GF_GL_FUNCTION( void, FinishTextureSUNX, ( ) ) \
    \
    /* GL_SUN_convolution_border_modes */ \
    \
    /* GL_SUN_global_alpha */ \
    GF_GL_FUNCTION( void, GlobalAlphaFactorbSUN, ( GfGLbyte ) ) \
    GF_GL_FUNCTION( void, GlobalAlphaFactorsSUN, ( GfGLshort ) ) \
    GF_GL_FUNCTION( void, GlobalAlphaFactoriSUN, ( GfGLint ) ) \
    GF_GL_FUNCTION( void, GlobalAlphaFactorfSUN, ( GfGLfloat ) ) \
    GF_GL_FUNCTION( void, GlobalAlphaFactordSUN, ( GfGLdouble ) ) \
    GF_GL_FUNCTION( void, GlobalAlphaFactorubSUN, ( GfGLubyte ) ) \
    GF_GL_FUNCTION( void, GlobalAlphaFactorusSUN, ( GfGLushort ) ) \
    GF_GL_FUNCTION( void, GlobalAlphaFactoruiSUN, ( GfGLuint ) ) \
    \
    /* GL_SUN_mesh_array */ \
    GF_GL_FUNCTION( void, DrawMeshArraysSUN, ( GfGLenum, GfGLint, GfGLsizei, GfGLsizei ) ) \
    \
    /* GL_SUN_slice_accum */ \
    \
    /* GL_SUN_triangle_list */ \
    GF_GL_FUNCTION( void, ReplacementCodeuiSUN, ( GfGLuint ) ) \
    GF_GL_FUNCTION( void, ReplacementCodeusSUN, ( GfGLushort ) ) \
    GF_GL_FUNCTION( void, ReplacementCodeubSUN, ( GfGLubyte ) ) \
    GF_GL_FUNCTION( void, ReplacementCodeuivSUN, ( const GfGLuint * ) ) \
    GF_GL_FUNCTION( void, ReplacementCodeusvSUN, ( const GfGLushort * ) ) \
    GF_GL_FUNCTION( void, ReplacementCodeubvSUN, ( const GfGLubyte * ) ) \
    GF_GL_FUNCTION( void, ReplacementCodePointerSUN, ( GfGLenum, GfGLsizei, const GfGLvoid ** ) ) \
    \
    /* GL_SUN_vertex */ \
    GF_GL_FUNCTION( void, Color4ubVertex2fSUN, ( GfGLubyte, GfGLubyte, GfGLubyte, GfGLubyte, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Color4ubVertex2fvSUN, ( const GfGLubyte *, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Color4ubVertex3fSUN, ( GfGLubyte, GfGLubyte, GfGLubyte, GfGLubyte, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Color4ubVertex3fvSUN, ( const GfGLubyte *, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Color3fVertex3fSUN, ( GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Color3fVertex3fvSUN, ( const GfGLfloat *, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Normal3fVertex3fSUN, ( GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Normal3fVertex3fvSUN, ( const GfGLfloat *, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, Color4fNormal3fVertex3fSUN, ( GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, Color4fNormal3fVertex3fvSUN, ( const GfGLfloat *, const GfGLfloat *, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, TexCoord2fVertex3fSUN, ( GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, TexCoord2fVertex3fvSUN, ( const GfGLfloat *, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, TexCoord4fVertex4fSUN, ( GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, TexCoord4fVertex4fvSUN, ( const GfGLfloat *, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, TexCoord2fColor4ubVertex3fSUN, ( GfGLfloat, GfGLfloat, GfGLubyte, GfGLubyte, GfGLubyte, GfGLubyte, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, TexCoord2fColor4ubVertex3fvSUN, ( const GfGLfloat *, const GfGLubyte *, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, TexCoord2fColor3fVertex3fSUN, ( GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, TexCoord2fColor3fVertex3fvSUN, ( const GfGLfloat *, const GfGLfloat *, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, TexCoord2fNormal3fVertex3fSUN, ( GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, TexCoord2fNormal3fVertex3fvSUN, ( const GfGLfloat *, const GfGLfloat *, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, TexCoord2fColor4fNormal3fVertex3fSUN, ( GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, TexCoord2fColor4fNormal3fVertex3fvSUN, ( const GfGLfloat *, const GfGLfloat *, const GfGLfloat *, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, TexCoord4fColor4fNormal3fVertex4fSUN, ( GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, TexCoord4fColor4fNormal3fVertex4fvSUN, ( const GfGLfloat *, const GfGLfloat *, const GfGLfloat *, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ReplacementCodeuiVertex3fSUN, ( GfGLuint, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ReplacementCodeuiVertex3fvSUN, ( const GfGLuint *, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ReplacementCodeuiColor4ubVertex3fSUN, ( GfGLuint, GfGLubyte, GfGLubyte, GfGLubyte, GfGLubyte, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ReplacementCodeuiColor4ubVertex3fvSUN, ( const GfGLuint *, const GfGLubyte *, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ReplacementCodeuiColor3fVertex3fSUN, ( GfGLuint, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ReplacementCodeuiColor3fVertex3fvSUN, ( const GfGLuint *, const GfGLfloat *, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ReplacementCodeuiNormal3fVertex3fSUN, ( GfGLuint, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ReplacementCodeuiNormal3fVertex3fvSUN, ( const GfGLuint *, const GfGLfloat *, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ReplacementCodeuiColor4fNormal3fVertex3fSUN, ( GfGLuint, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ReplacementCodeuiColor4fNormal3fVertex3fvSUN, ( const GfGLuint *, const GfGLfloat *, const GfGLfloat *, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ReplacementCodeuiTexCoord2fVertex3fSUN, ( GfGLuint, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ReplacementCodeuiTexCoord2fVertex3fvSUN, ( const GfGLuint *, const GfGLfloat *, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN, ( GfGLuint, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN, ( const GfGLuint *, const GfGLfloat *, const GfGLfloat *, const GfGLfloat * ) ) \
    GF_GL_FUNCTION( void, ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN, ( GfGLuint, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat, GfGLfloat ) ) \
    GF_GL_FUNCTION( void, ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN, ( const GfGLuint *, const GfGLfloat *, const GfGLfloat *, const GfGLfloat *, const GfGLfloat * ) ) \
    \
    /* GL_WIN_phong_shading */ \
    \
    /* GL_WIN_specular_fog */ \

typedef void ( * GfGLDebugProc )(
    GfGLenum
    , GfGLenum
    , GfGLuint
    , GfGLenum
    , GfGLsizei
    , const GfGLchar *
    , const void *
);
typedef void ( * GfGLDebugProcARB )(
    GfGLenum
    , GfGLenum
    , GfGLuint
    , GfGLenum
    , GfGLsizei
    , const GfGLchar *
    , const void *
);
typedef void ( * GfGLDebugProcAMD )(
    GfGLuint
    , GfGLenum
    , GfGLenum
    , GfGLsizei
    , const GfGLchar *
    , void *
);

#if defined OS_LINUX    // OS
#   define GFSTDCALL
#elif defined OS_WINDOWS    // OS
#   define GFSTDCALL __stdcall
#else   // OS
#   error 未対応のOS
#endif  // OS

#define GF_GL_EXTERN_FUNCTION_POINTER( _returnType, _name, _args ) \
    GFEXPORT _returnType ( GFSTDCALL * gfGL##_name )_args; \

#define GF_GL_FUNCTION GF_GL_EXTERN_FUNCTION_POINTER
    GF_GL_FUNCTIONS
#undef  GF_GL_FUNCTION

#undef  GF_GL_EXTERN_FUNCTION_POINTER

#endif  // GF_GL_FUNCTIONS_H
