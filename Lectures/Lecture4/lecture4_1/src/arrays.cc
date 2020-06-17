/* Copyright 2020 CSCE 240
 */

#include <cstddef>  // size_t
#include <iostream>
using std::cout;
using std::endl;


int main(int argc, char** argv) {
  // create a const int to hold the size of the array
  const size_t kSize = 5;

  // use the const int to create an array
  int array[kSize];  // Automatic array variable

  // store integers 1 to n in the array, where n is the size of the array
  for (size_t i = 0; i < kSize; ++i)
    array[i] = i + 1;

  // determine the sum of the n integers stored in the array
  int sum = 0;
  for (size_t i = 0; i < kSize; ++i)
    sum += array[i];

  // display the sum
  cout << "Sum: " << sum << endl;

  // create a second array and copy each value, doubled, from the first
  int twice_array[kSize];
  for (size_t i = 0; i < kSize; ++i)
    twice_array[i] = array[i] * 2;

  // display both arrays in columns, 1 element of each per line, tab delimited
  for (size_t i = 0; i < kSize; ++i) {
    cout << array[i] << '\t' << twice_array[i] << endl;
  }

  return 0;
}
