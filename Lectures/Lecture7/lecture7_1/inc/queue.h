/* Copyright 2020 CSCE240 */
#ifndef INC_QUEUE_H_
#define INC_QUEUE_H_

#include <list>
#include <string>

namespace csce240 {

class Queue : std::list<std::string> {
 public:
  bool Empty() const;

  void Push(const std::string& value);

  const std::string Pop();

  const std::string Top() const;
};

}  // namespace csce240

#endif  // INC_QUEUE_H_
