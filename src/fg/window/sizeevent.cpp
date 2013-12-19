#include "fg/util/export.h"
#include "fg/window/sizeevent.h"

#include "fg/window/window.h"
#include "fg/common/primitives.h"

FgWindowSizeEvent * fgWindowSizeEventNew(
    FgWindow *
)
{
    return nullptr;
}

FgWindowSizeEvent * fgWindowSizeEventClone(
    const FgWindowSizeEvent *
)
{
    return nullptr;
}

void fgWindowSizeEventFree(
    FgWindowSizeEvent *
)
{
}

FgWindow * fgWindowSizeEventGetSource(
    const FgWindowSizeEvent *
)
{
    return nullptr;
}

FgInt fgWindowSizeEventGetWidth(
    const FgWindowSizeEvent *
)
{
    return 0;
}

FgInt fgWindowSizeEventGetHeight(
    const FgWindowSizeEvent *
)
{
    return 0;
}
