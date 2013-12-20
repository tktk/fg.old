#include "fg/util/export.h"
#include "fg/window/positionevent.h"

#include "fg/window/window.h"
#include "fg/common/primitives.h"

FgWindowPositionEvent * fgWindowPositionEventNew(
    FgWindow *
    , FgInt
    , FgInt
)
{
    return nullptr;
}

FgWindowPositionEvent * fgWindowPositionEventClone(
    const FgWindowPositionEvent *
)
{
    return nullptr;
}

void fgWindowPositionEventFree(
    FgWindowPositionEvent *
)
{
}

FgWindow * fgWindowPositionEventGetSource(
    const FgWindowPositionEvent *
)
{
    return nullptr;
}

FgInt fgWindowPositionEventGetX(
    const FgWindowPositionEvent *
)
{
    return 0;
}

FgInt fgWindowPositionEventGetY(
    const FgWindowPositionEvent *
)
{
    return 0;
}
