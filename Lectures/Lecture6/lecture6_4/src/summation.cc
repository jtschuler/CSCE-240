/* Copyright 2020 CSCE240
 */

#include <inc/summation.h>


Summation::Summation() : elements_(nullptr), count_(0), size_(0) {
  /* empty */
}


Summation::Summation(const Summation& that)
    : elements_(nullptr), count_(0), size_(0) {
  if (that.elements_) {
    size_ = that.size_;
    count_ = that.count_;
    elements_ = new Rational[size_];
    for (size_t i = 0; i < count_; ++i)
      elements_[i] = that.elements_[i];
  }
}


Summation::Summation(const Rational* start, const Rational* end)
    : elements_(nullptr), count_(0), size_(0) {
  assert(start < end);
  count_ = size_ = end - start;

  elements_ = new Rational[size_];
  Rational *itr = elements_;
  while (start != end) {
    *itr = *start;
    ++itr;
    ++start;
  }
}


Summation::~Summation() {
  if (elements_)
    delete [] elements_;
}


const Summation& Summation::operator=(const Summation& that) {
  if (this == &that)  // avoid a = a
    return *this;

  if (elements_) {
    delete [] elements_;
    elements_ = nullptr;
    count_ = 0;
    size_ = 0;
  }

  if (that.elements_) {
    size_ = that.size_;
    count_ = that.count_;
    elements_ = new Rational[size_];
    for (size_t i = 0; i < count_; ++i)
      elements_[i] = that.elements_[i];
  }

  return *this;
}


Rational& Summation::operator[](size_t index) const {
  assert(index < count_);
  return elements_[index];
}


size_t Summation::Append(const Rational& element) {
  double delta = 2.0;
  // case 1: elements_ is null
  if (!elements_) {
    size_ = 2;
    elements_ = new Rational[size_];
    count_ = 0;
  }

  // case 2: elements_ is full
  if (count_ == size_) {
    Rational *tmp = new Rational[static_cast<size_t>(delta * size_)];
    for (size_t i = 0; i < size_; ++i)
      *(tmp + i) = *(elements_ + i);
    delete [] elements_;
    elements_ = tmp;
    size_ = static_cast<size_t>(delta * size_);
  }

  elements_[count_] = element;
  ++count_;

  return count_ - 1;
}
