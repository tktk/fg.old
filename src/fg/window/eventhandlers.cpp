#include "fg/util/export.h"
#include "fg/window/eventhandlers.h"

#include "fg/window/closeevent.h"
#include "fg/window/window.h"
#include "fg/common/primitives.h"

FgWindowEventHandlers * fgWindowEventHandlersNew(
)
{
    return nullptr;
}

FgWindowEventHandlers * fgWindowEventHandlersClone(
    const FgWindowEventHandlers *
)
{
    return nullptr;
}

void fgWindowEventHandlersFree(
    FgWindowEventHandlers *
)
{
}

void fgWindowEventHandlersSetCloseEventHandler(
    FgWindowEventHandlers *
    , FgWindowCloseEventHandler
)
{
}

void fgWindowEventHandlersCallCloseEventHandler(
    const FgWindowEventHandlers *
    , const FgWindowCloseEvent *
)
{
}

void fgWindowEventHandlersSetPositionEventHandler(
    FgWindowEventHandlers *
    , FgWindowPositionEventHandler
)
{
}

void fgWindowEventHandlersCallPositionEventHandler(
    const FgWindowEventHandlers *
    , FgWindow *
    , FgInt
    , FgInt
)
{
}

void fgWindowEventHandlersSetSizeEventHandler(
    FgWindowEventHandlers *
    , FgWindowSizeEventHandler
)
{
}

void fgWindowEventHandlersCallSizeEventHandler(
    const FgWindowEventHandlers *
    , FgWindow *
    , FgInt
    , FgInt
)
{
}

void fgWindowEventHandlersSetPaintEventHandler(
    FgWindowEventHandlers *
    , FgWindowPaintEventHandler
)
{
}

void fgWindowEventHandlersCallPaintEventHandler(
    const FgWindowEventHandlers *
    , FgWindow *
    , FgInt
    , FgInt
    , FgInt
    , FgInt
)
{
}

void fgWindowEventHandlersSetKeyEventHandler(
    FgWindowEventHandlers *
    , FgWindowKeyEventHandler
)
{
}

void fgWindowEventHandlersCallKeyEventHandler(
    const FgWindowEventHandlers *
    , FgWindow *
    , FgKey
    , const FgUtf32Char *
    , FgBool
)
{
}

void fgWindowEventHandlersSetMouseButtonEventHandler(
    FgWindowEventHandlers *
    , FgWindowMouseButtonEventHandler
)
{
}

void fgWindowEventHandlersCallMouseButtonEventHandler(
    const FgWindowEventHandlers *
    , FgWindow *
    , FgULong
    , FgBool
    , FgInt
    , FgInt
)
{
}

void fgWindowEventHandlersSetMouseMotionEventHandler(
    FgWindowEventHandlers *
    , FgWindowMouseMotionEventHandler
)
{
}

void fgWindowEventHandlersCallMouseMotionEventHandler(
    const FgWindowEventHandlers *
    , FgWindow *
    , FgInt
    , FgInt
)
{
}
