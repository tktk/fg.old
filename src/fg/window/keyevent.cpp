#include "fg/util/export.h"
#include "fg/window/keyevent.h"

#include "fg/window/window.h"
#include "fg/window/key.h"
#include "fg/common/primitives.h"

FgWindowKeyEvent * fgWindowKeyEventNew(
    FgWindow *
    , FgKey
    , const FgUtf32Char *
    , FgBool
)
{
    return nullptr;
}

FgWindowKeyEvent * fgWindowKeyEventClone(
    const FgWindowKeyEvent *
)
{
    return nullptr;
}

void fgWindowKeyEventFree(
    FgWindowKeyEvent *
)
{
}

FgWindow * fgWindowKeyEventGetSource(
    const FgWindowKeyEvent *
)
{
    return nullptr;
}

FgKey fgWindowKeyEventGetKey(
    const FgWindowKeyEvent *
)
{
    return FG_KEY_INVALID;
}

const FgUtf32Char * fgWindowKeyEventGetCharPtr(
    const FgWindowKeyEvent *
)
{
    return nullptr;
}

FgBool fgWindowKeyEventGetPressed(
    const FgWindowKeyEvent *
)
{
    return false;
}
