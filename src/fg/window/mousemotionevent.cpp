#include "fg/util/export.h"
#include "fg/window/mousemotionevent.h"

#include "fg/window/window.h"
#include "fg/common/primitives.h"

FgWindowMouseMotionEvent * fgWindowMouseMotionEventNew(
    FgWindow *
    , FgInt
    , FgInt
)
{
    return nullptr;
}

FgWindowMouseMotionEvent * fgWindowMouseMotionEventClone(
    const FgWindowMouseMotionEvent *
)
{
    return nullptr;
}

void fgWindowMouseMotionEventFree(
    FgWindowMouseMotionEvent *
)
{
}

FgWindow * fgWindowMouseMotionEventGetSource(
    const FgWindowMouseMotionEvent *
)
{
    return nullptr;
}

FgInt fgWindowMouseMotionEventGetX(
    const FgWindowMouseMotionEvent *
)
{
    return 0;
}

FgInt fgWindowMouseMotionEventGetY(
    const FgWindowMouseMotionEvent *
)
{
    return 0;
}
