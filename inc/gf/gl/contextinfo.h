#ifndef GF_GL_CONTEXTINFO_H
#define GF_GL_CONTEXTINFO_H

typedef struct GfGLContextInfo GfGLContextInfo;

#include "gf/common/primitives.h"
#include "gf/util/import.h"

GFEXPORT GfGLContextInfo * gfGLContextInfoNew(
);

GFEXPORT GfGLContextInfo * gfGLContextInfoClone(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextInfoFree(
    GfGLContextInfo *
);

GFEXPORT GfBool gfGLContextGetDoubleBuffer(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextSetDoubleBuffer(
    GfGLContextInfo *
    , GfBool
);

GFEXPORT GfBool gfGLContextExistsAuxBuffers(
    const GfGLContextInfo *
);

GFEXPORT GfInt gfGLContextGetAuxBuffers(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextSetAuxBuffers(
    GfGLContextInfo *
    , GfInt
);

GFEXPORT void gfGLContextClearAuxBuffers(
    GfGLContextInfo *
);

GFEXPORT GfBool gfGLContextExistsRedBits(
    const GfGLContextInfo *
);

GFEXPORT GfInt gfGLContextGetRedBits(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextSetRedBits(
    GfGLContextInfo *
    , GfInt
);

GFEXPORT void gfGLContextClearRedBits(
    GfGLContextInfo *
);

GFEXPORT GfBool gfGLContextExistsGreenBits(
    const GfGLContextInfo *
);

GFEXPORT GfInt gfGLContextGetGreenBits(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextSetGreenBits(
    GfGLContextInfo *
    , GfInt
);

GFEXPORT void gfGLContextClearGreenBits(
    GfGLContextInfo *
);

GFEXPORT GfBool gfGLContextExistsBlueBits(
    const GfGLContextInfo *
);

GFEXPORT GfInt gfGLContextGetBlueBits(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextSetBlueBits(
    GfGLContextInfo *
    , GfInt
);

GFEXPORT void gfGLContextClearBlueBits(
    GfGLContextInfo *
);

GFEXPORT GfBool gfGLContextExistsAlphaBits(
    const GfGLContextInfo *
);

GFEXPORT GfInt gfGLContextGetAlphaBits(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextSetAlphaBits(
    GfGLContextInfo *
    , GfInt
);

GFEXPORT void gfGLContextClearAlphaBits(
    GfGLContextInfo *
);

GFEXPORT GfBool gfGLContextExistsDepthBits(
    const GfGLContextInfo *
);

GFEXPORT GfInt gfGLContextGetDepthBits(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextSetDepthBits(
    GfGLContextInfo *
    , GfInt
);

GFEXPORT void gfGLContextClearDepthBits(
    GfGLContextInfo *
);

GFEXPORT GfBool gfGLContextExistsStencilBits(
    const GfGLContextInfo *
);

GFEXPORT GfInt gfGLContextGetStencilBits(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextSetStencilBits(
    GfGLContextInfo *
    , GfInt
);

GFEXPORT void gfGLContextClearStencilBits(
    GfGLContextInfo *
);

GFEXPORT GfBool gfGLContextExistsAccumRedBits(
    const GfGLContextInfo *
);

GFEXPORT GfInt gfGLContextGetAccumRedBits(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextSetAccumRedBits(
    GfGLContextInfo *
    , GfInt
);

GFEXPORT void gfGLContextClearAccumRedBits(
    GfGLContextInfo *
);

GFEXPORT GfBool gfGLContextExistsAccumGreenBits(
    const GfGLContextInfo *
);

GFEXPORT GfInt gfGLContextGetAccumGreenBits(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextSetAccumGreenBits(
    GfGLContextInfo *
    , GfInt
);

GFEXPORT void gfGLContextClearAccumGreenBits(
    GfGLContextInfo *
);

GFEXPORT GfBool gfGLContextExistsAccumBlueBits(
    const GfGLContextInfo *
);

GFEXPORT GfInt gfGLContextGetAccumBlueBits(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextSetAccumBlueBits(
    GfGLContextInfo *
    , GfInt
);

GFEXPORT void gfGLContextClearAccumBlueBits(
    GfGLContextInfo *
);

GFEXPORT GfBool gfGLContextExistsAccumAlphaBits(
    const GfGLContextInfo *
);

GFEXPORT GfInt gfGLContextGetAccumAlphaBits(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextSetAccumAlphaBits(
    GfGLContextInfo *
    , GfInt
);

GFEXPORT void gfGLContextClearAccumAlphaBits(
    GfGLContextInfo *
);

#endif  // GF_GL_CONTEXTINFO_H
