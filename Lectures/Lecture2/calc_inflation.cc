/* calc_inflation.cc copyright 2020
 * 
 * Due to inflation, the cost of goods increase over the years in which they
 * must be purchased. Write an app which given the cost of a good, the expected
 * annual rate of inflation (as a percentage), and number of years, display the
 * increasing cost, year-by-year, line-by-line.
 */

#include <cstddef>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
  const double kInflation = 0.02;
  size_t no_years = 0;
  double cost = 0.0;

  // Get the values
  cout << "Enter cost of good: ";
  cin >> cost;
  cout << "Enter years of inflation: ";
  cin >> no_years;

  for (size_t i =0; i < no_years; ++i) {
    cost += cost * kInflation;
    cout << "Cost after " << (i + 1) << " years: " << cost << endl;
  }

  return 0;
}
