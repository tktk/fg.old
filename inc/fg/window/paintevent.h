#ifndef FG_WINDOW_PAINTEVENT_H
#define FG_WINDOW_PAINTEVENT_H

#include "fg/type/window/paintevent.h"
#include "fg/type/window/window.h"
#include "fg/type/primitives.h"
#include "fg/util/import_new.h"

FG_FUNCTION_PTR(
    FgWindowPaintEvent * fgWindowPaintEventNew(
        FgWindow *  _source
        , FgInt     _x
        , FgInt     _y
        , FgInt     _width
        , FgInt     _height
    )
)

FG_FUNCTION_PTR(
    FgWindowPaintEvent * fgWindowPaintEventClone(
        const FgWindowPaintEvent *  _ORG
    )
)

FG_FUNCTION_VOID(
    void fgWindowPaintEventFree(
        FgWindowPaintEvent *    _this
    )
)

FG_FUNCTION_PTR(
    FgWindow * fgWindowPaintEventGetSource(
        const FgWindowPaintEvent *  _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgWindowPaintEventGetX(
        const FgWindowPaintEvent *  _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgWindowPaintEventGetY(
        const FgWindowPaintEvent *  _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgWindowPaintEventGetWidth(
        const FgWindowPaintEvent *  _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgWindowPaintEventGetHeight(
        const FgWindowPaintEvent *  _THIS
    )
)

#endif  // FG_WINDOW_PAINTEVENT_H
