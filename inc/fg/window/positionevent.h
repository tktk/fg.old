#ifndef FG_WINDOW_POSITIONEVENT_H
#define FG_WINDOW_POSITIONEVENT_H

#include "fg/type/window/positionevent.h"
#include "fg/type/window/window.h"
#include "fg/type/primitives.h"
#include "fg/util/import_new.h"

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
