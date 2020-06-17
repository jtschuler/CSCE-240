/* Copyright 2020 CSCE 240
 */
#ifndef INC_SUMMATION_H_
#define INC_SUMMATION_H_

#include <inc/rational.h>

#include <cassert>
// using assert
#include <cstddef>
// using size_t


class Summation {
 public:
  Summation();
  Summation(const Summation& that);  // copy constructor
  Summation(const Rational* start, const Rational* end);

  ~Summation();  // destructor

  const Summation& operator=(const Summation& rhs);  // assignment operator

  Rational& operator[](size_t index) const;

  inline size_t size() const  { return count_; }

  const Rational Sum() const;

  size_t Append(const Rational& element);

 private:
  Rational *rationals_;
  size_t size_;  // size of rationals_
  size_t count_;  // number of rationals stored
};

#endif  // INC_SUMMATION_H_
