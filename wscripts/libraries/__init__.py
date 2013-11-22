# -*- coding: utf-8 -*-

from . import string
from . import boot

def build( _context ):
    string.build( _context )
    boot.build( _context )
