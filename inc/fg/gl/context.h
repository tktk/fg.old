#ifndef FG_GL_CONTEXT_H
#define FG_GL_CONTEXT_H

#include "fg/def/gl/context.h"
#include "fg/def/gl/config.h"
#include "fg/util/import_new.h"

FG_FUNCTION_PTR(
    FgGLContext * fgGLContextNew(
        const FgGLConfig *  _CONFIG
    )
)

FG_FUNCTION_VOID(
    void fgGLContextFree(
        FgGLContext *   _this
    )
)

#endif  // FG_GL_CONTEXT_H
