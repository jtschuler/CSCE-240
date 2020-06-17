/* Copyright 2020 CSCE 240
 */
#include <test/inc/tree.h>
using b_tree::BFS;
using b_tree::DFS;
using csce240::Queue;
using csce240::Stack;
using std::cout;
using std::endl;
using std::string;


int main(int argc, char* argv[]) {
  const int kArg_index = 1;  // index of search value in argument list
  assert(1 < argc && "You must provide a movie title.");  // avoid segfaults
  string needle = string(argv[kArg_index]);  // get search string arg
  size_t comparisons = 0;
  int index = -1;

  index = BFS(kMovie_tree, kTree_size, needle, &comparisons);
  cout << "Using a breadth-first search and " << comparisons
      << " comparisons, " << needle << " was "
      << (index < 0 ? "not " : "") << "found at index " << index << endl;

  comparisons = 0;  // forgot to do this in video lecture
  index = DFS(kMovie_tree, kTree_size, needle, &comparisons);
  cout << "Using a depth-first search and " << comparisons
      << " comparisons, " << needle << " was "
      << (index < 0 ? "not " : "") << "found at index " << index << endl;

  return 0;
}
