/* Copyright 2020 CSCE240
 */


#include <pass_by_ref.h>


/* Tests the functions.
 */
int main(int argc, char* argv[]) {
  // Test Swap
  int x = 10, y = 12;
  Swap(x, y);
  if (y < x)
    std::cout << "Swap: PASSED" << std::endl;
  else
    std::cout << "Swap: FAILED" << std::endl;

  // Test DblQuoteString
  std::string expected = "\"Hello, World\"";
  std::string actual = DblQuoteString("Hello, World");
  if (expected == actual)
    std::cout << "DblQuoteString: PASSED" << std::endl;
  else
    std::cout << "DblQuoteString: FAILED"
      << " Expected: " << expected
      << ", Actual: " << actual << std::endl;

  // Test SngQuoteString
  expected = "'Hello, World'";
  actual = SngQuoteString("Hello, World");
  if (expected == actual)
    std::cout << "SngQuoteString: PASSED" << std::endl;
  else
    std::cout << "SngQuoteString: FAILED"
      << " Expected: " << expected
      << ", Actual: " << actual << std::endl;

  return 0;
}

void Swap(int& left, int& right) {
  int tmp = left;
  left = right;
  right = tmp;
}

std::string DblQuoteString(const std::string& str) {
  return "\"" + str + "\"";
}

std::string SngQuoteString(const std::string& str) {
  return "'" + str + "'";
}
