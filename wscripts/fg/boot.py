# -*- coding: utf-8 -*-

from .. import common
from ..builder import buildShlib

MODULE_NAME = 'boot'
TARGET = common.FG + '-' + MODULE_NAME

def build( _context ):
    sources = {
        common.SOURCE_DIR : {
            common.FG : {
                MODULE_NAME : {
                    'boot.cpp',
                    'config.cpp',
                    'library.cpp',
                },
            },
        },
    }

    buildShlib(
        _context,
        TARGET,
        sources = sources,
    )
