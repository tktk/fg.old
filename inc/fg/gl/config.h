#ifndef FG_GL_CONFIG_H
#define FG_GL_CONFIG_H

#include "fg/def/gl/config.h"
#include "fg/def/gl/version.h"
#include "fg/def/primitives.h"
#include "fg/util/import_new.h"

FG_FUNCTION(
    FgGLVersion fgGLConfigGetVersion(
        const FgGLConfig *  _THIS
    )
    , return FG_GL_VERSION_INVALID;
)

FG_FUNCTION_BOOL(
    FgBool fgGLConfigGetDoubleBuffer(
        const FgGLConfig *  _THIS
    )
)

FG_FUNCTION_BOOL(
    FgBool fgGLConfigExistsAuxBuffers(
        const FgGLConfig *  _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgGLConfigGetAuxBuffers(
        const FgGLConfig *  _THIS
    )
)

FG_FUNCTION_BOOL(
    FgBool fgGLConfigExistsRedBits(
        const FgGLConfig *  _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgGLConfigGetRedBits(
        const FgGLConfig *  _THIS
    )
)

FG_FUNCTION_BOOL(
    FgBool fgGLConfigExistsGreenBits(
        const FgGLConfig *  _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgGLConfigGetGreenBits(
        const FgGLConfig *  _THIS
    )
)

FG_FUNCTION_BOOL(
    FgBool fgGLConfigExistsBlueBits(
        const FgGLConfig *  _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgGLConfigGetBlueBits(
        const FgGLConfig *  _THIS
    )
)

FG_FUNCTION_BOOL(
    FgBool fgGLConfigExistsAlphaBits(
        const FgGLConfig *  _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgGLConfigGetAlphaBits(
        const FgGLConfig *  _THIS
    )
)

FG_FUNCTION_BOOL(
    FgBool fgGLConfigExistsDepthBits(
        const FgGLConfig *  _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgGLConfigGetDepthBits(
        const FgGLConfig *  _THIS
    )
)

FG_FUNCTION_BOOL(
    FgBool fgGLConfigExistsStencilBits(
        const FgGLConfig *  _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgGLConfigGetStencilBits(
        const FgGLConfig *  _THIS
    )
)

FG_FUNCTION_BOOL(
    FgBool fgGLConfigExistsAccumRedBits(
        const FgGLConfig *  _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgGLConfigGetAccumRedBits(
        const FgGLConfig *  _THIS
    )
)

FG_FUNCTION_BOOL(
    FgBool fgGLConfigExistsAccumGreenBits(
        const FgGLConfig *  _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgGLConfigGetAccumGreenBits(
        const FgGLConfig *  _THIS
    )
)

FG_FUNCTION_BOOL(
    FgBool fgGLConfigExistsAccumBlueBits(
        const FgGLConfig *  _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgGLConfigGetAccumBlueBits(
        const FgGLConfig *  _THIS
    )
)

FG_FUNCTION_BOOL(
    FgBool fgGLConfigExistsAccumAlphaBits(
        const FgGLConfig *  _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgGLConfigGetAccumAlphaBits(
        const FgGLConfig *  _THIS
    )
)

#endif  // FG_GL_CONFIG_H
