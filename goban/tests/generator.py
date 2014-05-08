#!/usr/bin/python2

import random

def generate(index):
  filename = '50-random%02d.in' % index
  with open(filename, 'w') as f:
    for _ in range(20):
      ps = [(x, y) for x in range(1, 5+1) for y in range(1, 5+1)
        if (x, y) != (1, 1) and (x, y) != (5, 5)]
      random.shuffle(ps)
      n = random.randrange(0, len(ps)+1)
      print >>f, n
      for p in ps[:n]:
        print >>f, "%d %d" % p
    print >>f, -1

def main():
  for index in xrange(5):
    generate(index)
 
if __name__ == '__main__':
  main()
