#include "gf/util/export.h"
#include "gf/gl/context.h"

#include "gf/gl/contextinfo.h"
#include "gf/window/window.h"
#include "gf/common/primitives.h"

GfGLContext * gfGLContextNew(
    const GfGLContextInfo *
)
{
    return nullptr;
}

void gfGLContextFree(
    GfGLContext *
)
{
}

GfBool gfGLContextMakeCurrent(
    GfGLContext *
    , GfWindow *
)
{
    return false;
}

void gfGLContextReleaseCurrent(
)
{
}
