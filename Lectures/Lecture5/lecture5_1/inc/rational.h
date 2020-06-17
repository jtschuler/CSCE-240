/* Copyright 2020 CSCE 240
 *
 * Class
 *  This library introduces classes. It provides a rational class which will
 *  serve as the basis for future lectures describing programming class topics
 *  as well as C++ class topics.
 */


#ifndef LECTURE5_1_INC_RATIONAL_H_
#define LECTURE5_1_INC_RATIONAL_H_


#include <istream>
#include <ostream>

/* Rational
 *  Stores the numerator (num) and denominator (den) as a pair of unsigned
 *  integers. It uses a boolean to manage positive/negative-ness and is
 *  efficienct in deciding when to reduce---only when displaying or comparing.
 *
 *   + Rational() : Rational
 *   + Rational(int, int) : Rational
 *   + den() : int
 *   + num() : int
 *   + Add(const Rational&) : const Rational
 *   + Extract(ostream*) : ostream*
 *   + Insert(istream*) : istream*
 *
 *   - GCD(int, int) : int
 *   - num : int
 *   - den : int
 *   - positive : bool
 */
class Rational {
  // basic initialization constructor and default constructor
 public:
  Rational();  // Default constructor
  Rational(int num, int den);  // initialization constructor

  // inline accessors
  inline int num() const { return num_; }
  inline int den() const { return den_; }
  inline bool positive() const { return positive_; }

  /* Add: calculates and returns the sum of the calling instance and the
   * parameter without changing either.
   */
  const Rational Add(const Rational& lhs) const;

  /* Extract: extracts the contents of calling instance and appends to ostream
   * parameter. Parameter will be changed, calling instance will not. Returns
   * the parameter for chaining.
   */
  std::ostream& Extract(std::ostream* out) const;

  /* Insert: extracts a pair of integers separated by a slash from the
   * parameter and stores in the calling instance, modifying both. Returns the
   * parameter for chaining.
   */
  std::istream& Insert(std::istream* in);

 private:
  int GCD(int a, int b) const;

  int num_;
  int den_;
  bool positive_;
};

#endif  // LECTURE5_1_INC_RATIONAL_H_
