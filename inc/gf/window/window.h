#ifndef GF_WINDOW_WINDOW_H
#define GF_WINDOW_WINDOW_H

typedef struct GfWindow GfWindow;

#include "gf/window/eventhandlers.h"
#include "gf/string/utf32.h"
#include "gf/common/primitives.h"
#include "gf/util/import.h"

GFEXPORT GfWindow * gfWindowNew(
    const GfWindowEventHandlers *
    , const GfUtf32 *
    , GfInt
    , GfInt
);

GFEXPORT void gfWindowFree(
    GfWindow *
);

GFEXPORT void gfWindowClose(
    GfWindow *
);

GFEXPORT GfBool gfWindowSetTitle(
    GfWindow *
    , const GfUtf32 *
);

GFEXPORT void gfWindowSetPosition(
    GfWindow *
    , GfInt
    , GfInt
);

GFEXPORT void gfWindowSetSize(
    GfWindow *
    , GfInt
    , GfInt
);

GFEXPORT void gfWindowRepaint(
    GfWindow *
    , GfInt
    , GfInt
    , GfInt
    , GfInt
);

GFEXPORT void gfWindowRepaintAll(
    GfWindow *
);

#endif  // GF_WINDOW_WINDOW_H
