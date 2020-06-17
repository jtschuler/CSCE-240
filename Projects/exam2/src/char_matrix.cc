// Copyright 2020 Jadon Schuler


#include <inc/char_matrix.h>


CharMatrix::CharMatrix() : matrix_(nullptr), rows_(0), cols_(0)  { /* empty */ }

CharMatrix::CharMatrix(const char** chars, size_t rows, size_t cols) {
  rows_ = rows;
  cols_ = cols;
  matrix_ = new char*[rows_];
  for (size_t i = 0; i < rows_; ++i)
    matrix_[i] = new char[cols_];

  for (size_t i = 0; i < rows_; ++i)
    for (size_t j = 0; j < cols_; ++j)
      matrix_[i][j] = chars[i][j];
}


CharMatrix::CharMatrix(const CharMatrix& that) {
  // Creates a deep copy
  rows_ = that.rows_;
  cols_ = that.cols_;
  matrix_ = new char*[rows_];
  for (size_t i = 0; i < rows_; ++i)
    matrix_[i] = new char[cols_];

  for (size_t i = 0; i < rows_; ++i)
    for (size_t j = 0; j < cols_; ++j)
      matrix_[i][j] = that.matrix_[i][j];
}


CharMatrix::~CharMatrix() {
  for (size_t i = 0; i < rows_; ++i)
    delete [] matrix_[i];
  delete [] matrix_;
}


const CharMatrix& CharMatrix::operator=(const CharMatrix& rhs) {
  if (this == &rhs)
    return *this;

  if (matrix_) {
    for (size_t i = 0; i < rows_; ++i)
      delete [] matrix_[i];
    delete [] matrix_;
  }

  rows_ = rhs.rows_;
  cols_ = rhs.cols_;

  if (rows_ > 0 && cols_ > 0) {
    matrix_ = new char*[rows_];
    for (size_t i = 0; i < rows_; ++i)
      matrix_[i] = new char[cols_];

    for (size_t i = 0; i < rows_; ++i)
      for (size_t j = 0; j < cols_; ++j)
        matrix_[i][j] = rhs.matrix_[i][j];
  } else {
    rows_ = 0;
    cols_ = 0;
  }

  return *this;
}
