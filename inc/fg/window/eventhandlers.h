#ifndef FG_WINDOW_EVENTHANDLERS_H
#define FG_WINDOW_EVENTHANDLERS_H

typedef struct FgWindowEventHandlers FgWindowEventHandlers;

#include "fg/window/closeevent.h"
#include "fg/window/positionevent.h"
#include "fg/window/sizeevent.h"
#include "fg/window/paintevent.h"
#include "fg/window/keyevent.h"
#include "fg/window/mousebuttonevent.h"
#include "fg/window/mousemotionevent.h"
#include "fg/util/import.h"

FGEXPORT FgWindowEventHandlers * fgWindowEventHandlersNew(
);

FGEXPORT FgWindowEventHandlers * fgWindowEventHandlersClone(
    const FgWindowEventHandlers *
);

FGEXPORT void fgWindowEventHandlersFree(
    FgWindowEventHandlers *
);

FGEXPORT void fgWindowEventHandlersSetCloseEventHandler(
    FgWindowEventHandlers *
    , FgWindowCloseEventHandler
    , void *
);

FGEXPORT void fgWindowEventHandlersCallCloseEventHandler(
    const FgWindowEventHandlers *
    , const FgWindowCloseEvent *
);

FGEXPORT void fgWindowEventHandlersSetPositionEventHandler(
    FgWindowEventHandlers *
    , FgWindowPositionEventHandler
    , void *
);

FGEXPORT void fgWindowEventHandlersCallPositionEventHandler(
    const FgWindowEventHandlers *
    , const FgWindowPositionEvent *
);

FGEXPORT void fgWindowEventHandlersSetSizeEventHandler(
    FgWindowEventHandlers *
    , FgWindowSizeEventHandler
    , void *
);

FGEXPORT void fgWindowEventHandlersCallSizeEventHandler(
    const FgWindowEventHandlers *
    , const FgWindowSizeEvent *
);

FGEXPORT void fgWindowEventHandlersSetPaintEventHandler(
    FgWindowEventHandlers *
    , FgWindowPaintEventHandler
    , void *
);

FGEXPORT void fgWindowEventHandlersCallPaintEventHandler(
    const FgWindowEventHandlers *
    , const FgWindowPaintEvent *
);

FGEXPORT void fgWindowEventHandlersSetKeyEventHandler(
    FgWindowEventHandlers *
    , FgWindowKeyEventHandler
    , void *
);

FGEXPORT void fgWindowEventHandlersCallKeyEventHandler(
    const FgWindowEventHandlers *
    , const FgWindowKeyEvent *
);

FGEXPORT void fgWindowEventHandlersSetMouseButtonEventHandler(
    FgWindowEventHandlers *
    , FgWindowMouseButtonEventHandler
    , void *
);

FGEXPORT void fgWindowEventHandlersCallMouseButtonEventHandler(
    const FgWindowEventHandlers *
    , const FgWindowMouseButtonEvent *
);

FGEXPORT void fgWindowEventHandlersSetMouseMotionEventHandler(
    FgWindowEventHandlers *
    , FgWindowMouseMotionEventHandler
    , void *
);

FGEXPORT void fgWindowEventHandlersCallMouseMotionEventHandler(
    const FgWindowEventHandlers *
    , const FgWindowMouseMotionEvent *
);

#endif  // FG_WINDOW_EVENTHANDLERS_H
