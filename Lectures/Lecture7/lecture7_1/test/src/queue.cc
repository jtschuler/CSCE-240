/* Copyright 2020 CSCE 240 */

#include <test/inc/queue.h>
using std::cout;
using std::cin;
using std::endl;
using std::list;
using std::string;
using std::ostream;

using csce240::Queue;

const string& EmptyQueue(Queue* from, string* into) {
  while (!from->Empty())
    *into += from->Pop() + ' ';
  return *into;
}

ostream& operator<<(ostream& lhs, const list<string>& rhs) {
  for (auto it = rhs.begin(); it != rhs.end(); ++it)
    lhs << *it << ' ';
  return lhs;
}

const list<string>& LoadList(list<string>* list) {
  const string *end = kVideos + sizeof(kVideos) / sizeof(string);

  for (const string *itr = kVideos; itr != end; ++itr)
    list->push_back(*itr);

  return *list;
}

const Queue& LoadQueue(Queue* q) {
  const string *end = kVideos + sizeof(kVideos) / sizeof(string);

  for (const string *itr = kVideos; itr != end; ++itr)
    q->Push(*itr);

  return *q;
}

int main(int argc, char* argv[]) {
  Queue q;
  list<string> str_list;

  //cout << "list: " << LoadList(&str_list) << endl;

  LoadQueue(&q);
  string q_holder;
  cout << "Test Queue:" << EmptyQueue(&q, &q_holder) << endl;

  return 0;
}
