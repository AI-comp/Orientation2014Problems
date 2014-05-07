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
    ch.checkRange(n, N_MIN, N_MAX, 'N')
    
    ts_ = ch.readInts(n)
    for t in ts_:
      ch.checkRange(t, T_MIN, T_MAX, 'T')

if __name__ == '__main__':
  main()
