#ifndef FG_WINDOW_POSITIONEVENT_H
#define FG_WINDOW_POSITIONEVENT_H

typedef struct FgWindowPositionEvent FgWindowPositionEvent;

typedef void( * FgWindowPositionEventHandler )(
    const FgWindowPositionEvent *
    , void *
);

#include "fg/window/window.h"
#include "fg/common/primitives.h"

FGEXPORT FgWindowPositionEvent * fgWindowPositionEventNew(
    FgWindow *
    , FgInt
    , FgInt
);

FGEXPORT FgWindowPositionEvent * fgWindowPositionEventClone(
    const FgWindowPositionEvent *
);

FGEXPORT void fgWindowPositionEventFree(
    FgWindowPositionEvent *
);

FGEXPORT FgWindow * fgWindowPositionEventGetSource(
    const FgWindowPositionEvent *
);

FGEXPORT FgInt fgWindowPositionEventGetX(
    const FgWindowPositionEvent *
);

FGEXPORT FgInt fgWindowPositionEventGetY(
    const FgWindowPositionEvent *
);

#endif  // FG_WINDOW_POSITIONEVENT_H
