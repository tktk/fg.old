# -*- coding: utf-8 -*-

from .. import common
from ..builder import buildShlib

MODULE_NAME = 'window'
TARGET = common.FG + '-' + MODULE_NAME

def build( _context ):
    sources = {
        common.SOURCE_DIR : {
            common.FG : {
                MODULE_NAME : {
                    'window.c',
                    'eventhandlers.c',
                    'closeevent.c',
                    'positionevent.c',
                    'sizeevent.c',
                    'paintevent.c',
                    'keyevent.c',
                    'mousebuttonevent.c',
                    'mousemotionevent.c',
                },
            },
        },
    }

    buildShlib(
        _context,
        TARGET,
        sources = sources,
    )
