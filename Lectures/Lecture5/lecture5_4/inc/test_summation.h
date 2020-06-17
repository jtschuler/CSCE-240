/* Copyright 2020 */
#ifndef LECTURE5_4_INC_TEST_SUMMATION_H_
#define LECTURE5_4_INC_TEST_SUMMATION_H_


#include <inc/rational.h>
#include <inc/summation.h>

#include <cassert>
// using assert
#include <cstddef>
// using size_t
#include <cstdlib>
// using atoi
// using rand
// using srand

#include <iostream>
#include <istream>
#include <sstream>
#include <string>


bool TestRangeConstructor(const Rational* start, const Rational* end);

bool TestCopyConstructor(const Summation& from);

bool TestAssignmentOperator(const Summation& rhs);

bool TestAppend(const Rational* start, const Rational* end);

const Rational* BuildRationals(size_t size);


#endif  // LECTURE5_4_INC_TEST_SUMMATION_H_
