#include "fg/util/export.h"
#include "fg/window/mousebuttonevent.h"

#include "fg/window/window.h"
#include "fg/common/primitives.h"

FgWindowMouseButtonEvent * fgWindowMouseButtonEventNew(
    FgWindow *
    , FgULong
    , FgBool
    , FgInt
    , FgInt
)
{
    return nullptr;
}

FgWindowMouseButtonEvent * fgWindowMouseButtonEventClone(
    const FgWindowMouseButtonEvent *
)
{
    return nullptr;
}

void fgWindowMouseButtonEventFree(
    FgWindowMouseButtonEvent *
)
{
}

FgWindow * fgWindowMouseButtonEventGetSource(
    const FgWindowMouseButtonEvent *
)
{
    return nullptr;
}

FgULong fgWindowMouseButtonEventGetIndex(
    const FgWindowMouseButtonEvent *
)
{
    return 0;
}

FgBool fgWindowMouseButtonEventGetPressed(
    const FgWindowMouseButtonEvent *
)
{
    return false;
}

FgInt fgWindowMouseButtonEventGetX(
    const FgWindowMouseButtonEvent *
)
{
    return 0;
}

FgInt fgWindowMouseButtonEventGetY(
    const FgWindowMouseButtonEvent *
)
{
    return 0;
}
