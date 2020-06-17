/* Copyright 2020 CSCE 240
 */


int main(int argc, char* argv[]) {
  // test array functions
  int array[] = {9, 1, -3, -2, 33};
  size_t size = sizeof(array)/sizeof(int);

  // test linear search
  cout << "Min value is " << array[MinValue(array, size)] << endl;
  cout << "Max value is " << array[MaxValue(array, size)] << endl;

  // test array copy
  int copy[10];
  Copy(array, size, copy);
  // use for-loops with an index and for-each to print the original and copy

  return 0;
}
