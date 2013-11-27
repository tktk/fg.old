#include "fg/util/export.h"
#include "fg/window/window.h"

#include "fg/window/eventhandlers.h"
#include "fg/string/utf32.h"
#include "fg/common/primitives.h"

FgWindow * fgWindowNew(
    const FgWindowEventHandlers *
    , const FgUtf32 *
    , FgInt
    , FgInt
)
{
    return nullptr;
}

void fgWindowFree(
    FgWindow *
)
{
}

void fgWindowClose(
    FgWindow *
)
{
}

FgBool fgWindowSetTitle(
    FgWindow *
    , const FgUtf32 *
)
{
    return false;
}

void fgWindowSetPosition(
    FgWindow *
    , FgInt
    , FgInt
)
{
}

void fgWindowSetSize(
    FgWindow *
    , FgInt
    , FgInt
)
{
}

void fgWindowRepaint(
    FgWindow *
    , FgInt
    , FgInt
    , FgInt
    , FgInt
)
{
}

void fgWindowRepaintAll(
    FgWindow *
)
{
}
