# -*- coding: utf-8 -*-

from . import main
from . import string
from . import window
from . import gl

def build( _context ):
    main.build( _context )
    string.build( _context )
    window.build( _context )
    gl.build( _context )
