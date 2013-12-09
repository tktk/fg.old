#include "fg/util/export.h"
#include "fg/gl/currentcontext.h"

#include "fg/gl/functions.h"
#include "fg/window/window.h"
#include "fg/common/primitives.h"

FgGLCurrentContext * fgGLCurrentContextNew(
    FgGLContext *
    , FgWindow *
)
{
    return nullptr;
}

void fgGLCurrentContextFree(
    FgGLCurrentContext *
)
{
}

void fgGLCurrentContextSwapBuffers(
    FgGLCurrentContext *
)
{
}

#define GL_DEFINE_FUNCTION( _proc, _name, _returnType, ... ) \
    FG_GL_FUNCTION( _name, _returnType, __VA_ARGS__ ) { _proc }
#define FG_GL_FUNCTION_NUM( _name, _returnType, ... ) \
    GL_DEFINE_FUNCTION( return 0;, _name, _returnType, __VA_ARGS__ )
#define FG_GL_FUNCTION_PTR( _name, _returnType, ... ) \
    GL_DEFINE_FUNCTION( return nullptr;, _name, _returnType, __VA_ARGS__ )
#define FG_GL_FUNCTION_VOID( _name, ... ) \
    GL_DEFINE_FUNCTION( , _name, void, __VA_ARGS__ )
FG_GL_FUNCTIONS
#undef  FG_GL_FUNCTION_VOID
#undef  FG_GL_FUNCTION_PTR
#undef  FG_GL_FUNCTION_NUM
#undef  GL_DEFINE_FUNCTION
