#ifndef GF_MAIN_GAMECONFIG_H
#define GF_MAIN_GAMECONFIG_H

#include "gf/util/import.h"
#include "gf/util/externc.h"
#include "gf/util/struct.h"

GFSTRUCT( gf, GameConfig )

GFEXTERNC_START

GFEXPORT gfGameConfig * gfGameConfigNew(
);

GFEXTERNC_END

#endif  // GF_MAIN_GAMECONFIG_H
