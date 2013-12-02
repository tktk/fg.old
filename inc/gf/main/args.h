#ifndef GF_MAIN_ARGS_H
#define GF_MAIN_ARGS_H

#include "fg/main/args.h"
#include "gf/main/bootconfig.h"
#include "fg/util/import.h"

FGEXPORT FgArgs * gfArgsNew(
    const GfBootConfig *
);

FGEXPORT void gfArgsFree(
    FgArgs *
);

#endif  // GF_MAIN_ARGS_H
