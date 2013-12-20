#ifndef FG_WINDOW_KEYEVENT_H
#define FG_WINDOW_KEYEVENT_H

typedef struct FgWindowKeyEvent FgWindowKeyEvent;

typedef void( * FgWindowKeyEventHandler )(
    const FgWindowKeyEvent *
);

#include "fg/window/window.h"
#include "fg/window/key.h"
#include "fg/common/primitives.h"

FGEXPORT FgWindowKeyEvent * fgWindowKeyEventNew(
    FgWindow *
    , FgKey
    , const FgUtf32Char *
    , FgBool
);

FGEXPORT FgWindowKeyEvent * fgWindowKeyEventClone(
    const FgWindowKeyEvent *
);

FGEXPORT void fgWindowKeyEventFree(
    FgWindowKeyEvent *
);

FGEXPORT FgWindow * fgWindowKeyEventGetSource(
    const FgWindowKeyEvent *
);

FGEXPORT FgKey fgWindowKeyEventGetKey(
    const FgWindowKeyEvent *
);

FGEXPORT const FgUtf32Char * fgWindowKeyEventGetCharPtr(
    const FgWindowKeyEvent *
);

FGEXPORT FgBool fgWindowKeyEventGetPressed(
    const FgWindowKeyEvent *
);

#endif  // FG_WINDOW_KEYEVENT_H
