#ifndef GF_GL_CONTEXTINFO_H
#define GF_GL_CONTEXTINFO_H

typedef struct GfGLContextInfo GfGLContextInfo;

#include "gf/util/import.h"

GFEXPORT GfGLContextInfo * gfGLContextInfoNew(
);

GFEXPORT GfGLContextInfo * gfGLContextInfoClone(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextInfoFree(
    GfGLContextInfo *
);

//TODO

#endif  // GF_GL_CONTEXTINFO_H
