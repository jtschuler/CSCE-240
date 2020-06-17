/* Copyright 2020 CSCE240
 */


#include <inc/word_finder.h>


bool FindLetter(const char letter,
                const char** puzzle,
                const int* puzzle_size,
                int* word_indices) {
  int row = word_indices[kStartRow] < 0 ? 0 : word_indices[kStartRow];
  int col = word_indices[kStartCol] + 1;

  if (word_indices[kStartCol] == puzzle_size[kCol] - 1) {
    // at the end of a row
    row = word_indices[kStartRow] + 1;
    col = 0;
  }

  for (int i = row; i < puzzle_size[kRow]; ++i) {
    if (i != row)
      col = 0;
    for (int j = col; j < puzzle_size[kCol]; ++j) {
      if (letter == puzzle[i][j]) {  // Found It!
        word_indices[kStartRow] = i;
        word_indices[kStartCol] = j;
        return true;
      }
    }
  }
  return false;
}


bool SearchForward(const char* word,
                   const char** puzzle,
                   const int* puzzle_size,
                   int* word_indices) {
  int row = word_indices[kStartRow];
  int col = word_indices[kStartCol];
  size_t i = 0;

  while (col < puzzle_size[kCol] && i < strlen(word)) {
    if (word[i] != puzzle[row][col])
      return false;
    ++col;
    ++i;
  }
  if (i < strlen(word))
    return false;
  word_indices[kEndRow] = row;
  word_indices[kEndCol] = col - 1;
  return true;
}


bool SearchBack(const char* word,
                const char** puzzle,
                const int* puzzle_size,
                int* word_indices) {
  int row = word_indices[kStartRow];
  int col = word_indices[kStartCol];
  size_t i = 0;

  while (col >= 0 && i < strlen(word)) {
    if (word[i] != puzzle[row][col])
      return false;
    --col;
    ++i;
  }
  if (i < strlen(word))
    return false;
  word_indices[kEndRow] = row;
  word_indices[kEndCol] = col + 1;
  return true;
}


bool SearchDown(const char* word,
                const char** puzzle,
                const int* puzzle_size,
                int* word_indices) {
  int row = word_indices[kStartRow];
  int col = word_indices[kStartCol];
  size_t i = 0;

  while (row < puzzle_size[kRow] && i < strlen(word)) {
    if (word[i] != puzzle[row][col])
      return false;
    ++row;
    ++i;
  }
  if (i < strlen(word))
    return false;
  word_indices[kEndRow] = row - 1;
  word_indices[kEndCol] = col;
  return true;
}


bool SearchUp(const char* word,
              const char** puzzle,
              const int* puzzle_size,
              int* word_indices) {
  int row = word_indices[kStartRow];
  int col = word_indices[kStartCol];
  size_t i = 0;

  while (row >= 0 && i < strlen(word)) {
    if (word[i] != puzzle[row][col])
      return false;
    --row;
    ++i;
  }
  if (i < strlen(word))
    return false;
  word_indices[kEndRow] = row + 1;
  word_indices[kEndCol] = col;
  return true;
}


bool FindWord(const char* word,
              const char** puzzle,
              const int* puzzle_size,
              int* word_indices) {
  for (int i = 0; i < 4; ++i)
    word_indices[i] = -1;

  while (FindLetter(word[0], puzzle, puzzle_size, word_indices)) {
    // Found first letter
    if (SearchForward(word, puzzle, puzzle_size, word_indices))
      return true;
    if (SearchBack(word, puzzle, puzzle_size, word_indices))
      return true;
    if (SearchDown(word, puzzle, puzzle_size, word_indices))
      return true;
    if (SearchUp(word, puzzle, puzzle_size, word_indices))
      return true;
  }
  return false;
}
