#ifndef GF_GL_CONFIG_H
#define GF_GL_CONFIG_H

#include "fg/def/gl/config.h"
#include "fg/def/gl/version.h"
#include "fg/def/common/primitives.h"
#include "fg/util/import.h"

FG_FUNCTION_PTR(
    FgGLConfig * gfGLConfigNew(
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigFree(
        FgGLConfig *    _this
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigSetVersion(
        FgGLConfig *    _this
        , FgGLVersion   _version
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigSetDoubleBuffer(
        FgGLConfig *    _this
        , FgBool        _doubleBuffer
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigSetAuxBuffers(
        FgGLConfig *    _this
        , FgInt         _auxBuffers
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigClearAuxBuffers(
        FgGLConfig *    _this
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigSetRedBits(
        FgGLConfig *    _this
        , FgInt         _redBits
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigClearRedBits(
        FgGLConfig *    _this
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigSetGreenBits(
        FgGLConfig *    _this
        , FgInt         _greenBits
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigClearGreenBits(
        FgGLConfig *    _this
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigSetBlueBits(
        FgGLConfig *    _this
        , FgInt         _blueBits
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigClearBlueBits(
        FgGLConfig *    _this
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigSetAlphaBits(
        FgGLConfig *    _this
        , FgInt         _alphaBits
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigClearAlphaBits(
        FgGLConfig *    _this
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigSetDepthBits(
        FgGLConfig *    _this
        , FgInt         _depthBits
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigClearDepthBits(
        FgGLConfig *    _this
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigSetStencilBits(
        FgGLConfig *    _this
        , FgInt         _stencilBits
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigClearStencilBits(
        FgGLConfig *    _this
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigSetAccumRedBits(
        FgGLConfig *    _this
        , FgInt         _accumRedBits
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigClearAccumRedBits(
        FgGLConfig *    _this
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigSetAccumGreenBits(
        FgGLConfig *    _this
        , FgInt         _accumGreenBits
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigClearAccumGreenBits(
        FgGLConfig *    _this
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigSetAccumBlueBits(
        FgGLConfig *    _this
        , FgInt         _accumBlueBits
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigClearAccumBlueBits(
        FgGLConfig *    _this
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigSetAccumAlphaBits(
        FgGLConfig *    _this
        , FgInt         _accumAlphaBits
    )
)

FG_FUNCTION_VOID(
    void gfGLConfigClearAccumAlphaBits(
        FgGLConfig *    _this
    )
)

#endif  // GF_GL_CONFIG_H
