/* Copyright 2020 CSCE240
 */
#ifndef TEST_INC_SERIES_H_
#define TEST_INC_SERIES_H_


#include <inc/queue.h>
#include <inc/series.h>
#include <inc/stack.h>

#include <cstddef>
//using size_t
#include <iostream>
#include <string>
#include <vector>


const csce240::Series& LoadSeries(csce240::Series* series);


const size_t kIndices[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 8 , 9
};


#endif  // TEST_INC_SERIES_H_
