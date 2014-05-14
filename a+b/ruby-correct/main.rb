#!/usr/bin/ruby

while true
  a, b = gets.split.map(&:to_i)
  break if a == 0 and b == 0
  answer = a + b
  puts answer
end
