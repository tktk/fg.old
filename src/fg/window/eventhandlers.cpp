#include "fg/util/export.h"
#include "fg/window/eventhandlers.h"

#include "fg/window/closeevent.h"
#include "fg/window/positionevent.h"
#include "fg/window/sizeevent.h"
#include "fg/window/paintevent.h"
#include "fg/window/keyevent.h"
#include "fg/window/mousebuttonevent.h"
#include "fg/window/mousemotionevent.h"

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
    , void *
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
    , void *
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
    , void *
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
    , void *
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
    , void *
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
    , void *
)
{
}

void fgWindowEventHandlersCallMouseButtonEventHandler(
    const FgWindowEventHandlers *
    , const FgWindowMouseButtonEvent *
)
{
}

void fgWindowEventHandlersSetMouseMotionEventHandler(
    FgWindowEventHandlers *
    , FgWindowMouseMotionEventHandler
    , void *
)
{
}

void fgWindowEventHandlersCallMouseMotionEventHandler(
    const FgWindowEventHandlers *
    , const FgWindowMouseMotionEvent *
)
{
}
