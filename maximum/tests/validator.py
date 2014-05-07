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
    
    as_ = ch.readInts(n)
    for a in as_:
      ch.checkRange(a, MIN, A_MAX, 'A')

if __name__ == '__main__':
  main()
