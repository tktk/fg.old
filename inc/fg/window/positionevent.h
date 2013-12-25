#ifndef FG_WINDOW_POSITIONEVENT_H
#define FG_WINDOW_POSITIONEVENT_H

#include "fg/def/window/positionevent.h"
#include "fg/def/window/window.h"
#include "fg/def/primitives.h"
#include "fg/util/import.h"

FG_FUNCTION_PTR(
    FgWindowPositionEvent * fgWindowPositionEventNew(
        FgWindow *  _source
        , FgInt     _x
        , FgInt     _y
    )
)

FG_FUNCTION_PTR(
    FgWindowPositionEvent * fgWindowPositionEventClone(
        const FgWindowPositionEvent *   _ORG
    )
)

FG_FUNCTION_VOID(
    void fgWindowPositionEventFree(
        FgWindowPositionEvent * _this
    )
)

FG_FUNCTION_PTR(
    FgWindow * fgWindowPositionEventGetSource(
        const FgWindowPositionEvent *   _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgWindowPositionEventGetX(
        const FgWindowPositionEvent *   _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgWindowPositionEventGetY(
        const FgWindowPositionEvent *   _THIS
    )
)

#endif  // FG_WINDOW_POSITIONEVENT_H
