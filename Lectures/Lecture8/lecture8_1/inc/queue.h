/* Copyright 2020 CSCE240
 */
#ifndef INC_QUEUE_H_
#define INC_QUEUE_H_


#include <inc/series.h>
#include <list>
#include <ostream>


namespace csce240 {

class Queue : public std::list<size_t> {  // isa
 public:

  Queue();

  virtual ~Queue() { /* Intentionally Empty */ }

  bool Empty() const;

  void Push(const size_t& value);

  const size_t Pop();

  const size_t Top() const;

};

}  // namespace csce240

#endif  // INC_QUEUE_H_
