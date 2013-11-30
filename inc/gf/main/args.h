#ifndef GF_MAIN_ARGS_H
#define GF_MAIN_ARGS_H

#include "fg/main/args.h"
#include "fg/boot/gameconfig.h"
#include "fg/util/import.h"

FGEXPORT FgArgs * gfArgsNew(
    const FgGameConfig *
);

FGEXPORT void gfArgsFree(
    FgArgs *
);

#endif  // GF_MAIN_ARGS_H
