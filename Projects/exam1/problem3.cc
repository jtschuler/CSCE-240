// Copyright 2020 Jadon T Schuler


#include <problem3.h>
#include <cmath>
// using abs

int SumDigits(int value) {
  int sum = 0;
  bool negative = value < 0;
  value = abs(value);

  while (value > 0) {
    sum += value % 10;
    value *= 0.1;
  }
  if (negative)
    sum *= -1;

  return sum;
}
