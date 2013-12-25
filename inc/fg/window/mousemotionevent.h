#ifndef FG_WINDOW_MOUSEMOTIONEVENT_H
#define FG_WINDOW_MOUSEMOTIONEVENT_H

#include "fg/def/window/mousemotionevent.h"
#include "fg/def/window/window.h"
#include "fg/def/primitives.h"
#include "fg/util/import_new.h"

FG_FUNCTION_PTR(
    FgWindowMouseMotionEvent * fgWindowMouseMotionEventNew(
        FgWindow *  _source
        , FgInt     _x
        , FgInt     _y
    )
)

FG_FUNCTION_PTR(
    FgWindowMouseMotionEvent * fgWindowMouseMotionEventClone(
        const FgWindowMouseMotionEvent *    _ORG
    )
)

FG_FUNCTION_VOID(
    void fgWindowMouseMotionEventFree(
        FgWindowMouseMotionEvent *  _this
    )
)

FG_FUNCTION_PTR(
    FgWindow * fgWindowMouseMotionEventGetSource(
        const FgWindowMouseMotionEvent *    _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgWindowMouseMotionEventGetX(
        const FgWindowMouseMotionEvent *    _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgWindowMouseMotionEventGetY(
        const FgWindowMouseMotionEvent *    _THIS
    )
)

#endif  // FG_WINDOW_MOUSEMOTIONEVENT_H
