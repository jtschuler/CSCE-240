/* Copyright 2020 CSCE 240
 *
 * Workers have won a 7.6% pay increase retroactive for six months. Given a
 * worker's salary, display how much retroactive pay is due the worker.
 *
 * Ensure that the number of months and pay increase are stored in const
 * variables.
 */

  // create const int variable to store number of months and assign it 6

  // create const floating point variable to store the pay increase and assign
  // it 0.076

  // prompt user for salary and store in floating point variable

  // calculate pay increase from salary, divide by 12 (months in year), and
  //   store in floating point variable named back_pay.

  // display result of pay over number of months to show the 6 months of back
  //   pay owed the worker

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
  const unsigned int kNoOfMonths = 6;
  const double kPayIncrease = 0.076;

  double salary = 0.0;
  cout << "Enter salary: ";
  cin >> salary;

  double back_pay = salary * (static_cast<double>(kNoOfMonths)/12.0);
  back_pay *= kPayIncrease;

  cout << "You will receive $" << back_pay << " of back pay." << endl;

  return 0;
}
