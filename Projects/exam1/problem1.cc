/*  Copyright 2020 Jadon T Schuler
 *  Problem1: prefix notation arithmetic calculator
 *  Arithmetic is customarily represented using infix notation, e.g. 1.0 + 2.0.
 *  In this assignment, you are creating a prefix notation calculator,
 *  e.g. + 1.0 2.0.
 *
 *  The program will read the operator and operands from the standard input
 *  stream (using cin). The operator will be first and the left-hand side and
 *  right-hand side operands will be second and third, respectively. You will
 *  then write the output of the operation to the standard output stream (using
 *  cout).
 *
 *  DO NOT emit anything other than the result. This is a calculator. Simply
 *  emit the result of the operation. Do not prompt for input. Just write the
 *  result of the operation.
 *
 *  You must provide operators:
 *    + : addition
 *    - : subtraction
 *    x : multiplication
 *    / : division
 *    < : less than
 *    > : greater than
 *
 * Notes:
 *  The two operands should be read as floating point data and the operator is a
 *  character. You need not set precision for the floating point
 *  output. The default precision for a double is all that is required.
 *
 * Points:
 *  compilation: 1
 *  style: 1
 *  correctness: 3
 */


#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cstdlib>
// using atof
#include <string>
using std::string;


int main(int argc, char* argv[]) {
  string op = "";
  double first = 0.0;
  double second = 0.0;

  cin >> op;
  cin >> first;
  cin >> second;

  if (op == "+")
    cout << first + second;
  else if (op == "-")
    cout << first - second;
  else if (op == "x")
    cout << first * second;
  else if (op == "/")
    cout << first / second;
  else if (op == "<" && first < second)
    cout << "true";
  else if (op == "<" && !(first < second))
    cout << "false";
  else if (op == "<" && first > second)
    cout << "true";
  else if (op == "<" && !(first > second))
    cout << "false";

  return 0;
}
