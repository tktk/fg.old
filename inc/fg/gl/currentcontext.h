#ifndef FG_GL_CURRENTCONTEXT_H
#define FG_GL_CURRENTCONTEXT_H

typedef struct FgGLCurrentContext FgGLCurrentContext;

#include "fg/gl/context.h"
#include "fg/gl/functions.h"
#include "fg/window/window.h"
#include "fg/util/import.h"

FGEXPORT FgGLCurrentContext * fgGLCurrentContextGetOrNew(
    FgGLContext *
    , FgWindow *
);

FGEXPORT void fgGLCurrentContextFree(
    FgGLCurrentContext *
);

FGEXPORT void fgGLCurrentContextSwapBuffers(
    FgGLCurrentContext *
);

#define FG_GL_FUNCTION( _name, _returnType, ... ) \
    _returnType fgGL##_name( FgGLCurrentContext * __VA_ARGS__ )

#define GL_DECLARE_FUNCTION( _name, _returnType, ... ) \
    FGEXPORT FG_GL_FUNCTION( _name, _returnType, __VA_ARGS__ );
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

#endif  // FG_GL_CURRENTCONTEXT_H
