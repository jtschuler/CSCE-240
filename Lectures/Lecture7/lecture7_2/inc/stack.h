/* Copyright 2020 CSCE240 */
#ifndef INC_STACK_H_
#define INC_STACK_H_


#include <string>
#include <vector>


namespace csce240 {

class Stack : public std::vector<std::string> {
 public:
  bool Empty() const;
  
  void Push(const std::string& value);
  
  const std::string Pop();
  
  const std::string Top() const;
};

}  // namespace csce240

#endif  // INC_STACK_H_
