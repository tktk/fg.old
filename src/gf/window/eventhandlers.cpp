#include "gf/util/export.h"
#include "gf/window/eventhandlers.h"

#include "gf/window/window.h"
#include "gf/common/primitives.h"

GfWindowEventHandlers * gfWindowEventHandlersNew(
)
{
    return nullptr;
}

GfWindowEventHandlers * gfWindowEventHandlersClone(
    const GfWindowEventHandlers *
)
{
    return nullptr;
}

void gfWindowEventHandlersFree(
    GfWindowEventHandlers *
)
{
}

void gfWindowEventHandlersSetCloseEventHandler(
    GfWindowEventHandlers *
    , GfWindowCloseEventHandler
)
{
}

void gfWindowEventHandlersCallCloseEventHandler(
    const GfWindowEventHandlers *
    , GfWindow *
)
{
}

void gfWindowEventHandlersSetPositionEventHandler(
    GfWindowEventHandlers *
    , GfWindowPositionEventHandler
)
{
}

void gfWindowEventHandlersCallPositionEventHandler(
    const GfWindowEventHandlers *
    , GfWindow *
    , GfInt
    , GfInt
)
{
}

void gfWindowEventHandlersSetSizeEventHandler(
    GfWindowEventHandlers *
    , GfWindowSizeEventHandler
)
{
}

void gfWindowEventHandlersCallSizeEventHandler(
    const GfWindowEventHandlers *
    , GfWindow *
    , GfInt
    , GfInt
)
{
}

void gfWindowEventHandlersSetPaintEventHandler(
    GfWindowEventHandlers *
    , GfWindowPaintEventHandler
)
{
}

void gfWindowEventHandlersCallPaintEventHandler(
    const GfWindowEventHandlers *
    , GfWindow *
    , GfInt
    , GfInt
    , GfInt
    , GfInt
)
{
}

void gfWindowEventHandlersSetKeyEventHandler(
    GfWindowEventHandlers *
    , GfWindowKeyEventHandler
)
{
}

void gfWindowEventHandlersCallKeyEventHandler(
    const GfWindowEventHandlers *
    , GfWindow *
    , GfKey
    , const GfUtf32Char *
    , GfBool
)
{
}

void gfWindowEventHandlersSetMouseButtonEventHandler(
    GfWindowEventHandlers *
    , GfWindowMouseButtonEventHandler
)
{
}

void gfWindowEventHandlersCallMouseButtonEventHandler(
    const GfWindowEventHandlers *
    , GfWindow *
    , GfULong
    , GfBool
    , GfInt
    , GfInt
)
{
}

void gfWindowEventHandlersSetMouseMotionEventHandler(
    GfWindowEventHandlers *
    , GfWindowMouseMotionEventHandler
)
{
}

void gfWindowEventHandlersCallMouseMotionEventHandler(
    const GfWindowEventHandlers *
    , GfWindow *
    , GfInt
    , GfInt
)
{
}
