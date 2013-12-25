#ifndef FG_WINDOW_MOUSEBUTTONEVENT_H
#define FG_WINDOW_MOUSEBUTTONEVENT_H

#include "fg/def/window/mousebuttonevent.h"
#include "fg/def/window/window.h"
#include "fg/def/primitives.h"
#include "fg/util/import_new.h"

FG_FUNCTION_PTR(
    FgWindowMouseButtonEvent * fgWindowMouseButtonEventNew(
        FgWindow *  _source
        , FgULong   _index
        , FgBool    _pressed
        , FgInt     _x
        , FgInt     _y
    )
)

FG_FUNCTION_PTR(
    FgWindowMouseButtonEvent * fgWindowMouseButtonEventClone(
        const FgWindowMouseButtonEvent *    _ORG
    )
)

FG_FUNCTION_VOID(
    void fgWindowMouseButtonEventFree(
        FgWindowMouseButtonEvent *  _this
    )
)

FG_FUNCTION_PTR(
    FgWindow * fgWindowMouseButtonEventGetSource(
        const FgWindowMouseButtonEvent *    _THIS
    )
)

FG_FUNCTION_NUM(
    FgULong fgWindowMouseButtonEventGetIndex(
        const FgWindowMouseButtonEvent *    _THIS
    )
)

FG_FUNCTION_BOOL(
    FgBool fgWindowMouseButtonEventGetPressed(
        const FgWindowMouseButtonEvent *    _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgWindowMouseButtonEventGetX(
        const FgWindowMouseButtonEvent *    _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgWindowMouseButtonEventGetY(
        const FgWindowMouseButtonEvent *    _THIS
    )
)

#endif  // FG_WINDOW_MOUSEBUTTONEVENT_H
