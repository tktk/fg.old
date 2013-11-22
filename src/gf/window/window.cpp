#include "gf/util/export.h"
#include "gf/window/window.h"

#include "gf/window/eventhandlers.h"
#include "gf/string/utf32.h"
#include "gf/common/primitives.h"

GfWindow * gfWindowNew(
    const GfWindowEventHandlers *
    , const GfUtf32 *
    , GfInt
    , GfInt
)
{
    return nullptr;
}

void gfWindowFree(
    GfWindow *
)
{
}

void gfWindowClose(
    GfWindow *
)
{
}

GfBool gfWindowSetTitle(
    GfWindow *
    , const GfUtf32 *
)
{
    return false;
}

void gfWindowSetPosition(
    GfWindow *
    , GfInt
    , GfInt
)
{
}

void gfWindowSetSize(
    GfWindow *
    , GfInt
    , GfInt
)
{
}

void gfWindowRepaint(
    GfWindow *
    , GfInt
    , GfInt
    , GfInt
    , GfInt
)
{
}

void gfWindowRepaintAll(
    GfWindow *
)
{
}
