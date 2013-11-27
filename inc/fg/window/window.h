#ifndef FG_WINDOW_WINDOW_H
#define FG_WINDOW_WINDOW_H

typedef struct FgWindow FgWindow;

#include "fg/window/eventhandlers.h"
#include "fg/string/utf32.h"
#include "fg/common/primitives.h"
#include "fg/util/import.h"

FGEXPORT FgWindow * fgWindowNew(
    const FgWindowEventHandlers *
    , const FgUtf32 *
    , FgInt
    , FgInt
);

FGEXPORT void fgWindowFree(
    FgWindow *
);

FGEXPORT void fgWindowClose(
    FgWindow *
);

FGEXPORT FgBool fgWindowSetTitle(
    FgWindow *
    , const FgUtf32 *
);

FGEXPORT void fgWindowSetPosition(
    FgWindow *
    , FgInt
    , FgInt
);

FGEXPORT void fgWindowSetSize(
    FgWindow *
    , FgInt
    , FgInt
);

FGEXPORT void fgWindowRepaint(
    FgWindow *
    , FgInt
    , FgInt
    , FgInt
    , FgInt
);

FGEXPORT void fgWindowRepaintAll(
    FgWindow *
);

#endif  // FG_WINDOW_WINDOW_H
