/* Copyright 2020 CSCE240
 */
#ifndef INC_TEST_WORD_FINDER_H_
#define INC_TEST_WORD_FINDER_H_

#include <inc/word_finder.h>

#include <cstddef>
// using size_t
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <sstream>
using std::stringstream;
#include <string>
using std::string;


const char kWord_scramble[][5] = {
  {'s', 'a', 's', 'h', 'a'},
  {'k', 'n', 'm', 'r', 's'},
  {'r', 'a', 'u', 'a', 'k'},
  {'a', 'a', 'n', 'b', 'w'},
  {'b', 'f', 'n', 'u', 'r'}
};
const int kRows = 5;
const int kCols = 5;

/* A class to easily create new arrays to pass to test functions
 */
struct WordIndices {
  WordIndices(size_t r1, size_t c1, size_t r2, size_t c2)
    : start_row(r1), start_col(c1), end_row(r2), end_col(c2) {}

  int start_row, start_col, end_row, end_col;
};

/* Compare two sets of indices to ensure they are equal.
 * Preconditions: two input parameters are allocated as arrays, each containing
 *   four elements
 */
bool IndicesEqual(const int* left, const int* right);

/* Converts a set of indices to a string for printing.
 * Preconditions: input parameter must be allocated as an array with four
 *   elements
 */
string ToString(const int* indices);

/* Uses word to test the FindWord function from student library. Can check for
 * words that exist or do not exist by last parameter.
 */
bool TestFinder(
  const char* word, const WordIndices& expected_indices, bool exists = true);

#endif  // INC_TEST_WORD_FINDER_H_
