/* Copyright 2020 CSCE240
 */

#include <inc/stack.h>

namespace csce240 {

bool Stack::Empty() const  {
  return size() == 0;
}

void Stack::Push(const std::string& value) {
  push_back(value);
}

const std::string Stack::Pop() {
  std::string top = back();
  pop_back();
  return top;
}

const std::string Stack::Top() const {
  return back();
}

}  // namespace csce240
