#ifndef GF_GL_CONTEXT_H
#define GF_GL_CONTEXT_H

typedef struct GfGLContext GfGLContext;

#include "gf/gl/contextinfo.h"
#include "gf/window/window.h"
#include "gf/common/primitives.h"
#include "gf/util/import.h"

GFEXPORT GfGLContext * gfGLContextNew(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextFree(
    GfGLContext *
);

GFEXPORT GfBool gfGLContextMakeCurrent(
    GfGLContext *
    , GfWindow *
);

GFEXPORT void gfGLContextReleaseCurrent(
);

#endif  // GF_GL_CONTEXT_H
