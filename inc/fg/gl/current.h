#ifndef FG_GL_CURRENT_H
#define FG_GL_CURRENT_H

typedef struct FgGLCurrent FgGLCurrent;

#include "fg/gl/context.h"
#include "fg/gl/functions.h"
#include "fg/window/window.h"
#include "fg/util/import.h"

FGEXPORT FgGLCurrent * fgGLCurrentGetOrNew(
    FgGLContext *
    , FgWindow *
);

FGEXPORT void fgGLCurrentFree(
    FgGLCurrent *
);

FGEXPORT void fgGLCurrentSwapBuffers(
    FgGLCurrent *
);

#define FG_GL_FUNCTION_NAME( _name ) fgGL##_name
#define FG_GL_ARGS( ... ) \
    FgGLCurrent * __VA_ARGS__
#define FG_GL_FUNCTION( _name, _returnType, _args ) \
    _returnType FG_GL_FUNCTION_NAME( _name )( FG_GL_ARGS _args )

#define GL_DECLARE_FUNCTION( _name, _returnType, _args ) \
    FGEXPORT FG_GL_FUNCTION( _name, _returnType, _args );
#define FG_GL_FUNCTION_NUM( _name, _returnType, _args, _values ) \
    GL_DECLARE_FUNCTION( _name, _returnType, _args )
#define FG_GL_FUNCTION_PTR( _name, _returnType, _args, _values ) \
    GL_DECLARE_FUNCTION( _name, _returnType, _args )
#define FG_GL_FUNCTION_VOID( _name, _args, _values ) \
    GL_DECLARE_FUNCTION( _name, void, _args )
FG_GL_FUNCTIONS
#undef  FG_GL_FUNCTION_VOID
#undef  FG_GL_FUNCTION_PTR
#undef  FG_GL_FUNCTION_NUM
#undef  GL_DECLARE_FUNCTION

#endif  // FG_GL_CURRENT_H
