/* Copyright 2020
 *
 * This is a rational file parser. I will open a specified file and expects a
 * file format of n num den num den num den..., where there are n num
 * den pairs. All values are integers.
 *
 * The values are printed to the terminal as num/den, one per line.
 */


#include <fstream>
using std::fstream;
#include <cstddef>
// using size_t
#include <iostream>
using std::cout;
using std::endl;


int main(int argc, char* argv[]) {
  // check number of arguments, give usage message if missing file name
  int kNoArgs = 2;
  if (argc < kNoArgs) {
    cout << "A file name is required!" << endl;
    return 1;
  }

  // use filename from argument list to open filestream
  fstream fin(argv[kNoArgs - 1], fstream::in);

  // ensure file is open, return 2 if not
  if (!fin.is_open()) {
    cout << "Unable to access " << argv[kNoArgs - 1] << endl;
    return 2;
  }

  // get number of rationals
  size_t size = 0;
  fin >> size;

  // loop over rationals
  for (size_t i = 0; i < size; ++i) {
    // ensure data exists before reads and print each rational
    int num = 0, den(0);
    fin >> num >> den;
    cout << num << "/" << den << endl;
  }

  return 0;
}
