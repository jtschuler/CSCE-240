// Copyright 2020 Jadon T Schuler


#include <problem4.h>
#include <cmath>
// using abs
#include <string>

std::string DecimalToBinary(unsigned int decimal_value) {
  std::string binary = "";

  while (decimal_value > 0) {
    if (decimal_value % 2 == 1)
      binary = "1" + binary;
    else
      binary = "0" + binary;
    decimal_value /= 2;
  }

  return binary;
}
