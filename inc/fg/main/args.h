#ifndef FG_MAIN_ARGS_H
#define FG_MAIN_ARGS_H

typedef struct FgArgs FgArgs;

#include "fg/gl/config.h"
#include "fg/util/import.h"

FGEXPORT const FgGLConfig * fgArgsGetGLConfig(
    const FgArgs *
);

#endif  // FG_MAIN_ARGS_H
