#ifndef FG_WINDOW_CLOSEEVENT_H
#define FG_WINDOW_CLOSEEVENT_H

typedef struct FgWindowCloseEvent FgWindowCloseEvent;

typedef void( * FgWindowCloseEventHandler )(
    const FgWindowCloseEvent *
    , void *
);

#include "fg/window/window.h"
#include "fg/util/import.h"

FGEXPORT FgWindowCloseEvent * fgWindowCloseEventNew(
    FgWindow *
);

FGEXPORT FgWindowCloseEvent * fgWindowCloseEventClone(
    const FgWindowCloseEvent *
);

FGEXPORT void fgWindowCloseEventFree(
    FgWindowCloseEvent *
);

FGEXPORT FgWindow * fgWindowCloseEventGetSource(
    const FgWindowCloseEvent *
);

#endif  // FG_WINDOW_CLOSEEVENT_H
