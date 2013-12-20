#ifndef FG_WINDOW_EVENTHANDLERS_H
#define FG_WINDOW_EVENTHANDLERS_H

typedef struct FgWindowEventHandlers FgWindowEventHandlers;

#include "fg/window/closeevent.h"
#include "fg/window/positionevent.h"
#include "fg/window/sizeevent.h"
#include "fg/window/paintevent.h"
#include "fg/window/keyevent.h"
#include "fg/window/window.h"
#include "fg/window/key.h"
#include "fg/common/primitives.h"

typedef void( * FgWindowMouseButtonEventHandler )(
    FgWindow *
    , FgULong
    , FgBool
    , FgInt
    , FgInt
);

typedef void( * FgWindowMouseMotionEventHandler )(
    FgWindow *
    , FgInt
    , FgInt
);

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
);

FGEXPORT void fgWindowEventHandlersCallCloseEventHandler(
    const FgWindowEventHandlers *
    , const FgWindowCloseEvent *
);

FGEXPORT void fgWindowEventHandlersSetPositionEventHandler(
    FgWindowEventHandlers *
    , FgWindowPositionEventHandler
);

FGEXPORT void fgWindowEventHandlersCallPositionEventHandler(
    const FgWindowEventHandlers *
    , const FgWindowPositionEvent *
);

FGEXPORT void fgWindowEventHandlersSetSizeEventHandler(
    FgWindowEventHandlers *
    , FgWindowSizeEventHandler
);

FGEXPORT void fgWindowEventHandlersCallSizeEventHandler(
    const FgWindowEventHandlers *
    , const FgWindowSizeEvent *
);

FGEXPORT void fgWindowEventHandlersSetPaintEventHandler(
    FgWindowEventHandlers *
    , FgWindowPaintEventHandler
);

FGEXPORT void fgWindowEventHandlersCallPaintEventHandler(
    const FgWindowEventHandlers *
    , const FgWindowPaintEvent *
);

FGEXPORT void fgWindowEventHandlersSetKeyEventHandler(
    FgWindowEventHandlers *
    , FgWindowKeyEventHandler
);

FGEXPORT void fgWindowEventHandlersCallKeyEventHandler(
    const FgWindowEventHandlers *
    , const FgWindowKeyEvent *
);

FGEXPORT void fgWindowEventHandlersSetMouseButtonEventHandler(
    FgWindowEventHandlers *
    , FgWindowMouseButtonEventHandler
);

FGEXPORT void fgWindowEventHandlersCallMouseButtonEventHandler(
    const FgWindowEventHandlers *
    , FgWindow *
    , FgULong
    , FgBool
    , FgInt
    , FgInt
);

FGEXPORT void fgWindowEventHandlersSetMouseMotionEventHandler(
    FgWindowEventHandlers *
    , FgWindowMouseMotionEventHandler
);

FGEXPORT void fgWindowEventHandlersCallMouseMotionEventHandler(
    const FgWindowEventHandlers *
    , FgWindow *
    , FgInt
    , FgInt
);

#endif  // FG_WINDOW_EVENTHANDLERS_H
