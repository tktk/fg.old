#ifndef FG_WINDOW_CLOSEEVENT_H
#define FG_WINDOW_CLOSEEVENT_H

#include "fg/type/window/closeevent.h"
#include "fg/type/window/window.h"
#include "fg/util/import_new.h"

FG_FUNCTION_PTR(
    FgWindowCloseEvent * fgWindowCloseEventNew(
        FgWindow *  _source
    )
)

FG_FUNCTION_PTR(
    FgWindowCloseEvent * fgWindowCloseEventClone(
        const FgWindowCloseEvent *  _ORG
    )
)

FG_FUNCTION_VOID(
    void fgWindowCloseEventFree(
        FgWindowCloseEvent *    _this
    )
)

FG_FUNCTION_PTR(
    FgWindow * fgWindowCloseEventGetSource(
        const FgWindowCloseEvent *  _THIS
    )
)

#endif  // FG_WINDOW_CLOSEEVENT_H
