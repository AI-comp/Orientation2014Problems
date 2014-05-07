#!/usr/bin/python2

import os
import sys
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
      d, l = ch.matchRegex(r'(\w) (\d)')
      l = int(l)
      ch.checkValidCharacter(d, 'LR')
      ch.checkRange(l, MIN, L_MAX, 'L')

if __name__ == '__main__':
  main()
