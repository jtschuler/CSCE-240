/* Copyright 2020 CSCE 240
 */


#include <inc/queue.h>

#include <cstddef>
//using size_t
#include <iostream>
#include <list>
#include <ostream>
#include <string>

const std::list<size_t>& LoadList(std::list<size_t>* list);

const csce240::Queue& LoadQueue(csce240::Queue* q);

std::ostream& operator<<(std::ostream& lhs, const std::list<size_t>& rhs);

const std::string& EmptyQueue(csce240::Queue* from, std::string* into);

const size_t kIndices[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 8 , 9
};
