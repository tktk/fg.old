# -*- coding: utf-8 -*-

from .. import common
from ..builder import buildShlib

MODULE_NAME = 'main'
TARGET = common.GF + '-' + MODULE_NAME

def build( _context ):
    sources = {
        common.SOURCE_DIR : {
            common.GF : {
                MODULE_NAME : {
                    'args.c',
                    'boot.c',
                    'bootconfig.c',
                    'library.c',
                },
            },
        },
    }

    buildShlib(
        _context,
        TARGET,
        sources = sources,
    )
