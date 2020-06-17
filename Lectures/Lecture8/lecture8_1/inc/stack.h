/* Copyright 2020 CSCE240
 */
#ifndef INC_STACK_H_
#define INC_STACK_H_


#include <inc/series.h>
#include <vector>
#include <ostream>


namespace csce240 {

class Stack : public std::vector<size_t> {
 public:

  Stack();

  virtual ~Stack() { /* intentionally empty */ }

  bool Empty() const;
  
  void Push(const size_t& value);
  
  const size_t Pop();
  
  const size_t Top() const;

};

}  // namespace csce240

#endif  // INC_STACK_H_
