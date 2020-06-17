// Copyright 2020 Jadon Schuler


#include <inc/tight_vector.h>


TightVector::TightVector() : array_(nullptr), count_(0) { /* empty */ }

TightVector::~TightVector() {
  if (array_)
    delete [] array_;
}


void TightVector::Append(int element) {
  int *new_array = new int[count_ + 1];

  for (size_t i = 0; i < count_; ++i)
    new_array[i] = array_[i];
  new_array[count_] = element;

  ++count_;
  delete [] array_;
  array_ = new_array;
}


void TightVector::Prepend(int element) {
  int *new_array = new int[count_ + 1];

  for (size_t i = 1; i < count_ + 1; ++i)
    new_array[i] = array_[i - 1];
  new_array[0] = element;

  ++count_;
  delete [] array_;
  array_ = new_array;
}
