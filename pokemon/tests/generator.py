#!/usr/bin/python2

import random
from constants import *

def generateFile(index):
  filename = '50-random%02d.in' % index
  with open(filename, 'w') as f:
    for i in xrange(20):
      generateTestCase(f, random.randint(MIN, MAX), random.randint(MIN, MAX))
    print >>f, 0, 0

def generateTestCase(f, n, m):
  print >>f, n, m
  aCandidates = [i for i in xrange(1, MAX + 1)]
  bCandidates = [i for i in xrange(1, MAX + 1)]
  random.shuffle(aCandidates)
  random.shuffle(bCandidates)
  aList = [str(a) for a in sorted(aCandidates[: n])]
  bList = [str(b) for b in sorted(bCandidates[: m])]
  print >>f, ' '.join(aList)
  print >>f, ' '.join(bList)

def main():
  for index in xrange(10):
    generateFile(index)
 
if __name__ == '__main__':
  main()
