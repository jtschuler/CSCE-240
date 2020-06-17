/* Copyright 2020 CSCE240
 */

#include <cstddef>
// using size_t
#include <cstdlib>
// using rand
// using srand
#include <iostream>
using std::cout;
using std::endl;


int main(int argc, char** argv) {
  // seed random number gen with a const literal 123

  // create two const ints for kRows and kColumns of matrix
  size_t kRows = 2, kCols = 3;

  // request memory for 6 elements of type double array
  double matrix[kRows][kCols];

  // create int matrix and assign each element a random in [1, 100]
  for (size_t r = 0; r < kRows; ++r)
    for (size_t c = 0; c < kCols; ++c)
      matrix[r][c] = (r + 1.5)*(c + 0.7);

  // print double matrix
  for (size_t r = 0; r < kRows; ++r) {
    for (size_t c = 0; c < kCols; ++c)
      cout << matrix[r][c] << '\t';
    cout << endl;
  }

  return 0;
}
