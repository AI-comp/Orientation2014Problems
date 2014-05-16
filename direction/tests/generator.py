#!/usr/bin/python2

import random

def generate(index):
  filename = '50-random%02d.in' % index
  with open(filename, 'w') as f:
    for _ in range(100):
      d = 45 * random.randrange(0, 8)
      print >>f, d
    print >>f, -1

def main():
  for index in xrange(5):
    generate(index)
 
if __name__ == '__main__':
  main()
