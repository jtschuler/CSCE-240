/* Copyright 2020 CSCE240
 */

#include <test/inc/stack.h>

using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::string;
using std::vector;

using csce240::Stack;
using csce240::UndoStack;


const vector<string>& LoadVector(vector<string>* vector) {
  const string *end = kVideos + sizeof(kVideos) / sizeof(string);

  for (const string *itr = kVideos; itr != end; ++itr)
    vector->push_back(*itr);

  return *vector;
}

const Stack& LoadStack(Stack* s) {
  const string *end = kVideos + sizeof(kVideos) / sizeof(string);

  for (const string *itr = kVideos; itr != end; ++itr)
    s->Push(*itr);

  return *s;
}

const string& EmptyStack(Stack* from, string* into) {
  if (from->Empty())
    return *into;

  *into += from->Pop();
  while (!from->Empty())
    *into += ", " + from->Pop();
  return *into;
}

ostream& operator<<(ostream& lhs, const vector<string>& rhs) {
  for (auto it = rhs.begin(); it != rhs.end(); ++it)
    lhs << *it << ' ';
  return lhs;
}

int main(int argc, char* argv[]) {
  Stack stack;
  string stack_holder;

  stack = LoadStack(&stack);
  cout << "Test Stack: " << EmptyStack(&stack, &stack_holder) << endl;

  Stack *u_stack = new UndoStack();
  *u_stack = LoadStack(u_stack);
  stack_holder = "";
  cout << "Test UndoStack: " << EmptyStack(u_stack, &stack_holder) << endl;

  stack_holder = "";
  cout << "Test UndoStack: " << EmptyStack(u_stack, &stack_holder) << endl;

  while(dynamic_cast<UndoStack *>(u_stack)->Undo());

  stack_holder = "";
  cout << "Test UndoStack: " << EmptyStack(u_stack, &stack_holder) << endl;

  delete u_stack;
  return 0;
}
