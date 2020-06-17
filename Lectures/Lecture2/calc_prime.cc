/* calc_prime.cc copyright 2020
 *
 * Write a program that prints on a single line, separated but not terminated by
 * commas, all prime numbers [3, 100).
 *
 * Now, update the app to accept a lower bound and upper bound from user input
 * and, so long as 2 < lower_bound < upper_bound, display all prime numbers
 * from [lower_bound, upper_bound]
 */


#include <cassert>
// using assert
#include <cstddef>
// using size_t
#include <iostream>
// using atoi
using std::cout;
using std::endl;


int main(int argc, char* argv[]) {
  assert(argc > 2 && "Two arguments required");
  // get upper and lower bound from user and ensure constraints
  const size_t kLower_idx = 1;
  const size_t kUpper_idx = 2;
  int lower = atoi(argv[kLower_idx]);
  int upper = atoi(argv[kUpper_idx]);

  for (int i = lower; i <= upper; ++i) {
    bool is_prime = true;
    for (int j = 2; j <= i/2; ++j) {
      if (i % j == 0) {
        is_prime = false;
        break;
      }
    }
    cout << i << " is" << (is_prime ? "" : " not") << " prime" << endl;
  }

  // calculate greatest prime for printing

  // calculate and print primes in [lower, upper] s.t. upper < greatest_prime

  // print greatest prime value

  return 0;
}
