﻿#ifndef FG_GL_CONTEXT_H
#define FG_GL_CONTEXT_H

typedef struct FgGLContext FgGLContext;

#include "fg/gl/contextinfo.h"
#include "fg/window/window.h"
#include "fg/common/primitives.h"
#include "fg/util/import.h"

FGEXPORT FgGLContext * fgGLContextNew(
    const FgGLContextInfo *
);

FGEXPORT void fgGLContextFree(
    FgGLContext *
);

FGEXPORT FgBool fgGLContextMakeCurrent(
    FgGLContext *
    , FgWindow *
);

FGEXPORT void fgGLContextReleaseCurrent(
);

#endif  // FG_GL_CONTEXT_H
