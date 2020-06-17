/* Copyright 2020 CSCE 240 */

#include <test/inc/queue.h>
using std::cout;
using std::cin;
using std::endl;
using std::list;
using std::string;
using std::to_string;
using std::ostream;

using csce240::Queue;

const string& EmptyQueue(Queue* from, string* into) {
  while (!from->Empty())
    *into += to_string(from->Pop()) + ' ';
  return *into;
}

ostream& operator<<(ostream& lhs, const list<size_t>& rhs) {
  for (auto it = rhs.begin(); it != rhs.end(); ++it)
    lhs << *it << ' ';
  return lhs;
}

const list<size_t>& LoadList(list<size_t>* list) {
  const size_t *end = kIndices + sizeof(kIndices) / sizeof(size_t);

  for (const size_t *itr = kIndices; itr != end; ++itr)
    list->push_back(*itr);

  return *list;
}

const Queue& LoadQueue(Queue* q) {
  const size_t *end = kIndices + sizeof(kIndices) / sizeof(size_t);

  for (const size_t *itr = kIndices; itr != end; ++itr)
    q->Push(*itr);

  return *q;
}

int main(int argc, char* argv[]) {
  Queue q;
  string q_holder;

  cout << "list: " << LoadList(&q) << endl;

  //q = LoadQueue(&q);
  //cout << "Test Queue:" << EmptyQueue(&q, &q_holder) << endl;

  return 0;
}
