#include "fg/util/export.h"
#include "fg/window/eventhandlers.h"

#include "fg/window/closeevent.h"
#include "fg/window/positionevent.h"
#include "fg/window/sizeevent.h"
#include "fg/window/paintevent.h"
#include "fg/window/keyevent.h"
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
    , const FgWindowPositionEvent *
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
    , const FgWindowSizeEvent *
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
    , const FgWindowPaintEvent *
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
    , const FgWindowKeyEvent *
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
