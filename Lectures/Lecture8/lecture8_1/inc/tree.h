#include <inc/queue.h>
#include <inc/stack.h>

#include <cstddef>
// using size_t


/* A balanced, unordered, C-style binary tree stored in an array.
 */
namespace b_tree {

const size_t kRoot = 0;  // global root of the tree

inline size_t left_child(size_t root) {  // left child of root parameter
  return 2*root + 1;
}

inline size_t right_child(size_t root) {  // right child of root parameter
  return 2*root + 2;
}

/* searches tree for value, breadth-first
 */
int BFS(const std::string* tree,
        size_t size,
        const std::string& value,
        size_t* comparisons=nullptr);

/* searches tree for value, depth-first
 */
int DFS(const std::string* tree,
        size_t size,
        const std::string& value,
        size_t* comparisons=nullptr);

}  // namespace b_tree
