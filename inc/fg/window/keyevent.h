#ifndef FG_WINDOW_KEYEVENT_H
#define FG_WINDOW_KEYEVENT_H

#include "fg/def/window/keyevent.h"
#include "fg/def/window/window.h"
#include "fg/def/window/key.h"
#include "fg/def/primitives.h"
#include "fg/util/import_new.h"

FG_FUNCTION_PTR(
    FgWindowKeyEvent * fgWindowKeyEventNew(
        FgWindow *              _source
        , FgKey                 _key
        , const FgUtf32Char *   _CHAR_PTR
        , FgBool                _pressed
    )
)

FG_FUNCTION_PTR(
    FgWindowKeyEvent * fgWindowKeyEventClone(
        const FgWindowKeyEvent *    _ORG
    )
)

FG_FUNCTION_VOID(
    void fgWindowKeyEventFree(
        FgWindowKeyEvent *  _this
    )
)

FG_FUNCTION_PTR(
    FgWindow * fgWindowKeyEventGetSource(
        const FgWindowKeyEvent *    _THIS
    )
)

FG_FUNCTION(
    FgKey fgWindowKeyEventGetKey(
        const FgWindowKeyEvent *    _THIS
    )
    , return FG_KEY_INVALID;
)

FG_FUNCTION_PTR(
    const FgUtf32Char * fgWindowKeyEventGetCharPtr(
        const FgWindowKeyEvent *    _THIS
    )
)

FG_FUNCTION_BOOL(
    FgBool fgWindowKeyEventGetPressed(
        const FgWindowKeyEvent *    _THIS
    )
)

#endif  // FG_WINDOW_KEYEVENT_H
