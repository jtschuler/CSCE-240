/* calc_sqrt.cc copyright 2020
 *
 * Revisit the Babylonian square root calculation:
 * 1.) Guess at the correct square root (n/2 maybe?)
 * 2.) Calculate root = n / guess
 * 3.) Let guess = (guess + root)/2
 * 4.) Repeat steps 2 and 3 until the square root is resolved.
 *
 * This time, however, use a loop and define what it means to be "resolved."
 */

// using fabs  NOTICE!!!! this is not abs, but fabs. abs is for ints


#include <cassert>
// using assert
#include <cstdlib>
// using atof
#include <cmath>
// using fabs
#include <iostream>
using std::cout;
using std::endl;


int main(int argc, char* argv[]) {
  assert(argc == 2);
  const double kBound = 0.00000001;
  const size_t kRoot_idx = 1;
  double n = atof(argv[kRoot_idx]);
  double root = 0.0, guess = 0.5*n;

  bool equals = false;
  while (!equals) {
    root = n / guess;
    guess = 0.5*(guess + root);
    cout << root << " != " << guess << endl;

    double abs_diff = fabs(guess - root);
    equals = abs_diff < kBound;
  }

  return 0;
}
