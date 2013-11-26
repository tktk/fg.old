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

GFEXPORT GfBool gfGLContextInfoGetDoubleBuffer(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextInfoSetDoubleBuffer(
    GfGLContextInfo *
    , GfBool
);

GFEXPORT GfBool gfGLContextInfoExistsAuxBuffers(
    const GfGLContextInfo *
);

GFEXPORT GfInt gfGLContextInfoGetAuxBuffers(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextInfoSetAuxBuffers(
    GfGLContextInfo *
    , GfInt
);

GFEXPORT void gfGLContextInfoClearAuxBuffers(
    GfGLContextInfo *
);

GFEXPORT GfBool gfGLContextInfoExistsRedBits(
    const GfGLContextInfo *
);

GFEXPORT GfInt gfGLContextInfoGetRedBits(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextInfoSetRedBits(
    GfGLContextInfo *
    , GfInt
);

GFEXPORT void gfGLContextInfoClearRedBits(
    GfGLContextInfo *
);

GFEXPORT GfBool gfGLContextInfoExistsGreenBits(
    const GfGLContextInfo *
);

GFEXPORT GfInt gfGLContextInfoGetGreenBits(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextInfoSetGreenBits(
    GfGLContextInfo *
    , GfInt
);

GFEXPORT void gfGLContextInfoClearGreenBits(
    GfGLContextInfo *
);

GFEXPORT GfBool gfGLContextInfoExistsBlueBits(
    const GfGLContextInfo *
);

GFEXPORT GfInt gfGLContextInfoGetBlueBits(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextInfoSetBlueBits(
    GfGLContextInfo *
    , GfInt
);

GFEXPORT void gfGLContextInfoClearBlueBits(
    GfGLContextInfo *
);

GFEXPORT GfBool gfGLContextInfoExistsAlphaBits(
    const GfGLContextInfo *
);

GFEXPORT GfInt gfGLContextInfoGetAlphaBits(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextInfoSetAlphaBits(
    GfGLContextInfo *
    , GfInt
);

GFEXPORT void gfGLContextInfoClearAlphaBits(
    GfGLContextInfo *
);

GFEXPORT GfBool gfGLContextInfoExistsDepthBits(
    const GfGLContextInfo *
);

GFEXPORT GfInt gfGLContextInfoGetDepthBits(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextInfoSetDepthBits(
    GfGLContextInfo *
    , GfInt
);

GFEXPORT void gfGLContextInfoClearDepthBits(
    GfGLContextInfo *
);

GFEXPORT GfBool gfGLContextInfoExistsStencilBits(
    const GfGLContextInfo *
);

GFEXPORT GfInt gfGLContextInfoGetStencilBits(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextInfoSetStencilBits(
    GfGLContextInfo *
    , GfInt
);

GFEXPORT void gfGLContextInfoClearStencilBits(
    GfGLContextInfo *
);

GFEXPORT GfBool gfGLContextInfoExistsAccumRedBits(
    const GfGLContextInfo *
);

GFEXPORT GfInt gfGLContextInfoGetAccumRedBits(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextInfoSetAccumRedBits(
    GfGLContextInfo *
    , GfInt
);

GFEXPORT void gfGLContextInfoClearAccumRedBits(
    GfGLContextInfo *
);

GFEXPORT GfBool gfGLContextInfoExistsAccumGreenBits(
    const GfGLContextInfo *
);

GFEXPORT GfInt gfGLContextInfoGetAccumGreenBits(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextInfoSetAccumGreenBits(
    GfGLContextInfo *
    , GfInt
);

GFEXPORT void gfGLContextInfoClearAccumGreenBits(
    GfGLContextInfo *
);

GFEXPORT GfBool gfGLContextInfoExistsAccumBlueBits(
    const GfGLContextInfo *
);

GFEXPORT GfInt gfGLContextInfoGetAccumBlueBits(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextInfoSetAccumBlueBits(
    GfGLContextInfo *
    , GfInt
);

GFEXPORT void gfGLContextInfoClearAccumBlueBits(
    GfGLContextInfo *
);

GFEXPORT GfBool gfGLContextInfoExistsAccumAlphaBits(
    const GfGLContextInfo *
);

GFEXPORT GfInt gfGLContextInfoGetAccumAlphaBits(
    const GfGLContextInfo *
);

GFEXPORT void gfGLContextInfoSetAccumAlphaBits(
    GfGLContextInfo *
    , GfInt
);

GFEXPORT void gfGLContextInfoClearAccumAlphaBits(
    GfGLContextInfo *
);

#endif  // GF_GL_CONTEXTINFO_H
