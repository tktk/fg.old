#ifndef FG_WINDOW_WINDOW_H
#define FG_WINDOW_WINDOW_H

#include "fg/type/window/window.h"
#include "fg/type/window/eventhandlers.h"
#include "fg/type/string/utf32.h"
#include "fg/type/primitives.h"
#include "fg/util/import_new.h"

FG_FUNCTION_PTR(
    FgWindow * fgWindowNew(
        const FgWindowEventHandlers *   _EVENT_HANDLERS
        , const FgUtf32 *               _TITLE
        , FgInt                         _x
        , FgInt                         _y
    )
)

FG_FUNCTION_VOID(
    void fgWindowFree(
        FgWindow *  _this
    )
)

FG_FUNCTION_VOID(
    void fgWindowClose(
        FgWindow *  _this
    )
)

FG_FUNCTION_BOOL(
    FgBool fgWindowSetTitle(
        FgWindow *          _this
        , const FgUtf32 *   _TITLE
    )
)

FG_FUNCTION_VOID(
    void fgWindowSetPosition(
        FgWindow *  _this
        , FgInt     _x
        , FgInt     _y
    )
)

FG_FUNCTION_VOID(
    void fgWindowSetSize(
        FgWindow *  _this
        , FgInt     _width
        , FgInt     _height
    )
)

FG_FUNCTION_VOID(
    void fgWindowRepaint(
        FgWindow *  _this
        , FgInt     _x
        , FgInt     _y
        , FgInt     _width
        , FgInt     _height
    )
)

FG_FUNCTION_VOID(
    void fgWindowRepaintAll(
        FgWindow *  _this
    )
)

#endif  // FG_WINDOW_WINDOW_H
