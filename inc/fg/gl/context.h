﻿#ifndef FG_GL_CONTEXT_H
#define FG_GL_CONTEXT_H

typedef struct FgGLContext FgGLContext;

#include "fg/gl/config.h"
#include "fg/util/import.h"

FGEXPORT FgGLContext * fgGLContextNew(
    const FgGLConfig *
);

FGEXPORT void fgGLContextFree(
    FgGLContext *
);

#endif  // FG_GL_CONTEXT_H
