#!/usr/bin/python2

import os
import sys
from constants import *
sys.path.append(os.path.dirname(os.path.abspath(__file__)) + '/../../lib')
from checker import Checker

def main():
  ch = Checker()

  while True:
    n, m = ch.readInts(2)
    if n == 0 and m == 0:
      break
    ch.checkRange(n, MIN, MAX, 'N')
    ch.checkRange(n, MIN, MAX, 'M')
    
    aList = ch.readInts(n)
    bList = ch.readInts(m)
    for a in aList:
      ch.checkRange(a, MIN, MAX, 'A')
    for b in bList:
      ch.checkRange(b, MIN, MAX, 'B')

if __name__ == '__main__':
  main()
