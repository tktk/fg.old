#ifndef FG_WINDOW_SIZEEVENT_H
#define FG_WINDOW_SIZEEVENT_H

typedef struct FgWindowSizeEvent FgWindowSizeEvent;

typedef void( * FgWindowSizeEventHandler )(
    const FgWindowSizeEvent *
);

#include "fg/window/window.h"
#include "fg/common/primitives.h"

FGEXPORT FgWindowSizeEvent * fgWindowSizeEventNew(
    FgWindow *
    , FgInt
    , FgInt
);

FGEXPORT FgWindowSizeEvent * fgWindowSizeEventClone(
    const FgWindowSizeEvent *
);

FGEXPORT void fgWindowSizeEventFree(
    FgWindowSizeEvent *
);

FGEXPORT FgWindow * fgWindowSizeEventGetSource(
    const FgWindowSizeEvent *
);

FGEXPORT FgInt fgWindowSizeEventGetWidth(
    const FgWindowSizeEvent *
);

FGEXPORT FgInt fgWindowSizeEventGetHeight(
    const FgWindowSizeEvent *
);

#endif  // FG_WINDOW_SIZEEVENT_H
