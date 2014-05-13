#!/usr/bin/python2

import os
import sys
from constants import *
sys.path.append(os.path.dirname(os.path.abspath(__file__)) + '/../../lib')
from checker import Checker

def main():
  ch = Checker()

  while True:
    r, n = ch.readInts(2)
    if r == 0 and n == 0:
      break
    ch.checkRange(r, R_MIN, R_MAX, 'R')
    ch.checkRange(n, N_MIN, N_MAX, 'N')
    
    xs = ch.readInts(n)
    ch.checkSorted(xs, 'Xs')
    for x in xs:
      ch.checkRange(x, X_MIN, X_MAX, 'X')

if __name__ == '__main__':
  main()
