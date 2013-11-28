#ifndef GF_GL_CONFIG_H
#define GF_GL_CONFIG_H

#include "fg/gl/config.h"
#include "fg/common/primitives.h"
#include "fg/util/import.h"

FGEXPORT FgGLConfig * gfGLConfigNew(
);

FGEXPORT void gfGLConfigFree(
    FgGLConfig *
);

FGEXPORT void gfGLConfigSetDoubleBuffer(
    FgGLConfig *
    , FgBool
);

FGEXPORT void gfGLConfigSetAuxBuffers(
    FgGLConfig *
    , FgInt
);

FGEXPORT void gfGLConfigClearAuxBuffers(
    FgGLConfig *
);

FGEXPORT void gfGLConfigSetRedBits(
    FgGLConfig *
    , FgInt
);

FGEXPORT void gfGLConfigClearRedBits(
    FgGLConfig *
);

FGEXPORT void gfGLConfigSetGreenBits(
    FgGLConfig *
    , FgInt
);

FGEXPORT void gfGLConfigClearGreenBits(
    FgGLConfig *
);

FGEXPORT void gfGLConfigSetBlueBits(
    FgGLConfig *
    , FgInt
);

FGEXPORT void gfGLConfigClearBlueBits(
    FgGLConfig *
);

FGEXPORT void gfGLConfigSetAlphaBits(
    FgGLConfig *
    , FgInt
);

FGEXPORT void gfGLConfigClearAlphaBits(
    FgGLConfig *
);

FGEXPORT void gfGLConfigSetDepthBits(
    FgGLConfig *
    , FgInt
);

FGEXPORT void gfGLConfigClearDepthBits(
    FgGLConfig *
);

FGEXPORT void gfGLConfigSetStencilBits(
    FgGLConfig *
    , FgInt
);

FGEXPORT void gfGLConfigClearStencilBits(
    FgGLConfig *
);

FGEXPORT void gfGLConfigSetAccumRedBits(
    FgGLConfig *
    , FgInt
);

FGEXPORT void gfGLConfigClearAccumRedBits(
    FgGLConfig *
);

FGEXPORT void gfGLConfigSetAccumGreenBits(
    FgGLConfig *
    , FgInt
);

FGEXPORT void gfGLConfigClearAccumGreenBits(
    FgGLConfig *
);

FGEXPORT void gfGLConfigSetAccumBlueBits(
    FgGLConfig *
    , FgInt
);

FGEXPORT void gfGLConfigClearAccumBlueBits(
    FgGLConfig *
);

FGEXPORT void gfGLConfigSetAccumAlphaBits(
    FgGLConfig *
    , FgInt
);

FGEXPORT void gfGLConfigClearAccumAlphaBits(
    FgGLConfig *
);

#endif  // GF_GL_CONFIG_H
