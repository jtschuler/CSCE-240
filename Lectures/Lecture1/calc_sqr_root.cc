/* Copyright 2020 CSCE 240
 *
 * The Babylonian square root calculation of a value n, algorithm works as
 * follows:
 * 1.) Guess at the correct square root (n/2 maybe?)
 * 2.) Calculate root = n / guess
 * 3.) Let guess = (guess + root)/2
 * 4.) Repeat steps 2 and 3 until the square root is resolved.
 *
 * Implement the above algorithm and repeat steps 2 and 3 five times. Copy/pasta
 * is your friend here.
 */


#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main(int argc, char* argv[]) {
  // prompt user for input and parse input as floating point data type
  cout << "Enter value for square root calculation: ";
  double input = 0.0;
  cin >> input;

  // create a floating point type variable named guess
  // assign it half input value
  double guess = 0.5 * input;

  // create a floating point type named root
  // assign root input / guess
  double root = input / guess;

  // assign guess (guess + root)/2
  // assign root input / guess
  guess = 0.5*(guess + root);
  root = input / guess;
  cout << "root: " << root << endl;

  // assign guess (guess + root)/2
  // assign root input / guess
  guess = 0.5*(guess + root);
  root = input / guess;
  cout << "root: " << root << endl;

  // assign guess (guess + root)/2
  // assign root input / guess
  guess = 0.5*(guess + root);
  root = input / guess;
  cout << "root: " << root << endl;

  // assign guess (guess + root)/2
  // assign root input / guess
  guess = 0.5*(guess + root);
  root = input / guess;
  cout << "root: " << root << endl;

  // assign guess (guess + root)/2
  // assign root input / guess
  guess = 0.5*(guess + root);
  root = input / guess;
  cout << "root: " << root << endl;

  return 0;
}
