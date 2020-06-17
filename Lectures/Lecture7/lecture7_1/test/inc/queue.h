/* Copyright 2020 CSCE 240 */


#include <inc/queue.h>

#include <cstddef>
//using size_t
#include <iostream>
#include <list>
#include <ostream>
#include <string>

const std::list<std::string>& LoadList(std::list<std::string>* list);

const csce240::Queue& LoadQueue(csce240::Queue* q);

std::ostream& operator<<(std::ostream& lhs, const std::list<std::string>& rhs);

const std::string& EmptyQueue(csce240::Queue* from, std::string* into);

const std::string kVideos[] = {
  "The Office", "Better Things", "Nailed It", "The Boys"
};
