#ifndef FG_WINDOW_MOUSEBUTTONEVENT_H
#define FG_WINDOW_MOUSEBUTTONEVENT_H

typedef struct FgWindowMouseButtonEvent FgWindowMouseButtonEvent;

typedef void( * FgWindowMouseButtonEventHandler )(
    const FgWindowMouseButtonEvent *
    , void *
);

#include "fg/window/window.h"
#include "fg/common/primitives.h"

FGEXPORT FgWindowMouseButtonEvent * fgWindowMouseButtonEventNew(
    FgWindow *
    , FgULong
    , FgBool
    , FgInt
    , FgInt
);

FGEXPORT FgWindowMouseButtonEvent * fgWindowMouseButtonEventClone(
    const FgWindowMouseButtonEvent *
);

FGEXPORT void fgWindowMouseButtonEventFree(
    FgWindowMouseButtonEvent *
);

FGEXPORT FgWindow * fgWindowMouseButtonEventGetSource(
    const FgWindowMouseButtonEvent *
);

FGEXPORT FgULong fgWindowMouseButtonEventGetIndex(
    const FgWindowMouseButtonEvent *
);

FGEXPORT FgBool fgWindowMouseButtonEventGetPressed(
    const FgWindowMouseButtonEvent *
);

FGEXPORT FgInt fgWindowMouseButtonEventGetX(
    const FgWindowMouseButtonEvent *
);

FGEXPORT FgInt fgWindowMouseButtonEventGetY(
    const FgWindowMouseButtonEvent *
);

#endif  // FG_WINDOW_MOUSEBUTTONEVENT_H
