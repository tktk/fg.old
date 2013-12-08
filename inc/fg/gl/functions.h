#ifndef FG_GL_FUNCTIONS_H
#define FG_GL_FUNCTIONS_H

#include "fg/gl/context.h"
#include "fg/gl/types.h"
#include "fg/util/import.h"

#define FG_GL_FUNCTIONS \
    /* GL_VERSION_1_0 */ \
    FG_GL_FUNCTION_NUM( GetError, FgGLenum, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( Begin, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( End, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( EdgeFlag, FgGLContext *, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( EdgeFlagv, FgGLContext *, const FgGLboolean * ) \
    FG_GL_FUNCTION_VOID( Vertex2s, FgGLContext *, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( Vertex2i, FgGLContext *, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Vertex2f, FgGLContext *, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Vertex2d, FgGLContext *, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Vertex3s, FgGLContext *, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( Vertex3i, FgGLContext *, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Vertex3f, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Vertex3d, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Vertex4s, FgGLContext *, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( Vertex4i, FgGLContext *, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Vertex4f, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Vertex4d, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Vertex2sv, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( Vertex2iv, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Vertex2fv, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Vertex2dv, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Vertex3sv, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( Vertex3iv, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Vertex3fv, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Vertex3dv, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Vertex4sv, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( Vertex4iv, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Vertex4fv, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Vertex4dv, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( TexCoord1s, FgGLContext *, FgGLshort ) \
    FG_GL_FUNCTION_VOID( TexCoord1i, FgGLContext *, FgGLint ) \
    FG_GL_FUNCTION_VOID( TexCoord1f, FgGLContext *, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexCoord1d, FgGLContext *, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( TexCoord2s, FgGLContext *, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( TexCoord2i, FgGLContext *, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( TexCoord2f, FgGLContext *, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexCoord2d, FgGLContext *, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( TexCoord3s, FgGLContext *, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( TexCoord3i, FgGLContext *, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( TexCoord3f, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexCoord3d, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( TexCoord4s, FgGLContext *, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( TexCoord4i, FgGLContext *, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( TexCoord4f, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexCoord4d, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( TexCoord1sv, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( TexCoord1iv, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TexCoord1fv, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexCoord1dv, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( TexCoord2sv, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( TexCoord2iv, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TexCoord2fv, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexCoord2dv, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( TexCoord3sv, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( TexCoord3iv, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TexCoord3fv, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexCoord3dv, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( TexCoord4sv, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( TexCoord4iv, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TexCoord4fv, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexCoord4dv, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Normal3b, FgGLContext *, FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( Normal3s, FgGLContext *, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( Normal3i, FgGLContext *, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Normal3f, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Normal3d, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Normal3bv, FgGLContext *, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( Normal3sv, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( Normal3iv, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Normal3fv, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Normal3dv, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Color3b, FgGLContext *, FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( Color3s, FgGLContext *, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( Color3i, FgGLContext *, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Color3f, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Color3d, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Color3ub, FgGLContext *, FgGLubyte, FgGLubyte, FgGLubyte ) \
    FG_GL_FUNCTION_VOID( Color3us, FgGLContext *, FgGLushort, FgGLushort, FgGLushort ) \
    FG_GL_FUNCTION_VOID( Color3ui, FgGLContext *, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Color4b, FgGLContext *, FgGLbyte, FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( Color4s, FgGLContext *, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( Color4i, FgGLContext *, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Color4f, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Color4d, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Color4ub, FgGLContext *, FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte ) \
    FG_GL_FUNCTION_VOID( Color4us, FgGLContext *, FgGLushort, FgGLushort, FgGLushort, FgGLushort ) \
    FG_GL_FUNCTION_VOID( Color4ui, FgGLContext *, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Color3bv, FgGLContext *, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( Color3sv, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( Color3iv, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Color3fv, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Color3dv, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Color3ubv, FgGLContext *, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( Color3usv, FgGLContext *, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( Color3uiv, FgGLContext *, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( Color4bv, FgGLContext *, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( Color4sv, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( Color4iv, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Color4fv, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Color4dv, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Color4ubv, FgGLContext *, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( Color4usv, FgGLContext *, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( Color4uiv, FgGLContext *, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( Indexs, FgGLContext *, FgGLshort ) \
    FG_GL_FUNCTION_VOID( Indexi, FgGLContext *, FgGLint ) \
    FG_GL_FUNCTION_VOID( Indexf, FgGLContext *, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Indexd, FgGLContext *, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Indexsv, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( Indexiv, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Indexfv, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Indexdv, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Rects, FgGLContext *, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( Recti, FgGLContext *, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Rectf, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Rectd, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Rectsv, FgGLContext *, const FgGLshort *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( Rectiv, FgGLContext *, const FgGLint *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Rectfv, FgGLContext *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Rectdv, FgGLContext *, const FgGLdouble *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( DepthRange, FgGLContext *, FgGLclampd, FgGLclampd ) \
    FG_GL_FUNCTION_VOID( Viewport, FgGLContext *, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( MatrixMode, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( LoadMatrixf, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( LoadMatrixd, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultMatrixf, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultMatrixd, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( LoadIdentity, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( Rotatef, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Rotated, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Translatef, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Translated, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Scalef, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Scaled, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Frustum, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Ortho, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( PushMatrix, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( PopMatrix, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( Enable, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( Disable, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( TexGeni, FgGLContext *, FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( TexGenf, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexGend, FgGLContext *, FgGLenum, FgGLenum, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( TexGeniv, FgGLContext *, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TexGenfv, FgGLContext *, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexGendv, FgGLContext *, FgGLenum, FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ClipPlane, FgGLContext *, FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( RasterPos2s, FgGLContext *, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( RasterPos2i, FgGLContext *, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( RasterPos2f, FgGLContext *, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( RasterPos2d, FgGLContext *, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( RasterPos2sv, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( RasterPos2iv, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( RasterPos2fv, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( RasterPos2dv, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( RasterPos3s, FgGLContext *, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( RasterPos3i, FgGLContext *, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( RasterPos3f, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( RasterPos3d, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( RasterPos3sv, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( RasterPos3iv, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( RasterPos3fv, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( RasterPos3dv, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( RasterPos4s, FgGLContext *, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( RasterPos4i, FgGLContext *, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( RasterPos4f, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( RasterPos4d, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( RasterPos4sv, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( RasterPos4iv, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( RasterPos4fv, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( RasterPos4dv, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( FrontFace, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( Materiali, FgGLContext *, FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( Materialf, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Materialiv, FgGLContext *, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Materialfv, FgGLContext *, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Lighti, FgGLContext *, FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( Lightf, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Lightiv, FgGLContext *, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Lightfv, FgGLContext *, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( LightModeli, FgGLContext *, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( LightModelf, FgGLContext *, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( LightModeliv, FgGLContext *, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( LightModelfv, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ColorMaterial, FgGLContext *, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( ShadeModel, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( PointSize, FgGLContext *, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( LineWidth, FgGLContext *, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( LineStipple, FgGLContext *, FgGLint, FgGLushort ) \
    FG_GL_FUNCTION_VOID( CullFace, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( PolygonStipple, FgGLContext *, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( PolygonMode, FgGLContext *, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( PixelStorei, FgGLContext *, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( PixelStoref, FgGLContext *, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( PixelTransferi, FgGLContext *, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( PixelTransferf, FgGLContext *, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( PixelMapuiv, FgGLContext *, FgGLenum, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( PixelMapusv, FgGLContext *, FgGLenum, FgGLsizei, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( PixelMapfv, FgGLContext *, FgGLenum, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( DrawPixels, FgGLContext *, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( PixelZoom, FgGLContext *, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Bitmap, FgGLContext *, FgGLsizei, FgGLsizei, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( TexImage1D, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TexImage2D, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TexParameteri, FgGLContext *, FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( TexParameterf, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexParameteriv, FgGLContext *, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TexParameterfv, FgGLContext *, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexEnvi, FgGLContext *, FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( TexEnvf, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexEnviv, FgGLContext *, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TexEnvfv, FgGLContext *, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Fogi, FgGLContext *, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( Fogf, FgGLContext *, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Fogiv, FgGLContext *, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Fogfv, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Scissor, FgGLContext *, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( AlphaFunc, FgGLContext *, FgGLenum, FgGLclampf ) \
    FG_GL_FUNCTION_VOID( StencilFunc, FgGLContext *, FgGLenum, FgGLint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( StencilOp, FgGLContext *, FgGLenum, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( DepthFunc, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BlendFunc, FgGLContext *, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( LogicOp, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( DrawBuffer, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( IndexMask, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ColorMask, FgGLContext *, FgGLboolean, FgGLboolean, FgGLboolean, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( DepthMask, FgGLContext *, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( StencilMask, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Clear, FgGLContext *, FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( ClearColor, FgGLContext *, FgGLclampf, FgGLclampf, FgGLclampf, FgGLclampf ) \
    FG_GL_FUNCTION_VOID( ClearIndex, FgGLContext *, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ClearDepth, FgGLContext *, FgGLclampd ) \
    FG_GL_FUNCTION_VOID( ClearStencil, FgGLContext *, FgGLint ) \
    FG_GL_FUNCTION_VOID( ClearAccum, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Accum, FgGLContext *, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ReadPixels, FgGLContext *, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ReadBuffer, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( CopyPixels, FgGLContext *, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum ) \
    FG_GL_FUNCTION_VOID( Map1f, FgGLContext *, FgGLenum, FgGLfloat, FgGLfloat, FgGLint, FgGLint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Map1d, FgGLContext *, FgGLenum, FgGLdouble, FgGLdouble, FgGLint, FgGLint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Map2f, FgGLContext *, FgGLenum, FgGLfloat, FgGLfloat, FgGLint, FgGLint, FgGLfloat, FgGLfloat, FgGLint, FgGLint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Map2d, FgGLContext *, FgGLenum, FgGLdouble, FgGLdouble, FgGLint, FgGLint, FgGLdouble, FgGLdouble, FgGLint, FgGLint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( EvalCoord1f, FgGLContext *, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( EvalCoord1d, FgGLContext *, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( EvalCoord2f, FgGLContext *, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( EvalCoord2d, FgGLContext *, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( EvalCoord1fv, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( EvalCoord1dv, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( EvalCoord2fv, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( EvalCoord2dv, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MapGrid1f, FgGLContext *, FgGLint, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MapGrid1d, FgGLContext *, FgGLint, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MapGrid2f, FgGLContext *, FgGLint, FgGLfloat, FgGLfloat, FgGLint, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MapGrid2d, FgGLContext *, FgGLint, FgGLdouble, FgGLdouble, FgGLint, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( EvalMesh1, FgGLContext *, FgGLenum, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( EvalMesh2, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( EvalPoint1, FgGLContext *, FgGLint ) \
    FG_GL_FUNCTION_VOID( EvalPoint2, FgGLContext *, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( InitNames, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( PopName, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( PushName, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( LoadName, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_NUM( RenderMode, FgGLint, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( SelectBuffer, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( FeedbackBuffer, FgGLContext *, FgGLsizei, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( PassThrough, FgGLContext *, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( NewList, FgGLContext *, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( EndList, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( CallList, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( CallLists, FgGLContext *, FgGLsizei, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ListBase, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_NUM( GenLists, FgGLuint, FgGLContext *, FgGLsizei ) \
    FG_GL_FUNCTION_NUM( IsList, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteLists, FgGLContext *, FgGLuint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( Flush, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( Finish, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( Hint, FgGLContext *, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetBooleanv, FgGLContext *, FgGLenum, FgGLboolean * ) \
    FG_GL_FUNCTION_VOID( GetIntegerv, FgGLContext *, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetFloatv, FgGLContext *, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetDoublev, FgGLContext *, FgGLenum, FgGLdouble * ) \
    FG_GL_FUNCTION_NUM( IsEnabled, FgGLboolean, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetClipPlane, FgGLContext *, FgGLenum, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetLightiv, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetLightfv, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetMaterialiv, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetMaterialfv, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetTexEnviv, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetTexEnvfv, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetTexGeniv, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetTexGenfv, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetTexParameteriv, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetTexParameterfv, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetTexLevelParameteriv, FgGLContext *, FgGLenum, FgGLint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetTexLevelParameterfv, FgGLContext *, FgGLenum, FgGLint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetPixelMapuiv, FgGLContext *, FgGLenum, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetPixelMapusv, FgGLContext *, FgGLenum, FgGLushort * ) \
    FG_GL_FUNCTION_VOID( GetPixelMapfv, FgGLContext *, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetMapiv, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetMapfv, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetMapdv, FgGLContext *, FgGLenum, FgGLenum, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetTexImage, FgGLContext *, FgGLenum, FgGLint, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetPolygonStipple, FgGLContext *, FgGLubyte * ) \
    FG_GL_FUNCTION_PTR( GetString, const FgGLubyte *, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( PushAttrib, FgGLContext *, FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( PopAttrib, FgGLContext * ) \
\
    /* GL_VERSION_1_1 */ \
    FG_GL_FUNCTION_VOID( Indexub, FgGLContext *, FgGLubyte ) \
    FG_GL_FUNCTION_VOID( Indexubv, FgGLContext *, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( EdgeFlagPointer, FgGLContext *, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TexCoordPointer, FgGLContext *, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ColorPointer, FgGLContext *, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( IndexPointer, FgGLContext *, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( NormalPointer, FgGLContext *, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( VertexPointer, FgGLContext *, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( EnableClientState, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( DisableClientState, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( ArrayElement, FgGLContext *, FgGLint ) \
    FG_GL_FUNCTION_VOID( DrawArrays, FgGLContext *, FgGLenum, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( DrawElements, FgGLContext *, FgGLenum, FgGLsizei, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( InterleavedArrays, FgGLContext *, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( PolygonOffset, FgGLContext *, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( CopyTexImage1D, FgGLContext *, FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLint ) \
    FG_GL_FUNCTION_VOID( CopyTexImage2D, FgGLContext *, FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLint ) \
    FG_GL_FUNCTION_VOID( TexSubImage1D, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TexSubImage2D, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CopyTexSubImage1D, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( CopyTexSubImage2D, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( BindTexture, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteTextures, FgGLContext *, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenTextures, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( AreTexturesResident, FgGLboolean, FgGLContext *, FgGLsizei, const FgGLuint *, FgGLboolean * ) \
    FG_GL_FUNCTION_VOID( PrioritizeTextures, FgGLContext *, FgGLsizei, const FgGLuint *, const FgGLclampf * ) \
    FG_GL_FUNCTION_NUM( IsTexture, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetPointerv, FgGLContext *, FgGLenum, FgGLvoid ** ) \
    FG_GL_FUNCTION_VOID( PushClientAttrib, FgGLContext *, FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( PopClientAttrib, FgGLContext * ) \
\
    /* GL_VERSION_1_2 */ \
    FG_GL_FUNCTION_VOID( DrawRangeElements, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLsizei, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TexImage3D, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TexSubImage3D, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CopyTexSubImage3D, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
\
    /* GL_VERSION_1_3 */ \
    FG_GL_FUNCTION_VOID( ActiveTexture, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( SampleCoverage, FgGLContext *, FgGLfloat, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( CompressedTexImage3D, FgGLContext *, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTexImage2D, FgGLContext *, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTexImage1D, FgGLContext *, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTexSubImage3D, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTexSubImage2D, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTexSubImage1D, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetCompressedTexImage, FgGLContext *, FgGLenum, FgGLint, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ClientActiveTexture, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1d, FgGLContext *, FgGLenum, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1dv, FgGLContext *, FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1f, FgGLContext *, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1fv, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1i, FgGLContext *, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1iv, FgGLContext *, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1s, FgGLContext *, FgGLenum, FgGLshort ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1sv, FgGLContext *, FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2d, FgGLContext *, FgGLenum, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2dv, FgGLContext *, FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2f, FgGLContext *, FgGLenum, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2fv, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2i, FgGLContext *, FgGLenum, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2iv, FgGLContext *, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2s, FgGLContext *, FgGLenum, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2sv, FgGLContext *, FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3d, FgGLContext *, FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3dv, FgGLContext *, FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3f, FgGLContext *, FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3fv, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3i, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3iv, FgGLContext *, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3s, FgGLContext *, FgGLenum, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3sv, FgGLContext *, FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4d, FgGLContext *, FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4dv, FgGLContext *, FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4f, FgGLContext *, FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4fv, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4i, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4iv, FgGLContext *, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4s, FgGLContext *, FgGLenum, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4sv, FgGLContext *, FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( LoadTransposeMatrixf, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( LoadTransposeMatrixd, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultTransposeMatrixf, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultTransposeMatrixd, FgGLContext *, const FgGLdouble * ) \
\
    /* GL_VERSION_1_4 */ \
    FG_GL_FUNCTION_VOID( BlendFuncSeparate, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MultiDrawArrays, FgGLContext *, FgGLenum, const FgGLint *, const FgGLsizei *, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( MultiDrawElements, FgGLContext *, FgGLenum, const FgGLsizei *, FgGLenum, const FgGLvoid *const*, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( PointParameterf, FgGLContext *, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( PointParameterfv, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( PointParameteri, FgGLContext *, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( PointParameteriv, FgGLContext *, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( FogCoordf, FgGLContext *, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( FogCoordfv, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( FogCoordd, FgGLContext *, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( FogCoorddv, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( FogCoordPointer, FgGLContext *, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3b, FgGLContext *, FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3bv, FgGLContext *, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3d, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3dv, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3f, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3fv, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3i, FgGLContext *, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3iv, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3s, FgGLContext *, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3sv, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3ub, FgGLContext *, FgGLubyte, FgGLubyte, FgGLubyte ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3ubv, FgGLContext *, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3ui, FgGLContext *, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3uiv, FgGLContext *, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3us, FgGLContext *, FgGLushort, FgGLushort, FgGLushort ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3usv, FgGLContext *, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( SecondaryColorPointer, FgGLContext *, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( WindowPos2d, FgGLContext *, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( WindowPos2dv, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( WindowPos2f, FgGLContext *, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( WindowPos2fv, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( WindowPos2i, FgGLContext *, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( WindowPos2iv, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( WindowPos2s, FgGLContext *, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( WindowPos2sv, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( WindowPos3d, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( WindowPos3dv, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( WindowPos3f, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( WindowPos3fv, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( WindowPos3i, FgGLContext *, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( WindowPos3iv, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( WindowPos3s, FgGLContext *, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( WindowPos3sv, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( BlendColor, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( BlendEquation, FgGLContext *, FgGLenum ) \
\
    /* GL_VERSION_1_5 */ \
    FG_GL_FUNCTION_VOID( GenQueries, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( DeleteQueries, FgGLContext *, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsQuery, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( BeginQuery, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( EndQuery, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetQueryiv, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetQueryObjectiv, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetQueryObjectuiv, FgGLContext *, FgGLuint, FgGLenum, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( BindBuffer, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteBuffers, FgGLContext *, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenBuffers, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsBuffer, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( BufferData, FgGLContext *, FgGLenum, FgGLsizeiptr, const FgGLvoid *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BufferSubData, FgGLContext *, FgGLenum, FgGLintptr, FgGLsizeiptr, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetBufferSubData, FgGLContext *, FgGLenum, FgGLintptr, FgGLsizeiptr, FgGLvoid * ) \
    FG_GL_FUNCTION_PTR( MapBuffer, void *, FgGLContext *, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_NUM( UnmapBuffer, FgGLboolean, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetBufferParameteriv, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetBufferPointerv, FgGLContext *, FgGLenum, FgGLenum, FgGLvoid ** ) \
\
    /* GL_VERSION_2_0 */ \
    FG_GL_FUNCTION_VOID( BlendEquationSeparate, FgGLContext *, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( DrawBuffers, FgGLContext *, FgGLsizei, const FgGLenum * ) \
    FG_GL_FUNCTION_VOID( StencilOpSeparate, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( StencilFuncSeparate, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( StencilMaskSeparate, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( AttachShader, FgGLContext *, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( BindAttribLocation, FgGLContext *, FgGLuint, FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( CompileShader, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_NUM( CreateProgram, FgGLuint, FgGLContext * ) \
    FG_GL_FUNCTION_NUM( CreateShader, FgGLuint, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( DeleteProgram, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteShader, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DetachShader, FgGLContext *, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DisableVertexAttribArray, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( EnableVertexAttribArray, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetActiveAttrib, FgGLContext *, FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLint *, FgGLenum *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetActiveUniform, FgGLContext *, FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLint *, FgGLenum *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetAttachedShaders, FgGLContext *, FgGLuint, FgGLsizei, FgGLsizei *, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( GetAttribLocation, FgGLint, FgGLContext *, FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetProgramiv, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetProgramInfoLog, FgGLContext *, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetShaderiv, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetShaderInfoLog, FgGLContext *, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetShaderSource, FgGLContext *, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_NUM( GetUniformLocation, FgGLint, FgGLContext *, FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetUniformfv, FgGLContext *, FgGLuint, FgGLint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetUniformiv, FgGLContext *, FgGLuint, FgGLint, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribdv, FgGLContext *, FgGLuint, FgGLenum, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribfv, FgGLContext *, FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribiv, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribPointerv, FgGLContext *, FgGLuint, FgGLenum, FgGLvoid ** ) \
    FG_GL_FUNCTION_NUM( IsProgram, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_NUM( IsShader, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( LinkProgram, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ShaderSource, FgGLContext *, FgGLuint, FgGLsizei, const FgGLchar *const*, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( UseProgram, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Uniform1f, FgGLContext *, FgGLint, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Uniform2f, FgGLContext *, FgGLint, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Uniform3f, FgGLContext *, FgGLint, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Uniform4f, FgGLContext *, FgGLint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Uniform1i, FgGLContext *, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Uniform2i, FgGLContext *, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Uniform3i, FgGLContext *, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Uniform4i, FgGLContext *, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Uniform1fv, FgGLContext *, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Uniform2fv, FgGLContext *, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Uniform3fv, FgGLContext *, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Uniform4fv, FgGLContext *, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Uniform1iv, FgGLContext *, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Uniform2iv, FgGLContext *, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Uniform3iv, FgGLContext *, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Uniform4iv, FgGLContext *, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix2fv, FgGLContext *, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix3fv, FgGLContext *, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix4fv, FgGLContext *, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ValidateProgram, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1d, FgGLContext *, FgGLuint, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1dv, FgGLContext *, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1f, FgGLContext *, FgGLuint, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1fv, FgGLContext *, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1s, FgGLContext *, FgGLuint, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1sv, FgGLContext *, FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2d, FgGLContext *, FgGLuint, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2dv, FgGLContext *, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2f, FgGLContext *, FgGLuint, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2fv, FgGLContext *, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2s, FgGLContext *, FgGLuint, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2sv, FgGLContext *, FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3d, FgGLContext *, FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3dv, FgGLContext *, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3f, FgGLContext *, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3fv, FgGLContext *, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3s, FgGLContext *, FgGLuint, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3sv, FgGLContext *, FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4Nbv, FgGLContext *, FgGLuint, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4Niv, FgGLContext *, FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4Nsv, FgGLContext *, FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4Nub, FgGLContext *, FgGLuint, FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4Nubv, FgGLContext *, FgGLuint, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4Nuiv, FgGLContext *, FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4Nusv, FgGLContext *, FgGLuint, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4bv, FgGLContext *, FgGLuint, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4d, FgGLContext *, FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4dv, FgGLContext *, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4f, FgGLContext *, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4fv, FgGLContext *, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4iv, FgGLContext *, FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4s, FgGLContext *, FgGLuint, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4sv, FgGLContext *, FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4ubv, FgGLContext *, FgGLuint, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4uiv, FgGLContext *, FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4usv, FgGLContext *, FgGLuint, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( VertexAttribPointer, FgGLContext *, FgGLuint, FgGLint, FgGLenum, FgGLboolean, FgGLsizei, const FgGLvoid * ) \
\
    /* GL_VERSION_2_1 */ \
    FG_GL_FUNCTION_VOID( UniformMatrix2x3fv, FgGLContext *, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix3x2fv, FgGLContext *, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix2x4fv, FgGLContext *, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix4x2fv, FgGLContext *, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix3x4fv, FgGLContext *, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix4x3fv, FgGLContext *, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
\
    /* GL_VERSION_3_0 */ \
    FG_GL_FUNCTION_VOID( ColorMaski, FgGLContext *, FgGLuint, FgGLboolean, FgGLboolean, FgGLboolean, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( GetBooleani_v, FgGLContext *, FgGLenum, FgGLuint, FgGLboolean * ) \
    FG_GL_FUNCTION_VOID( GetIntegeri_v, FgGLContext *, FgGLenum, FgGLuint, FgGLint * ) \
    FG_GL_FUNCTION_VOID( Enablei, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Disablei, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_NUM( IsEnabledi, FgGLboolean, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( BeginTransformFeedback, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( EndTransformFeedback, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( BindBufferRange, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLintptr, FgGLsizeiptr ) \
    FG_GL_FUNCTION_VOID( BindBufferBase, FgGLContext *, FgGLenum, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( TransformFeedbackVaryings, FgGLContext *, FgGLuint, FgGLsizei, const FgGLchar *const*, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetTransformFeedbackVarying, FgGLContext *, FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLsizei *, FgGLenum *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( ClampColor, FgGLContext *, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BeginConditionalRender, FgGLContext *, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( EndConditionalRender, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( VertexAttribIPointer, FgGLContext *, FgGLuint, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribIiv, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribIuiv, FgGLContext *, FgGLuint, FgGLenum, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI1i, FgGLContext *, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2i, FgGLContext *, FgGLuint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3i, FgGLContext *, FgGLuint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4i, FgGLContext *, FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI1ui, FgGLContext *, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2ui, FgGLContext *, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3ui, FgGLContext *, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4ui, FgGLContext *, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI1iv, FgGLContext *, FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2iv, FgGLContext *, FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3iv, FgGLContext *, FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4iv, FgGLContext *, FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI1uiv, FgGLContext *, FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2uiv, FgGLContext *, FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3uiv, FgGLContext *, FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4uiv, FgGLContext *, FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4bv, FgGLContext *, FgGLuint, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4sv, FgGLContext *, FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4ubv, FgGLContext *, FgGLuint, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4usv, FgGLContext *, FgGLuint, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( GetUniformuiv, FgGLContext *, FgGLuint, FgGLint, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( BindFragDataLocation, FgGLContext *, FgGLuint, FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_NUM( GetFragDataLocation, FgGLint, FgGLContext *, FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( Uniform1ui, FgGLContext *, FgGLint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Uniform2ui, FgGLContext *, FgGLint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Uniform3ui, FgGLContext *, FgGLint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Uniform4ui, FgGLContext *, FgGLint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Uniform1uiv, FgGLContext *, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( Uniform2uiv, FgGLContext *, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( Uniform3uiv, FgGLContext *, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( Uniform4uiv, FgGLContext *, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( TexParameterIiv, FgGLContext *, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TexParameterIuiv, FgGLContext *, FgGLenum, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetTexParameterIiv, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetTexParameterIuiv, FgGLContext *, FgGLenum, FgGLenum, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ClearBufferiv, FgGLContext *, FgGLenum, FgGLint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ClearBufferuiv, FgGLContext *, FgGLenum, FgGLint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ClearBufferfv, FgGLContext *, FgGLenum, FgGLint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ClearBufferfi, FgGLContext *, FgGLenum, FgGLint, FgGLfloat, FgGLint ) \
    FG_GL_FUNCTION_PTR( GetStringi, const FgGLubyte *, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_NUM( IsRenderbuffer, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( BindRenderbuffer, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteRenderbuffers, FgGLContext *, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenRenderbuffers, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( RenderbufferStorage, FgGLContext *, FgGLenum, FgGLenum, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetRenderbufferParameteriv, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_NUM( IsFramebuffer, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( BindFramebuffer, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteFramebuffers, FgGLContext *, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenFramebuffers, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( CheckFramebufferStatus, FgGLenum, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( FramebufferTexture1D, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferTexture2D, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferTexture3D, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferRenderbuffer, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetFramebufferAttachmentParameteriv, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GenerateMipmap, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BlitFramebuffer, FgGLContext *, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLbitfield, FgGLenum ) \
    FG_GL_FUNCTION_VOID( RenderbufferStorageMultisample, FgGLContext *, FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( FramebufferTextureLayer, FgGLContext *, FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_PTR( MapBufferRange, void *, FgGLContext *, FgGLenum, FgGLintptr, FgGLsizeiptr, FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( FlushMappedBufferRange, FgGLContext *, FgGLenum, FgGLintptr, FgGLsizeiptr ) \
    FG_GL_FUNCTION_VOID( BindVertexArray, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteVertexArrays, FgGLContext *, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenVertexArrays, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsVertexArray, FgGLboolean, FgGLContext *, FgGLuint ) \
\
    /* GL_VERSION_3_1 */ \
    FG_GL_FUNCTION_VOID( DrawArraysInstanced, FgGLContext *, FgGLenum, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( DrawElementsInstanced, FgGLContext *, FgGLenum, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( TexBuffer, FgGLContext *, FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( PrimitiveRestartIndex, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( CopyBufferSubData, FgGLContext *, FgGLenum, FgGLenum, FgGLintptr, FgGLintptr, FgGLsizeiptr ) \
    FG_GL_FUNCTION_VOID( GetUniformIndices, FgGLContext *, FgGLuint, FgGLsizei, const FgGLchar *const*, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetActiveUniformsiv, FgGLContext *, FgGLuint, FgGLsizei, const FgGLuint *, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetActiveUniformName, FgGLContext *, FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_NUM( GetUniformBlockIndex, FgGLuint, FgGLContext *, FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetActiveUniformBlockiv, FgGLContext *, FgGLuint, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetActiveUniformBlockName, FgGLContext *, FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( UniformBlockBinding, FgGLContext *, FgGLuint, FgGLuint, FgGLuint ) \
\
    /* GL_VERSION_3_2 */ \
    FG_GL_FUNCTION_VOID( DrawElementsBaseVertex, FgGLContext *, FgGLenum, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLint ) \
    FG_GL_FUNCTION_VOID( DrawRangeElementsBaseVertex, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLint ) \
    FG_GL_FUNCTION_VOID( DrawElementsInstancedBaseVertex, FgGLContext *, FgGLenum, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLsizei, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiDrawElementsBaseVertex, FgGLContext *, FgGLenum, const FgGLsizei *, FgGLenum, const FgGLvoid *const*, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProvokingVertex, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_PTR( FenceSync, FgGLsync, FgGLContext *, FgGLenum, FgGLbitfield ) \
    FG_GL_FUNCTION_NUM( IsSync, FgGLboolean, FgGLContext *, FgGLsync ) \
    FG_GL_FUNCTION_VOID( DeleteSync, FgGLContext *, FgGLsync ) \
    FG_GL_FUNCTION_NUM( ClientWaitSync, FgGLenum, FgGLContext *, FgGLsync, FgGLbitfield, FgGLuint64 ) \
    FG_GL_FUNCTION_VOID( WaitSync, FgGLContext *, FgGLsync, FgGLbitfield, FgGLuint64 ) \
    FG_GL_FUNCTION_VOID( GetInteger64v, FgGLContext *, FgGLenum, FgGLint64 * ) \
    FG_GL_FUNCTION_VOID( GetSynciv, FgGLContext *, FgGLsync, FgGLenum, FgGLsizei, FgGLsizei *, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetInteger64i_v, FgGLContext *, FgGLenum, FgGLuint, FgGLint64 * ) \
    FG_GL_FUNCTION_VOID( GetBufferParameteri64v, FgGLContext *, FgGLenum, FgGLenum, FgGLint64 * ) \
    FG_GL_FUNCTION_VOID( FramebufferTexture, FgGLContext *, FgGLenum, FgGLenum, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( TexImage2DMultisample, FgGLContext *, FgGLenum, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( TexImage3DMultisample, FgGLContext *, FgGLenum, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( GetMultisamplefv, FgGLContext *, FgGLenum, FgGLuint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( SampleMaski, FgGLContext *, FgGLuint, FgGLbitfield ) \
\
    /* GL_VERSION_3_3 */ \
    FG_GL_FUNCTION_VOID( BindFragDataLocationIndexed, FgGLContext *, FgGLuint, FgGLuint, FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_NUM( GetFragDataIndex, FgGLint, FgGLContext *, FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GenSamplers, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( DeleteSamplers, FgGLContext *, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsSampler, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( BindSampler, FgGLContext *, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( SamplerParameteri, FgGLContext *, FgGLuint, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( SamplerParameteriv, FgGLContext *, FgGLuint, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( SamplerParameterf, FgGLContext *, FgGLuint, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( SamplerParameterfv, FgGLContext *, FgGLuint, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( SamplerParameterIiv, FgGLContext *, FgGLuint, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( SamplerParameterIuiv, FgGLContext *, FgGLuint, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetSamplerParameteriv, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetSamplerParameterIiv, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetSamplerParameterfv, FgGLContext *, FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetSamplerParameterIuiv, FgGLContext *, FgGLuint, FgGLenum, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( QueryCounter, FgGLContext *, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetQueryObjecti64v, FgGLContext *, FgGLuint, FgGLenum, FgGLint64 * ) \
    FG_GL_FUNCTION_VOID( GetQueryObjectui64v, FgGLContext *, FgGLuint, FgGLenum, FgGLuint64 * ) \
    FG_GL_FUNCTION_VOID( VertexAttribDivisor, FgGLContext *, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribP1ui, FgGLContext *, FgGLuint, FgGLenum, FgGLboolean, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribP1uiv, FgGLContext *, FgGLuint, FgGLenum, FgGLboolean, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribP2ui, FgGLContext *, FgGLuint, FgGLenum, FgGLboolean, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribP2uiv, FgGLContext *, FgGLuint, FgGLenum, FgGLboolean, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribP3ui, FgGLContext *, FgGLuint, FgGLenum, FgGLboolean, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribP3uiv, FgGLContext *, FgGLuint, FgGLenum, FgGLboolean, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribP4ui, FgGLContext *, FgGLuint, FgGLenum, FgGLboolean, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribP4uiv, FgGLContext *, FgGLuint, FgGLenum, FgGLboolean, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexP2ui, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexP2uiv, FgGLContext *, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexP3ui, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexP3uiv, FgGLContext *, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexP4ui, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexP4uiv, FgGLContext *, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( TexCoordP1ui, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( TexCoordP1uiv, FgGLContext *, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( TexCoordP2ui, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( TexCoordP2uiv, FgGLContext *, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( TexCoordP3ui, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( TexCoordP3uiv, FgGLContext *, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( TexCoordP4ui, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( TexCoordP4uiv, FgGLContext *, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP1ui, FgGLContext *, FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP1uiv, FgGLContext *, FgGLenum, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP2ui, FgGLContext *, FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP2uiv, FgGLContext *, FgGLenum, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP3ui, FgGLContext *, FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP3uiv, FgGLContext *, FgGLenum, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP4ui, FgGLContext *, FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordP4uiv, FgGLContext *, FgGLenum, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( NormalP3ui, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( NormalP3uiv, FgGLContext *, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ColorP3ui, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ColorP3uiv, FgGLContext *, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ColorP4ui, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ColorP4uiv, FgGLContext *, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( SecondaryColorP3ui, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( SecondaryColorP3uiv, FgGLContext *, FgGLenum, const FgGLuint * ) \
\
    /* GL_VERSION_4_0 */ \
    FG_GL_FUNCTION_VOID( MinSampleShading, FgGLContext *, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( BlendEquationi, FgGLContext *, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BlendEquationSeparatei, FgGLContext *, FgGLuint, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BlendFunci, FgGLContext *, FgGLuint, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BlendFuncSeparatei, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( DrawArraysIndirect, FgGLContext *, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( DrawElementsIndirect, FgGLContext *, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( Uniform1d, FgGLContext *, FgGLint, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Uniform2d, FgGLContext *, FgGLint, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Uniform3d, FgGLContext *, FgGLint, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Uniform4d, FgGLContext *, FgGLint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Uniform1dv, FgGLContext *, FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Uniform2dv, FgGLContext *, FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Uniform3dv, FgGLContext *, FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Uniform4dv, FgGLContext *, FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix2dv, FgGLContext *, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix3dv, FgGLContext *, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix4dv, FgGLContext *, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix2x3dv, FgGLContext *, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix2x4dv, FgGLContext *, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix3x2dv, FgGLContext *, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix3x4dv, FgGLContext *, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix4x2dv, FgGLContext *, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix4x3dv, FgGLContext *, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetUniformdv, FgGLContext *, FgGLuint, FgGLint, FgGLdouble * ) \
    FG_GL_FUNCTION_NUM( GetSubroutineUniformLocation, FgGLint, FgGLContext *, FgGLuint, FgGLenum, const FgGLchar * ) \
    FG_GL_FUNCTION_NUM( GetSubroutineIndex, FgGLuint, FgGLContext *, FgGLuint, FgGLenum, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetActiveSubroutineUniformiv, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetActiveSubroutineUniformName, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetActiveSubroutineName, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( UniformSubroutinesuiv, FgGLContext *, FgGLenum, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetUniformSubroutineuiv, FgGLContext *, FgGLenum, FgGLint, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetProgramStageiv, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( PatchParameteri, FgGLContext *, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( PatchParameterfv, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( BindTransformFeedback, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteTransformFeedbacks, FgGLContext *, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenTransformFeedbacks, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsTransformFeedback, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( PauseTransformFeedback, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( ResumeTransformFeedback, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( DrawTransformFeedback, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DrawTransformFeedbackStream, FgGLContext *, FgGLenum, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( BeginQueryIndexed, FgGLContext *, FgGLenum, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( EndQueryIndexed, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetQueryIndexediv, FgGLContext *, FgGLenum, FgGLuint, FgGLenum, FgGLint * ) \
\
    /* GL_VERSION_4_1 */ \
    FG_GL_FUNCTION_VOID( ReleaseShaderCompiler, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( ShaderBinary, FgGLContext *, FgGLsizei, const FgGLuint *, FgGLenum, const FgGLvoid *, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetShaderPrecisionFormat, FgGLContext *, FgGLenum, FgGLenum, FgGLint *, FgGLint * ) \
    FG_GL_FUNCTION_VOID( DepthRangef, FgGLContext *, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ClearDepthf, FgGLContext *, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( GetProgramBinary, FgGLContext *, FgGLuint, FgGLsizei, FgGLsizei *, FgGLenum *, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ProgramBinary, FgGLContext *, FgGLuint, FgGLenum, const FgGLvoid *, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( ProgramParameteri, FgGLContext *, FgGLuint, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( UseProgramStages, FgGLContext *, FgGLuint, FgGLbitfield, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ActiveShaderProgram, FgGLContext *, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_NUM( CreateShaderProgramv, FgGLuint, FgGLContext *, FgGLenum, FgGLsizei, const FgGLchar *const* ) \
    FG_GL_FUNCTION_VOID( BindProgramPipeline, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteProgramPipelines, FgGLContext *, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenProgramPipelines, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsProgramPipeline, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetProgramPipelineiv, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1i, FgGLContext *, FgGLuint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1iv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1f, FgGLContext *, FgGLuint, FgGLint, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1fv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1d, FgGLContext *, FgGLuint, FgGLint, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1dv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1ui, FgGLContext *, FgGLuint, FgGLint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1uiv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2i, FgGLContext *, FgGLuint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2iv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2f, FgGLContext *, FgGLuint, FgGLint, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2fv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2d, FgGLContext *, FgGLuint, FgGLint, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2dv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2ui, FgGLContext *, FgGLuint, FgGLint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2uiv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3i, FgGLContext *, FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3iv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3f, FgGLContext *, FgGLuint, FgGLint, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3fv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3d, FgGLContext *, FgGLuint, FgGLint, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3dv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3ui, FgGLContext *, FgGLuint, FgGLint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3uiv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4i, FgGLContext *, FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4iv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4f, FgGLContext *, FgGLuint, FgGLint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4fv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4d, FgGLContext *, FgGLuint, FgGLint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4dv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4ui, FgGLContext *, FgGLuint, FgGLint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4uiv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2fv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3fv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4fv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2dv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3dv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4dv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x3fv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x2fv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x4fv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x2fv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x4fv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x3fv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x3dv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x2dv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x4dv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x2dv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x4dv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x3dv, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ValidateProgramPipeline, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetProgramPipelineInfoLog, FgGLContext *, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1d, FgGLContext *, FgGLuint, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2d, FgGLContext *, FgGLuint, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3d, FgGLContext *, FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4d, FgGLContext *, FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1dv, FgGLContext *, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2dv, FgGLContext *, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3dv, FgGLContext *, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4dv, FgGLContext *, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribLPointer, FgGLContext *, FgGLuint, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribLdv, FgGLContext *, FgGLuint, FgGLenum, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ViewportArrayv, FgGLContext *, FgGLuint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ViewportIndexedf, FgGLContext *, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ViewportIndexedfv, FgGLContext *, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ScissorArrayv, FgGLContext *, FgGLuint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ScissorIndexed, FgGLContext *, FgGLuint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( ScissorIndexedv, FgGLContext *, FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( DepthRangeArrayv, FgGLContext *, FgGLuint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( DepthRangeIndexed, FgGLContext *, FgGLuint, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( GetFloati_v, FgGLContext *, FgGLenum, FgGLuint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetDoublei_v, FgGLContext *, FgGLenum, FgGLuint, FgGLdouble * ) \
\
    /* GL_VERSION_4_2 */ \
    FG_GL_FUNCTION_VOID( DrawArraysInstancedBaseInstance, FgGLContext *, FgGLenum, FgGLint, FgGLsizei, FgGLsizei, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DrawElementsInstancedBaseInstance, FgGLContext *, FgGLenum, FgGLsizei, FgGLenum, const void *, FgGLsizei, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DrawElementsInstancedBaseVertexBaseInstance, FgGLContext *, FgGLenum, FgGLsizei, FgGLenum, const void *, FgGLsizei, FgGLint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetInternalformativ, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLsizei, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetActiveAtomicCounterBufferiv, FgGLContext *, FgGLuint, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( BindImageTexture, FgGLContext *, FgGLuint, FgGLuint, FgGLint, FgGLboolean, FgGLint, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MemoryBarrier, FgGLContext *, FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( TexStorage1D, FgGLContext *, FgGLenum, FgGLsizei, FgGLenum, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( TexStorage2D, FgGLContext *, FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( TexStorage3D, FgGLContext *, FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( DrawTransformFeedbackInstanced, FgGLContext *, FgGLenum, FgGLuint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( DrawTransformFeedbackStreamInstanced, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLsizei ) \
\
    /* GL_VERSION_4_3 */ \
    FG_GL_FUNCTION_VOID( ClearBufferData, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLenum, const void * ) \
    FG_GL_FUNCTION_VOID( ClearBufferSubData, FgGLContext *, FgGLenum, FgGLenum, FgGLintptr, FgGLsizeiptr, FgGLenum, FgGLenum, const void * ) \
    FG_GL_FUNCTION_VOID( DispatchCompute, FgGLContext *, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DispatchComputeIndirect, FgGLContext *, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( CopyImageSubData, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( FramebufferParameteri, FgGLContext *, FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( GetFramebufferParameteriv, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetInternalformati64v, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLsizei, FgGLint64 * ) \
    FG_GL_FUNCTION_VOID( InvalidateTexSubImage, FgGLContext *, FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( InvalidateTexImage, FgGLContext *, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( InvalidateBufferSubData, FgGLContext *, FgGLuint, FgGLintptr, FgGLsizeiptr ) \
    FG_GL_FUNCTION_VOID( InvalidateBufferData, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( InvalidateFramebuffer, FgGLContext *, FgGLenum, FgGLsizei, const FgGLenum * ) \
    FG_GL_FUNCTION_VOID( InvalidateSubFramebuffer, FgGLContext *, FgGLenum, FgGLsizei, const FgGLenum *, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( MultiDrawArraysIndirect, FgGLContext *, FgGLenum, const void *, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( MultiDrawElementsIndirect, FgGLContext *, FgGLenum, FgGLenum, const void *, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetProgramInterfaceiv, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_NUM( GetProgramResourceIndex, FgGLuint, FgGLContext *, FgGLuint, FgGLenum, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetProgramResourceName, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetProgramResourceiv, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, FgGLsizei, const FgGLenum *, FgGLsizei, FgGLsizei *, FgGLint * ) \
    FG_GL_FUNCTION_NUM( GetProgramResourceLocation, FgGLint, FgGLContext *, FgGLuint, FgGLenum, const FgGLchar * ) \
    FG_GL_FUNCTION_NUM( GetProgramResourceLocationIndex, FgGLint, FgGLContext *, FgGLuint, FgGLenum, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( ShaderStorageBlockBinding, FgGLContext *, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( TexBufferRange, FgGLContext *, FgGLenum, FgGLenum, FgGLuint, FgGLintptr, FgGLsizeiptr ) \
    FG_GL_FUNCTION_VOID( TexStorage2DMultisample, FgGLContext *, FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( TexStorage3DMultisample, FgGLContext *, FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( TextureView, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( BindVertexBuffer, FgGLContext *, FgGLuint, FgGLuint, FgGLintptr, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( VertexAttribFormat, FgGLContext *, FgGLuint, FgGLint, FgGLenum, FgGLboolean, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribIFormat, FgGLContext *, FgGLuint, FgGLint, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribLFormat, FgGLContext *, FgGLuint, FgGLint, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribBinding, FgGLContext *, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexBindingDivisor, FgGLContext *, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DebugMessageControl, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLsizei, const FgGLuint *, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( DebugMessageInsert, FgGLContext *, FgGLenum, FgGLenum, FgGLuint, FgGLenum, FgGLsizei, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( DebugMessageCallback, FgGLContext *, FgGLDebugProc, const void * ) \
    FG_GL_FUNCTION_NUM( GetDebugMessageLog, FgGLuint, FgGLContext *, FgGLuint, FgGLsizei, FgGLenum *, FgGLenum *, FgGLuint *, FgGLenum *, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( PushDebugGroup, FgGLContext *, FgGLenum, FgGLuint, FgGLsizei, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( PopDebugGroup, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( ObjectLabel, FgGLContext *, FgGLenum, FgGLuint, FgGLsizei, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetObjectLabel, FgGLContext *, FgGLenum, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( ObjectPtrLabel, FgGLContext *, const void *, FgGLsizei, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetObjectPtrLabel, FgGLContext *, const void *, FgGLsizei, FgGLsizei *, FgGLchar * ) \
\
    /* GL_VERSION_4_4 */ \
    FG_GL_FUNCTION_VOID( BufferStorage, FgGLContext *, FgGLenum, FgGLsizeiptr, const void *, FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( ClearTexImage, FgGLContext *, FgGLuint, FgGLint, FgGLenum, FgGLenum, const void * ) \
    FG_GL_FUNCTION_VOID( ClearTexSubImage, FgGLContext *, FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const void * ) \
    FG_GL_FUNCTION_VOID( BindBuffersBase, FgGLContext *, FgGLenum, FgGLuint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( BindBuffersRange, FgGLContext *, FgGLenum, FgGLuint, FgGLsizei, const FgGLuint *, const FgGLintptr *, const FgGLsizeiptr * ) \
    FG_GL_FUNCTION_VOID( BindTextures, FgGLContext *, FgGLuint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( BindSamplers, FgGLContext *, FgGLuint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( BindImageTextures, FgGLContext *, FgGLuint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( BindVertexBuffers, FgGLContext *, FgGLuint, FgGLsizei, const FgGLuint *, const FgGLintptr *, const FgGLsizei * ) \
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
    FG_GL_FUNCTION_NUM( GetTextureHandleARB, FgGLuint64, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_NUM( GetTextureSamplerHandleARB, FgGLuint64, FgGLContext *, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( MakeTextureHandleResidentARB, FgGLContext *, FgGLuint64 ) \
    FG_GL_FUNCTION_VOID( MakeTextureHandleNonResidentARB, FgGLContext *, FgGLuint64 ) \
    FG_GL_FUNCTION_NUM( GetImageHandleARB, FgGLuint64, FgGLContext *, FgGLuint, FgGLint, FgGLboolean, FgGLint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MakeImageHandleResidentARB, FgGLContext *, FgGLuint64, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MakeImageHandleNonResidentARB, FgGLContext *, FgGLuint64 ) \
    FG_GL_FUNCTION_VOID( UniformHandleui64ARB, FgGLContext *, FgGLint, FgGLuint64 ) \
    FG_GL_FUNCTION_VOID( UniformHandleui64vARB, FgGLContext *, FgGLint, FgGLsizei, const FgGLuint64 * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformHandleui64ARB, FgGLContext *, FgGLuint, FgGLint, FgGLuint64 ) \
    FG_GL_FUNCTION_VOID( ProgramUniformHandleui64vARB, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLuint64 * ) \
    FG_GL_FUNCTION_NUM( IsTextureHandleResidentARB, FgGLboolean, FgGLContext *, FgGLuint64 ) \
    FG_GL_FUNCTION_NUM( IsImageHandleResidentARB, FgGLboolean, FgGLContext *, FgGLuint64 ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1ui64ARB, FgGLContext *, FgGLuint, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1ui64vARB, FgGLContext *, FgGLuint, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribLui64vARB, FgGLContext *, FgGLuint, FgGLenum, FgGLuint64EXT * ) \
\
    /* GL_ARB_blend_func_extended */ \
\
    /* GL_ARB_buffer_storage */ \
\
    /* GL_ARB_cl_event */ \
    FG_GL_FUNCTION_PTR( CreateSyncFromCLeventARB, FgGLsync, FgGLContext *, FgGLclcontext, FgGLclevent, FgGLbitfield ) \
\
    /* GL_ARB_clear_buffer_object */ \
\
    /* GL_ARB_clear_texture */ \
\
    /* GL_ARB_color_buffer_float */ \
    FG_GL_FUNCTION_VOID( ClampColorARB, FgGLContext *, FgGLenum, FgGLenum ) \
\
    /* GL_ARB_compatibility */ \
\
    /* GL_ARB_compressed_texture_pixel_storage */ \
\
    /* GL_ARB_compute_shader */ \
\
    /* GL_ARB_compute_variable_group_size */ \
    FG_GL_FUNCTION_VOID( DispatchComputeGroupSizeARB, FgGLContext *, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
\
    /* GL_ARB_conservative_depth */ \
\
    /* GL_ARB_copy_buffer */ \
\
    /* GL_ARB_copy_image */ \
\
    /* GL_ARB_debug_output */ \
    FG_GL_FUNCTION_VOID( DebugMessageControlARB, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLsizei, const FgGLuint *, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( DebugMessageInsertARB, FgGLContext *, FgGLenum, FgGLenum, FgGLuint, FgGLenum, FgGLsizei, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( DebugMessageCallbackARB, FgGLContext *, FgGLDebugProcARB, const void * ) \
    FG_GL_FUNCTION_NUM( GetDebugMessageLogARB, FgGLuint, FgGLContext *, FgGLuint, FgGLsizei, FgGLenum *, FgGLenum *, FgGLuint *, FgGLenum *, FgGLsizei *, FgGLchar * ) \
\
    /* GL_ARB_depth_buffer_float */ \
\
    /* GL_ARB_depth_clamp */ \
\
    /* GL_ARB_depth_texture */ \
\
    /* GL_ARB_draw_buffers */ \
    FG_GL_FUNCTION_VOID( DrawBuffersARB, FgGLContext *, FgGLsizei, const FgGLenum * ) \
\
    /* GL_ARB_draw_buffers_blend */ \
    FG_GL_FUNCTION_VOID( BlendEquationiARB, FgGLContext *, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BlendEquationSeparateiARB, FgGLContext *, FgGLuint, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BlendFunciARB, FgGLContext *, FgGLuint, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BlendFuncSeparateiARB, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
\
    /* GL_ARB_draw_elements_base_vertex */ \
\
    /* GL_ARB_draw_indirect */ \
\
    /* GL_ARB_draw_instanced */ \
    FG_GL_FUNCTION_VOID( DrawArraysInstancedARB, FgGLContext *, FgGLenum, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( DrawElementsInstancedARB, FgGLContext *, FgGLenum, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLsizei ) \
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
    FG_GL_FUNCTION_VOID( ProgramStringARB, FgGLContext *, FgGLenum, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( BindProgramARB, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteProgramsARB, FgGLContext *, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenProgramsARB, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameter4dARB, FgGLContext *, FgGLenum, FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameter4dvARB, FgGLContext *, FgGLenum, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameter4fARB, FgGLContext *, FgGLenum, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameter4fvARB, FgGLContext *, FgGLenum, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameter4dARB, FgGLContext *, FgGLenum, FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameter4dvARB, FgGLContext *, FgGLenum, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameter4fARB, FgGLContext *, FgGLenum, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameter4fvARB, FgGLContext *, FgGLenum, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetProgramEnvParameterdvARB, FgGLContext *, FgGLenum, FgGLuint, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetProgramEnvParameterfvARB, FgGLContext *, FgGLenum, FgGLuint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetProgramLocalParameterdvARB, FgGLContext *, FgGLenum, FgGLuint, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetProgramLocalParameterfvARB, FgGLContext *, FgGLenum, FgGLuint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetProgramivARB, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetProgramStringARB, FgGLContext *, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_NUM( IsProgramARB, FgGLboolean, FgGLContext *, FgGLuint ) \
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
    FG_GL_FUNCTION_VOID( ProgramParameteriARB, FgGLContext *, FgGLuint, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferTextureARB, FgGLContext *, FgGLenum, FgGLenum, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferTextureLayerARB, FgGLContext *, FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferTextureFaceARB, FgGLContext *, FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLenum ) \
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
    FG_GL_FUNCTION_VOID( ColorTable, FgGLContext *, FgGLenum, FgGLenum, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ColorTableParameterfv, FgGLContext *, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ColorTableParameteriv, FgGLContext *, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( CopyColorTable, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetColorTable, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetColorTableParameterfv, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetColorTableParameteriv, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( ColorSubTable, FgGLContext *, FgGLenum, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CopyColorSubTable, FgGLContext *, FgGLenum, FgGLsizei, FgGLint, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( ConvolutionFilter1D, FgGLContext *, FgGLenum, FgGLenum, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ConvolutionFilter2D, FgGLContext *, FgGLenum, FgGLenum, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameterf, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameterfv, FgGLContext *, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameteri, FgGLContext *, FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameteriv, FgGLContext *, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( CopyConvolutionFilter1D, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( CopyConvolutionFilter2D, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetConvolutionFilter, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetConvolutionParameterfv, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetConvolutionParameteriv, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetSeparableFilter, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLvoid *, FgGLvoid *, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( SeparableFilter2D, FgGLContext *, FgGLenum, FgGLenum, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid *, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetHistogram, FgGLContext *, FgGLenum, FgGLboolean, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetHistogramParameterfv, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetHistogramParameteriv, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetMinmax, FgGLContext *, FgGLenum, FgGLboolean, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetMinmaxParameterfv, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetMinmaxParameteriv, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( Histogram, FgGLContext *, FgGLenum, FgGLsizei, FgGLenum, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( Minmax, FgGLContext *, FgGLenum, FgGLenum, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( ResetHistogram, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( ResetMinmax, FgGLContext *, FgGLenum ) \
\
    /* GL_ARB_indirect_parameters */ \
    FG_GL_FUNCTION_VOID( MultiDrawArraysIndirectCountARB, FgGLContext *, FgGLenum, FgGLintptr, FgGLintptr, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( MultiDrawElementsIndirectCountARB, FgGLContext *, FgGLenum, FgGLenum, FgGLintptr, FgGLintptr, FgGLsizei, FgGLsizei ) \
\
    /* GL_ARB_instanced_arrays */ \
    FG_GL_FUNCTION_VOID( VertexAttribDivisorARB, FgGLContext *, FgGLuint, FgGLuint ) \
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
    FG_GL_FUNCTION_VOID( CurrentPaletteMatrixARB, FgGLContext *, FgGLint ) \
    FG_GL_FUNCTION_VOID( MatrixIndexubvARB, FgGLContext *, FgGLint, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( MatrixIndexusvARB, FgGLContext *, FgGLint, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( MatrixIndexuivARB, FgGLContext *, FgGLint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( MatrixIndexPointerARB, FgGLContext *, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
\
    /* GL_ARB_multi_bind */ \
\
    /* GL_ARB_multi_draw_indirect */ \
\
    /* GL_ARB_multisample */ \
    FG_GL_FUNCTION_VOID( SampleCoverageARB, FgGLContext *, FgGLfloat, FgGLboolean ) \
\
    /* GL_ARB_multitexture */ \
    FG_GL_FUNCTION_VOID( ActiveTextureARB, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( ClientActiveTextureARB, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1dARB, FgGLContext *, FgGLenum, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1dvARB, FgGLContext *, FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1fARB, FgGLContext *, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1fvARB, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1iARB, FgGLContext *, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1ivARB, FgGLContext *, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1sARB, FgGLContext *, FgGLenum, FgGLshort ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1svARB, FgGLContext *, FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2dARB, FgGLContext *, FgGLenum, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2dvARB, FgGLContext *, FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2fARB, FgGLContext *, FgGLenum, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2fvARB, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2iARB, FgGLContext *, FgGLenum, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2ivARB, FgGLContext *, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2sARB, FgGLContext *, FgGLenum, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2svARB, FgGLContext *, FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3dARB, FgGLContext *, FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3dvARB, FgGLContext *, FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3fARB, FgGLContext *, FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3fvARB, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3iARB, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3ivARB, FgGLContext *, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3sARB, FgGLContext *, FgGLenum, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3svARB, FgGLContext *, FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4dARB, FgGLContext *, FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4dvARB, FgGLContext *, FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4fARB, FgGLContext *, FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4fvARB, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4iARB, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4ivARB, FgGLContext *, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4sARB, FgGLContext *, FgGLenum, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4svARB, FgGLContext *, FgGLenum, const FgGLshort * ) \
\
    /* GL_ARB_occlusion_query */ \
    FG_GL_FUNCTION_VOID( GenQueriesARB, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( DeleteQueriesARB, FgGLContext *, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsQueryARB, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( BeginQueryARB, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( EndQueryARB, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetQueryivARB, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetQueryObjectivARB, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetQueryObjectuivARB, FgGLContext *, FgGLuint, FgGLenum, FgGLuint * ) \
\
    /* GL_ARB_occlusion_query2 */ \
\
    /* GL_ARB_pixel_buffer_object */ \
\
    /* GL_ARB_point_parameters */ \
    FG_GL_FUNCTION_VOID( PointParameterfARB, FgGLContext *, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( PointParameterfvARB, FgGLContext *, FgGLenum, const FgGLfloat * ) \
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
    FG_GL_FUNCTION_NUM( GetGraphicsResetStatusARB, FgGLenum, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( GetnTexImageARB, FgGLContext *, FgGLenum, FgGLint, FgGLenum, FgGLenum, FgGLsizei, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ReadnPixelsARB, FgGLContext *, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, FgGLsizei, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetnCompressedTexImageARB, FgGLContext *, FgGLenum, FgGLint, FgGLsizei, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetnUniformfvARB, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetnUniformivARB, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetnUniformuivARB, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetnUniformdvARB, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetnMapdvARB, FgGLContext *, FgGLenum, FgGLenum, FgGLsizei, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetnMapfvARB, FgGLContext *, FgGLenum, FgGLenum, FgGLsizei, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetnMapivARB, FgGLContext *, FgGLenum, FgGLenum, FgGLsizei, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetnPixelMapfvARB, FgGLContext *, FgGLenum, FgGLsizei, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetnPixelMapuivARB, FgGLContext *, FgGLenum, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetnPixelMapusvARB, FgGLContext *, FgGLenum, FgGLsizei, FgGLushort * ) \
    FG_GL_FUNCTION_VOID( GetnPolygonStippleARB, FgGLContext *, FgGLsizei, FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( GetnColorTableARB, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLsizei, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetnConvolutionFilterARB, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLsizei, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetnSeparableFilterARB, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLsizei, FgGLvoid *, FgGLsizei, FgGLvoid *, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetnHistogramARB, FgGLContext *, FgGLenum, FgGLboolean, FgGLenum, FgGLenum, FgGLsizei, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetnMinmaxARB, FgGLContext *, FgGLenum, FgGLboolean, FgGLenum, FgGLenum, FgGLsizei, FgGLvoid * ) \
\
    /* GL_ARB_robustness_isolation */ \
\
    /* GL_ARB_sample_shading */ \
    FG_GL_FUNCTION_VOID( MinSampleShadingARB, FgGLContext *, FgGLfloat ) \
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
    FG_GL_FUNCTION_VOID( DeleteObjectARB, FgGLContext *, FgGLhandleARB ) \
    FG_GL_FUNCTION_NUM( GetHandleARB, FgGLhandleARB, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( DetachObjectARB, FgGLContext *, FgGLhandleARB, FgGLhandleARB ) \
    FG_GL_FUNCTION_NUM( CreateShaderObjectARB, FgGLhandleARB, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( ShaderSourceARB, FgGLContext *, FgGLhandleARB, FgGLsizei, const FgGLcharARB **, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( CompileShaderARB, FgGLContext *, FgGLhandleARB ) \
    FG_GL_FUNCTION_NUM( CreateProgramObjectARB, FgGLhandleARB, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( AttachObjectARB, FgGLContext *, FgGLhandleARB, FgGLhandleARB ) \
    FG_GL_FUNCTION_VOID( LinkProgramARB, FgGLContext *, FgGLhandleARB ) \
    FG_GL_FUNCTION_VOID( UseProgramObjectARB, FgGLContext *, FgGLhandleARB ) \
    FG_GL_FUNCTION_VOID( ValidateProgramARB, FgGLContext *, FgGLhandleARB ) \
    FG_GL_FUNCTION_VOID( Uniform1fARB, FgGLContext *, FgGLint, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Uniform2fARB, FgGLContext *, FgGLint, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Uniform3fARB, FgGLContext *, FgGLint, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Uniform4fARB, FgGLContext *, FgGLint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Uniform1iARB, FgGLContext *, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Uniform2iARB, FgGLContext *, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Uniform3iARB, FgGLContext *, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Uniform4iARB, FgGLContext *, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Uniform1fvARB, FgGLContext *, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Uniform2fvARB, FgGLContext *, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Uniform3fvARB, FgGLContext *, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Uniform4fvARB, FgGLContext *, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Uniform1ivARB, FgGLContext *, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Uniform2ivARB, FgGLContext *, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Uniform3ivARB, FgGLContext *, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Uniform4ivARB, FgGLContext *, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix2fvARB, FgGLContext *, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix3fvARB, FgGLContext *, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( UniformMatrix4fvARB, FgGLContext *, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetObjectParameterfvARB, FgGLContext *, FgGLhandleARB, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetObjectParameterivARB, FgGLContext *, FgGLhandleARB, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetInfoLogARB, FgGLContext *, FgGLhandleARB, FgGLsizei, FgGLsizei *, FgGLcharARB * ) \
    FG_GL_FUNCTION_VOID( GetAttachedObjectsARB, FgGLContext *, FgGLhandleARB, FgGLsizei, FgGLsizei *, FgGLhandleARB * ) \
    FG_GL_FUNCTION_NUM( GetUniformLocationARB, FgGLint, FgGLContext *, FgGLhandleARB, const FgGLcharARB * ) \
    FG_GL_FUNCTION_VOID( GetActiveUniformARB, FgGLContext *, FgGLhandleARB, FgGLuint, FgGLsizei, FgGLsizei *, FgGLint *, FgGLenum *, FgGLcharARB * ) \
    FG_GL_FUNCTION_VOID( GetUniformfvARB, FgGLContext *, FgGLhandleARB, FgGLint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetUniformivARB, FgGLContext *, FgGLhandleARB, FgGLint, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetShaderSourceARB, FgGLContext *, FgGLhandleARB, FgGLsizei, FgGLsizei *, FgGLcharARB * ) \
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
    FG_GL_FUNCTION_VOID( NamedStringARB, FgGLContext *, FgGLenum, FgGLint, const FgGLchar *, FgGLint, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( DeleteNamedStringARB, FgGLContext *, FgGLint, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( CompileShaderIncludeARB, FgGLContext *, FgGLuint, FgGLsizei, const FgGLchar *const*, const FgGLint * ) \
    FG_GL_FUNCTION_NUM( IsNamedStringARB, FgGLboolean, FgGLContext *, FgGLint, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetNamedStringARB, FgGLContext *, FgGLint, const FgGLchar *, FgGLsizei, FgGLint *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetNamedStringivARB, FgGLContext *, FgGLint, const FgGLchar *, FgGLenum, FgGLint * ) \
\
    /* GL_ARB_shading_language_packing */ \
\
    /* GL_ARB_shadow */ \
\
    /* GL_ARB_shadow_ambient */ \
\
    /* GL_ARB_sparse_texture */ \
    FG_GL_FUNCTION_VOID( TexPageCommitmentARB, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) \
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
    FG_GL_FUNCTION_VOID( TexBufferARB, FgGLContext *, FgGLenum, FgGLenum, FgGLuint ) \
\
    /* GL_ARB_texture_buffer_object_rgb32 */ \
\
    /* GL_ARB_texture_buffer_range */ \
\
    /* GL_ARB_texture_compression */ \
    FG_GL_FUNCTION_VOID( CompressedTexImage3DARB, FgGLContext *, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTexImage2DARB, FgGLContext *, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTexImage1DARB, FgGLContext *, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTexSubImage3DARB, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTexSubImage2DARB, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTexSubImage1DARB, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetCompressedTexImageARB, FgGLContext *, FgGLenum, FgGLint, FgGLvoid * ) \
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
    FG_GL_FUNCTION_VOID( LoadTransposeMatrixfARB, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( LoadTransposeMatrixdARB, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultTransposeMatrixfARB, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultTransposeMatrixdARB, FgGLContext *, const FgGLdouble * ) \
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
    FG_GL_FUNCTION_VOID( WeightbvARB, FgGLContext *, FgGLint, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( WeightsvARB, FgGLContext *, FgGLint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( WeightivARB, FgGLContext *, FgGLint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( WeightfvARB, FgGLContext *, FgGLint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( WeightdvARB, FgGLContext *, FgGLint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( WeightubvARB, FgGLContext *, FgGLint, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( WeightusvARB, FgGLContext *, FgGLint, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( WeightuivARB, FgGLContext *, FgGLint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( WeightPointerARB, FgGLContext *, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( VertexBlendARB, FgGLContext *, FgGLint ) \
\
    /* GL_ARB_vertex_buffer_object */ \
    FG_GL_FUNCTION_VOID( BindBufferARB, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteBuffersARB, FgGLContext *, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenBuffersARB, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsBufferARB, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( BufferDataARB, FgGLContext *, FgGLenum, FgGLsizeiptrARB, const FgGLvoid *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BufferSubDataARB, FgGLContext *, FgGLenum, FgGLintptrARB, FgGLsizeiptrARB, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetBufferSubDataARB, FgGLContext *, FgGLenum, FgGLintptrARB, FgGLsizeiptrARB, FgGLvoid * ) \
    FG_GL_FUNCTION_PTR( MapBufferARB, void *, FgGLContext *, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_NUM( UnmapBufferARB, FgGLboolean, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetBufferParameterivARB, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetBufferPointervARB, FgGLContext *, FgGLenum, FgGLenum, FgGLvoid ** ) \
\
    /* GL_ARB_vertex_program */ \
    FG_GL_FUNCTION_VOID( VertexAttrib1dARB, FgGLContext *, FgGLuint, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1dvARB, FgGLContext *, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1fARB, FgGLContext *, FgGLuint, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1fvARB, FgGLContext *, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1sARB, FgGLContext *, FgGLuint, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1svARB, FgGLContext *, FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2dARB, FgGLContext *, FgGLuint, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2dvARB, FgGLContext *, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2fARB, FgGLContext *, FgGLuint, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2fvARB, FgGLContext *, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2sARB, FgGLContext *, FgGLuint, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2svARB, FgGLContext *, FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3dARB, FgGLContext *, FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3dvARB, FgGLContext *, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3fARB, FgGLContext *, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3fvARB, FgGLContext *, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3sARB, FgGLContext *, FgGLuint, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3svARB, FgGLContext *, FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4NbvARB, FgGLContext *, FgGLuint, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4NivARB, FgGLContext *, FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4NsvARB, FgGLContext *, FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4NubARB, FgGLContext *, FgGLuint, FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4NubvARB, FgGLContext *, FgGLuint, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4NuivARB, FgGLContext *, FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4NusvARB, FgGLContext *, FgGLuint, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4bvARB, FgGLContext *, FgGLuint, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4dARB, FgGLContext *, FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4dvARB, FgGLContext *, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4fARB, FgGLContext *, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4fvARB, FgGLContext *, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4ivARB, FgGLContext *, FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4sARB, FgGLContext *, FgGLuint, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4svARB, FgGLContext *, FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4ubvARB, FgGLContext *, FgGLuint, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4uivARB, FgGLContext *, FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4usvARB, FgGLContext *, FgGLuint, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( VertexAttribPointerARB, FgGLContext *, FgGLuint, FgGLint, FgGLenum, FgGLboolean, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( EnableVertexAttribArrayARB, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DisableVertexAttribArrayARB, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribdvARB, FgGLContext *, FgGLuint, FgGLenum, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribfvARB, FgGLContext *, FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribivARB, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribPointervARB, FgGLContext *, FgGLuint, FgGLenum, FgGLvoid ** ) \
\
    /* GL_ARB_vertex_shader */ \
    FG_GL_FUNCTION_VOID( BindAttribLocationARB, FgGLContext *, FgGLhandleARB, FgGLuint, const FgGLcharARB * ) \
    FG_GL_FUNCTION_VOID( GetActiveAttribARB, FgGLContext *, FgGLhandleARB, FgGLuint, FgGLsizei, FgGLsizei *, FgGLint *, FgGLenum *, FgGLcharARB * ) \
    FG_GL_FUNCTION_NUM( GetAttribLocationARB, FgGLint, FgGLContext *, FgGLhandleARB, const FgGLcharARB * ) \
\
    /* GL_ARB_vertex_type_10f_11f_11f_rev */ \
\
    /* GL_ARB_vertex_type_2_10_10_10_rev */ \
\
    /* GL_ARB_viewport_array */ \
\
    /* GL_ARB_window_pos */ \
    FG_GL_FUNCTION_VOID( WindowPos2dARB, FgGLContext *, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( WindowPos2dvARB, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( WindowPos2fARB, FgGLContext *, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( WindowPos2fvARB, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( WindowPos2iARB, FgGLContext *, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( WindowPos2ivARB, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( WindowPos2sARB, FgGLContext *, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( WindowPos2svARB, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( WindowPos3dARB, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( WindowPos3dvARB, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( WindowPos3fARB, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( WindowPos3fvARB, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( WindowPos3iARB, FgGLContext *, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( WindowPos3ivARB, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( WindowPos3sARB, FgGLContext *, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( WindowPos3svARB, FgGLContext *, const FgGLshort * ) \
\
    /* GL_KHR_debug */ \
\
    /* GL_KHR_texture_compression_astc_ldr */ \
\
    /* GL_OES_byte_coordinates */ \
    FG_GL_FUNCTION_VOID( MultiTexCoord1bOES, FgGLContext *, FgGLenum, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1bvOES, FgGLContext *, FgGLenum, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2bOES, FgGLContext *, FgGLenum, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2bvOES, FgGLContext *, FgGLenum, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3bOES, FgGLContext *, FgGLenum, FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3bvOES, FgGLContext *, FgGLenum, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4bOES, FgGLContext *, FgGLenum, FgGLbyte, FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4bvOES, FgGLContext *, FgGLenum, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( TexCoord1bOES, FgGLContext *, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( TexCoord1bvOES, FgGLContext *, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( TexCoord2bOES, FgGLContext *, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( TexCoord2bvOES, FgGLContext *, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( TexCoord3bOES, FgGLContext *, FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( TexCoord3bvOES, FgGLContext *, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( TexCoord4bOES, FgGLContext *, FgGLbyte, FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( TexCoord4bvOES, FgGLContext *, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( Vertex2bOES, FgGLContext *, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( Vertex2bvOES, FgGLContext *, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( Vertex3bOES, FgGLContext *, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( Vertex3bvOES, FgGLContext *, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( Vertex4bOES, FgGLContext *, FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( Vertex4bvOES, FgGLContext *, const FgGLbyte * ) \
\
    /* GL_OES_compressed_paletted_texture */ \
\
    /* GL_OES_fixed_point */ \
    FG_GL_FUNCTION_VOID( AlphaFuncxOES, FgGLContext *, FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( ClearColorxOES, FgGLContext *, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( ClearDepthxOES, FgGLContext *, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( ClipPlanexOES, FgGLContext *, FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( Color4xOES, FgGLContext *, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( DepthRangexOES, FgGLContext *, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( FogxOES, FgGLContext *, FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( FogxvOES, FgGLContext *, FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( FrustumxOES, FgGLContext *, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( GetClipPlanexOES, FgGLContext *, FgGLenum, FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( GetFixedvOES, FgGLContext *, FgGLenum, FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( GetTexEnvxvOES, FgGLContext *, FgGLenum, FgGLenum, FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( GetTexParameterxvOES, FgGLContext *, FgGLenum, FgGLenum, FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( LightModelxOES, FgGLContext *, FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( LightModelxvOES, FgGLContext *, FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( LightxOES, FgGLContext *, FgGLenum, FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( LightxvOES, FgGLContext *, FgGLenum, FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( LineWidthxOES, FgGLContext *, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( LoadMatrixxOES, FgGLContext *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( MaterialxOES, FgGLContext *, FgGLenum, FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( MaterialxvOES, FgGLContext *, FgGLenum, FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( MultMatrixxOES, FgGLContext *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4xOES, FgGLContext *, FgGLenum, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( Normal3xOES, FgGLContext *, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( OrthoxOES, FgGLContext *, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( PointParameterxvOES, FgGLContext *, FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( PointSizexOES, FgGLContext *, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( PolygonOffsetxOES, FgGLContext *, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( RotatexOES, FgGLContext *, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( SampleCoverageOES, FgGLContext *, FgGLfixed, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( ScalexOES, FgGLContext *, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( TexEnvxOES, FgGLContext *, FgGLenum, FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( TexEnvxvOES, FgGLContext *, FgGLenum, FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( TexParameterxOES, FgGLContext *, FgGLenum, FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( TexParameterxvOES, FgGLContext *, FgGLenum, FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( TranslatexOES, FgGLContext *, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( AccumxOES, FgGLContext *, FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( BitmapxOES, FgGLContext *, FgGLsizei, FgGLsizei, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( BlendColorxOES, FgGLContext *, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( ClearAccumxOES, FgGLContext *, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( Color3xOES, FgGLContext *, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( Color3xvOES, FgGLContext *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( Color4xvOES, FgGLContext *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameterxOES, FgGLContext *, FgGLenum, FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameterxvOES, FgGLContext *, FgGLenum, FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( EvalCoord1xOES, FgGLContext *, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( EvalCoord1xvOES, FgGLContext *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( EvalCoord2xOES, FgGLContext *, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( EvalCoord2xvOES, FgGLContext *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( FeedbackBufferxOES, FgGLContext *, FgGLsizei, FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( GetConvolutionParameterxvOES, FgGLContext *, FgGLenum, FgGLenum, FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( GetHistogramParameterxvOES, FgGLContext *, FgGLenum, FgGLenum, FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( GetLightxOES, FgGLContext *, FgGLenum, FgGLenum, FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( GetMapxvOES, FgGLContext *, FgGLenum, FgGLenum, FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( GetMaterialxOES, FgGLContext *, FgGLenum, FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( GetPixelMapxv, FgGLContext *, FgGLenum, FgGLint, FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( GetTexGenxvOES, FgGLContext *, FgGLenum, FgGLenum, FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( GetTexLevelParameterxvOES, FgGLContext *, FgGLenum, FgGLint, FgGLenum, FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( IndexxOES, FgGLContext *, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( IndexxvOES, FgGLContext *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( LoadTransposeMatrixxOES, FgGLContext *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( Map1xOES, FgGLContext *, FgGLenum, FgGLfixed, FgGLfixed, FgGLint, FgGLint, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( Map2xOES, FgGLContext *, FgGLenum, FgGLfixed, FgGLfixed, FgGLint, FgGLint, FgGLfixed, FgGLfixed, FgGLint, FgGLint, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( MapGrid1xOES, FgGLContext *, FgGLint, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( MapGrid2xOES, FgGLContext *, FgGLint, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( MultTransposeMatrixxOES, FgGLContext *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1xOES, FgGLContext *, FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1xvOES, FgGLContext *, FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2xOES, FgGLContext *, FgGLenum, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2xvOES, FgGLContext *, FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3xOES, FgGLContext *, FgGLenum, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3xvOES, FgGLContext *, FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4xvOES, FgGLContext *, FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( Normal3xvOES, FgGLContext *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( PassThroughxOES, FgGLContext *, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( PixelMapx, FgGLContext *, FgGLenum, FgGLint, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( PixelStorex, FgGLContext *, FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( PixelTransferxOES, FgGLContext *, FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( PixelZoomxOES, FgGLContext *, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( PrioritizeTexturesxOES, FgGLContext *, FgGLsizei, const FgGLuint *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( RasterPos2xOES, FgGLContext *, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( RasterPos2xvOES, FgGLContext *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( RasterPos3xOES, FgGLContext *, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( RasterPos3xvOES, FgGLContext *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( RasterPos4xOES, FgGLContext *, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( RasterPos4xvOES, FgGLContext *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( RectxOES, FgGLContext *, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( RectxvOES, FgGLContext *, const FgGLfixed *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( TexCoord1xOES, FgGLContext *, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( TexCoord1xvOES, FgGLContext *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( TexCoord2xOES, FgGLContext *, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( TexCoord2xvOES, FgGLContext *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( TexCoord3xOES, FgGLContext *, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( TexCoord3xvOES, FgGLContext *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( TexCoord4xOES, FgGLContext *, FgGLfixed, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( TexCoord4xvOES, FgGLContext *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( TexGenxOES, FgGLContext *, FgGLenum, FgGLenum, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( TexGenxvOES, FgGLContext *, FgGLenum, FgGLenum, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( Vertex2xOES, FgGLContext *, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( Vertex2xvOES, FgGLContext *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( Vertex3xOES, FgGLContext *, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( Vertex3xvOES, FgGLContext *, const FgGLfixed * ) \
    FG_GL_FUNCTION_VOID( Vertex4xOES, FgGLContext *, FgGLfixed, FgGLfixed, FgGLfixed ) \
    FG_GL_FUNCTION_VOID( Vertex4xvOES, FgGLContext *, const FgGLfixed * ) \
\
    /* GL_OES_query_matrix */ \
    FG_GL_FUNCTION_NUM( QueryMatrixxOES, FgGLbitfield, FgGLContext *, FgGLfixed *, FgGLint * ) \
\
    /* GL_OES_read_format */ \
\
    /* GL_OES_single_precision */ \
    FG_GL_FUNCTION_VOID( ClearDepthfOES, FgGLContext *, FgGLclampf ) \
    FG_GL_FUNCTION_VOID( ClipPlanefOES, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( DepthRangefOES, FgGLContext *, FgGLclampf, FgGLclampf ) \
    FG_GL_FUNCTION_VOID( FrustumfOES, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( GetClipPlanefOES, FgGLContext *, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( OrthofOES, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
\
    /* GL_3DFX_multisample */ \
\
    /* GL_3DFX_tbuffer */ \
    FG_GL_FUNCTION_VOID( TbufferMask3DFX, FgGLContext *, FgGLuint ) \
\
    /* GL_3DFX_texture_compression_FXT1 */ \
\
    /* GL_AMD_blend_minmax_factor */ \
\
    /* GL_AMD_conservative_depth */ \
\
    /* GL_AMD_debug_output */ \
    FG_GL_FUNCTION_VOID( DebugMessageEnableAMD, FgGLContext *, FgGLenum, FgGLenum, FgGLsizei, const FgGLuint *, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( DebugMessageInsertAMD, FgGLContext *, FgGLenum, FgGLenum, FgGLuint, FgGLsizei, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( DebugMessageCallbackAMD, FgGLContext *, FgGLDebugProcAMD, void * ) \
    FG_GL_FUNCTION_NUM( GetDebugMessageLogAMD, FgGLuint, FgGLContext *, FgGLuint, FgGLsizei, FgGLenum *, FgGLuint *, FgGLuint *, FgGLsizei *, FgGLchar * ) \
\
    /* GL_AMD_depth_clamp_separate */ \
\
    /* GL_AMD_draw_buffers_blend */ \
    FG_GL_FUNCTION_VOID( BlendFuncIndexedAMD, FgGLContext *, FgGLuint, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BlendFuncSeparateIndexedAMD, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BlendEquationIndexedAMD, FgGLContext *, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BlendEquationSeparateIndexedAMD, FgGLContext *, FgGLuint, FgGLenum, FgGLenum ) \
\
    /* GL_AMD_interleaved_elements */ \
    FG_GL_FUNCTION_VOID( VertexAttribParameteriAMD, FgGLContext *, FgGLuint, FgGLenum, FgGLint ) \
\
    /* GL_AMD_multi_draw_indirect */ \
    FG_GL_FUNCTION_VOID( MultiDrawArraysIndirectAMD, FgGLContext *, FgGLenum, const FgGLvoid *, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( MultiDrawElementsIndirectAMD, FgGLContext *, FgGLenum, FgGLenum, const FgGLvoid *, FgGLsizei, FgGLsizei ) \
\
    /* GL_AMD_name_gen_delete */ \
    FG_GL_FUNCTION_VOID( GenNamesAMD, FgGLContext *, FgGLenum, FgGLuint, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( DeleteNamesAMD, FgGLContext *, FgGLenum, FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsNameAMD, FgGLboolean, FgGLContext *, FgGLenum, FgGLuint ) \
\
    /* GL_AMD_performance_monitor */ \
    FG_GL_FUNCTION_VOID( GetPerfMonitorGroupsAMD, FgGLContext *, FgGLint *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetPerfMonitorCountersAMD, FgGLContext *, FgGLuint, FgGLint *, FgGLint *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetPerfMonitorGroupStringAMD, FgGLContext *, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetPerfMonitorCounterStringAMD, FgGLContext *, FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetPerfMonitorCounterInfoAMD, FgGLContext *, FgGLuint, FgGLuint, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GenPerfMonitorsAMD, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( DeletePerfMonitorsAMD, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( SelectPerfMonitorCountersAMD, FgGLContext *, FgGLuint, FgGLboolean, FgGLuint, FgGLint, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( BeginPerfMonitorAMD, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( EndPerfMonitorAMD, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetPerfMonitorCounterDataAMD, FgGLContext *, FgGLuint, FgGLenum, FgGLsizei, FgGLuint *, FgGLint * ) \
\
    /* GL_AMD_pinned_memory */ \
\
    /* GL_AMD_query_buffer_object */ \
\
    /* GL_AMD_sample_positions */ \
    FG_GL_FUNCTION_VOID( SetMultisamplefvAMD, FgGLContext *, FgGLenum, FgGLuint, const FgGLfloat * ) \
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
    FG_GL_FUNCTION_VOID( TexStorageSparseAMD, FgGLContext *, FgGLenum, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLsizei, FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( TextureStorageSparseAMD, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLsizei, FgGLbitfield ) \
\
    /* GL_AMD_stencil_operation_extended */ \
    FG_GL_FUNCTION_VOID( StencilOpValueAMD, FgGLContext *, FgGLenum, FgGLuint ) \
\
    /* GL_AMD_texture_texture4 */ \
\
    /* GL_AMD_transform_feedback3_lines_triangles */ \
\
    /* GL_AMD_vertex_shader_layer */ \
\
    /* GL_AMD_vertex_shader_tessellator */ \
    FG_GL_FUNCTION_VOID( TessellationFactorAMD, FgGLContext *, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TessellationModeAMD, FgGLContext *, FgGLenum ) \
\
    /* GL_AMD_vertex_shader_viewport_index */ \
\
    /* GL_APPLE_aux_depth_stencil */ \
\
    /* GL_APPLE_client_storage */ \
\
    /* GL_APPLE_element_array */ \
    FG_GL_FUNCTION_VOID( ElementPointerAPPLE, FgGLContext *, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( DrawElementArrayAPPLE, FgGLContext *, FgGLenum, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( DrawRangeElementArrayAPPLE, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( MultiDrawElementArrayAPPLE, FgGLContext *, FgGLenum, const FgGLint *, const FgGLsizei *, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( MultiDrawRangeElementArrayAPPLE, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, const FgGLint *, const FgGLsizei *, FgGLsizei ) \
\
    /* GL_APPLE_fence */ \
    FG_GL_FUNCTION_VOID( GenFencesAPPLE, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( DeleteFencesAPPLE, FgGLContext *, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( SetFenceAPPLE, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_NUM( IsFenceAPPLE, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_NUM( TestFenceAPPLE, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( FinishFenceAPPLE, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_NUM( TestObjectAPPLE, FgGLboolean, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( FinishObjectAPPLE, FgGLContext *, FgGLenum, FgGLint ) \
\
    /* GL_APPLE_float_pixels */ \
\
    /* GL_APPLE_flush_buffer_range */ \
    FG_GL_FUNCTION_VOID( BufferParameteriAPPLE, FgGLContext *, FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( FlushMappedBufferRangeAPPLE, FgGLContext *, FgGLenum, FgGLintptr, FgGLsizeiptr ) \
\
    /* GL_APPLE_object_purgeable */ \
    FG_GL_FUNCTION_NUM( ObjectPurgeableAPPLE, FgGLenum, FgGLContext *, FgGLenum, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_NUM( ObjectUnpurgeableAPPLE, FgGLenum, FgGLContext *, FgGLenum, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetObjectParameterivAPPLE, FgGLContext *, FgGLenum, FgGLuint, FgGLenum, FgGLint * ) \
\
    /* GL_APPLE_rgb_422 */ \
\
    /* GL_APPLE_row_bytes */ \
\
    /* GL_APPLE_specular_vector */ \
\
    /* GL_APPLE_texture_range */ \
    FG_GL_FUNCTION_VOID( TextureRangeAPPLE, FgGLContext *, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetTexParameterPointervAPPLE, FgGLContext *, FgGLenum, FgGLenum, FgGLvoid ** ) \
\
    /* GL_APPLE_transform_hint */ \
\
    /* GL_APPLE_vertex_array_object */ \
    FG_GL_FUNCTION_VOID( BindVertexArrayAPPLE, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteVertexArraysAPPLE, FgGLContext *, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenVertexArraysAPPLE, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsVertexArrayAPPLE, FgGLboolean, FgGLContext *, FgGLuint ) \
\
    /* GL_APPLE_vertex_array_range */ \
    FG_GL_FUNCTION_VOID( VertexArrayRangeAPPLE, FgGLContext *, FgGLsizei, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( FlushVertexArrayRangeAPPLE, FgGLContext *, FgGLsizei, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( VertexArrayParameteriAPPLE, FgGLContext *, FgGLenum, FgGLint ) \
\
    /* GL_APPLE_vertex_program_evaluators */ \
    FG_GL_FUNCTION_VOID( EnableVertexAttribAPPLE, FgGLContext *, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( DisableVertexAttribAPPLE, FgGLContext *, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_NUM( IsVertexAttribEnabledAPPLE, FgGLboolean, FgGLContext *, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MapVertexAttrib1dAPPLE, FgGLContext *, FgGLuint, FgGLuint, FgGLdouble, FgGLdouble, FgGLint, FgGLint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MapVertexAttrib1fAPPLE, FgGLContext *, FgGLuint, FgGLuint, FgGLfloat, FgGLfloat, FgGLint, FgGLint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MapVertexAttrib2dAPPLE, FgGLContext *, FgGLuint, FgGLuint, FgGLdouble, FgGLdouble, FgGLint, FgGLint, FgGLdouble, FgGLdouble, FgGLint, FgGLint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MapVertexAttrib2fAPPLE, FgGLContext *, FgGLuint, FgGLuint, FgGLfloat, FgGLfloat, FgGLint, FgGLint, FgGLfloat, FgGLfloat, FgGLint, FgGLint, const FgGLfloat * ) \
\
    /* GL_APPLE_ycbcr_422 */ \
\
    /* GL_ATI_draw_buffers */ \
    FG_GL_FUNCTION_VOID( DrawBuffersATI, FgGLContext *, FgGLsizei, const FgGLenum * ) \
\
    /* GL_ATI_element_array */ \
    FG_GL_FUNCTION_VOID( ElementPointerATI, FgGLContext *, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( DrawElementArrayATI, FgGLContext *, FgGLenum, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( DrawRangeElementArrayATI, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLsizei ) \
\
    /* GL_ATI_envmap_bumpmap */ \
    FG_GL_FUNCTION_VOID( TexBumpParameterivATI, FgGLContext *, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TexBumpParameterfvATI, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetTexBumpParameterivATI, FgGLContext *, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetTexBumpParameterfvATI, FgGLContext *, FgGLenum, FgGLfloat * ) \
\
    /* GL_ATI_fragment_shader */ \
    FG_GL_FUNCTION_NUM( GenFragmentShadersATI, FgGLuint, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( BindFragmentShaderATI, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteFragmentShaderATI, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( BeginFragmentShaderATI, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( EndFragmentShaderATI, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( PassTexCoordATI, FgGLContext *, FgGLuint, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( SampleMapATI, FgGLContext *, FgGLuint, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( ColorFragmentOp1ATI, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ColorFragmentOp2ATI, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ColorFragmentOp3ATI, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( AlphaFragmentOp1ATI, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( AlphaFragmentOp2ATI, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( AlphaFragmentOp3ATI, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( SetFragmentShaderConstantATI, FgGLContext *, FgGLuint, const FgGLfloat * ) \
\
    /* GL_ATI_map_object_buffer */ \
    FG_GL_FUNCTION_PTR( MapObjectBufferATI, void *, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( UnmapObjectBufferATI, FgGLContext *, FgGLuint ) \
\
    /* GL_ATI_meminfo */ \
\
    /* GL_ATI_pixel_format_float */ \
\
    /* GL_ATI_pn_triangles */ \
    FG_GL_FUNCTION_VOID( PNTrianglesiATI, FgGLContext *, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( PNTrianglesfATI, FgGLContext *, FgGLenum, FgGLfloat ) \
\
    /* GL_ATI_separate_stencil */ \
    FG_GL_FUNCTION_VOID( StencilOpSeparateATI, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( StencilFuncSeparateATI, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLuint ) \
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
    FG_GL_FUNCTION_NUM( NewObjectBufferATI, FgGLuint, FgGLContext *, FgGLsizei, const FgGLvoid *, FgGLenum ) \
    FG_GL_FUNCTION_NUM( IsObjectBufferATI, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( UpdateObjectBufferATI, FgGLContext *, FgGLuint, FgGLuint, FgGLsizei, const FgGLvoid *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetObjectBufferfvATI, FgGLContext *, FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetObjectBufferivATI, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( FreeObjectBufferATI, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ArrayObjectATI, FgGLContext *, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetArrayObjectfvATI, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetArrayObjectivATI, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( VariantArrayObjectATI, FgGLContext *, FgGLuint, FgGLenum, FgGLsizei, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetVariantArrayObjectfvATI, FgGLContext *, FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetVariantArrayObjectivATI, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
\
    /* GL_ATI_vertex_attrib_array_object */ \
    FG_GL_FUNCTION_VOID( VertexAttribArrayObjectATI, FgGLContext *, FgGLuint, FgGLint, FgGLenum, FgGLboolean, FgGLsizei, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribArrayObjectfvATI, FgGLContext *, FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribArrayObjectivATI, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
\
    /* GL_ATI_vertex_streams */ \
    FG_GL_FUNCTION_VOID( VertexStream1sATI, FgGLContext *, FgGLenum, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexStream1svATI, FgGLContext *, FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexStream1iATI, FgGLContext *, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexStream1ivATI, FgGLContext *, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexStream1fATI, FgGLContext *, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexStream1fvATI, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexStream1dATI, FgGLContext *, FgGLenum, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexStream1dvATI, FgGLContext *, FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexStream2sATI, FgGLContext *, FgGLenum, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexStream2svATI, FgGLContext *, FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexStream2iATI, FgGLContext *, FgGLenum, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexStream2ivATI, FgGLContext *, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexStream2fATI, FgGLContext *, FgGLenum, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexStream2fvATI, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexStream2dATI, FgGLContext *, FgGLenum, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexStream2dvATI, FgGLContext *, FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexStream3sATI, FgGLContext *, FgGLenum, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexStream3svATI, FgGLContext *, FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexStream3iATI, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexStream3ivATI, FgGLContext *, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexStream3fATI, FgGLContext *, FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexStream3fvATI, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexStream3dATI, FgGLContext *, FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexStream3dvATI, FgGLContext *, FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexStream4sATI, FgGLContext *, FgGLenum, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexStream4svATI, FgGLContext *, FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexStream4iATI, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexStream4ivATI, FgGLContext *, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexStream4fATI, FgGLContext *, FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexStream4fvATI, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexStream4dATI, FgGLContext *, FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexStream4dvATI, FgGLContext *, FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( NormalStream3bATI, FgGLContext *, FgGLenum, FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( NormalStream3bvATI, FgGLContext *, FgGLenum, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( NormalStream3sATI, FgGLContext *, FgGLenum, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( NormalStream3svATI, FgGLContext *, FgGLenum, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( NormalStream3iATI, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( NormalStream3ivATI, FgGLContext *, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( NormalStream3fATI, FgGLContext *, FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( NormalStream3fvATI, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( NormalStream3dATI, FgGLContext *, FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( NormalStream3dvATI, FgGLContext *, FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ClientActiveVertexStreamATI, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( VertexBlendEnviATI, FgGLContext *, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexBlendEnvfATI, FgGLContext *, FgGLenum, FgGLfloat ) \
\
    /* GL_EXT_422_pixels */ \
\
    /* GL_EXT_abgr */ \
\
    /* GL_EXT_bgra */ \
\
    /* GL_EXT_bindable_uniform */ \
    FG_GL_FUNCTION_VOID( UniformBufferEXT, FgGLContext *, FgGLuint, FgGLint, FgGLuint ) \
    FG_GL_FUNCTION_NUM( GetUniformBufferSizeEXT, FgGLint, FgGLContext *, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_NUM( GetUniformOffsetEXT, FgGLintptr, FgGLContext *, FgGLuint, FgGLint ) \
\
    /* GL_EXT_blend_color */ \
    FG_GL_FUNCTION_VOID( BlendColorEXT, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
\
    /* GL_EXT_blend_equation_separate */ \
    FG_GL_FUNCTION_VOID( BlendEquationSeparateEXT, FgGLContext *, FgGLenum, FgGLenum ) \
\
    /* GL_EXT_blend_func_separate */ \
    FG_GL_FUNCTION_VOID( BlendFuncSeparateEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
\
    /* GL_EXT_blend_logic_op */ \
\
    /* GL_EXT_blend_minmax */ \
    FG_GL_FUNCTION_VOID( BlendEquationEXT, FgGLContext *, FgGLenum ) \
\
    /* GL_EXT_blend_subtract */ \
\
    /* GL_EXT_clip_volume_hint */ \
\
    /* GL_EXT_cmyka */ \
\
    /* GL_EXT_color_subtable */ \
    FG_GL_FUNCTION_VOID( ColorSubTableEXT, FgGLContext *, FgGLenum, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CopyColorSubTableEXT, FgGLContext *, FgGLenum, FgGLsizei, FgGLint, FgGLint, FgGLsizei ) \
\
    /* GL_EXT_compiled_vertex_array */ \
    FG_GL_FUNCTION_VOID( LockArraysEXT, FgGLContext *, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( UnlockArraysEXT, FgGLContext * ) \
\
    /* GL_EXT_convolution */ \
    FG_GL_FUNCTION_VOID( ConvolutionFilter1DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ConvolutionFilter2DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameterfEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameterfvEXT, FgGLContext *, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameteriEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( ConvolutionParameterivEXT, FgGLContext *, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( CopyConvolutionFilter1DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( CopyConvolutionFilter2DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetConvolutionFilterEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetConvolutionParameterfvEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetConvolutionParameterivEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetSeparableFilterEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLvoid *, FgGLvoid *, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( SeparableFilter2DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid *, const FgGLvoid * ) \
\
    /* GL_EXT_coordinate_frame */ \
    FG_GL_FUNCTION_VOID( Tangent3bEXT, FgGLContext *, FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( Tangent3bvEXT, FgGLContext *, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( Tangent3dEXT, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Tangent3dvEXT, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Tangent3fEXT, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Tangent3fvEXT, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Tangent3iEXT, FgGLContext *, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Tangent3ivEXT, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Tangent3sEXT, FgGLContext *, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( Tangent3svEXT, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( Binormal3bEXT, FgGLContext *, FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( Binormal3bvEXT, FgGLContext *, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( Binormal3dEXT, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( Binormal3dvEXT, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( Binormal3fEXT, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Binormal3fvEXT, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Binormal3iEXT, FgGLContext *, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( Binormal3ivEXT, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( Binormal3sEXT, FgGLContext *, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( Binormal3svEXT, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( TangentPointerEXT, FgGLContext *, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( BinormalPointerEXT, FgGLContext *, FgGLenum, FgGLsizei, const FgGLvoid * ) \
\
    /* GL_EXT_copy_texture */ \
    FG_GL_FUNCTION_VOID( CopyTexImage1DEXT, FgGLContext *, FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLint ) \
    FG_GL_FUNCTION_VOID( CopyTexImage2DEXT, FgGLContext *, FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLint ) \
    FG_GL_FUNCTION_VOID( CopyTexSubImage1DEXT, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( CopyTexSubImage2DEXT, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( CopyTexSubImage3DEXT, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
\
    /* GL_EXT_cull_vertex */ \
    FG_GL_FUNCTION_VOID( CullParameterdvEXT, FgGLContext *, FgGLenum, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( CullParameterfvEXT, FgGLContext *, FgGLenum, FgGLfloat * ) \
\
    /* GL_EXT_depth_bounds_test */ \
    FG_GL_FUNCTION_VOID( DepthBoundsEXT, FgGLContext *, FgGLclampd, FgGLclampd ) \
\
    /* GL_EXT_direct_state_access */ \
    FG_GL_FUNCTION_VOID( MatrixLoadfEXT, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MatrixLoaddEXT, FgGLContext *, FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MatrixMultfEXT, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MatrixMultdEXT, FgGLContext *, FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MatrixLoadIdentityEXT, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MatrixRotatefEXT, FgGLContext *, FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MatrixRotatedEXT, FgGLContext *, FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MatrixScalefEXT, FgGLContext *, FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MatrixScaledEXT, FgGLContext *, FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MatrixTranslatefEXT, FgGLContext *, FgGLenum, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MatrixTranslatedEXT, FgGLContext *, FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MatrixFrustumEXT, FgGLContext *, FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MatrixOrthoEXT, FgGLContext *, FgGLenum, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MatrixPopEXT, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MatrixPushEXT, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( ClientAttribDefaultEXT, FgGLContext *, FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( PushClientAttribDefaultEXT, FgGLContext *, FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( TextureParameterfEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TextureParameterfvEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TextureParameteriEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( TextureParameterivEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TextureImage1DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TextureImage2DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TextureSubImage1DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TextureSubImage2DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CopyTextureImage1DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLint ) \
    FG_GL_FUNCTION_VOID( CopyTextureImage2DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLint ) \
    FG_GL_FUNCTION_VOID( CopyTextureSubImage1DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( CopyTextureSubImage2DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetTextureImageEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetTextureParameterfvEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetTextureParameterivEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetTextureLevelParameterfvEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetTextureLevelParameterivEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( TextureImage3DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TextureSubImage3DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CopyTextureSubImage3DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( BindMultiTextureEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( MultiTexCoordPointerEXT, FgGLContext *, FgGLenum, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( MultiTexEnvfEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MultiTexEnvfvEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultiTexEnviEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiTexEnvivEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexGendEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( MultiTexGendvEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MultiTexGenfEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MultiTexGenfvEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultiTexGeniEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiTexGenivEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetMultiTexEnvfvEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetMultiTexEnvivEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetMultiTexGendvEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetMultiTexGenfvEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetMultiTexGenivEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexParameteriEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiTexParameterivEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexParameterfEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( MultiTexParameterfvEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MultiTexImage1DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( MultiTexImage2DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( MultiTexSubImage1DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( MultiTexSubImage2DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CopyMultiTexImage1DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLint ) \
    FG_GL_FUNCTION_VOID( CopyMultiTexImage2DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLint ) \
    FG_GL_FUNCTION_VOID( CopyMultiTexSubImage1DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( CopyMultiTexSubImage2DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetMultiTexImageEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetMultiTexParameterfvEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetMultiTexParameterivEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetMultiTexLevelParameterfvEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetMultiTexLevelParameterivEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexImage3DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( MultiTexSubImage3DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CopyMultiTexSubImage3DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( EnableClientStateIndexedEXT, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DisableClientStateIndexedEXT, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetFloatIndexedvEXT, FgGLContext *, FgGLenum, FgGLuint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetDoubleIndexedvEXT, FgGLContext *, FgGLenum, FgGLuint, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetPointerIndexedvEXT, FgGLContext *, FgGLenum, FgGLuint, FgGLvoid ** ) \
    FG_GL_FUNCTION_VOID( EnableIndexedEXT, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DisableIndexedEXT, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_NUM( IsEnabledIndexedEXT, FgGLboolean, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetIntegerIndexedvEXT, FgGLContext *, FgGLenum, FgGLuint, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetBooleanIndexedvEXT, FgGLContext *, FgGLenum, FgGLuint, FgGLboolean * ) \
    FG_GL_FUNCTION_VOID( CompressedTextureImage3DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTextureImage2DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTextureImage1DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTextureSubImage3DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTextureSubImage2DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedTextureSubImage1DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetCompressedTextureImageEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedMultiTexImage3DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedMultiTexImage2DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedMultiTexImage1DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLint, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedMultiTexSubImage3DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedMultiTexSubImage2DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( CompressedMultiTexSubImage1DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetCompressedMultiTexImageEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( MatrixLoadTransposefEXT, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MatrixLoadTransposedEXT, FgGLContext *, FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( MatrixMultTransposefEXT, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( MatrixMultTransposedEXT, FgGLContext *, FgGLenum, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( NamedBufferDataEXT, FgGLContext *, FgGLuint, FgGLsizeiptr, const FgGLvoid *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( NamedBufferSubDataEXT, FgGLContext *, FgGLuint, FgGLintptr, FgGLsizeiptr, const FgGLvoid * ) \
    FG_GL_FUNCTION_PTR( MapNamedBufferEXT, void *, FgGLContext *, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_NUM( UnmapNamedBufferEXT, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetNamedBufferParameterivEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetNamedBufferPointervEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLvoid ** ) \
    FG_GL_FUNCTION_VOID( GetNamedBufferSubDataEXT, FgGLContext *, FgGLuint, FgGLintptr, FgGLsizeiptr, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1fEXT, FgGLContext *, FgGLuint, FgGLint, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2fEXT, FgGLContext *, FgGLuint, FgGLint, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3fEXT, FgGLContext *, FgGLuint, FgGLint, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4fEXT, FgGLContext *, FgGLuint, FgGLint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1iEXT, FgGLContext *, FgGLuint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2iEXT, FgGLContext *, FgGLuint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3iEXT, FgGLContext *, FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4iEXT, FgGLContext *, FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1fvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2fvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3fvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4fvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1ivEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2ivEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3ivEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4ivEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2fvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3fvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4fvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x3fvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x2fvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x4fvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x2fvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x4fvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x3fvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TextureBufferEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( MultiTexBufferEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( TextureParameterIivEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TextureParameterIuivEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetTextureParameterIivEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetTextureParameterIuivEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( MultiTexParameterIivEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MultiTexParameterIuivEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetMultiTexParameterIivEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetMultiTexParameterIuivEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1uiEXT, FgGLContext *, FgGLuint, FgGLint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2uiEXT, FgGLContext *, FgGLuint, FgGLint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3uiEXT, FgGLContext *, FgGLuint, FgGLint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4uiEXT, FgGLContext *, FgGLuint, FgGLint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1uivEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2uivEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3uivEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4uivEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameters4fvEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameterI4iEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameterI4ivEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParametersI4ivEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameterI4uiEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameterI4uivEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParametersI4uivEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetNamedProgramLocalParameterIivEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetNamedProgramLocalParameterIuivEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( EnableClientStateiEXT, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DisableClientStateiEXT, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetFloati_vEXT, FgGLContext *, FgGLenum, FgGLuint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetDoublei_vEXT, FgGLContext *, FgGLenum, FgGLuint, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetPointeri_vEXT, FgGLContext *, FgGLenum, FgGLuint, FgGLvoid ** ) \
    FG_GL_FUNCTION_VOID( NamedProgramStringEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameter4dEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameter4dvEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameter4fEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( NamedProgramLocalParameter4fvEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetNamedProgramLocalParameterdvEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetNamedProgramLocalParameterfvEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetNamedProgramivEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetNamedProgramStringEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( NamedRenderbufferStorageEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetNamedRenderbufferParameterivEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( NamedRenderbufferStorageMultisampleEXT, FgGLContext *, FgGLuint, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( NamedRenderbufferStorageMultisampleCoverageEXT, FgGLContext *, FgGLuint, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_NUM( CheckNamedFramebufferStatusEXT, FgGLenum, FgGLContext *, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferTexture1DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferTexture2DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferTexture3DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferRenderbufferEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetNamedFramebufferAttachmentParameterivEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GenerateTextureMipmapEXT, FgGLContext *, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GenerateMultiTexMipmapEXT, FgGLContext *, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( FramebufferDrawBufferEXT, FgGLContext *, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( FramebufferDrawBuffersEXT, FgGLContext *, FgGLuint, FgGLsizei, const FgGLenum * ) \
    FG_GL_FUNCTION_VOID( FramebufferReadBufferEXT, FgGLContext *, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetFramebufferParameterivEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( NamedCopyBufferSubDataEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLintptr, FgGLintptr, FgGLsizeiptr ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferTextureEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferTextureLayerEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferTextureFaceEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, FgGLint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( TextureRenderbufferEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( MultiTexRenderbufferEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexOffsetEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( VertexArrayColorOffsetEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( VertexArrayEdgeFlagOffsetEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( VertexArrayIndexOffsetEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLenum, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( VertexArrayNormalOffsetEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLenum, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( VertexArrayTexCoordOffsetEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( VertexArrayMultiTexCoordOffsetEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( VertexArrayFogCoordOffsetEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLenum, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( VertexArraySecondaryColorOffsetEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribOffsetEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLboolean, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribIOffsetEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( EnableVertexArrayEXT, FgGLContext *, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( DisableVertexArrayEXT, FgGLContext *, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( EnableVertexArrayAttribEXT, FgGLContext *, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DisableVertexArrayAttribEXT, FgGLContext *, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetVertexArrayIntegervEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVertexArrayPointervEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLvoid ** ) \
    FG_GL_FUNCTION_VOID( GetVertexArrayIntegeri_vEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVertexArrayPointeri_vEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLenum, FgGLvoid ** ) \
    FG_GL_FUNCTION_PTR( MapNamedBufferRangeEXT, void *, FgGLContext *, FgGLuint, FgGLintptr, FgGLsizeiptr, FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( FlushMappedNamedBufferRangeEXT, FgGLContext *, FgGLuint, FgGLintptr, FgGLsizeiptr ) \
    FG_GL_FUNCTION_VOID( NamedBufferStorageEXT, FgGLContext *, FgGLuint, FgGLsizeiptr, const void *, FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( ClearNamedBufferDataEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLenum, const void * ) \
    FG_GL_FUNCTION_VOID( ClearNamedBufferSubDataEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLenum, FgGLsizeiptr, FgGLsizeiptr, const void * ) \
    FG_GL_FUNCTION_VOID( NamedFramebufferParameteriEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( GetNamedFramebufferParameterivEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1dEXT, FgGLContext *, FgGLuint, FgGLint, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2dEXT, FgGLContext *, FgGLuint, FgGLint, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3dEXT, FgGLContext *, FgGLuint, FgGLint, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4dEXT, FgGLContext *, FgGLuint, FgGLint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1dvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2dvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3dvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4dvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2dvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3dvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4dvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x3dvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix2x4dvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x2dvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix3x4dvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x2dvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformMatrix4x3dvEXT, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, FgGLboolean, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( TextureBufferRangeEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLenum, FgGLuint, FgGLintptr, FgGLsizeiptr ) \
    FG_GL_FUNCTION_VOID( TextureStorage1DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLsizei, FgGLenum, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( TextureStorage2DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( TextureStorage3DEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( TextureStorage2DMultisampleEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( TextureStorage3DMultisampleEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( VertexArrayBindVertexBufferEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLuint, FgGLintptr, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribFormatEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLboolean, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribIFormatEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribLFormatEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribBindingEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexBindingDivisorEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribLOffsetEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLuint, FgGLint, FgGLenum, FgGLsizei, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( TexturePageCommitmentEXT, FgGLContext *, FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( VertexArrayVertexAttribDivisorEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLuint ) \
\
    /* GL_EXT_draw_buffers2 */ \
    FG_GL_FUNCTION_VOID( ColorMaskIndexedEXT, FgGLContext *, FgGLuint, FgGLboolean, FgGLboolean, FgGLboolean, FgGLboolean ) \
\
    /* GL_EXT_draw_instanced */ \
    FG_GL_FUNCTION_VOID( DrawArraysInstancedEXT, FgGLContext *, FgGLenum, FgGLint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( DrawElementsInstancedEXT, FgGLContext *, FgGLenum, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLsizei ) \
\
    /* GL_EXT_draw_range_elements */ \
    FG_GL_FUNCTION_VOID( DrawRangeElementsEXT, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLsizei, FgGLenum, const FgGLvoid * ) \
\
    /* GL_EXT_fog_coord */ \
    FG_GL_FUNCTION_VOID( FogCoordfEXT, FgGLContext *, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( FogCoordfvEXT, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( FogCoorddEXT, FgGLContext *, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( FogCoorddvEXT, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( FogCoordPointerEXT, FgGLContext *, FgGLenum, FgGLsizei, const FgGLvoid * ) \
\
    /* GL_EXT_framebuffer_blit */ \
    FG_GL_FUNCTION_VOID( BlitFramebufferEXT, FgGLContext *, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLbitfield, FgGLenum ) \
\
    /* GL_EXT_framebuffer_multisample */ \
    FG_GL_FUNCTION_VOID( RenderbufferStorageMultisampleEXT, FgGLContext *, FgGLenum, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei ) \
\
    /* GL_EXT_framebuffer_multisample_blit_scaled */ \
\
    /* GL_EXT_framebuffer_object */ \
    FG_GL_FUNCTION_NUM( IsRenderbufferEXT, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( BindRenderbufferEXT, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteRenderbuffersEXT, FgGLContext *, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenRenderbuffersEXT, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( RenderbufferStorageEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetRenderbufferParameterivEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_NUM( IsFramebufferEXT, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( BindFramebufferEXT, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteFramebuffersEXT, FgGLContext *, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenFramebuffersEXT, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( CheckFramebufferStatusEXT, FgGLenum, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( FramebufferTexture1DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferTexture2DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferTexture3DEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferRenderbufferEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetFramebufferAttachmentParameterivEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GenerateMipmapEXT, FgGLContext *, FgGLenum ) \
\
    /* GL_EXT_framebuffer_sRGB */ \
\
    /* GL_EXT_geometry_shader4 */ \
    FG_GL_FUNCTION_VOID( ProgramParameteriEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint ) \
\
    /* GL_EXT_gpu_program_parameters */ \
    FG_GL_FUNCTION_VOID( ProgramEnvParameters4fvEXT, FgGLContext *, FgGLenum, FgGLuint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameters4fvEXT, FgGLContext *, FgGLenum, FgGLuint, FgGLsizei, const FgGLfloat * ) \
\
    /* GL_EXT_gpu_shader4 */ \
    FG_GL_FUNCTION_VOID( GetUniformuivEXT, FgGLContext *, FgGLuint, FgGLint, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( BindFragDataLocationEXT, FgGLContext *, FgGLuint, FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_NUM( GetFragDataLocationEXT, FgGLint, FgGLContext *, FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( Uniform1uiEXT, FgGLContext *, FgGLint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Uniform2uiEXT, FgGLContext *, FgGLint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Uniform3uiEXT, FgGLContext *, FgGLint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Uniform4uiEXT, FgGLContext *, FgGLint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( Uniform1uivEXT, FgGLContext *, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( Uniform2uivEXT, FgGLContext *, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( Uniform3uivEXT, FgGLContext *, FgGLint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( Uniform4uivEXT, FgGLContext *, FgGLint, FgGLsizei, const FgGLuint * ) \
\
    /* GL_EXT_histogram */ \
    FG_GL_FUNCTION_VOID( GetHistogramEXT, FgGLContext *, FgGLenum, FgGLboolean, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetHistogramParameterfvEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetHistogramParameterivEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetMinmaxEXT, FgGLContext *, FgGLenum, FgGLboolean, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetMinmaxParameterfvEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetMinmaxParameterivEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( HistogramEXT, FgGLContext *, FgGLenum, FgGLsizei, FgGLenum, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( MinmaxEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( ResetHistogramEXT, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( ResetMinmaxEXT, FgGLContext *, FgGLenum ) \
\
    /* GL_EXT_index_array_formats */ \
\
    /* GL_EXT_index_func */ \
    FG_GL_FUNCTION_VOID( IndexFuncEXT, FgGLContext *, FgGLenum, FgGLclampf ) \
\
    /* GL_EXT_index_material */ \
    FG_GL_FUNCTION_VOID( IndexMaterialEXT, FgGLContext *, FgGLenum, FgGLenum ) \
\
    /* GL_EXT_index_texture */ \
\
    /* GL_EXT_light_texture */ \
    FG_GL_FUNCTION_VOID( ApplyTextureEXT, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( TextureLightEXT, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( TextureMaterialEXT, FgGLContext *, FgGLenum, FgGLenum ) \
\
    /* GL_EXT_misc_attribute */ \
\
    /* GL_EXT_multi_draw_arrays */ \
    FG_GL_FUNCTION_VOID( MultiDrawArraysEXT, FgGLContext *, FgGLenum, const FgGLint *, const FgGLsizei *, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( MultiDrawElementsEXT, FgGLContext *, FgGLenum, const FgGLsizei *, FgGLenum, const FgGLvoid *const*, FgGLsizei ) \
\
    /* GL_EXT_multisample */ \
    FG_GL_FUNCTION_VOID( SampleMaskEXT, FgGLContext *, FgGLclampf, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( SamplePatternEXT, FgGLContext *, FgGLenum ) \
\
    /* GL_EXT_packed_depth_stencil */ \
\
    /* GL_EXT_packed_float */ \
\
    /* GL_EXT_packed_pixels */ \
\
    /* GL_EXT_paletted_texture */ \
    FG_GL_FUNCTION_VOID( ColorTableEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetColorTableEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetColorTableParameterivEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetColorTableParameterfvEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
\
    /* GL_EXT_pixel_buffer_object */ \
\
    /* GL_EXT_pixel_transform */ \
    FG_GL_FUNCTION_VOID( PixelTransformParameteriEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( PixelTransformParameterfEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( PixelTransformParameterivEXT, FgGLContext *, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( PixelTransformParameterfvEXT, FgGLContext *, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetPixelTransformParameterivEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetPixelTransformParameterfvEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
\
    /* GL_EXT_pixel_transform_color_table */ \
\
    /* GL_EXT_point_parameters */ \
    FG_GL_FUNCTION_VOID( PointParameterfEXT, FgGLContext *, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( PointParameterfvEXT, FgGLContext *, FgGLenum, const FgGLfloat * ) \
\
    /* GL_EXT_polygon_offset */ \
    FG_GL_FUNCTION_VOID( PolygonOffsetEXT, FgGLContext *, FgGLfloat, FgGLfloat ) \
\
    /* GL_EXT_provoking_vertex */ \
    FG_GL_FUNCTION_VOID( ProvokingVertexEXT, FgGLContext *, FgGLenum ) \
\
    /* GL_EXT_rescale_normal */ \
\
    /* GL_EXT_secondary_color */ \
    FG_GL_FUNCTION_VOID( SecondaryColor3bEXT, FgGLContext *, FgGLbyte, FgGLbyte, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3bvEXT, FgGLContext *, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3dEXT, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3dvEXT, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3fEXT, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3fvEXT, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3iEXT, FgGLContext *, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3ivEXT, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3sEXT, FgGLContext *, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3svEXT, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3ubEXT, FgGLContext *, FgGLubyte, FgGLubyte, FgGLubyte ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3ubvEXT, FgGLContext *, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3uiEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3uivEXT, FgGLContext *, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3usEXT, FgGLContext *, FgGLushort, FgGLushort, FgGLushort ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3usvEXT, FgGLContext *, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( SecondaryColorPointerEXT, FgGLContext *, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
\
    /* GL_EXT_separate_shader_objects */ \
    FG_GL_FUNCTION_VOID( UseShaderProgramEXT, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ActiveProgramEXT, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_NUM( CreateShaderProgramEXT, FgGLuint, FgGLContext *, FgGLenum, const FgGLchar * ) \
\
    /* GL_EXT_separate_specular_color */ \
\
    /* GL_EXT_shader_image_load_store */ \
    FG_GL_FUNCTION_VOID( BindImageTextureEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLint, FgGLboolean, FgGLint, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( MemoryBarrierEXT, FgGLContext *, FgGLbitfield ) \
\
    /* GL_EXT_shadow_funcs */ \
\
    /* GL_EXT_shared_texture_palette */ \
\
    /* GL_EXT_stencil_clear_tag */ \
    FG_GL_FUNCTION_VOID( StencilClearTagEXT, FgGLContext *, FgGLsizei, FgGLuint ) \
\
    /* GL_EXT_stencil_two_side */ \
    FG_GL_FUNCTION_VOID( ActiveStencilFaceEXT, FgGLContext *, FgGLenum ) \
\
    /* GL_EXT_stencil_wrap */ \
\
    /* GL_EXT_subtexture */ \
    FG_GL_FUNCTION_VOID( TexSubImage1DEXT, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TexSubImage2DEXT, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
\
    /* GL_EXT_texture */ \
\
    /* GL_EXT_texture3D */ \
    FG_GL_FUNCTION_VOID( TexImage3DEXT, FgGLContext *, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TexSubImage3DEXT, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
\
    /* GL_EXT_texture_array */ \
\
    /* GL_EXT_texture_buffer_object */ \
    FG_GL_FUNCTION_VOID( TexBufferEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLuint ) \
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
    FG_GL_FUNCTION_VOID( TexParameterIivEXT, FgGLContext *, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( TexParameterIuivEXT, FgGLContext *, FgGLenum, FgGLenum, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetTexParameterIivEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetTexParameterIuivEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ClearColorIiEXT, FgGLContext *, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( ClearColorIuiEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
\
    /* GL_EXT_texture_lod_bias */ \
\
    /* GL_EXT_texture_mirror_clamp */ \
\
    /* GL_EXT_texture_object */ \
    FG_GL_FUNCTION_NUM( AreTexturesResidentEXT, FgGLboolean, FgGLContext *, FgGLsizei, const FgGLuint *, FgGLboolean * ) \
    FG_GL_FUNCTION_VOID( BindTextureEXT, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteTexturesEXT, FgGLContext *, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenTexturesEXT, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsTextureEXT, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( PrioritizeTexturesEXT, FgGLContext *, FgGLsizei, const FgGLuint *, const FgGLclampf * ) \
\
    /* GL_EXT_texture_perturb_normal */ \
    FG_GL_FUNCTION_VOID( TextureNormalEXT, FgGLContext *, FgGLenum ) \
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
    FG_GL_FUNCTION_VOID( GetQueryObjecti64vEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint64 * ) \
    FG_GL_FUNCTION_VOID( GetQueryObjectui64vEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLuint64 * ) \
\
    /* GL_EXT_transform_feedback */ \
    FG_GL_FUNCTION_VOID( BeginTransformFeedbackEXT, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( EndTransformFeedbackEXT, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( BindBufferRangeEXT, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLintptr, FgGLsizeiptr ) \
    FG_GL_FUNCTION_VOID( BindBufferOffsetEXT, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( BindBufferBaseEXT, FgGLContext *, FgGLenum, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( TransformFeedbackVaryingsEXT, FgGLContext *, FgGLuint, FgGLsizei, const FgGLchar *const*, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetTransformFeedbackVaryingEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLsizei *, FgGLenum *, FgGLchar * ) \
\
    /* GL_EXT_vertex_array */ \
    FG_GL_FUNCTION_VOID( ArrayElementEXT, FgGLContext *, FgGLint ) \
    FG_GL_FUNCTION_VOID( ColorPointerEXT, FgGLContext *, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( DrawArraysEXT, FgGLContext *, FgGLenum, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( EdgeFlagPointerEXT, FgGLContext *, FgGLsizei, FgGLsizei, const FgGLboolean * ) \
    FG_GL_FUNCTION_VOID( GetPointervEXT, FgGLContext *, FgGLenum, FgGLvoid ** ) \
    FG_GL_FUNCTION_VOID( IndexPointerEXT, FgGLContext *, FgGLenum, FgGLsizei, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( NormalPointerEXT, FgGLContext *, FgGLenum, FgGLsizei, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TexCoordPointerEXT, FgGLContext *, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( VertexPointerEXT, FgGLContext *, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, const FgGLvoid * ) \
\
    /* GL_EXT_vertex_array_bgra */ \
\
    /* GL_EXT_vertex_attrib_64bit */ \
    FG_GL_FUNCTION_VOID( VertexAttribL1dEXT, FgGLContext *, FgGLuint, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2dEXT, FgGLContext *, FgGLuint, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3dEXT, FgGLContext *, FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4dEXT, FgGLContext *, FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1dvEXT, FgGLContext *, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2dvEXT, FgGLContext *, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3dvEXT, FgGLContext *, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4dvEXT, FgGLContext *, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribLPointerEXT, FgGLContext *, FgGLuint, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribLdvEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLdouble * ) \
\
    /* GL_EXT_vertex_shader */ \
    FG_GL_FUNCTION_VOID( BeginVertexShaderEXT, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( EndVertexShaderEXT, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( BindVertexShaderEXT, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_NUM( GenVertexShadersEXT, FgGLuint, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteVertexShaderEXT, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ShaderOp1EXT, FgGLContext *, FgGLenum, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ShaderOp2EXT, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ShaderOp3EXT, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( SwizzleEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( WriteMaskEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( InsertComponentEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ExtractComponentEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_NUM( GenSymbolsEXT, FgGLuint, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( SetInvariantEXT, FgGLContext *, FgGLuint, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( SetLocalConstantEXT, FgGLContext *, FgGLuint, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( VariantbvEXT, FgGLContext *, FgGLuint, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( VariantsvEXT, FgGLContext *, FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VariantivEXT, FgGLContext *, FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VariantfvEXT, FgGLContext *, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VariantdvEXT, FgGLContext *, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VariantubvEXT, FgGLContext *, FgGLuint, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( VariantusvEXT, FgGLContext *, FgGLuint, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( VariantuivEXT, FgGLContext *, FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VariantPointerEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLuint, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( EnableVariantClientStateEXT, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DisableVariantClientStateEXT, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_NUM( BindLightParameterEXT, FgGLuint, FgGLContext *, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_NUM( BindMaterialParameterEXT, FgGLuint, FgGLContext *, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_NUM( BindTexGenParameterEXT, FgGLuint, FgGLContext *, FgGLenum, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_NUM( BindTextureUnitParameterEXT, FgGLuint, FgGLContext *, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_NUM( BindParameterEXT, FgGLuint, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_NUM( IsVariantEnabledEXT, FgGLboolean, FgGLContext *, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetVariantBooleanvEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLboolean * ) \
    FG_GL_FUNCTION_VOID( GetVariantIntegervEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVariantFloatvEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetVariantPointervEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLvoid ** ) \
    FG_GL_FUNCTION_VOID( GetInvariantBooleanvEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLboolean * ) \
    FG_GL_FUNCTION_VOID( GetInvariantIntegervEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetInvariantFloatvEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetLocalConstantBooleanvEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLboolean * ) \
    FG_GL_FUNCTION_VOID( GetLocalConstantIntegervEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetLocalConstantFloatvEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLfloat * ) \
\
    /* GL_EXT_vertex_weighting */ \
    FG_GL_FUNCTION_VOID( VertexWeightfEXT, FgGLContext *, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexWeightfvEXT, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexWeightPointerEXT, FgGLContext *, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
\
    /* GL_EXT_x11_sync_object */ \
    FG_GL_FUNCTION_PTR( ImportSyncEXT, FgGLsync, FgGLContext *, FgGLenum, FgGLintptr, FgGLbitfield ) \
\
    /* GL_GREMEDY_frame_terminator */ \
    FG_GL_FUNCTION_VOID( FrameTerminatorGREMEDY, FgGLContext * ) \
\
    /* GL_GREMEDY_string_marker */ \
    FG_GL_FUNCTION_VOID( StringMarkerGREMEDY, FgGLContext *, FgGLsizei, const FgGLvoid * ) \
\
    /* GL_HP_convolution_border_modes */ \
\
    /* GL_HP_image_transform */ \
    FG_GL_FUNCTION_VOID( ImageTransformParameteriHP, FgGLContext *, FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( ImageTransformParameterfHP, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ImageTransformParameterivHP, FgGLContext *, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ImageTransformParameterfvHP, FgGLContext *, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetImageTransformParameterivHP, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetImageTransformParameterfvHP, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
\
    /* GL_HP_occlusion_test */ \
\
    /* GL_HP_texture_lighting */ \
\
    /* GL_IBM_cull_vertex */ \
\
    /* GL_IBM_multimode_draw_arrays */ \
    FG_GL_FUNCTION_VOID( MultiModeDrawArraysIBM, FgGLContext *, const FgGLenum *, const FgGLint *, const FgGLsizei *, FgGLsizei, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiModeDrawElementsIBM, FgGLContext *, const FgGLenum *, const FgGLsizei *, FgGLenum, const FgGLvoid *const*, FgGLsizei, FgGLint ) \
\
    /* GL_IBM_rasterpos_clip */ \
\
    /* GL_IBM_static_data */ \
    FG_GL_FUNCTION_VOID( FlushStaticDataIBM, FgGLContext *, FgGLenum ) \
\
    /* GL_IBM_texture_mirrored_repeat */ \
\
    /* GL_IBM_vertex_array_lists */ \
    FG_GL_FUNCTION_VOID( ColorPointerListIBM, FgGLContext *, FgGLint, FgGLenum, FgGLint, const FgGLvoid **, FgGLint ) \
    FG_GL_FUNCTION_VOID( SecondaryColorPointerListIBM, FgGLContext *, FgGLint, FgGLenum, FgGLint, const FgGLvoid **, FgGLint ) \
    FG_GL_FUNCTION_VOID( EdgeFlagPointerListIBM, FgGLContext *, FgGLint, const FgGLboolean **, FgGLint ) \
    FG_GL_FUNCTION_VOID( FogCoordPointerListIBM, FgGLContext *, FgGLenum, FgGLint, const FgGLvoid **, FgGLint ) \
    FG_GL_FUNCTION_VOID( IndexPointerListIBM, FgGLContext *, FgGLenum, FgGLint, const FgGLvoid **, FgGLint ) \
    FG_GL_FUNCTION_VOID( NormalPointerListIBM, FgGLContext *, FgGLenum, FgGLint, const FgGLvoid **, FgGLint ) \
    FG_GL_FUNCTION_VOID( TexCoordPointerListIBM, FgGLContext *, FgGLint, FgGLenum, FgGLint, const FgGLvoid **, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexPointerListIBM, FgGLContext *, FgGLint, FgGLenum, FgGLint, const FgGLvoid **, FgGLint ) \
\
    /* GL_INGR_blend_func_separate */ \
    FG_GL_FUNCTION_VOID( BlendFuncSeparateINGR, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
\
    /* GL_INGR_color_clamp */ \
\
    /* GL_INGR_interlace_read */ \
\
    /* GL_INTEL_map_texture */ \
    FG_GL_FUNCTION_VOID( SyncTextureINTEL, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( UnmapTexture2DINTEL, FgGLContext *, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_PTR( MapTexture2DINTEL, void *, FgGLContext *, FgGLuint, FgGLint, FgGLbitfield, const FgGLint *, const FgGLenum * ) \
\
    /* GL_INTEL_parallel_arrays */ \
    FG_GL_FUNCTION_VOID( VertexPointervINTEL, FgGLContext *, FgGLint, FgGLenum, const FgGLvoid ** ) \
    FG_GL_FUNCTION_VOID( NormalPointervINTEL, FgGLContext *, FgGLenum, const FgGLvoid ** ) \
    FG_GL_FUNCTION_VOID( ColorPointervINTEL, FgGLContext *, FgGLint, FgGLenum, const FgGLvoid ** ) \
    FG_GL_FUNCTION_VOID( TexCoordPointervINTEL, FgGLContext *, FgGLint, FgGLenum, const FgGLvoid ** ) \
\
    /* GL_MESAX_texture_stack */ \
\
    /* GL_MESA_pack_invert */ \
\
    /* GL_MESA_resize_buffers */ \
    FG_GL_FUNCTION_VOID( ResizeBuffersMESA, FgGLContext * ) \
\
    /* GL_MESA_window_pos */ \
    FG_GL_FUNCTION_VOID( WindowPos2dMESA, FgGLContext *, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( WindowPos2dvMESA, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( WindowPos2fMESA, FgGLContext *, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( WindowPos2fvMESA, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( WindowPos2iMESA, FgGLContext *, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( WindowPos2ivMESA, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( WindowPos2sMESA, FgGLContext *, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( WindowPos2svMESA, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( WindowPos3dMESA, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( WindowPos3dvMESA, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( WindowPos3fMESA, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( WindowPos3fvMESA, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( WindowPos3iMESA, FgGLContext *, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( WindowPos3ivMESA, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( WindowPos3sMESA, FgGLContext *, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( WindowPos3svMESA, FgGLContext *, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( WindowPos4dMESA, FgGLContext *, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( WindowPos4dvMESA, FgGLContext *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( WindowPos4fMESA, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( WindowPos4fvMESA, FgGLContext *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( WindowPos4iMESA, FgGLContext *, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( WindowPos4ivMESA, FgGLContext *, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( WindowPos4sMESA, FgGLContext *, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( WindowPos4svMESA, FgGLContext *, const FgGLshort * ) \
\
    /* GL_MESA_ycbcr_texture */ \
\
    /* GL_NVX_conditional_render */ \
    FG_GL_FUNCTION_VOID( BeginConditionalRenderNVX, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( EndConditionalRenderNVX, FgGLContext * ) \
\
    /* GL_NV_bindless_multi_draw_indirect */ \
    FG_GL_FUNCTION_VOID( MultiDrawArraysIndirectBindlessNV, FgGLContext *, FgGLenum, const FgGLvoid *, FgGLsizei, FgGLsizei, FgGLint ) \
    FG_GL_FUNCTION_VOID( MultiDrawElementsIndirectBindlessNV, FgGLContext *, FgGLenum, FgGLenum, const FgGLvoid *, FgGLsizei, FgGLsizei, FgGLint ) \
\
    /* GL_NV_bindless_texture */ \
    FG_GL_FUNCTION_NUM( GetTextureHandleNV, FgGLuint64, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_NUM( GetTextureSamplerHandleNV, FgGLuint64, FgGLContext *, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( MakeTextureHandleResidentNV, FgGLContext *, FgGLuint64 ) \
    FG_GL_FUNCTION_VOID( MakeTextureHandleNonResidentNV, FgGLContext *, FgGLuint64 ) \
    FG_GL_FUNCTION_NUM( GetImageHandleNV, FgGLuint64, FgGLContext *, FgGLuint, FgGLint, FgGLboolean, FgGLint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MakeImageHandleResidentNV, FgGLContext *, FgGLuint64, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MakeImageHandleNonResidentNV, FgGLContext *, FgGLuint64 ) \
    FG_GL_FUNCTION_VOID( UniformHandleui64NV, FgGLContext *, FgGLint, FgGLuint64 ) \
    FG_GL_FUNCTION_VOID( UniformHandleui64vNV, FgGLContext *, FgGLint, FgGLsizei, const FgGLuint64 * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformHandleui64NV, FgGLContext *, FgGLuint, FgGLint, FgGLuint64 ) \
    FG_GL_FUNCTION_VOID( ProgramUniformHandleui64vNV, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLuint64 * ) \
    FG_GL_FUNCTION_NUM( IsTextureHandleResidentNV, FgGLboolean, FgGLContext *, FgGLuint64 ) \
    FG_GL_FUNCTION_NUM( IsImageHandleResidentNV, FgGLboolean, FgGLContext *, FgGLuint64 ) \
\
    /* GL_NV_blend_equation_advanced */ \
    FG_GL_FUNCTION_VOID( BlendParameteriNV, FgGLContext *, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( BlendBarrierNV, FgGLContext * ) \
\
    /* GL_NV_blend_equation_advanced_coherent */ \
\
    /* GL_NV_blend_square */ \
\
    /* GL_NV_compute_program5 */ \
\
    /* GL_NV_conditional_render */ \
    FG_GL_FUNCTION_VOID( BeginConditionalRenderNV, FgGLContext *, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( EndConditionalRenderNV, FgGLContext * ) \
\
    /* GL_NV_copy_depth_to_color */ \
\
    /* GL_NV_copy_image */ \
    FG_GL_FUNCTION_VOID( CopyImageSubDataNV, FgGLContext *, FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLuint, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei ) \
\
    /* GL_NV_deep_texture3D */ \
\
    /* GL_NV_depth_buffer_float */ \
    FG_GL_FUNCTION_VOID( DepthRangedNV, FgGLContext *, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ClearDepthdNV, FgGLContext *, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( DepthBoundsdNV, FgGLContext *, FgGLdouble, FgGLdouble ) \
\
    /* GL_NV_depth_clamp */ \
\
    /* GL_NV_draw_texture */ \
    FG_GL_FUNCTION_VOID( DrawTextureNV, FgGLContext *, FgGLuint, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
\
    /* GL_NV_evaluators */ \
    FG_GL_FUNCTION_VOID( MapControlPointsNV, FgGLContext *, FgGLenum, FgGLuint, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLint, FgGLboolean, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( MapParameterivNV, FgGLContext *, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( MapParameterfvNV, FgGLContext *, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetMapControlPointsNV, FgGLContext *, FgGLenum, FgGLuint, FgGLenum, FgGLsizei, FgGLsizei, FgGLboolean, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetMapParameterivNV, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetMapParameterfvNV, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetMapAttribParameterivNV, FgGLContext *, FgGLenum, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetMapAttribParameterfvNV, FgGLContext *, FgGLenum, FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( EvalMapsNV, FgGLContext *, FgGLenum, FgGLenum ) \
\
    /* GL_NV_explicit_multisample */ \
    FG_GL_FUNCTION_VOID( GetMultisamplefvNV, FgGLContext *, FgGLenum, FgGLuint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( SampleMaskIndexedNV, FgGLContext *, FgGLuint, FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( TexRenderbufferNV, FgGLContext *, FgGLenum, FgGLuint ) \
\
    /* GL_NV_fence */ \
    FG_GL_FUNCTION_VOID( DeleteFencesNV, FgGLContext *, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenFencesNV, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsFenceNV, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_NUM( TestFenceNV, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetFenceivNV, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( FinishFenceNV, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( SetFenceNV, FgGLContext *, FgGLuint, FgGLenum ) \
\
    /* GL_NV_float_buffer */ \
\
    /* GL_NV_fog_distance */ \
\
    /* GL_NV_fragment_program */ \
    FG_GL_FUNCTION_VOID( ProgramNamedParameter4fNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLubyte *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramNamedParameter4fvNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLubyte *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramNamedParameter4dNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLubyte *, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramNamedParameter4dvNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLubyte *, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetProgramNamedParameterfvNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLubyte *, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetProgramNamedParameterdvNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLubyte *, FgGLdouble * ) \
\
    /* GL_NV_fragment_program2 */ \
\
    /* GL_NV_fragment_program4 */ \
\
    /* GL_NV_fragment_program_option */ \
\
    /* GL_NV_framebuffer_multisample_coverage */ \
    FG_GL_FUNCTION_VOID( RenderbufferStorageMultisampleCoverageNV, FgGLContext *, FgGLenum, FgGLsizei, FgGLsizei, FgGLenum, FgGLsizei, FgGLsizei ) \
\
    /* GL_NV_geometry_program4 */ \
    FG_GL_FUNCTION_VOID( ProgramVertexLimitNV, FgGLContext *, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferTextureEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferTextureLayerEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( FramebufferTextureFaceEXT, FgGLContext *, FgGLenum, FgGLenum, FgGLuint, FgGLint, FgGLenum ) \
\
    /* GL_NV_geometry_shader4 */ \
\
    /* GL_NV_gpu_program4 */ \
    FG_GL_FUNCTION_VOID( ProgramLocalParameterI4iNV, FgGLContext *, FgGLenum, FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameterI4ivNV, FgGLContext *, FgGLenum, FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParametersI4ivNV, FgGLContext *, FgGLenum, FgGLuint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameterI4uiNV, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParameterI4uivNV, FgGLContext *, FgGLenum, FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramLocalParametersI4uivNV, FgGLContext *, FgGLenum, FgGLuint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameterI4iNV, FgGLContext *, FgGLenum, FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameterI4ivNV, FgGLContext *, FgGLenum, FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParametersI4ivNV, FgGLContext *, FgGLenum, FgGLuint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameterI4uiNV, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParameterI4uivNV, FgGLContext *, FgGLenum, FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ProgramEnvParametersI4uivNV, FgGLContext *, FgGLenum, FgGLuint, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetProgramLocalParameterIivNV, FgGLContext *, FgGLenum, FgGLuint, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetProgramLocalParameterIuivNV, FgGLContext *, FgGLenum, FgGLuint, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetProgramEnvParameterIivNV, FgGLContext *, FgGLenum, FgGLuint, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetProgramEnvParameterIuivNV, FgGLContext *, FgGLenum, FgGLuint, FgGLuint * ) \
\
    /* GL_NV_gpu_program5 */ \
    FG_GL_FUNCTION_VOID( ProgramSubroutineParametersuivNV, FgGLContext *, FgGLenum, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetProgramSubroutineParameteruivNV, FgGLContext *, FgGLenum, FgGLuint, FgGLuint * ) \
\
    /* GL_NV_gpu_program5_mem_extended */ \
\
    /* GL_NV_gpu_shader5 */ \
    FG_GL_FUNCTION_VOID( Uniform1i64NV, FgGLContext *, FgGLint, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( Uniform2i64NV, FgGLContext *, FgGLint, FgGLint64EXT, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( Uniform3i64NV, FgGLContext *, FgGLint, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( Uniform4i64NV, FgGLContext *, FgGLint, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( Uniform1i64vNV, FgGLContext *, FgGLint, FgGLsizei, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( Uniform2i64vNV, FgGLContext *, FgGLint, FgGLsizei, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( Uniform3i64vNV, FgGLContext *, FgGLint, FgGLsizei, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( Uniform4i64vNV, FgGLContext *, FgGLint, FgGLsizei, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( Uniform1ui64NV, FgGLContext *, FgGLint, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( Uniform2ui64NV, FgGLContext *, FgGLint, FgGLuint64EXT, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( Uniform3ui64NV, FgGLContext *, FgGLint, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( Uniform4ui64NV, FgGLContext *, FgGLint, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( Uniform1ui64vNV, FgGLContext *, FgGLint, FgGLsizei, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( Uniform2ui64vNV, FgGLContext *, FgGLint, FgGLsizei, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( Uniform3ui64vNV, FgGLContext *, FgGLint, FgGLsizei, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( Uniform4ui64vNV, FgGLContext *, FgGLint, FgGLsizei, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( GetUniformi64vNV, FgGLContext *, FgGLuint, FgGLint, FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1i64NV, FgGLContext *, FgGLuint, FgGLint, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2i64NV, FgGLContext *, FgGLuint, FgGLint, FgGLint64EXT, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3i64NV, FgGLContext *, FgGLuint, FgGLint, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4i64NV, FgGLContext *, FgGLuint, FgGLint, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1i64vNV, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2i64vNV, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3i64vNV, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4i64vNV, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1ui64NV, FgGLContext *, FgGLuint, FgGLint, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2ui64NV, FgGLContext *, FgGLuint, FgGLint, FgGLuint64EXT, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3ui64NV, FgGLContext *, FgGLuint, FgGLint, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4ui64NV, FgGLContext *, FgGLuint, FgGLint, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( ProgramUniform1ui64vNV, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform2ui64vNV, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform3ui64vNV, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( ProgramUniform4ui64vNV, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLuint64EXT * ) \
\
    /* GL_NV_half_float */ \
    FG_GL_FUNCTION_VOID( Vertex2hNV, FgGLContext *, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( Vertex2hvNV, FgGLContext *, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( Vertex3hNV, FgGLContext *, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( Vertex3hvNV, FgGLContext *, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( Vertex4hNV, FgGLContext *, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( Vertex4hvNV, FgGLContext *, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( Normal3hNV, FgGLContext *, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( Normal3hvNV, FgGLContext *, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( Color3hNV, FgGLContext *, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( Color3hvNV, FgGLContext *, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( Color4hNV, FgGLContext *, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( Color4hvNV, FgGLContext *, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( TexCoord1hNV, FgGLContext *, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( TexCoord1hvNV, FgGLContext *, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( TexCoord2hNV, FgGLContext *, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( TexCoord2hvNV, FgGLContext *, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( TexCoord3hNV, FgGLContext *, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( TexCoord3hvNV, FgGLContext *, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( TexCoord4hNV, FgGLContext *, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( TexCoord4hvNV, FgGLContext *, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1hNV, FgGLContext *, FgGLenum, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord1hvNV, FgGLContext *, FgGLenum, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2hNV, FgGLContext *, FgGLenum, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord2hvNV, FgGLContext *, FgGLenum, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3hNV, FgGLContext *, FgGLenum, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord3hvNV, FgGLContext *, FgGLenum, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4hNV, FgGLContext *, FgGLenum, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( MultiTexCoord4hvNV, FgGLContext *, FgGLenum, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( FogCoordhNV, FgGLContext *, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( FogCoordhvNV, FgGLContext *, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3hNV, FgGLContext *, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( SecondaryColor3hvNV, FgGLContext *, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( VertexWeighthNV, FgGLContext *, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( VertexWeighthvNV, FgGLContext *, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1hNV, FgGLContext *, FgGLuint, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1hvNV, FgGLContext *, FgGLuint, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2hNV, FgGLContext *, FgGLuint, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2hvNV, FgGLContext *, FgGLuint, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3hNV, FgGLContext *, FgGLuint, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3hvNV, FgGLContext *, FgGLuint, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4hNV, FgGLContext *, FgGLuint, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV, FgGLhalfNV ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4hvNV, FgGLContext *, FgGLuint, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs1hvNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs2hvNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs3hvNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLhalfNV * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs4hvNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLhalfNV * ) \
\
    /* GL_NV_light_max_exponent */ \
\
    /* GL_NV_multisample_coverage */ \
\
    /* GL_NV_multisample_filter_hint */ \
\
    /* GL_NV_occlusion_query */ \
    FG_GL_FUNCTION_VOID( GenOcclusionQueriesNV, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( DeleteOcclusionQueriesNV, FgGLContext *, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsOcclusionQueryNV, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( BeginOcclusionQueryNV, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( EndOcclusionQueryNV, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( GetOcclusionQueryivNV, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetOcclusionQueryuivNV, FgGLContext *, FgGLuint, FgGLenum, FgGLuint * ) \
\
    /* GL_NV_packed_depth_stencil */ \
\
    /* GL_NV_parameter_buffer_object */ \
    FG_GL_FUNCTION_VOID( ProgramBufferParametersfvNV, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramBufferParametersIivNV, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLsizei, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( ProgramBufferParametersIuivNV, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLsizei, const FgGLuint * ) \
\
    /* GL_NV_parameter_buffer_object2 */ \
\
    /* GL_NV_path_rendering */ \
    FG_GL_FUNCTION_NUM( GenPathsNV, FgGLuint, FgGLContext *, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( DeletePathsNV, FgGLContext *, FgGLuint, FgGLsizei ) \
    FG_GL_FUNCTION_NUM( IsPathNV, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( PathCommandsNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLubyte *, FgGLsizei, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( PathCoordsNV, FgGLContext *, FgGLuint, FgGLsizei, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( PathSubCommandsNV, FgGLContext *, FgGLuint, FgGLsizei, FgGLsizei, FgGLsizei, const FgGLubyte *, FgGLsizei, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( PathSubCoordsNV, FgGLContext *, FgGLuint, FgGLsizei, FgGLsizei, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( PathStringNV, FgGLContext *, FgGLuint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( PathGlyphsNV, FgGLContext *, FgGLuint, FgGLenum, const FgGLvoid *, FgGLbitfield, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLenum, FgGLuint, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( PathGlyphRangeNV, FgGLContext *, FgGLuint, FgGLenum, const FgGLvoid *, FgGLbitfield, FgGLuint, FgGLsizei, FgGLenum, FgGLuint, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( WeightPathsNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLuint *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( CopyPathNV, FgGLContext *, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( InterpolatePathsNV, FgGLContext *, FgGLuint, FgGLuint, FgGLuint, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TransformPathNV, FgGLContext *, FgGLuint, FgGLuint, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( PathParameterivNV, FgGLContext *, FgGLuint, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( PathParameteriNV, FgGLContext *, FgGLuint, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( PathParameterfvNV, FgGLContext *, FgGLuint, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( PathParameterfNV, FgGLContext *, FgGLuint, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( PathDashArrayNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( PathStencilFuncNV, FgGLContext *, FgGLenum, FgGLint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( PathStencilDepthOffsetNV, FgGLContext *, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( StencilFillPathNV, FgGLContext *, FgGLuint, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( StencilStrokePathNV, FgGLContext *, FgGLuint, FgGLint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( StencilFillPathInstancedNV, FgGLContext *, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLuint, FgGLenum, FgGLuint, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( StencilStrokePathInstancedNV, FgGLContext *, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLuint, FgGLint, FgGLuint, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( PathCoverDepthFuncNV, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( PathColorGenNV, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( PathTexGenNV, FgGLContext *, FgGLenum, FgGLenum, FgGLint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( PathFogGenNV, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( CoverFillPathNV, FgGLContext *, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( CoverStrokePathNV, FgGLContext *, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( CoverFillPathInstancedNV, FgGLContext *, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLuint, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( CoverStrokePathInstancedNV, FgGLContext *, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLuint, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetPathParameterivNV, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetPathParameterfvNV, FgGLContext *, FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetPathCommandsNV, FgGLContext *, FgGLuint, FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( GetPathCoordsNV, FgGLContext *, FgGLuint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetPathDashArrayNV, FgGLContext *, FgGLuint, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetPathMetricsNV, FgGLContext *, FgGLbitfield, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLuint, FgGLsizei, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetPathMetricRangeNV, FgGLContext *, FgGLbitfield, FgGLuint, FgGLsizei, FgGLsizei, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetPathSpacingNV, FgGLContext *, FgGLenum, FgGLsizei, FgGLenum, const FgGLvoid *, FgGLuint, FgGLfloat, FgGLfloat, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetPathColorGenivNV, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetPathColorGenfvNV, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetPathTexGenivNV, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetPathTexGenfvNV, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_NUM( IsPointInFillPathNV, FgGLboolean, FgGLContext *, FgGLuint, FgGLuint, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_NUM( IsPointInStrokePathNV, FgGLboolean, FgGLContext *, FgGLuint, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_NUM( GetPathLengthNV, FgGLfloat, FgGLContext *, FgGLuint, FgGLsizei, FgGLsizei ) \
    FG_GL_FUNCTION_NUM( PointAlongPathNV, FgGLboolean, FgGLContext *, FgGLuint, FgGLsizei, FgGLsizei, FgGLfloat, FgGLfloat *, FgGLfloat *, FgGLfloat *, FgGLfloat * ) \
\
    /* GL_NV_pixel_data_range */ \
    FG_GL_FUNCTION_VOID( PixelDataRangeNV, FgGLContext *, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( FlushPixelDataRangeNV, FgGLContext *, FgGLenum ) \
\
    /* GL_NV_point_sprite */ \
    FG_GL_FUNCTION_VOID( PointParameteriNV, FgGLContext *, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( PointParameterivNV, FgGLContext *, FgGLenum, const FgGLint * ) \
\
    /* GL_NV_present_video */ \
    FG_GL_FUNCTION_VOID( PresentFrameKeyedNV, FgGLContext *, FgGLuint, FgGLuint64EXT, FgGLuint, FgGLuint, FgGLenum, FgGLenum, FgGLuint, FgGLuint, FgGLenum, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( PresentFrameDualFillNV, FgGLContext *, FgGLuint, FgGLuint64EXT, FgGLuint, FgGLuint, FgGLenum, FgGLenum, FgGLuint, FgGLenum, FgGLuint, FgGLenum, FgGLuint, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetVideoivNV, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVideouivNV, FgGLContext *, FgGLuint, FgGLenum, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetVideoi64vNV, FgGLContext *, FgGLuint, FgGLenum, FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( GetVideoui64vNV, FgGLContext *, FgGLuint, FgGLenum, FgGLuint64EXT * ) \
\
    /* GL_NV_primitive_restart */ \
    FG_GL_FUNCTION_VOID( PrimitiveRestartNV, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( PrimitiveRestartIndexNV, FgGLContext *, FgGLuint ) \
\
    /* GL_NV_register_combiners */ \
    FG_GL_FUNCTION_VOID( CombinerParameterfvNV, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( CombinerParameterfNV, FgGLContext *, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( CombinerParameterivNV, FgGLContext *, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( CombinerParameteriNV, FgGLContext *, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( CombinerInputNV, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( CombinerOutputNV, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLboolean, FgGLboolean, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( FinalCombinerInputNV, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( GetCombinerInputParameterfvNV, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetCombinerInputParameterivNV, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetCombinerOutputParameterfvNV, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetCombinerOutputParameterivNV, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetFinalCombinerInputParameterfvNV, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetFinalCombinerInputParameterivNV, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
\
    /* GL_NV_register_combiners2 */ \
    FG_GL_FUNCTION_VOID( CombinerStageParameterfvNV, FgGLContext *, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetCombinerStageParameterfvNV, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
\
    /* GL_NV_shader_atomic_counters */ \
\
    /* GL_NV_shader_atomic_float */ \
\
    /* GL_NV_shader_buffer_load */ \
    FG_GL_FUNCTION_VOID( MakeBufferResidentNV, FgGLContext *, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MakeBufferNonResidentNV, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_NUM( IsBufferResidentNV, FgGLboolean, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MakeNamedBufferResidentNV, FgGLContext *, FgGLuint, FgGLenum ) \
    FG_GL_FUNCTION_VOID( MakeNamedBufferNonResidentNV, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_NUM( IsNamedBufferResidentNV, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetBufferParameterui64vNV, FgGLContext *, FgGLenum, FgGLenum, FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( GetNamedBufferParameterui64vNV, FgGLContext *, FgGLuint, FgGLenum, FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( GetIntegerui64vNV, FgGLContext *, FgGLenum, FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( Uniformui64NV, FgGLContext *, FgGLint, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( Uniformui64vNV, FgGLContext *, FgGLint, FgGLsizei, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( GetUniformui64vNV, FgGLContext *, FgGLuint, FgGLint, FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( ProgramUniformui64NV, FgGLContext *, FgGLuint, FgGLint, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( ProgramUniformui64vNV, FgGLContext *, FgGLuint, FgGLint, FgGLsizei, const FgGLuint64EXT * ) \
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
    FG_GL_FUNCTION_VOID( TextureBarrierNV, FgGLContext * ) \
\
    /* GL_NV_texture_compression_vtc */ \
\
    /* GL_NV_texture_env_combine4 */ \
\
    /* GL_NV_texture_expand_normal */ \
\
    /* GL_NV_texture_multisample */ \
    FG_GL_FUNCTION_VOID( TexImage2DMultisampleCoverageNV, FgGLContext *, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( TexImage3DMultisampleCoverageNV, FgGLContext *, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( TextureImage2DMultisampleNV, FgGLContext *, FgGLuint, FgGLenum, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( TextureImage3DMultisampleNV, FgGLContext *, FgGLuint, FgGLenum, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( TextureImage2DMultisampleCoverageNV, FgGLContext *, FgGLuint, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( TextureImage3DMultisampleCoverageNV, FgGLContext *, FgGLuint, FgGLenum, FgGLsizei, FgGLsizei, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLboolean ) \
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
    FG_GL_FUNCTION_VOID( BeginTransformFeedbackNV, FgGLContext *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( EndTransformFeedbackNV, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( TransformFeedbackAttribsNV, FgGLContext *, FgGLuint, const FgGLint *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( BindBufferRangeNV, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLintptr, FgGLsizeiptr ) \
    FG_GL_FUNCTION_VOID( BindBufferOffsetNV, FgGLContext *, FgGLenum, FgGLuint, FgGLuint, FgGLintptr ) \
    FG_GL_FUNCTION_VOID( BindBufferBaseNV, FgGLContext *, FgGLenum, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( TransformFeedbackVaryingsNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLint *, FgGLenum ) \
    FG_GL_FUNCTION_VOID( ActiveVaryingNV, FgGLContext *, FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_NUM( GetVaryingLocationNV, FgGLint, FgGLContext *, FgGLuint, const FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetActiveVaryingNV, FgGLContext *, FgGLuint, FgGLuint, FgGLsizei, FgGLsizei *, FgGLsizei *, FgGLenum *, FgGLchar * ) \
    FG_GL_FUNCTION_VOID( GetTransformFeedbackVaryingNV, FgGLContext *, FgGLuint, FgGLuint, FgGLint * ) \
    FG_GL_FUNCTION_VOID( TransformFeedbackStreamAttribsNV, FgGLContext *, FgGLsizei, const FgGLint *, FgGLsizei, const FgGLint *, FgGLenum ) \
\
    /* GL_NV_transform_feedback2 */ \
    FG_GL_FUNCTION_VOID( BindTransformFeedbackNV, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteTransformFeedbacksNV, FgGLContext *, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GenTransformFeedbacksNV, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( IsTransformFeedbackNV, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( PauseTransformFeedbackNV, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( ResumeTransformFeedbackNV, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( DrawTransformFeedbackNV, FgGLContext *, FgGLenum, FgGLuint ) \
\
    /* GL_NV_vdpau_interop */ \
    FG_GL_FUNCTION_VOID( VDPAUInitNV, FgGLContext *, const FgGLvoid *, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( VDPAUFiniNV, FgGLContext * ) \
    FG_GL_FUNCTION_NUM( VDPAURegisterVideoSurfaceNV, FgGLvdpauSurfaceNV, FgGLContext *, const FgGLvoid *, FgGLenum, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_NUM( VDPAURegisterOutputSurfaceNV, FgGLvdpauSurfaceNV, FgGLContext *, const FgGLvoid *, FgGLenum, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VDPAUIsSurfaceNV, FgGLContext *, FgGLvdpauSurfaceNV ) \
    FG_GL_FUNCTION_VOID( VDPAUUnregisterSurfaceNV, FgGLContext *, FgGLvdpauSurfaceNV ) \
    FG_GL_FUNCTION_VOID( VDPAUGetSurfaceivNV, FgGLContext *, FgGLvdpauSurfaceNV, FgGLenum, FgGLsizei, FgGLsizei *, FgGLint * ) \
    FG_GL_FUNCTION_VOID( VDPAUSurfaceAccessNV, FgGLContext *, FgGLvdpauSurfaceNV, FgGLenum ) \
    FG_GL_FUNCTION_VOID( VDPAUMapSurfacesNV, FgGLContext *, FgGLsizei, const FgGLvdpauSurfaceNV * ) \
    FG_GL_FUNCTION_VOID( VDPAUUnmapSurfacesNV, FgGLContext *, FgGLsizei, const FgGLvdpauSurfaceNV * ) \
\
    /* GL_NV_vertex_array_range */ \
    FG_GL_FUNCTION_VOID( FlushVertexArrayRangeNV, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( VertexArrayRangeNV, FgGLContext *, FgGLsizei, const FgGLvoid * ) \
\
    /* GL_NV_vertex_array_range2 */ \
\
    /* GL_NV_vertex_attrib_integer_64bit */ \
    FG_GL_FUNCTION_VOID( VertexAttribL1i64NV, FgGLContext *, FgGLuint, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2i64NV, FgGLContext *, FgGLuint, FgGLint64EXT, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3i64NV, FgGLContext *, FgGLuint, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4i64NV, FgGLContext *, FgGLuint, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT, FgGLint64EXT ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1i64vNV, FgGLContext *, FgGLuint, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2i64vNV, FgGLContext *, FgGLuint, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3i64vNV, FgGLContext *, FgGLuint, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4i64vNV, FgGLContext *, FgGLuint, const FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1ui64NV, FgGLContext *, FgGLuint, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2ui64NV, FgGLContext *, FgGLuint, FgGLuint64EXT, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3ui64NV, FgGLContext *, FgGLuint, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4ui64NV, FgGLContext *, FgGLuint, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT, FgGLuint64EXT ) \
    FG_GL_FUNCTION_VOID( VertexAttribL1ui64vNV, FgGLContext *, FgGLuint, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL2ui64vNV, FgGLContext *, FgGLuint, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL3ui64vNV, FgGLContext *, FgGLuint, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( VertexAttribL4ui64vNV, FgGLContext *, FgGLuint, const FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribLi64vNV, FgGLContext *, FgGLuint, FgGLenum, FgGLint64EXT * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribLui64vNV, FgGLContext *, FgGLuint, FgGLenum, FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( VertexAttribLFormatNV, FgGLContext *, FgGLuint, FgGLint, FgGLenum, FgGLsizei ) \
\
    /* GL_NV_vertex_buffer_unified_memory */ \
    FG_GL_FUNCTION_VOID( BufferAddressRangeNV, FgGLContext *, FgGLenum, FgGLuint, FgGLuint64EXT, FgGLsizeiptr ) \
    FG_GL_FUNCTION_VOID( VertexFormatNV, FgGLContext *, FgGLint, FgGLenum, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( NormalFormatNV, FgGLContext *, FgGLenum, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( ColorFormatNV, FgGLContext *, FgGLint, FgGLenum, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( IndexFormatNV, FgGLContext *, FgGLenum, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( TexCoordFormatNV, FgGLContext *, FgGLint, FgGLenum, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( EdgeFlagFormatNV, FgGLContext *, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( SecondaryColorFormatNV, FgGLContext *, FgGLint, FgGLenum, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( FogCoordFormatNV, FgGLContext *, FgGLenum, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( VertexAttribFormatNV, FgGLContext *, FgGLuint, FgGLint, FgGLenum, FgGLboolean, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( VertexAttribIFormatNV, FgGLContext *, FgGLuint, FgGLint, FgGLenum, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetIntegerui64i_vNV, FgGLContext *, FgGLenum, FgGLuint, FgGLuint64EXT * ) \
\
    /* GL_NV_vertex_program */ \
    FG_GL_FUNCTION_NUM( AreProgramsResidentNV, FgGLboolean, FgGLContext *, FgGLsizei, const FgGLuint *, FgGLboolean * ) \
    FG_GL_FUNCTION_VOID( BindProgramNV, FgGLContext *, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( DeleteProgramsNV, FgGLContext *, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ExecuteProgramNV, FgGLContext *, FgGLenum, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GenProgramsNV, FgGLContext *, FgGLsizei, FgGLuint * ) \
    FG_GL_FUNCTION_VOID( GetProgramParameterdvNV, FgGLContext *, FgGLenum, FgGLuint, FgGLenum, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetProgramParameterfvNV, FgGLContext *, FgGLenum, FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetProgramivNV, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetProgramStringNV, FgGLContext *, FgGLuint, FgGLenum, FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( GetTrackMatrixivNV, FgGLContext *, FgGLenum, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribdvNV, FgGLContext *, FgGLuint, FgGLenum, FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribfvNV, FgGLContext *, FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribivNV, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribPointervNV, FgGLContext *, FgGLuint, FgGLenum, FgGLvoid ** ) \
    FG_GL_FUNCTION_NUM( IsProgramNV, FgGLboolean, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( LoadProgramNV, FgGLContext *, FgGLenum, FgGLuint, FgGLsizei, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( ProgramParameter4dNV, FgGLContext *, FgGLenum, FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( ProgramParameter4dvNV, FgGLContext *, FgGLenum, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramParameter4fNV, FgGLContext *, FgGLenum, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ProgramParameter4fvNV, FgGLContext *, FgGLenum, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ProgramParameters4dvNV, FgGLContext *, FgGLenum, FgGLuint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( ProgramParameters4fvNV, FgGLContext *, FgGLenum, FgGLuint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( RequestResidentProgramsNV, FgGLContext *, FgGLsizei, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( TrackMatrixNV, FgGLContext *, FgGLenum, FgGLuint, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( VertexAttribPointerNV, FgGLContext *, FgGLuint, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1dNV, FgGLContext *, FgGLuint, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1dvNV, FgGLContext *, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1fNV, FgGLContext *, FgGLuint, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1fvNV, FgGLContext *, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1sNV, FgGLContext *, FgGLuint, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib1svNV, FgGLContext *, FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2dNV, FgGLContext *, FgGLuint, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2dvNV, FgGLContext *, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2fNV, FgGLContext *, FgGLuint, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2fvNV, FgGLContext *, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2sNV, FgGLContext *, FgGLuint, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib2svNV, FgGLContext *, FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3dNV, FgGLContext *, FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3dvNV, FgGLContext *, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3fNV, FgGLContext *, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3fvNV, FgGLContext *, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3sNV, FgGLContext *, FgGLuint, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib3svNV, FgGLContext *, FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4dNV, FgGLContext *, FgGLuint, FgGLdouble, FgGLdouble, FgGLdouble, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4dvNV, FgGLContext *, FgGLuint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4fNV, FgGLContext *, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4fvNV, FgGLContext *, FgGLuint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4sNV, FgGLContext *, FgGLuint, FgGLshort, FgGLshort, FgGLshort, FgGLshort ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4svNV, FgGLContext *, FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4ubNV, FgGLContext *, FgGLuint, FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte ) \
    FG_GL_FUNCTION_VOID( VertexAttrib4ubvNV, FgGLContext *, FgGLuint, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs1dvNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs1fvNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs1svNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs2dvNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs2fvNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs2svNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs3dvNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs3fvNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs3svNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs4dvNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs4fvNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs4svNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttribs4ubvNV, FgGLContext *, FgGLuint, FgGLsizei, const FgGLubyte * ) \
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
    FG_GL_FUNCTION_VOID( VertexAttribI1iEXT, FgGLContext *, FgGLuint, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2iEXT, FgGLContext *, FgGLuint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3iEXT, FgGLContext *, FgGLuint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4iEXT, FgGLContext *, FgGLuint, FgGLint, FgGLint, FgGLint, FgGLint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI1uiEXT, FgGLContext *, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2uiEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3uiEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4uiEXT, FgGLContext *, FgGLuint, FgGLuint, FgGLuint, FgGLuint, FgGLuint ) \
    FG_GL_FUNCTION_VOID( VertexAttribI1ivEXT, FgGLContext *, FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2ivEXT, FgGLContext *, FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3ivEXT, FgGLContext *, FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4ivEXT, FgGLContext *, FgGLuint, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI1uivEXT, FgGLContext *, FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI2uivEXT, FgGLContext *, FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI3uivEXT, FgGLContext *, FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4uivEXT, FgGLContext *, FgGLuint, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4bvEXT, FgGLContext *, FgGLuint, const FgGLbyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4svEXT, FgGLContext *, FgGLuint, const FgGLshort * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4ubvEXT, FgGLContext *, FgGLuint, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( VertexAttribI4usvEXT, FgGLContext *, FgGLuint, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( VertexAttribIPointerEXT, FgGLContext *, FgGLuint, FgGLint, FgGLenum, FgGLsizei, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribIivEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVertexAttribIuivEXT, FgGLContext *, FgGLuint, FgGLenum, FgGLuint * ) \
\
    /* GL_NV_video_capture */ \
    FG_GL_FUNCTION_VOID( BeginVideoCaptureNV, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( BindVideoCaptureStreamBufferNV, FgGLContext *, FgGLuint, FgGLuint, FgGLenum, FgGLintptrARB ) \
    FG_GL_FUNCTION_VOID( BindVideoCaptureStreamTextureNV, FgGLContext *, FgGLuint, FgGLuint, FgGLenum, FgGLenum, FgGLuint ) \
    FG_GL_FUNCTION_VOID( EndVideoCaptureNV, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( GetVideoCaptureivNV, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVideoCaptureStreamivNV, FgGLContext *, FgGLuint, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetVideoCaptureStreamfvNV, FgGLContext *, FgGLuint, FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetVideoCaptureStreamdvNV, FgGLContext *, FgGLuint, FgGLuint, FgGLenum, FgGLdouble * ) \
    FG_GL_FUNCTION_NUM( VideoCaptureNV, FgGLenum, FgGLContext *, FgGLuint, FgGLuint *, FgGLuint64EXT * ) \
    FG_GL_FUNCTION_VOID( VideoCaptureStreamParameterivNV, FgGLContext *, FgGLuint, FgGLuint, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( VideoCaptureStreamParameterfvNV, FgGLContext *, FgGLuint, FgGLuint, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( VideoCaptureStreamParameterdvNV, FgGLContext *, FgGLuint, FgGLuint, FgGLenum, const FgGLdouble * ) \
\
    /* GL_OML_interlace */ \
\
    /* GL_OML_resample */ \
\
    /* GL_OML_subsample */ \
\
    /* GL_PGI_misc_hints */ \
    FG_GL_FUNCTION_VOID( HintPGI, FgGLContext *, FgGLenum, FgGLint ) \
\
    /* GL_PGI_vertex_hints */ \
\
    /* GL_REND_screen_coordinates */ \
\
    /* GL_S3_s3tc */ \
\
    /* GL_SGIS_detail_texture */ \
    FG_GL_FUNCTION_VOID( DetailTexFuncSGIS, FgGLContext *, FgGLenum, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetDetailTexFuncSGIS, FgGLContext *, FgGLenum, FgGLfloat * ) \
\
    /* GL_SGIS_fog_function */ \
    FG_GL_FUNCTION_VOID( FogFuncSGIS, FgGLContext *, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetFogFuncSGIS, FgGLContext *, FgGLfloat * ) \
\
    /* GL_SGIS_generate_mipmap */ \
\
    /* GL_SGIS_multisample */ \
    FG_GL_FUNCTION_VOID( SampleMaskSGIS, FgGLContext *, FgGLclampf, FgGLboolean ) \
    FG_GL_FUNCTION_VOID( SamplePatternSGIS, FgGLContext *, FgGLenum ) \
\
    /* GL_SGIS_pixel_texture */ \
    FG_GL_FUNCTION_VOID( PixelTexGenParameteriSGIS, FgGLContext *, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( PixelTexGenParameterivSGIS, FgGLContext *, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( PixelTexGenParameterfSGIS, FgGLContext *, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( PixelTexGenParameterfvSGIS, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetPixelTexGenParameterivSGIS, FgGLContext *, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetPixelTexGenParameterfvSGIS, FgGLContext *, FgGLenum, FgGLfloat * ) \
\
    /* GL_SGIS_point_line_texgen */ \
\
    /* GL_SGIS_point_parameters */ \
    FG_GL_FUNCTION_VOID( PointParameterfSGIS, FgGLContext *, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( PointParameterfvSGIS, FgGLContext *, FgGLenum, const FgGLfloat * ) \
\
    /* GL_SGIS_sharpen_texture */ \
    FG_GL_FUNCTION_VOID( SharpenTexFuncSGIS, FgGLContext *, FgGLenum, FgGLsizei, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetSharpenTexFuncSGIS, FgGLContext *, FgGLenum, FgGLfloat * ) \
\
    /* GL_SGIS_texture4D */ \
    FG_GL_FUNCTION_VOID( TexImage4DSGIS, FgGLContext *, FgGLenum, FgGLint, FgGLenum, FgGLsizei, FgGLsizei, FgGLsizei, FgGLsizei, FgGLint, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( TexSubImage4DSGIS, FgGLContext *, FgGLenum, FgGLint, FgGLint, FgGLint, FgGLint, FgGLint, FgGLsizei, FgGLsizei, FgGLsizei, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
\
    /* GL_SGIS_texture_border_clamp */ \
\
    /* GL_SGIS_texture_color_mask */ \
    FG_GL_FUNCTION_VOID( TextureColorMaskSGIS, FgGLContext *, FgGLboolean, FgGLboolean, FgGLboolean, FgGLboolean ) \
\
    /* GL_SGIS_texture_edge_clamp */ \
\
    /* GL_SGIS_texture_filter4 */ \
    FG_GL_FUNCTION_VOID( GetTexFilterFuncSGIS, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexFilterFuncSGIS, FgGLContext *, FgGLenum, FgGLenum, FgGLsizei, const FgGLfloat * ) \
\
    /* GL_SGIS_texture_lod */ \
\
    /* GL_SGIS_texture_select */ \
\
    /* GL_SGIX_async */ \
    FG_GL_FUNCTION_VOID( AsyncMarkerSGIX, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_NUM( FinishAsyncSGIX, FgGLint, FgGLContext *, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( PollAsyncSGIX, FgGLint, FgGLContext *, FgGLuint * ) \
    FG_GL_FUNCTION_NUM( GenAsyncMarkersSGIX, FgGLuint, FgGLContext *, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( DeleteAsyncMarkersSGIX, FgGLContext *, FgGLuint, FgGLsizei ) \
    FG_GL_FUNCTION_NUM( IsAsyncMarkerSGIX, FgGLboolean, FgGLContext *, FgGLuint ) \
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
    FG_GL_FUNCTION_VOID( FlushRasterSGIX, FgGLContext * ) \
\
    /* GL_SGIX_fog_offset */ \
\
    /* GL_SGIX_fragment_lighting */ \
    FG_GL_FUNCTION_VOID( FragmentColorMaterialSGIX, FgGLContext *, FgGLenum, FgGLenum ) \
    FG_GL_FUNCTION_VOID( FragmentLightfSGIX, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( FragmentLightfvSGIX, FgGLContext *, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( FragmentLightiSGIX, FgGLContext *, FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( FragmentLightivSGIX, FgGLContext *, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( FragmentLightModelfSGIX, FgGLContext *, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( FragmentLightModelfvSGIX, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( FragmentLightModeliSGIX, FgGLContext *, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( FragmentLightModelivSGIX, FgGLContext *, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( FragmentMaterialfSGIX, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( FragmentMaterialfvSGIX, FgGLContext *, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( FragmentMaterialiSGIX, FgGLContext *, FgGLenum, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( FragmentMaterialivSGIX, FgGLContext *, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetFragmentLightfvSGIX, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetFragmentLightivSGIX, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( GetFragmentMaterialfvSGIX, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetFragmentMaterialivSGIX, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( LightEnviSGIX, FgGLContext *, FgGLenum, FgGLint ) \
\
    /* GL_SGIX_framezoom */ \
    FG_GL_FUNCTION_VOID( FrameZoomSGIX, FgGLContext *, FgGLint ) \
\
    /* GL_SGIX_igloo_interface */ \
    FG_GL_FUNCTION_VOID( IglooInterfaceSGIX, FgGLContext *, FgGLenum, const FgGLvoid * ) \
\
    /* GL_SGIX_instruments */ \
    FG_GL_FUNCTION_NUM( GetInstrumentsSGIX, FgGLint, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( InstrumentsBufferSGIX, FgGLContext *, FgGLsizei, FgGLint * ) \
    FG_GL_FUNCTION_NUM( PollInstrumentsSGIX, FgGLint, FgGLContext *, FgGLint * ) \
    FG_GL_FUNCTION_VOID( ReadInstrumentsSGIX, FgGLContext *, FgGLint ) \
    FG_GL_FUNCTION_VOID( StartInstrumentsSGIX, FgGLContext * ) \
    FG_GL_FUNCTION_VOID( StopInstrumentsSGIX, FgGLContext *, FgGLint ) \
\
    /* GL_SGIX_interlace */ \
\
    /* GL_SGIX_ir_instrument1 */ \
\
    /* GL_SGIX_list_priority */ \
    FG_GL_FUNCTION_VOID( GetListParameterfvSGIX, FgGLContext *, FgGLuint, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetListParameterivSGIX, FgGLContext *, FgGLuint, FgGLenum, FgGLint * ) \
    FG_GL_FUNCTION_VOID( ListParameterfSGIX, FgGLContext *, FgGLuint, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ListParameterfvSGIX, FgGLContext *, FgGLuint, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ListParameteriSGIX, FgGLContext *, FgGLuint, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( ListParameterivSGIX, FgGLContext *, FgGLuint, FgGLenum, const FgGLint * ) \
\
    /* GL_SGIX_pixel_texture */ \
    FG_GL_FUNCTION_VOID( PixelTexGenSGIX, FgGLContext *, FgGLenum ) \
\
    /* GL_SGIX_pixel_tiles */ \
\
    /* GL_SGIX_polynomial_ffd */ \
    FG_GL_FUNCTION_VOID( DeformationMap3dSGIX, FgGLContext *, FgGLenum, FgGLdouble, FgGLdouble, FgGLint, FgGLint, FgGLdouble, FgGLdouble, FgGLint, FgGLint, FgGLdouble, FgGLdouble, FgGLint, FgGLint, const FgGLdouble * ) \
    FG_GL_FUNCTION_VOID( DeformationMap3fSGIX, FgGLContext *, FgGLenum, FgGLfloat, FgGLfloat, FgGLint, FgGLint, FgGLfloat, FgGLfloat, FgGLint, FgGLint, FgGLfloat, FgGLfloat, FgGLint, FgGLint, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( DeformSGIX, FgGLContext *, FgGLbitfield ) \
    FG_GL_FUNCTION_VOID( LoadIdentityDeformationMapSGIX, FgGLContext *, FgGLbitfield ) \
\
    /* GL_SGIX_reference_plane */ \
    FG_GL_FUNCTION_VOID( ReferencePlaneSGIX, FgGLContext *, const FgGLdouble * ) \
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
    FG_GL_FUNCTION_VOID( SpriteParameterfSGIX, FgGLContext *, FgGLenum, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( SpriteParameterfvSGIX, FgGLContext *, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( SpriteParameteriSGIX, FgGLContext *, FgGLenum, FgGLint ) \
    FG_GL_FUNCTION_VOID( SpriteParameterivSGIX, FgGLContext *, FgGLenum, const FgGLint * ) \
\
    /* GL_SGIX_subsample */ \
\
    /* GL_SGIX_tag_sample_buffer */ \
    FG_GL_FUNCTION_VOID( TagSampleBufferSGIX, FgGLContext * ) \
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
    FG_GL_FUNCTION_VOID( ColorTableSGI, FgGLContext *, FgGLenum, FgGLenum, FgGLsizei, FgGLenum, FgGLenum, const FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( ColorTableParameterfvSGI, FgGLContext *, FgGLenum, FgGLenum, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ColorTableParameterivSGI, FgGLContext *, FgGLenum, FgGLenum, const FgGLint * ) \
    FG_GL_FUNCTION_VOID( CopyColorTableSGI, FgGLContext *, FgGLenum, FgGLenum, FgGLint, FgGLint, FgGLsizei ) \
    FG_GL_FUNCTION_VOID( GetColorTableSGI, FgGLContext *, FgGLenum, FgGLenum, FgGLenum, FgGLvoid * ) \
    FG_GL_FUNCTION_VOID( GetColorTableParameterfvSGI, FgGLContext *, FgGLenum, FgGLenum, FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( GetColorTableParameterivSGI, FgGLContext *, FgGLenum, FgGLenum, FgGLint * ) \
\
    /* GL_SGI_texture_color_table */ \
\
    /* GL_SUNX_constant_data */ \
    FG_GL_FUNCTION_VOID( FinishTextureSUNX, FgGLContext * ) \
\
    /* GL_SUN_convolution_border_modes */ \
\
    /* GL_SUN_global_alpha */ \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactorbSUN, FgGLContext *, FgGLbyte ) \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactorsSUN, FgGLContext *, FgGLshort ) \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactoriSUN, FgGLContext *, FgGLint ) \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactorfSUN, FgGLContext *, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactordSUN, FgGLContext *, FgGLdouble ) \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactorubSUN, FgGLContext *, FgGLubyte ) \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactorusSUN, FgGLContext *, FgGLushort ) \
    FG_GL_FUNCTION_VOID( GlobalAlphaFactoruiSUN, FgGLContext *, FgGLuint ) \
\
    /* GL_SUN_mesh_array */ \
    FG_GL_FUNCTION_VOID( DrawMeshArraysSUN, FgGLContext *, FgGLenum, FgGLint, FgGLsizei, FgGLsizei ) \
\
    /* GL_SUN_slice_accum */ \
\
    /* GL_SUN_triangle_list */ \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiSUN, FgGLContext *, FgGLuint ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeusSUN, FgGLContext *, FgGLushort ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeubSUN, FgGLContext *, FgGLubyte ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuivSUN, FgGLContext *, const FgGLuint * ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeusvSUN, FgGLContext *, const FgGLushort * ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeubvSUN, FgGLContext *, const FgGLubyte * ) \
    FG_GL_FUNCTION_VOID( ReplacementCodePointerSUN, FgGLContext *, FgGLenum, FgGLsizei, const FgGLvoid ** ) \
\
    /* GL_SUN_vertex */ \
    FG_GL_FUNCTION_VOID( Color4ubVertex2fSUN, FgGLContext *, FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Color4ubVertex2fvSUN, FgGLContext *, const FgGLubyte *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Color4ubVertex3fSUN, FgGLContext *, FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Color4ubVertex3fvSUN, FgGLContext *, const FgGLubyte *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Color3fVertex3fSUN, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Color3fVertex3fvSUN, FgGLContext *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Normal3fVertex3fSUN, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Normal3fVertex3fvSUN, FgGLContext *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( Color4fNormal3fVertex3fSUN, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( Color4fNormal3fVertex3fvSUN, FgGLContext *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexCoord2fVertex3fSUN, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexCoord2fVertex3fvSUN, FgGLContext *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexCoord4fVertex4fSUN, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexCoord4fVertex4fvSUN, FgGLContext *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexCoord2fColor4ubVertex3fSUN, FgGLContext *, FgGLfloat, FgGLfloat, FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexCoord2fColor4ubVertex3fvSUN, FgGLContext *, const FgGLfloat *, const FgGLubyte *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexCoord2fColor3fVertex3fSUN, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexCoord2fColor3fVertex3fvSUN, FgGLContext *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexCoord2fNormal3fVertex3fSUN, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexCoord2fNormal3fVertex3fvSUN, FgGLContext *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexCoord2fColor4fNormal3fVertex3fSUN, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexCoord2fColor4fNormal3fVertex3fvSUN, FgGLContext *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( TexCoord4fColor4fNormal3fVertex4fSUN, FgGLContext *, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( TexCoord4fColor4fNormal3fVertex4fvSUN, FgGLContext *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiVertex3fSUN, FgGLContext *, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiVertex3fvSUN, FgGLContext *, const FgGLuint *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiColor4ubVertex3fSUN, FgGLContext *, FgGLuint, FgGLubyte, FgGLubyte, FgGLubyte, FgGLubyte, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiColor4ubVertex3fvSUN, FgGLContext *, const FgGLuint *, const FgGLubyte *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiColor3fVertex3fSUN, FgGLContext *, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiColor3fVertex3fvSUN, FgGLContext *, const FgGLuint *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiNormal3fVertex3fSUN, FgGLContext *, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiNormal3fVertex3fvSUN, FgGLContext *, const FgGLuint *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiColor4fNormal3fVertex3fSUN, FgGLContext *, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiColor4fNormal3fVertex3fvSUN, FgGLContext *, const FgGLuint *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fVertex3fSUN, FgGLContext *, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fVertex3fvSUN, FgGLContext *, const FgGLuint *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN, FgGLContext *, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN, FgGLContext *, const FgGLuint *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN, FgGLContext *, FgGLuint, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat, FgGLfloat ) \
    FG_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN, FgGLContext *, const FgGLuint *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat *, const FgGLfloat * ) \
\
    /* GL_WIN_phong_shading */ \
\
    /* GL_WIN_specular_fog */ \

#define GL_DECLARE_FUNCTION( _name, _returnType, ... ) \
    FGEXPORT _returnType fgGL##_name( __VA_ARGS__ );
#define FG_GL_FUNCTION_NUM( _name, _returnType, ... ) \
    GL_DECLARE_FUNCTION( _name, _returnType, __VA_ARGS__ )
#define FG_GL_FUNCTION_PTR( _name, _returnType, ... ) \
    GL_DECLARE_FUNCTION( _name, _returnType, __VA_ARGS__ )
#define FG_GL_FUNCTION_VOID( _name, ... ) \
    GL_DECLARE_FUNCTION( _name, void, __VA_ARGS__ )
FG_GL_FUNCTIONS
#undef  FG_GL_FUNCTION_VOID
#undef  FG_GL_FUNCTION_PTR
#undef  FG_GL_FUNCTION_NUM
#undef  GL_DECLARE_FUNCTION

#endif  // FG_GL_FUNCTIONS_H
