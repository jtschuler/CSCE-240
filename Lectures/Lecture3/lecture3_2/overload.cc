/* Copyright 2020 */

#include <overload.h>

/*Tests correct functionality of Min functions
 */
int main(int argc, char* argv[]) {
  int a = 2, b = 3;
  if (a == Min(a, b))
    cout << "Min(int, int) PASSED" << endl;
  else
    cout << "Min(int, int) FAILED" << endl;

  double c = 2.0, d = 3.0;
  if (c == Min(c, d))
    cout << "Min(double, double) PASSED" << endl;
  else
    cout << "Min(double, double) FAILED" << endl;

  char e = 'a', f = 'b';
  if (e == Min(e, f))
    cout << "Min(char, char) PASSED" << endl;
  else
    cout << "Min(char, char) FAILED" << endl;

  return 0;
}

int Min(int first, int second) {
  if (first < second)
    return first;
  return second;
}

double Min(double first, double second) {
  if (first < second)
    return first;
  return second;
}

char Min(char first, char second) {
  if (first < second)
    return first;
  return second;
}
