#ifndef FG_GL_CONTEXTINFO_H
#define FG_GL_CONTEXTINFO_H

typedef struct FgGLContextInfo FgGLContextInfo;

#include "fg/common/primitives.h"
#include "fg/util/import.h"

FGEXPORT FgGLContextInfo * fgGLContextInfoNew(
);

FGEXPORT FgGLContextInfo * fgGLContextInfoClone(
    const FgGLContextInfo *
);

FGEXPORT void fgGLContextInfoFree(
    FgGLContextInfo *
);

FGEXPORT FgBool fgGLContextInfoGetDoubleBuffer(
    const FgGLContextInfo *
);

FGEXPORT void fgGLContextInfoSetDoubleBuffer(
    FgGLContextInfo *
    , FgBool
);

FGEXPORT FgBool fgGLContextInfoExistsAuxBuffers(
    const FgGLContextInfo *
);

FGEXPORT FgInt fgGLContextInfoGetAuxBuffers(
    const FgGLContextInfo *
);

FGEXPORT void fgGLContextInfoSetAuxBuffers(
    FgGLContextInfo *
    , FgInt
);

FGEXPORT void fgGLContextInfoClearAuxBuffers(
    FgGLContextInfo *
);

FGEXPORT FgBool fgGLContextInfoExistsRedBits(
    const FgGLContextInfo *
);

FGEXPORT FgInt fgGLContextInfoGetRedBits(
    const FgGLContextInfo *
);

FGEXPORT void fgGLContextInfoSetRedBits(
    FgGLContextInfo *
    , FgInt
);

FGEXPORT void fgGLContextInfoClearRedBits(
    FgGLContextInfo *
);

FGEXPORT FgBool fgGLContextInfoExistsGreenBits(
    const FgGLContextInfo *
);

FGEXPORT FgInt fgGLContextInfoGetGreenBits(
    const FgGLContextInfo *
);

FGEXPORT void fgGLContextInfoSetGreenBits(
    FgGLContextInfo *
    , FgInt
);

FGEXPORT void fgGLContextInfoClearGreenBits(
    FgGLContextInfo *
);

FGEXPORT FgBool fgGLContextInfoExistsBlueBits(
    const FgGLContextInfo *
);

FGEXPORT FgInt fgGLContextInfoGetBlueBits(
    const FgGLContextInfo *
);

FGEXPORT void fgGLContextInfoSetBlueBits(
    FgGLContextInfo *
    , FgInt
);

FGEXPORT void fgGLContextInfoClearBlueBits(
    FgGLContextInfo *
);

FGEXPORT FgBool fgGLContextInfoExistsAlphaBits(
    const FgGLContextInfo *
);

FGEXPORT FgInt fgGLContextInfoGetAlphaBits(
    const FgGLContextInfo *
);

FGEXPORT void fgGLContextInfoSetAlphaBits(
    FgGLContextInfo *
    , FgInt
);

FGEXPORT void fgGLContextInfoClearAlphaBits(
    FgGLContextInfo *
);

FGEXPORT FgBool fgGLContextInfoExistsDepthBits(
    const FgGLContextInfo *
);

FGEXPORT FgInt fgGLContextInfoGetDepthBits(
    const FgGLContextInfo *
);

FGEXPORT void fgGLContextInfoSetDepthBits(
    FgGLContextInfo *
    , FgInt
);

FGEXPORT void fgGLContextInfoClearDepthBits(
    FgGLContextInfo *
);

FGEXPORT FgBool fgGLContextInfoExistsStencilBits(
    const FgGLContextInfo *
);

FGEXPORT FgInt fgGLContextInfoGetStencilBits(
    const FgGLContextInfo *
);

FGEXPORT void fgGLContextInfoSetStencilBits(
    FgGLContextInfo *
    , FgInt
);

FGEXPORT void fgGLContextInfoClearStencilBits(
    FgGLContextInfo *
);

FGEXPORT FgBool fgGLContextInfoExistsAccumRedBits(
    const FgGLContextInfo *
);

FGEXPORT FgInt fgGLContextInfoGetAccumRedBits(
    const FgGLContextInfo *
);

FGEXPORT void fgGLContextInfoSetAccumRedBits(
    FgGLContextInfo *
    , FgInt
);

FGEXPORT void fgGLContextInfoClearAccumRedBits(
    FgGLContextInfo *
);

FGEXPORT FgBool fgGLContextInfoExistsAccumGreenBits(
    const FgGLContextInfo *
);

FGEXPORT FgInt fgGLContextInfoGetAccumGreenBits(
    const FgGLContextInfo *
);

FGEXPORT void fgGLContextInfoSetAccumGreenBits(
    FgGLContextInfo *
    , FgInt
);

FGEXPORT void fgGLContextInfoClearAccumGreenBits(
    FgGLContextInfo *
);

FGEXPORT FgBool fgGLContextInfoExistsAccumBlueBits(
    const FgGLContextInfo *
);

FGEXPORT FgInt fgGLContextInfoGetAccumBlueBits(
    const FgGLContextInfo *
);

FGEXPORT void fgGLContextInfoSetAccumBlueBits(
    FgGLContextInfo *
    , FgInt
);

FGEXPORT void fgGLContextInfoClearAccumBlueBits(
    FgGLContextInfo *
);

FGEXPORT FgBool fgGLContextInfoExistsAccumAlphaBits(
    const FgGLContextInfo *
);

FGEXPORT FgInt fgGLContextInfoGetAccumAlphaBits(
    const FgGLContextInfo *
);

FGEXPORT void fgGLContextInfoSetAccumAlphaBits(
    FgGLContextInfo *
    , FgInt
);

FGEXPORT void fgGLContextInfoClearAccumAlphaBits(
    FgGLContextInfo *
);

#endif  // FG_GL_CONTEXTINFO_H
