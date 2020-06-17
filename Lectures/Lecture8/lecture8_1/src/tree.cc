/* Copyright 2020 Fall CSCE 240
 */
#include <inc/tree.h>

using csce240::Queue;
using csce240::Stack;

namespace b_tree {

int BFS(const std::string* tree,
        size_t size,
        const std::string& value,
        size_t* comparisons) {
  Queue Q;
  Q.Push(kRoot);
  while (!Q.Empty()) {
    if (comparisons)
      ++(*comparisons);
    size_t root = Q.Pop();
    if (tree[root] == value)
      return root;

    if (left_child(root) < size)
      Q.Push(left_child(root));

    if (right_child(root) < size)
      Q.Push(right_child(root));
  }
  return -1;
}

int DFS(const std::string* tree,
        size_t size,
        const std::string& value,
        size_t* comparisons) {
  Stack Q;
  Q.Push(kRoot);
  while (!Q.Empty()) {
    ++(*comparisons);
    size_t root = Q.Pop();
    if (tree[root] == value)
      return root;

    if (left_child(root) < size)
      Q.Push(left_child(root));

    if (right_child(root) < size)
      Q.Push(right_child(root));
  }
  return -1;
}

}  // namespace b_tree
