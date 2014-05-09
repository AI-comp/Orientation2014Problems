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
    ch.checkRange(n, 1, 5, 'n')
    ps = set()
    ps.add((0, 0))
    for _ in range(n):
      x, y = [int(w) for w in ch.readLine().strip().split()]
      ch.check((x, y) not in ps, "no dup points")
      ch.checkRange(x, -50, 50, 'x')
      ch.checkRange(y, -50, 50, 'y')
      ps.add((x, y))

if __name__ == '__main__':
  main()
