#!/usr/bin/python2

import random
from constants import *

def generateFile(index):
  filename = '50-random%02d.in' % index
  with open(filename, 'w') as f:
    for i in xrange(10):
      n = random.randint(N_MIN, N_MAX)
      m = random.randint(M_MIN, min(n * n - n, M_MAX))
      generateTestCase(f, n, m)
    print >>f, 0, 0

def generateTestCase(f, n, m):
  print >>f, n, m
  edges = [[x,y] for x in xrange(1,n+1) for y in xrange(1,n+1) if x != y]
  random.shuffle(edges)
  for edge in edges[:m]:
    print >>f, edge[0], edge[1]

def main():
  for index in xrange(1):
    generateFile(index)
 
if __name__ == '__main__':
  main()
