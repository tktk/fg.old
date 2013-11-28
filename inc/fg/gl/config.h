#ifndef FG_GL_CONFIG_H
#define FG_GL_CONFIG_H

typedef struct FgGLConfig FgGLConfig;

#include "fg/common/primitives.h"
#include "fg/util/import.h"

FGEXPORT FgBool fgGLConfigGetDoubleBuffer(
    const FgGLConfig *
);

FGEXPORT FgBool fgGLConfigExistsAuxBuffers(
    const FgGLConfig *
);

FGEXPORT FgInt fgGLConfigGetAuxBuffers(
    const FgGLConfig *
);

FGEXPORT FgBool fgGLConfigExistsRedBits(
    const FgGLConfig *
);

FGEXPORT FgInt fgGLConfigGetRedBits(
    const FgGLConfig *
);

FGEXPORT FgBool fgGLConfigExistsGreenBits(
    const FgGLConfig *
);

FGEXPORT FgInt fgGLConfigGetGreenBits(
    const FgGLConfig *
);

FGEXPORT FgBool fgGLConfigExistsBlueBits(
    const FgGLConfig *
);

FGEXPORT FgInt fgGLConfigGetBlueBits(
    const FgGLConfig *
);

FGEXPORT FgBool fgGLConfigExistsAlphaBits(
    const FgGLConfig *
);

FGEXPORT FgInt fgGLConfigGetAlphaBits(
    const FgGLConfig *
);

FGEXPORT FgBool fgGLConfigExistsDepthBits(
    const FgGLConfig *
);

FGEXPORT FgInt fgGLConfigGetDepthBits(
    const FgGLConfig *
);

FGEXPORT FgBool fgGLConfigExistsStencilBits(
    const FgGLConfig *
);

FGEXPORT FgInt fgGLConfigGetStencilBits(
    const FgGLConfig *
);

FGEXPORT FgBool fgGLConfigExistsAccumRedBits(
    const FgGLConfig *
);

FGEXPORT FgInt fgGLConfigGetAccumRedBits(
    const FgGLConfig *
);

FGEXPORT FgBool fgGLConfigExistsAccumGreenBits(
    const FgGLConfig *
);

FGEXPORT FgInt fgGLConfigGetAccumGreenBits(
    const FgGLConfig *
);

FGEXPORT FgBool fgGLConfigExistsAccumBlueBits(
    const FgGLConfig *
);

FGEXPORT FgInt fgGLConfigGetAccumBlueBits(
    const FgGLConfig *
);

FGEXPORT FgBool fgGLConfigExistsAccumAlphaBits(
    const FgGLConfig *
);

FGEXPORT FgInt fgGLConfigGetAccumAlphaBits(
    const FgGLConfig *
);

#endif  // FG_GL_CONFIG_H
