/* Copyright 2020 CSCE240
 */
#include <cstddef>
// using size_t

#include <iostream>
using std::cout;
using std::endl;

#include <array>
using std::array;


int main(int argc, char** argv) {
  // create double array from array literal of 4 floating point literals
  double dbl_array[] = { 1.2, 5.8, 33.9, 82.45 };
  const size_t kSize = sizeof(dbl_array) / sizeof(double);

  // tab and display elements from positions -1 to 4, by 1 using []
  for (size_t i = 0; i < kSize; ++i)
    cout << i << ":" << dbl_array[i] << '\t';
  cout << endl;

  // create a double array class instance with size 4, reuse literals
  array<double, kSize> dbl_array2;
  for (size_t i = 0; i < kSize; ++i)
    dbl_array2[i] = dbl_array[i];

  // tab and display elements from positions -1 to 4, by 1 using []
  for (size_t i = 0; i < kSize; ++i)
    cout << i << ":" << dbl_array2.at(i) << '\t';
  cout << endl;

  // tab and display elements from positions -1 to 4, by 1 using array::at

  return 0;
}
