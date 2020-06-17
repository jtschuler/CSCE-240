/* Copyright 2020 */
#ifndef INC_TEST_RATIONAL_H_
#define INC_TEST_RATIONAL_H_


#include <inc/rational.h>

#include <cassert>
// using assert
#include <cstddef>
// using size_t

#include <iostream>
#include <istream>
#include <sstream>
#include <string>


bool TestRationalAdd(const Rational& expected,
                     const Rational& lhs,
                     const Rational& rhs);
bool TestRationalAdd(const Rational& expected, int lhs, const Rational& rhs);


bool TestRationalInsert(const Rational& expected, std::istream* from);


bool TestRationalExtract(const Rational& input, const std::string& expected);

#endif  // INC_TEST_RATIONAL_H_
