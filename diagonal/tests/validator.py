#!/usr/bin/python2

import os
import sys
import string
from constants import *
sys.path.append(os.path.dirname(os.path.abspath(__file__)) + '/../../lib')
from checker import Checker

def main():
  ch = Checker()

  while True:
    n = ch.readInt()
    if n == 0:
      break
    ch.checkRange(n, MIN, N_MAX, 'N')
    
    for _ in xrange(n):
      s = ch.readString()
      ch.checkValidCharacter(s, string.ascii_uppercase)
      ch.checkLength(s, n, 'S', 'N')

if __name__ == '__main__':
  main()
