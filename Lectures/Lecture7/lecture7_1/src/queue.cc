/* Copyright 2020 CSCE240
*/

#include <inc/queue.h>


namespace csce240 {

bool Queue::Empty() const {
  return size() == 0;
}

void Queue::Push(const std::string& value) {
  push_back(value);
}

const std::string Queue::Pop() {
  std::string top = front();
  pop_front();
  return top;
}

const std::string Queue::Top() const {
  return front();
}

}  // namespace csce240
