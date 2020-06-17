// Copyright 2020 Jadon Schuler


#include <inc/functional_array.h>


size_t** Allocate(const size_t* sizes, size_t length) {
  size_t** array = new size_t*[length];

  for (size_t i = 0; i < length; ++i) {
    const size_t cols = sizes[i];
    array[i] = new size_t[cols];
    for (size_t j = 0; j < cols; ++j)
      array[i][j] = cols;
  }

  return array;
}


size_t Deallocate(const size_t** arrays,
                  const size_t* sizes,
                  size_t length) {
  size_t sum = 0;

  for (size_t i = 0; i < length; ++i) {
    sum += sizes[i] * sizes[i];
    delete [] arrays[i];
  }

  delete [] arrays;
  return sum;
}
