/* calc_avg.cc copyright 2020
 *
 * Given a file (using IO redirect) which begins with a single integer n, and
 * contains n whitespace-delimited doubles, calculate the mean of the doubles.
 * Use io redirect.
 */


#include <cstddef>
// using size_t
#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main(int argc, char* argv[]) {
  size_t size = 0;
  cin >> size;
  double sum = 0.0;
  for (size_t i = 0; i < size; ++i) {
    double tmp;
    cin >> tmp;
    sum += tmp;
  }
  cout << (sum / size) << endl;
  return 0;
}
