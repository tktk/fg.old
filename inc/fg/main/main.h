#ifndef FG_MAIN_MAIN_H
#define FG_MAIN_MAIN_H

#include "fg/main/args.h"
#include "fg/common/primitives.h"

typedef FgInt ( * FgMainProc )(
    const FgArgs *
);

#endif  // FG_MAIN_MAIN_H
