// Copyright 2020 Jadon T Schuler


#include <inc/mean.h>

namespace csce240 {

Mean::Mean() : sum_(0), num_(0) { /* empty */ }

Mean::Mean(const Mean& other) : sum_(other.sum_), num_(other.num_) { /*empty*/ }

const Mean& Mean::operator=(const Mean& other) {
  if (this == &other)
    return *this;

  sum_ = other.sum_;
  num_ = other.num_;
  return *this;
}

void Mean::Collect(double datum) {
  sum_ += datum;
  num_ += 1;
}

double Mean::Calculate() const {
  return sum_/num_;
}

}  // namespace csce240
