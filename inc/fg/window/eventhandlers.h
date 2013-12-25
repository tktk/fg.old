#ifndef FG_WINDOW_EVENTHANDLERS_H
#define FG_WINDOW_EVENTHANDLERS_H

#include "fg/type/window/eventhandlers.h"
#include "fg/type/window/closeevent.h"
#include "fg/type/window/positionevent.h"
#include "fg/type/window/sizeevent.h"
#include "fg/type/window/paintevent.h"
#include "fg/type/window/keyevent.h"
#include "fg/type/window/mousebuttonevent.h"
#include "fg/type/window/mousemotionevent.h"
#include "fg/util/import_new.h"

FG_FUNCTION_PTR(
    FgWindowEventHandlers * fgWindowEventHandlersNew(
    )
)

FG_FUNCTION_PTR(
    FgWindowEventHandlers * fgWindowEventHandlersClone(
        const FgWindowEventHandlers *   _ORG
    )
)

FG_FUNCTION_VOID(
    void fgWindowEventHandlersFree(
        FgWindowEventHandlers * _this
    )
)

FG_FUNCTION_VOID(
    void fgWindowEventHandlersSetCloseEventHandler(
        FgWindowEventHandlers *     _this
        , FgWindowCloseEventHandler _eventHandler
        , void *                    _ptr
    )
)

FG_FUNCTION_VOID(
    void fgWindowEventHandlersCallCloseEventHandler(
        const FgWindowEventHandlers *   _THIS
        , const FgWindowCloseEvent *    _EVENT
    )
)

FG_FUNCTION_VOID(
    void fgWindowEventHandlersSetPositionEventHandler(
        FgWindowEventHandlers *         _this
        , FgWindowPositionEventHandler  _eventHandler
        , void *                        _ptr
    )
)

FG_FUNCTION_VOID(
    void fgWindowEventHandlersCallPositionEventHandler(
        const FgWindowEventHandlers *   _THIS
        , const FgWindowPositionEvent * _EVENT
    )
)

FG_FUNCTION_VOID(
    void fgWindowEventHandlersSetSizeEventHandler(
        FgWindowEventHandlers *     _this
        , FgWindowSizeEventHandler  _eventHandler
        , void *                    _ptr
    )
)

FG_FUNCTION_VOID(
    void fgWindowEventHandlersCallSizeEventHandler(
        const FgWindowEventHandlers *   _THIS
        , const FgWindowSizeEvent *     _EVENT
    )
)

FG_FUNCTION_VOID(
    void fgWindowEventHandlersSetPaintEventHandler(
        FgWindowEventHandlers *     _this
        , FgWindowPaintEventHandler _eventHandler
        , void *                    _ptr
    )
)

FG_FUNCTION_VOID(
    void fgWindowEventHandlersCallPaintEventHandler(
        const FgWindowEventHandlers *   _THIS
        , const FgWindowPaintEvent *    _EVENT
    )
)

FG_FUNCTION_VOID(
    void fgWindowEventHandlersSetKeyEventHandler(
        FgWindowEventHandlers *     _this
        , FgWindowKeyEventHandler   _eventHandler
        , void *                    _ptr
    )
)

FG_FUNCTION_VOID(
    void fgWindowEventHandlersCallKeyEventHandler(
        const FgWindowEventHandlers *   _THIS
        , const FgWindowKeyEvent *      _EVENT
    )
)

FG_FUNCTION_VOID(
    void fgWindowEventHandlersSetMouseButtonEventHandler(
        FgWindowEventHandlers *             _this
        , FgWindowMouseButtonEventHandler   _eventHandler
        , void *                            _ptr
    )
)

FG_FUNCTION_VOID(
    void fgWindowEventHandlersCallMouseButtonEventHandler(
        const FgWindowEventHandlers *       _THIS
        , const FgWindowMouseButtonEvent *  _EVENT
    )
)

FG_FUNCTION_VOID(
    void fgWindowEventHandlersSetMouseMotionEventHandler(
        FgWindowEventHandlers *             _this
        , FgWindowMouseMotionEventHandler   _eventHandler
        , void *                            _ptr
    )
)

FG_FUNCTION_VOID(
    void fgWindowEventHandlersCallMouseMotionEventHandler(
        const FgWindowEventHandlers *       _THIS
        , const FgWindowMouseMotionEvent *  _EVENT
    )
)

#endif  // FG_WINDOW_EVENTHANDLERS_H
