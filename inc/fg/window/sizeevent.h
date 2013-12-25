#ifndef FG_WINDOW_SIZEEVENT_H
#define FG_WINDOW_SIZEEVENT_H

#include "fg/def/window/sizeevent.h"
#include "fg/def/window/window.h"
#include "fg/def/primitives.h"
#include "fg/util/import.h"

FG_FUNCTION_PTR(
    FgWindowSizeEvent * fgWindowSizeEventNew(
        FgWindow *  _source
        , FgInt     _width
        , FgInt     _height
    )
)

FG_FUNCTION_PTR(
    FgWindowSizeEvent * fgWindowSizeEventClone(
        const FgWindowSizeEvent *   _ORG
    )
)

FG_FUNCTION_VOID(
    void fgWindowSizeEventFree(
        FgWindowSizeEvent * _this
    )
)

FG_FUNCTION_PTR(
    FgWindow * fgWindowSizeEventGetSource(
        const FgWindowSizeEvent *   _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgWindowSizeEventGetWidth(
        const FgWindowSizeEvent *   _THIS
    )
)

FG_FUNCTION_NUM(
    FgInt fgWindowSizeEventGetHeight(
        const FgWindowSizeEvent *   _THIS
    )
)

#endif  // FG_WINDOW_SIZEEVENT_H
