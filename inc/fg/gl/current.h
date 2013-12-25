#ifndef FG_GL_CURRENT_H
#define FG_GL_CURRENT_H

#include "fg/def/gl/current.h"
#include "fg/def/gl/context.h"
#include "fg/def/gl/functions.h"
#include "fg/def/window/window.h"
#include "fg/util/import.h"

FG_FUNCTION_PTR(
    FgGLCurrent * fgGLCurrentGetOrNew(
        FgGLContext *   _context
        , FgWindow *    _window
    )
)

FG_FUNCTION_VOID(
    void fgGLCurrentFree(
        FgGLCurrent *   _this
    )
)

FG_FUNCTION_VOID(
    void fgGLCurrentSwapBuffers(
        FgGLCurrent *   _this
    )
)

#define FG_GL_FUNCTION_NAME( _name ) fgGL##_name

#define GL_ARGS( ... ) \
    FgGLCurrent * __VA_ARGS__
#define GL_DECLARE_FUNCTION( _macro, _name, _returnType, _args ) \
    _macro( _returnType FG_GL_FUNCTION_NAME( _name )( GL_ARGS _args ) )
#define FG_GL_FUNCTION_NUM( _name, _returnType, _args, _values ) \
    GL_DECLARE_FUNCTION( FG_FUNCTION_NUM, _name, _returnType, _args )
#define FG_GL_FUNCTION_PTR( _name, _returnType, _args, _values ) \
    GL_DECLARE_FUNCTION( FG_FUNCTION_PTR, _name, _returnType, _args )
#define FG_GL_FUNCTION_VOID( _name, _args, _values ) \
    GL_DECLARE_FUNCTION( FG_FUNCTION_VOID, _name, void, _args )

FG_GL_FUNCTIONS

#undef  FG_GL_FUNCTION_VOID
#undef  FG_GL_FUNCTION_PTR
#undef  FG_GL_FUNCTION_NUM
#undef  GL_DECLARE_FUNCTION
#undef  GL_ARGS

#endif  // FG_GL_CURRENT_H
