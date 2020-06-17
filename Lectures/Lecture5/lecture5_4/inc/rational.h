/* Copyright 2020 CSCE 240
 *
 * Class
 *  This library introduces classes. It provides a rational class which will
 *  serve as the basis for future lectures describing programming class topics
 *  as well as C++ class topics.
 */
#ifndef INC_RATIONAL_H_
#define INC_RATIONAL_H_


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
 public:
  // basic initialization constructor and default constructor
  Rational();  // default
  Rational(int numerator, int denominator);  // initialization constructor

  // inline accessors
  inline int num() const { return num_; }
  inline int den() const { return den_; }
  inline bool positive() const { return positive_; }

  /* Add: calculates and returns the sum of the calling instance and the
   * parameter without changing either.
   */
  const Rational Add(const Rational& that) const;
  const Rational operator+(const Rational& rhs) const;
  const Rational operator+(int rhs) const;

  bool operator==(const Rational& that) const;

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
  int num_;
  int den_;
  bool positive_;
};


const Rational operator+(int lhs, const Rational& rhs);

std::ostream& operator<<(std::ostream& lhs, const Rational& rhs);
std::istream& operator>>(std::istream& lhs, Rational& rhs);


#endif  // INC_RATIONAL_H_
