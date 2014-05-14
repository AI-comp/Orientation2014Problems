#!/usr/bin/python3

while 1:
  a, b = map(int, input().split())
  if a == 0 and b == 0:
    break
  answer = a + b
  print(answer)
