/* Copyright 2020 CSCE 240
 */
#ifndef TEST_INC_TEST_STACK_H_
#define TEST_INC_TEST_STACK_H_


#include <inc/stack.h>

#include <cstddef>
//using size_t
#include <iostream>
#include <ostream>
#include <string>
#include <vector>


const std::vector<size_t>& LoadVector(std::vector<size_t>* stack);

const csce240::Stack& LoadStack(csce240::Stack* s);

std::ostream& operator<<(std::ostream& lhs,
                         const std::vector<size_t>& rhs);

const std::string& EmptyStack(csce240::Stack* from, std::string* into);

const size_t kIndices[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 8 , 9
};


#endif  // TEST_INC_TEST_STACK_H_
