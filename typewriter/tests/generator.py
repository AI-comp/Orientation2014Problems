#!/usr/bin/python2

import random
import string
from constants import *

def generateFile(index):
  filename = '50-random%02d.in' % index
  with open(filename, 'w') as f:
    for i in xrange(20):
      generateTestCase(f, random.randint(S_LEN_MIN, S_LEN_MAX))
    print >>f, '!'

def generateTestCase(f, length):
  for _ in xrange(length):
    s = [random.choice('+-.') for _ in xrange(length)]
    print >>f, ''.join(s)

def main():
  for index in xrange(10):
    generateFile(index)
 
if __name__ == '__main__':
  main()
