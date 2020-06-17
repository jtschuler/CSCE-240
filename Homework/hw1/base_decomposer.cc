// Copyright 2020 Jadon T Schuler


#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <cstdlib>
// using atoi
#include <cmath>
// using pow


int main(int argc, char* argv[]) {
  // Read in the number
  int number = 0;
  cin >> number;

  if (number == 0) {
    cout << number;
    return 0;
  }

  int reverse_number = 0;
  int power = -1;
  bool negative = number < 0;
  number = abs(number);

  // Reverse the number to prepare for decomposition
  while (number > 0) {
    int current_digit = number % 10;
    number *= 0.1;
    reverse_number = reverse_number * 10 + current_digit;
    ++power;
  }

  // Check for negative
  if (negative) {
    cout << "-(";
  }

  // Decompose the first number
  cout << static_cast<int>((reverse_number % 10) * pow(10, power));
  reverse_number *= 0.1;
  --power;

  // Continue decomposition
  while (power >= 0) {
    cout << " + ";
    int current_digit = reverse_number % 10;
    reverse_number *= 0.1;

    // Special case for zeros
    if (current_digit > 0) {
      cout << static_cast<int>(current_digit * pow(10, power));
    } else {
      for (int i = 0; i <= power; ++i) {
        cout << "0";
      }
    }
    --power;
  }

  // Check for negative again
  cout << (negative ? ")" : "");

  return 0;
}
