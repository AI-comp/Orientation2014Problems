#!/usr/bin/python2

import os
import sys
from constants import *
sys.path.append(os.path.dirname(os.path.abspath(__file__)) + '/../../lib')
from checker import Checker

def main():
  ch = Checker()

  while True:
    n, m = ch.matchRegex(r'(\d+) (\d+)')
    n = int(n)
    m = int(m)
    if n == 0:
      break

    ch.checkRange(n, N_MIN, N_MAX, 'N')
    ch.checkRange(m, M_MIN, min(n*n-n, M_MAX), 'M')
    
    edgeset = set()
    for _ in xrange(m):
      a, b = ch.matchRegex(r'(\d+) (\d+)')
      a = int(a)
      b = int(b)
      ch.checkRange(a, 1, n, 'A')
      ch.checkRange(b, 1, n, 'B')
      ch.check(a != b, "there should not be self-loop")
      edgeset.add((a * (n + 1) + b))

    ch.checkLength(edgeset, m)


if __name__ == '__main__':
  main()
