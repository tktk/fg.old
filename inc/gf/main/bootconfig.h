#ifndef GF_MAIN_BOOTCONFIG_H
#define GF_MAIN_BOOTCONFIG_H

#include "gf/def/main/bootconfig.h"
#include "fg/def/gl/version.h"
#include "fg/def/string/utf32.h"
#include "fg/def/common/primitives.h"
#include "fg/util/import.h"

FG_FUNCTION_PTR(
    GfBootConfig * gfBootConfigNew(
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigFree(
        GfBootConfig *  _this
    )
)

FG_FUNCTION_BOOL(
    FgBool gfBootConfigExistsBinDir(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_PTR(
    const FgUtf32 * gfBootConfigGetBinDir(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_BOOL(
    FgBool gfBootConfigSetBinDir(
        GfBootConfig *      _this
        , const FgUtf32 *   _BIN_DIR
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigClearBinDir(
        GfBootConfig *  _this
    )
)

FG_FUNCTION_BOOL(
    FgBool gfBootConfigExistsGLVersion(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION(
    FgGLVersion gfBootConfigGetGLVersion(
        const GfBootConfig *    _THIS
    )
    , return FG_GL_VERSION_INVALID;
)

FG_FUNCTION_VOID(
    void gfBootConfigSetGLVersion(
        GfBootConfig *  _this
        , FgGLVersion   _version
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigClearGLVersion(
        GfBootConfig *  _this
    )
)

FG_FUNCTION_BOOL(
    FgBool gfBootConfigExistsGLDoubleBuffer(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_BOOL(
    FgBool gfBootConfigGetGLDoubleBuffer(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigSetGLDoubleBuffer(
        GfBootConfig *  _this
        , FgBool        _doubleBuffer
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigClearGLDoubleBuffer(
        GfBootConfig *  _this
    )
)

FG_FUNCTION_BOOL(
    FgBool gfBootConfigExistsGLAuxBuffers(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt gfBootConfigGetGLAuxBuffers(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigSetGLAuxBuffers(
        GfBootConfig *  _this
        , FgInt         _auxBuffers
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigClearGLAuxBuffers(
        GfBootConfig *  _this
    )
)

FG_FUNCTION_BOOL(
    FgBool gfBootConfigExistsGLRedBits(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt gfBootConfigGetGLRedBits(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigSetGLRedBits(
        GfBootConfig *  _this
        , FgInt         _redBits
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigClearGLRedBits(
        GfBootConfig *  _this
    )
)

FG_FUNCTION_BOOL(
    FgBool gfBootConfigExistsGLGreenBits(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt gfBootConfigGetGLGreenBits(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigSetGLGreenBits(
        GfBootConfig *  _this
        , FgInt         _greenBits
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigClearGLGreenBits(
        GfBootConfig *  _this
    )
)

FG_FUNCTION_BOOL(
    FgBool gfBootConfigExistsGLBlueBits(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt gfBootConfigGetGLBlueBits(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigSetGLBlueBits(
        GfBootConfig *  _this
        , FgInt         _blueBits
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigClearGLBlueBits(
        GfBootConfig *  _this
    )
)

FG_FUNCTION_BOOL(
    FgBool gfBootConfigExistsGLAlphaBits(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt gfBootConfigGetGLAlphaBits(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigSetGLAlphaBits(
        GfBootConfig *  _this
        , FgInt         _alphaBits
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigClearGLAlphaBits(
        GfBootConfig *  _this
    )
)

FG_FUNCTION_BOOL(
    FgBool gfBootConfigExistsGLDepthBits(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt gfBootConfigGetGLDepthBits(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigSetGLDepthBits(
        GfBootConfig *  _this
        , FgInt         _depthBits
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigClearGLDepthBits(
        GfBootConfig *  _this
    )
)

FG_FUNCTION_BOOL(
    FgBool gfBootConfigExistsGLStencilBits(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt gfBootConfigGetGLStencilBits(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigSetGLStencilBits(
        GfBootConfig *  _this
        , FgInt         _stencilBits
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigClearGLStencilBits(
        GfBootConfig *  _this
    )
)

FG_FUNCTION_BOOL(
    FgBool gfBootConfigExistsGLAccumRedBits(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt gfBootConfigGetGLAccumRedBits(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigSetGLAccumRedBits(
        GfBootConfig *  _this
        , FgInt         _accumRedBits
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigClearGLAccumRedBits(
        GfBootConfig *  _this
    )
)

FG_FUNCTION_BOOL(
    FgBool gfBootConfigExistsGLAccumGreenBits(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt gfBootConfigGetGLAccumGreenBits(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigSetGLAccumGreenBits(
        GfBootConfig *  _this
        , FgInt         _accumGreenBits
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigClearGLAccumGreenBits(
        GfBootConfig *  _this
    )
)

FG_FUNCTION_BOOL(
    FgBool gfBootConfigExistsGLAccumBlueBits(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt gfBootConfigGetGLAccumBlueBits(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigSetGLAccumBlueBits(
        GfBootConfig *  _this
        , FgInt         _accumBlueBits
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigClearGLAccumBlueBits(
        GfBootConfig *  _this
    )
)

FG_FUNCTION_BOOL(
    FgBool gfBootConfigExistsGLAccumAlphaBits(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt gfBootConfigGetGLAccumAlphaBits(
        const GfBootConfig *    _THIS
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigSetGLAccumAlphaBits(
        GfBootConfig *  _this
        , FgInt         _accumAlphaBits
    )
)

FG_FUNCTION_VOID(
    void gfBootConfigClearGLAccumAlphaBits(
        GfBootConfig *  _this
    )
)

#endif  // GF_MAIN_BOOTCONFIG_H
