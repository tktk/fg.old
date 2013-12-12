#include "fg/util/export.h"
#include "fg/gl/current.h"

#include "fg/gl/functions.h"
#include "fg/window/window.h"
#include "fg/common/primitives.h"

FgGLCurrent * fgGLCurrentNew(
    FgGLContext *
    , FgWindow *
)
{
    return nullptr;
}

void fgGLCurrentFree(
    FgGLCurrent *
)
{
}

void fgGLCurrentSwapBuffers(
    FgGLCurrent *
)
{
}

#define GL_DEFINE_FUNCTION( _proc, _name, _returnType, _args ) \
    FG_GL_FUNCTION( _name, _returnType, _args ) { _proc }
#define FG_GL_FUNCTION_NUM( _name, _returnType, _args, _values ) \
    GL_DEFINE_FUNCTION( return 0;, _name, _returnType, _args )
#define FG_GL_FUNCTION_PTR( _name, _returnType, _args, _values ) \
    GL_DEFINE_FUNCTION( return nullptr;, _name, _returnType, _args )
#define FG_GL_FUNCTION_VOID( _name, _args, _values ) \
    GL_DEFINE_FUNCTION( , _name, void, _args )

FG_GL_FUNCTIONS

#undef  FG_GL_FUNCTION_VOID
#undef  FG_GL_FUNCTION_PTR
#undef  FG_GL_FUNCTION_NUM
#undef  GL_DEFINE_FUNCTION
