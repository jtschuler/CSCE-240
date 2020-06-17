/* ninety_nine Copyright 2020 CSCE240
 *
 * Write the 99 stanzas of "Ninety-Nine Bottles of Soda on the Wall" song to
 * the console.
 *
 * Write a void function with id PrintStanza which accepts an integer n, and
 * prints
 *  n bottles of errors in the code,
 *  n bottles of soda,
 *  Take one down, pass it around,
 *  n - 1 bottles of errors in the code
 * Where n and n - 1 are in English. Implement it with the functions defined
 * below and print the 99 stanzas in a loop.
 *
 * Write a function with id InEnglish which accepts an integer and returns the
 * value in a string as an English word [Zero to Ninety-nine]. Implement
 * function with functions described below. Test the function.
 *
 * Write a function with id OnesInEnglish which accepts an integer in [0,
 * 9] and returns a string containing the value as an English word. Test the
 * function.
 * "Zero"
 * "One"
 * "Two"
 * "Three"
 * "Four"
 * "Five"
 * "Six"
 * "Seven"
 * "Eight"
 * "Nine"
 *
 * Write a function with id TensInEnglish which accepts an integer n in [10,
 * 90] s.t. n % 10 = 0 and returns a string containing the value as an English
 * word. Test the function.
 * "Twenty"
 * "Thirty"
 * "Fourty"
 * "Fifty"
 * "Sixty"
 * "Seventy"
 * "Eighty"
 * "Ninety"
 *
 * Write a function with id TeensInEnglish which accepts an integer in [10, 19]
 * and returns a string containing the value as an English word. Test the
 * function.
 * "Ten"
 * "Eleven"
 * "Twelve"
 * "Thirteen"
 * "Fourteen"
 * "Fifteen"
 * "Sixteen"
 * "Seventeen"
 * "Eighteen"
 * "Nineteen"
 */


#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;


string OnesInEnglish(int value) {
  switch (value) {
    case 0:
      return "Zero";
    case 1:
      return "One";
    case 2:
      return "Two";
    case 3:
      return "Three";
    case 4:
      return "Four";
    case 5:
      return "Five";
    case 6:
      return "Six";
    case 7:
      return "Seven";
    case 8:
      return "Eight";
    case 9:
      return "Nine";
    default:
      return "";
  }
}

string TeensInEnglish(int value) {
  switch (value) {
    case 10:
      return "Ten";
    case 11:
      return "Eleven";
    case 12:
      return "Twelve";
    case 13:
      return "Thirteen";
    case 14:
      return "Fourteen";
    case 15:
      return "Fifteen";
    case 16:
      return "Sixteen";
    case 17:
      return "Seventeen";
    case 18:
      return "Eighteen";
    case 19:
      return "Nineteen";
    default:
      return "";
  }
}

string TensInEnglish(int value) {
  switch (value) {
    case 20:
      return "Twenty";
    case 30:
      return "Thirty";
    case 40:
      return "Forty";
    case 50:
      return "Fifty";
    case 60:
      return "Sixty";
    case 70:
      return "Seventy";
    case 80:
      return "Eighty";
    case 90:
      return "Ninety";
    default:
      return "";
  }
}

string NumberToEnglish(int n) {
  string number = "";
  if (n < 10)
    return OnesInEnglish(n);
  else if (n < 20)
    return TeensInEnglish(n);
  else
    return TensInEnglish(10*(n/10)) + "-" + OnesInEnglish(n%10);
}

void PrintStanza(int n) {
  string number = NumberToEnglish(n);
  cout << number << " bottles of soda on the wall." << endl;
  cout << number << " bottles of soda." << endl;
  cout << "Take one down, pass it around," << endl;
  number = NumberToEnglish(n - 1);
  cout << number << " bottles of soda on the wall" << endl;
}

int main(int argc, char* argv[]) {
  for (int i = 100; i > 0; --i)
    PrintStanza(i);
  return 0;
}
