# -*- coding: utf-8 -*-

from . import string
from . import boot
from . import window
from . import gl

def build( _context ):
    string.build( _context )
    boot.build( _context )
    window.build( _context )
    gl.build( _context )