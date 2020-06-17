/* Copyright 2020 CSCE240
 */

#ifndef INC_WORD_FINDER_H_
#define INC_WORD_FINDER_H_

#include <cstddef>
// using size_t
#include <cstring>
// using strlen
#include <iostream>
using std::cout;
using std::endl;


/* The function accepts a word, a letter puzzle, a pair of integers representing
 * puzzle size, and an output parameter to store the indices of a found word.
 *
 * Preconditions:
 *  - All arrays are allocated,
 *  - The puzzle array's dimensions are correctly represented in puzzle_size
 *    array,
 *  - The puzzle_size parameter has exactly two elements
 *  - The word_indices output parameter is allocated and has four elements
 * Parameters:
 *  - word: a null-terminated character array
 *  - puzzle: a two-dimension character array
 *  - puzzle_size: a two-element integer array with index 0 storing the number
 *    of rows, and index 1 storing the number of columns
 *  - word_indices: a four-element integer array into which the beginning row
 *    and column and ending row and column indicies are stored
 * Returns:
 *  - Will return true if word is found in puzzle, false otherwise
 *  - Additionally, returns the beginning row and column and ending row and
 *    column indicies are stored
 */
bool FindWord(
  const char* word, const char** puzzle, const int* puzzle_size,
  int* word_indices);


const size_t kRow = 0;  // maps to row of puzzle_size
const size_t kCol = 1;  // maps to col ...

const size_t kStartRow = 0;  // maps to start row of found word in word_indices
const size_t kStartCol = 1;  // maps to start col ...
const size_t kEndRow = 2;    // maps to end row ...
const size_t kEndCol = 3;    // maps to end col ...

#endif  // INC_WORD_FINDER_H_
