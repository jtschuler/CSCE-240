/* Copyright 2020 CSCE240
 */

#include <cctype>
// using isdigit
#include <cstddef>
// using size_t
#include <cstring>
// using strlen
#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main(int argc, char* argv[]) {
  const int kArg_position = 1;
  // Get character array from command line args
  size_t len = strlen(argv[kArg_position]);
  char cpy_string[len + 1];
  for (size_t i = 0; i < len + 1; i ++)
    cpy_string[i] = argv[kArg_position][i];
  cout << cpy_string << endl;

  // Determine whether the character array is a palindrome
  //   Consider both examining characters and
  bool is_pal = true;
  for (size_t i = 0; i < len; ++i)
    if (cpy_string[i] != cpy_string[len - 1 - i]) {
      is_pal = false;
      break;
    }

  cout << cpy_string << (is_pal ? " is" : " is not") << " a palindrome." << endl;

  //   Building a new string

  // Extact any digits and determine both sum of digits as well as digits read
  //     as base-10 integer. Try without isdigit or stoi

  return 0;
}
