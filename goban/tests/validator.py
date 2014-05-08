#!/usr/bin/python2

import os
import sys
sys.path.append(os.path.dirname(os.path.abspath(__file__)) + '/../../lib')
from checker import Checker

def main():
  ch = Checker()

  while True:
    n = int(ch.readLine())
    if n == -1:
      break
    ch.checkRange(n, 0, 23, 'n')
    ps = set()
    ps.add((1, 1))
    ps.add((5, 5))
    for _ in range(n):
      x, y = [int(w) for w in ch.readLine().strip().split()]
      ch.check((x, y) not in ps, 'no dup points')
      ch.checkRange(x, 1, 5, 'x')
      ch.checkRange(y, 1, 5, 'y')
      ps.add((x, y))

if __name__ == '__main__':
  main()
