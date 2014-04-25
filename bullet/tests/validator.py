#!/usr/bin/python2

import os
import sys
from constants import *
sys.path.append(os.path.dirname(os.path.abspath(__file__)) + '/../../lib')
from checker import Checker

def main():
  ch = Checker()

  while True:
    n, p = ch.readInts(2)
    if n == 0 and p == 0:
      break
    ch.checkRange(n, MIN, N_MAX, 'N')
    ch.checkRange(p, MIN, P_MAX, 'P')
    
    ts = ch.readInts(n)
    for t in ts:
      ch.checkRange(t, MIN, T_MAX, 'T')

if __name__ == '__main__':
  main()
