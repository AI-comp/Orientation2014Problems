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
  aCandidates = [str(i) for i in xrange(1, MAX + 1)]
  bCandidates = [str(i) for i in xrange(1, MAX + 1)]
  random.shuffle(aCandidates)
  random.shuffle(bCandidates)
  print >>f, ' '.join(aCandidates[: n])
  print >>f, ' '.join(bCandidates[: m])

def main():
  for index in xrange(10):
    generateFile(index)
 
if __name__ == '__main__':
  main()
