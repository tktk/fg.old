# -*- coding: utf-8 -*-

from . import main
from . import boot
from . import gl

def build( _context ):
    main.build( _context )
    boot.build( _context )
    gl.build( _context )
