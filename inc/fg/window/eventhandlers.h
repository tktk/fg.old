#ifndef FG_WINDOW_EVENTHANDLERS_H
#define FG_WINDOW_EVENTHANDLERS_H

typedef struct FgWindowEventHandlers FgWindowEventHandlers;

#include "fg/window/closeevent.h"
#include "fg/window/positionevent.h"
#include "fg/window/window.h"
#include "fg/window/key.h"
#include "fg/common/primitives.h"

typedef void( * FgWindowSizeEventHandler )(
    FgWindow *
    , FgInt
    , FgInt
);

typedef void( * FgWindowPaintEventHandler )(
    FgWindow *
    , FgInt
    , FgInt
    , FgInt
    , FgInt
);

typedef void( * FgWindowKeyEventHandler )(
    FgWindow *
    , FgKey
    , const FgUtf32Char *
    , FgBool
);

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
    , FgWindow *
    , FgInt
    , FgInt
);

FGEXPORT void fgWindowEventHandlersSetPaintEventHandler(
    FgWindowEventHandlers *
    , FgWindowPaintEventHandler
);

FGEXPORT void fgWindowEventHandlersCallPaintEventHandler(
    const FgWindowEventHandlers *
    , FgWindow *
    , FgInt
    , FgInt
    , FgInt
    , FgInt
);

FGEXPORT void fgWindowEventHandlersSetKeyEventHandler(
    FgWindowEventHandlers *
    , FgWindowKeyEventHandler
);

FGEXPORT void fgWindowEventHandlersCallKeyEventHandler(
    const FgWindowEventHandlers *
    , FgWindow *
    , FgKey
    , const FgUtf32Char *
    , FgBool
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
