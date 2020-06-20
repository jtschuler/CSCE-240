/* Copyright 2020 CSCE240 */
#ifndef INC_STACK_H_
#define INC_STACK_H_


#include <string>
#include <vector>


namespace csce240 {

class Stack : public std::vector<std::string> {
 public:
  virtual ~Stack() { /* empty */ }
  bool Empty() const;

  void Push(const std::string& value);

  virtual const std::string Pop();

  const std::string Top() const;
};

class UndoStack : public Stack {
 public:
  const std::string Pop();

  bool Undo();

 private:
  std::vector<std::string> undo_stack_;
};

}  // namespace csce240

#endif  // INC_STACK_H_
