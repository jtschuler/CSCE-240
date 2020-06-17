/* Copyright 2020 CSCE240
 */

#include <inc/stack.h>

namespace csce240 {

Stack::Stack() : std::vector<size_t>() { /* intentionally empy */ }

bool Stack::Empty() const  {
  return size() == 0;
}

void Stack::Push(const size_t& value) {
  push_back(value);
}

const size_t Stack::Pop() {
  size_t top = back();
  pop_back();
  return top;
}

const size_t Stack::Top() const {
  return back();
}

}  // namespace csce240
