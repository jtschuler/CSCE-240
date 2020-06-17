/* Copyright 2020 CSCE240
 */

#include <test/inc/stack.h>

using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::string;
using std::to_string;
using std::vector;

using csce240::Stack;


const vector<size_t>& LoadVector(vector<size_t>* vector) {
  const size_t *end = kIndices + sizeof(kIndices) / sizeof(size_t);

  for (const size_t *itr = kIndices; itr != end; ++itr)
    vector->push_back(*itr);

  return *vector;
}

const Stack& LoadStack(Stack* s) {
  const size_t *end = kIndices + sizeof(kIndices) / sizeof(size_t);

  for (const size_t *itr = kIndices; itr != end; ++itr)
    s->Push(*itr);

  return *s;
}

const string& EmptyStack(Stack* from, string* into) {
  if (from->Empty())
    return *into;

  *into += to_string(from->Pop());
  while (!from->Empty())
    *into += ", " + to_string(from->Pop());
  return *into;
}

ostream& operator<<(ostream& lhs, const vector<size_t>& rhs) {
  for (auto it = rhs.begin(); it != rhs.end(); ++it)
    lhs << *it << ' ';
  return lhs;
}

int main(int argc, char* argv[]) {
  Stack stack;
  string stack_holder;

  stack = LoadStack(&stack);
  cout << "Test Stack: " << EmptyStack(&stack, &stack_holder) << endl;

  return 0;
}
