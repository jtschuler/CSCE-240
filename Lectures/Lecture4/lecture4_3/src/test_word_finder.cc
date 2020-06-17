/* Copyright 2020 CSCE240
 */

#include <inc/test_word_finder.h>


int main(int argc, char* argv[]) {
  cout << "Find word horizontal and left-to-right." << endl;
  if (TestFinder("ash", WordIndices(0, 1, 0, 3))) {
    cout << "  CORRECT!" << endl;
  } else {
    cout << "  INCORRECT!" << endl;
    return 1;
  }

  cout << "Find word horizontal and right-to-left." << endl;
  if (TestFinder("run", WordIndices(4, 4, 4, 2))) {
    cout << "  CORRECT!" << endl;
  } else {
    cout << "  INCORRECT!" << endl;
    return 1;
  }

  cout << "Find word vertical and top-to-bottom." << endl;
  if (TestFinder("ask", WordIndices(0, 4, 2, 4))) {
    cout << "  CORRECT!" << endl;
  } else {
    cout << "  INCORRECT!" << endl;
    return 1;
  }

  cout << "Find word vertical and bottom-to-top." << endl;
  if (TestFinder("barks", WordIndices(4, 0, 0, 0))) {
    cout << "  CORRECT!" << endl;
  } else {
    cout << "  INCORRECT!" << endl;
    return 1;
  }

  cout << "Find missing word." << endl;
  if (TestFinder("half", WordIndices(0, 0, 0, 0), false)) {
    cout << "  CORRECT!" << endl;
  } else {
    cout << "  INCORRECT!" << endl;
    return 1;
  }

  return 0;
}


bool TestFinder(const char* word, const  WordIndices& indices, bool exists) {
  // create scramble to pass to finder
  const char **scramble = new const char* [kRows];
  for (int i = 0; i < kRows; ++i)
    scramble[i] = static_cast<const char *>(kWord_scramble[i]);
  // create scramble size for finder
  const int scramble_size[] = {kRows, kCols};
  // create array of indices from object
  int expected_indices[] = {
    indices.start_row, indices.start_col, indices.end_row, indices.end_col
  };

  // build output parameter and attempt find
  int actual_indices[] = {-1, -1, -1, -1};
  bool found = FindWord(word, scramble, scramble_size, actual_indices);
  if (exists) {
    // word expected to exist
    if (!found) {
      cout << "  \"" << word << "\" exists, but not found" << endl;
      return false;
    }
    if (!IndicesEqual(expected_indices, actual_indices)) {
      cout << "  Expected: " << ToString(expected_indices)
        << " Actual: " << ToString(actual_indices) << endl;
      return false;
    }
  } else {
    // word does not exist in scramble
    if (!exists && found) {
      cout << "  \"" << word << "\" returned, but does not exist" << endl;
      return false;
    }
  }
  return true;
}


bool IndicesEqual(const int* left, const int* right) {
  for (size_t i = 0; i < 4; ++i)
    if (left[i] != right[i])
      return false;
  return true;
}

string ToString(const int* indices) {
  stringstream sout;
  sout << "(" << indices[kStartRow] << ", " << indices[kStartCol] << ") - ("
    << indices[kEndRow] << ", " << indices[kEndCol] << ")";
  return sout.str();
}
