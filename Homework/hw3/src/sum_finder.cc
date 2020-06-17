// Copyright 2020 Jadon T Schuler

#include <inc/sum_finder.h>


size_t** growArray(size_t** old_array, size_t length) {
  size_t new_length = length + 1;
  size_t **new_array = new size_t*[new_length];

  for (size_t i = 0; i < length; ++i)
    new_array[i] = old_array[i];

  new_array[new_length - 1] = new size_t[4];

  delete[] old_array;
  return new_array;
}

size_t** AddRow(int sum, const int** matrix, const size_t matrix_size[],
            size_t* sums_found, int start_row,
            int start_col, size_t** indices) {
  int current_sum = 0;

  for (size_t row = start_row; row < matrix_size[kRow]; ++row) {
    current_sum += matrix[row][start_col];
    if (sum == current_sum) {
      indices = growArray(indices, *sums_found);
      indices[*sums_found][kStartRow] = start_row;
      indices[*sums_found][kStartCol] = start_col;
      indices[*sums_found][kEndRow] = row;
      indices[*sums_found][kEndCol] = start_col;
      ++*sums_found;
    }
  }
  return indices;
}

size_t** AddCol(int sum, const int** matrix, const size_t matrix_size[],
            size_t* sums_found, int start_row,
            int start_col, size_t** indices) {
  // Takes care of edge case where the sum is a single value
  int current_sum = matrix[start_row][start_col];

  for (size_t col = start_col + 1; col < matrix_size[kCol]; ++col) {
    current_sum += matrix[start_row][col];
    if (sum == current_sum) {
      indices = growArray(indices, *sums_found);
      indices[*sums_found][kStartRow] = start_row;
      indices[*sums_found][kStartCol] = start_col;
      indices[*sums_found][kEndRow] = start_row;
      indices[*sums_found][kEndCol] = col;
      ++*sums_found;
    }
  }
  return indices;
}


size_t** FindSum(int sum, const int** matrix, const size_t matrix_size[],
                 size_t* sums_found) {
  *sums_found = 0;
  size_t** indices = nullptr;

  // ROW MUST BE CHECKED FIRST
  // SO THAT THE EDGE CASE WORKS PROPERLY
  for (size_t i = 0; i < matrix_size[kRow]; ++i) {
    for (size_t j = 0; j < matrix_size[kCol]; ++j) {
      indices = AddRow(sum, matrix, matrix_size, sums_found, i, j, indices);
      indices = AddCol(sum, matrix, matrix_size, sums_found, i, j, indices);
    }
  }

  return indices;
}
