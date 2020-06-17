/* Copyright 2020 CSCE240 
 */
#include <inc/queue.h>

namespace csce240 {

Queue::Queue() : std::list<size_t>() { /* empty */ }

bool Queue::Empty() const {
  return size() == 0;
}

void Queue::Push(const size_t& value) {
  push_back(value);
}

const size_t Queue::Pop() {
  size_t top = front();
  pop_front();
  return top;
}

const size_t Queue::Top() const {
  return front();
}

}  // namespace csce240
