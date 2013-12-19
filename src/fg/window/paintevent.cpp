#include "fg/util/export.h"
#include "fg/window/paintevent.h"

#include "fg/window/window.h"
#include "fg/common/primitives.h"

FgWindowPaintEvent * fgWindowPaintEventNew(
    FgWindow *
)
{
    return nullptr;
}

FgWindowPaintEvent * fgWindowPaintEventClone(
    const FgWindowPaintEvent *
)
{
    return nullptr;
}

void fgWindowPaintEventFree(
    FgWindowPaintEvent *
)
{
}

FgWindow * fgWindowPaintEventGetSource(
    const FgWindowPaintEvent *
)
{
    return nullptr;
}

FgInt fgWindowPaintEventGetX(
    const FgWindowPaintEvent *
)
{
    return 0;
}

FgInt fgWindowPaintEventGetY(
    const FgWindowPaintEvent *
)
{
    return 0;
}

FgInt fgWindowPaintEventGetWidth(
    const FgWindowPaintEvent *
)
{
    return 0;
}

FgInt fgWindowPaintEventGetHeight(
    const FgWindowPaintEvent *
)
{
    return 0;
}
