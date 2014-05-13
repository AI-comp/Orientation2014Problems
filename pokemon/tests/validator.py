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
    
    for varName in ['A', 'B']:
      length = {'A': n, 'B': m}[varName]
      lst = ch.readInts(length)
      ch.checkSorted(lst, varName + 's')
      ch.checkUnique(lst, varName + 's')
      for elem in lst:
        ch.checkRange(elem, MIN, MAX, varName)

if __name__ == '__main__':
  main()
