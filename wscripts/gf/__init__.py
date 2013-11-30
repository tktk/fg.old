# -*- coding: utf-8 -*-

from . import main
from . import gl

def build( _context ):
    main.build( _context )
    gl.build( _context )
