#ifndef GF_MAIN_BOOTCONFIG_H
#define GF_MAIN_BOOTCONFIG_H

typedef struct GfBootConfig GfBootConfig;

#include "fg/string/utf32.h"
#include "fg/common/primitives.h"
#include "fg/util/import.h"

FGEXPORT GfBootConfig * gfBootConfigNew(
);

FGEXPORT void gfBootConfigFree(
    GfBootConfig *
);

FGEXPORT FgBool gfBootConfigExistsBinDir(
    const GfBootConfig *
);

FGEXPORT const FgUtf32 * gfBootConfigGetBinDir(
    const GfBootConfig *
);

FGEXPORT FgBool gfBootConfigSetBinDir(
    GfBootConfig *
    , const FgUtf32 *
);

FGEXPORT void gfBootConfigClearBinDir(
    GfBootConfig *
);

FGEXPORT FgBool gfBootConfigExistsGLDoubleBuffer(
    const GfBootConfig *
);

FGEXPORT FgBool gfBootConfigGetGLDoubleBuffer(
    const GfBootConfig *
);

FGEXPORT void gfBootConfigSetGLDoubleBuffer(
    GfBootConfig *
    , FgBool
);

FGEXPORT void gfBootConfigClearGLDoubleBuffer(
    GfBootConfig *
);

FGEXPORT FgBool gfBootConfigExistsGLAuxBuffers(
    const GfBootConfig *
);

FGEXPORT FgInt gfBootConfigGetGLAuxBuffers(
    const GfBootConfig *
);

FGEXPORT void gfBootConfigSetGLAuxBuffers(
    GfBootConfig *
    , FgInt
);

FGEXPORT void gfBootConfigClearGLAuxBuffers(
    GfBootConfig *
);

FGEXPORT FgBool gfBootConfigExistsGLRedBits(
    const GfBootConfig *
);

FGEXPORT FgInt gfBootConfigGetGLRedBits(
    const GfBootConfig *
);

FGEXPORT void gfBootConfigSetGLRedBits(
    GfBootConfig *
    , FgInt
);

FGEXPORT void gfBootConfigClearGLRedBits(
    GfBootConfig *
);

FGEXPORT FgBool gfBootConfigExistsGLGreenBits(
    const GfBootConfig *
);

FGEXPORT FgInt gfBootConfigGetGLGreenBits(
    const GfBootConfig *
);

FGEXPORT void gfBootConfigSetGLGreenBits(
    GfBootConfig *
    , FgInt
);

FGEXPORT void gfBootConfigClearGLGreenBits(
    GfBootConfig *
);

FGEXPORT FgBool gfBootConfigExistsGLBlueBits(
    const GfBootConfig *
);

FGEXPORT FgInt gfBootConfigGetGLBlueBits(
    const GfBootConfig *
);

FGEXPORT void gfBootConfigSetGLBlueBits(
    GfBootConfig *
    , FgInt
);

FGEXPORT void gfBootConfigClearGLBlueBits(
    GfBootConfig *
);

FGEXPORT FgBool gfBootConfigExistsGLAlphaBits(
    const GfBootConfig *
);

FGEXPORT FgInt gfBootConfigGetGLAlphaBits(
    const GfBootConfig *
);

FGEXPORT void gfBootConfigSetGLAlphaBits(
    GfBootConfig *
    , FgInt
);

FGEXPORT void gfBootConfigClearGLAlphaBits(
    GfBootConfig *
);

FGEXPORT FgBool gfBootConfigExistsGLDepthBits(
    const GfBootConfig *
);

FGEXPORT FgInt gfBootConfigGetGLDepthBits(
    const GfBootConfig *
);

FGEXPORT void gfBootConfigSetGLDepthBits(
    GfBootConfig *
    , FgInt
);

FGEXPORT void gfBootConfigClearGLDepthBits(
    GfBootConfig *
);

FGEXPORT FgBool gfBootConfigExistsGLStencilBits(
    const GfBootConfig *
);

FGEXPORT FgInt gfBootConfigGetGLStencilBits(
    const GfBootConfig *
);

FGEXPORT void gfBootConfigSetGLStencilBits(
    GfBootConfig *
    , FgInt
);

FGEXPORT void gfBootConfigClearGLStencilBits(
    GfBootConfig *
);

FGEXPORT FgBool gfBootConfigExistsGLAccumRedBits(
    const GfBootConfig *
);

FGEXPORT FgInt gfBootConfigGetGLAccumRedBits(
    const GfBootConfig *
);

FGEXPORT void gfBootConfigSetGLAccumRedBits(
    GfBootConfig *
    , FgInt
);

FGEXPORT void gfBootConfigClearGLAccumRedBits(
    GfBootConfig *
);

FGEXPORT FgBool gfBootConfigExistsGLAccumGreenBits(
    const GfBootConfig *
);

FGEXPORT FgInt gfBootConfigGetGLAccumGreenBits(
    const GfBootConfig *
);

FGEXPORT void gfBootConfigSetGLAccumGreenBits(
    GfBootConfig *
    , FgInt
);

FGEXPORT void gfBootConfigClearGLAccumGreenBits(
    GfBootConfig *
);

FGEXPORT FgBool gfBootConfigExistsGLAccumBlueBits(
    const GfBootConfig *
);

FGEXPORT FgInt gfBootConfigGetGLAccumBlueBits(
    const GfBootConfig *
);

FGEXPORT void gfBootConfigSetGLAccumBlueBits(
    GfBootConfig *
    , FgInt
);

FGEXPORT void gfBootConfigClearGLAccumBlueBits(
    GfBootConfig *
);

FGEXPORT FgBool gfBootConfigExistsGLAccumAlphaBits(
    const GfBootConfig *
);

FGEXPORT FgInt gfBootConfigGetGLAccumAlphaBits(
    const GfBootConfig *
);

FGEXPORT void gfBootConfigSetGLAccumAlphaBits(
    GfBootConfig *
    , FgInt
);

FGEXPORT void gfBootConfigClearGLAccumAlphaBits(
    GfBootConfig *
);

#endif  // GF_MAIN_BOOTCONFIG_H
