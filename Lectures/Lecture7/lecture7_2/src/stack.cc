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

const std::string UndoStack::Pop() {
  undo_stack_.push_back(back());
  pop_back();
  return undo_stack_.back();
}

bool UndoStack::Undo() {
  if (undo_stack_.size() == 0)
    return false;

  push_back(undo_stack_.back());
  undo_stack_.pop_back();
  return true;
}

}  // namespace csce240
