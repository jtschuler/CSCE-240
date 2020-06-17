/* Copyright 2020 CSCE240
 */

#include <inc/summation.h>


Summation::Summation(void) : rationals_(nullptr), size_(0), count_(0) {
  /* empty */
}

Summation::Summation(const Summation& that) : rationals_(nullptr),
                                   size_(that.size_),
                                   count_(that.count_) {
  if (size_ > 0)
    rationals_ = new Rational[size_];

  for (size_t i = 0; i < count_; ++i)
    rationals_[i] = that.rationals_[i];
}


Summation::~Summation() {
  if (rationals_)
    delete [] rationals_;
}


Summation::Summation(const Rational* start, const Rational* end) {
  count_ = size_ = end - start;  // calculate size and count from fill
  rationals_ = new Rational[size_];  // allocate memory for Rational instances

  for (size_t i = 0; i < count_; ++i)
    rationals_[i] = start[i];
}


const Summation& Summation::operator=(const Summation& rhs) {
  if (this == &rhs)  // a = a
    return *this;

  if (rationals_) {
    delete [] rationals_;
    rationals_ = nullptr;
  }

  size_ = rhs.size_;
  count_ = rhs.count_;

  if (size_ > 0)
    rationals_ = new Rational[size_];

  for (size_t i = 0; i < count_; ++i)
    rationals_[i] = rhs.rationals_[i];

  return *this;
}


Rational& Summation::operator[](size_t index) const {
  return rationals_[index];
}


const Rational Summation::Sum() const {
  if (count_ == 0)
    return Rational();

  Rational sum = rationals_[0];
  for (size_t i = 1; i < count_; ++i)
    sum = sum + rationals_[i];

  return sum;
}


size_t Summation::Append(const Rational& element) {
  if (size_ == count_) {  // out of memory
    Rational *tmp = new Rational[2*size_];  // double memory
    for (size_t i = 0; i < count_; ++i)  // copy each element
      tmp[i] = rationals_[i];
    delete [] rationals_;
    rationals_ = tmp;
    size_ *= 2;
  }

  rationals_[count_] = element;
  ++count_;
  return count_;
}
