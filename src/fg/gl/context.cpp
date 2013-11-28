#include "fg/util/export.h"
#include "fg/gl/context.h"

#include "fg/gl/config.h"
#include "fg/window/window.h"
#include "fg/common/primitives.h"

FgGLContext * fgGLContextNew(
    const FgGLConfig *
)
{
    return nullptr;
}

void fgGLContextFree(
    FgGLContext *
)
{
}

FgBool fgGLContextMakeCurrent(
    FgGLContext *
    , FgWindow *
)
{
    return false;
}

void fgGLContextReleaseCurrent(
)
{
}
