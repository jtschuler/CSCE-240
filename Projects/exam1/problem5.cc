// Copyright 2020 Jadon T Schuler

#include <problem5.h>
#include <fstream>
using std::fstream;

int LargestInteger(const std::string& file_name) {
  fstream fin(file_name, fstream::in);

  int size = 0;
  fin >> size;

  int largest = 0;
  fin >> largest;

  for(int i = 0; i < size - 1; ++i) {
    int next = 0;
    fin >> next;

    if (next > largest)
      largest = next;
  }

  return largest;
}
