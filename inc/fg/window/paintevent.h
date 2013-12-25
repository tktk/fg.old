#ifndef FG_WINDOW_PAINTEVENT_H
#define FG_WINDOW_PAINTEVENT_H

typedef struct FgWindowPaintEvent FgWindowPaintEvent;

typedef void( * FgWindowPaintEventHandler )(
    const FgWindowPaintEvent *
    , void *
);

#include "fg/window/window.h"
#include "fg/common/primitives.h"

FGEXPORT FgWindowPaintEvent * fgWindowPaintEventNew(
    FgWindow *
    , FgInt
    , FgInt
    , FgInt
    , FgInt
);

FGEXPORT FgWindowPaintEvent * fgWindowPaintEventClone(
    const FgWindowPaintEvent *
);

FGEXPORT void fgWindowPaintEventFree(
    FgWindowPaintEvent *
);

FGEXPORT FgWindow * fgWindowPaintEventGetSource(
    const FgWindowPaintEvent *
);

FGEXPORT FgInt fgWindowPaintEventGetX(
    const FgWindowPaintEvent *
);

FGEXPORT FgInt fgWindowPaintEventGetY(
    const FgWindowPaintEvent *
);

FGEXPORT FgInt fgWindowPaintEventGetWidth(
    const FgWindowPaintEvent *
);

FGEXPORT FgInt fgWindowPaintEventGetHeight(
    const FgWindowPaintEvent *
);

#endif  // FG_WINDOW_PAINTEVENT_H
