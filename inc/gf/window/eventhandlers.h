#ifndef GF_WINDOW_EVENTHANDLERS_H
#define GF_WINDOW_EVENTHANDLERS_H

typedef struct GfWindowEventHandlers GfWindowEventHandlers;

#include "gf/window/window.h"
#include "gf/window/key.h"
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

typedef void( * GfWindowKeyEventHandler )(
    GfWindow *
    , GfKey
    , const GfUtf32Char *
    , GfBool
);

typedef void( * GfWindowMouseButtonEventHandler )(
    GfWindow *
    , GfULong
    , GfBool
    , GfInt
    , GfInt
);

typedef void( * GfWindowMouseMotionEventHandler )(
    GfWindow *
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

GFEXPORT void gfWindowEventHandlersSetKeyEventHandler(
    GfWindowEventHandlers *
    , GfWindowKeyEventHandler
);

GFEXPORT void gfWindowEventHandlersCallKeyEventHandler(
    const GfWindowEventHandlers *
    , GfWindow *
    , GfKey
    , const GfUtf32Char *
    , GfBool
);

GFEXPORT void gfWindowEventHandlersSetMouseButtonEventHandler(
    GfWindowEventHandlers *
    , GfWindowMouseButtonEventHandler
);

GFEXPORT void gfWindowEventHandlersCallMouseButtonEventHandler(
    const GfWindowEventHandlers *
    , GfWindow *
    , GfULong
    , GfBool
    , GfInt
    , GfInt
);

GFEXPORT void gfWindowEventHandlersSetMouseMotionEventHandler(
    GfWindowEventHandlers *
    , GfWindowMouseMotionEventHandler
);

GFEXPORT void gfWindowEventHandlersCallMouseMotionEventHandler(
    const GfWindowEventHandlers *
    , GfWindow *
    , GfInt
    , GfInt
);

#endif  // GF_WINDOW_EVENTHANDLERS_H
