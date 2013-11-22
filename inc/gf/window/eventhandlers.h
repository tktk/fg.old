#ifndef GF_WINDOW_EVENTHANDLERS_H
#define GF_WINDOW_EVENTHANDLERS_H

typedef struct GfWindowEventHandlers GfWindowEventHandlers;

#include "gf/window/window.h"
#include "gf/common/primitives.h"

typedef void( * GfWindowCloseEventHandler )(
    GfWindow *
);

typedef void( * GfWindowPositionEventHandler )(
    GfWindow *
    , GfInt
    , GfInt
);

typedef void( * GfWindowSizeEventHandler )(
    GfWindow *
    , GfInt
    , GfInt
);

typedef void( * GfWindowPaintEventHandler )(
    GfWindow *
    , GfInt
    , GfInt
    , GfInt
    , GfInt
);

#include "gf/util/import.h"

GFEXPORT GfWindowEventHandlers * gfWindowEventHandlersNew(
);

GFEXPORT GfWindowEventHandlers * gfWindowEventHandlersClone(
    const GfWindowEventHandlers *
);

GFEXPORT void gfWindowEventHandlersFree(
    GfWindowEventHandlers *
);

GFEXPORT void gfWindowEventHandlersSetCloseEventHandler(
    GfWindowEventHandlers *
    , GfWindowCloseEventHandler
);

GFEXPORT void gfWindowEventHandlersCallCloseEventHandler(
    const GfWindowEventHandlers *
    , GfWindow *
);

GFEXPORT void gfWindowEventHandlersSetPositionEventHandler(
    GfWindowEventHandlers *
    , GfWindowPositionEventHandler
);

GFEXPORT void gfWindowEventHandlersCallPositionEventHandler(
    const GfWindowEventHandlers *
    , GfWindow *
    , GfInt
    , GfInt
);

GFEXPORT void gfWindowEventHandlersSetSizeEventHandler(
    GfWindowEventHandlers *
    , GfWindowSizeEventHandler
);

GFEXPORT void gfWindowEventHandlersCallSizeEventHandler(
    const GfWindowEventHandlers *
    , GfWindow *
    , GfInt
    , GfInt
);

GFEXPORT void gfWindowEventHandlersSetPaintEventHandler(
    GfWindowEventHandlers *
    , GfWindowPaintEventHandler
);

GFEXPORT void gfWindowEventHandlersCallPaintEventHandler(
    const GfWindowEventHandlers *
    , GfWindow *
    , GfInt
    , GfInt
    , GfInt
    , GfInt
);

#endif  // GF_WINDOW_EVENTHANDLERS_H
