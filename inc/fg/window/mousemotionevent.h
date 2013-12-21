#ifndef FG_WINDOW_MOUSEMOTIONEVENT_H
#define FG_WINDOW_MOUSEMOTIONEVENT_H

typedef struct FgWindowMouseMotionEvent FgWindowMouseMotionEvent;

typedef void( * FgWindowMouseMotionEventHandler )(
    const FgWindowMouseMotionEvent *
);

#include "fg/window/window.h"
#include "fg/common/primitives.h"

FGEXPORT FgWindowMouseMotionEvent * fgWindowMouseMotionEventNew(
    FgWindow *
    , FgInt
    , FgInt
);

FGEXPORT FgWindowMouseMotionEvent * fgWindowMouseMotionEventClone(
    const FgWindowMouseMotionEvent *
);

FGEXPORT void fgWindowMouseMotionEventFree(
    FgWindowMouseMotionEvent *
);

FGEXPORT FgWindow * fgWindowMouseMotionEventGetSource(
    const FgWindowMouseMotionEvent *
);

FGEXPORT FgInt fgWindowMouseMotionEventGetX(
    const FgWindowMouseMotionEvent *
);

FGEXPORT FgInt fgWindowMouseMotionEventGetY(
    const FgWindowMouseMotionEvent *
);

#endif  // FG_WINDOW_MOUSEMOTIONEVENT_H
