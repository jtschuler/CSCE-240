/* Copyright 2020 CSCE 240
 *
 * A metric ton is 35,273.92 ounces. Write a program which accepts the
 * weight of a box of cereal in ounces and displays how many boxes would
 * be required to provide one metric ton.
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
  const double kOzInTon = 35273.92;

  double oz_in_box = 0.0;
  // get ounces in cereal box
  cout << "Enter ounces in cereal box: ";
  cin >> oz_in_box;

  // divide ounces in metric ton by onces in cereal box
  double boxes_in_ton = kOzInTon/oz_in_box;

  // round boxes up to nearest integer
  int boxes = 1 + static_cast<int>(boxes_in_ton);

  // display results
  cout << "Shipping " << boxes << " boxes" << endl;

  return 0;
}

