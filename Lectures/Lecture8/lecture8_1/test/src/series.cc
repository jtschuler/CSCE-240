/* Copyright 2019 */

#include <test/inc/series.h>
using csce240::Queue;
using csce240::Series;
using csce240::Stack;
using std::cout;
using std::endl;
using std::string;



const Series& LoadSeries(Series* series) {
  const size_t *end = kIndices + sizeof(kIndices) / sizeof(size_t);

  for (const size_t *itr = kIndices; itr != end; ++itr)
    series->Push(*itr);

  return *series;
}


int main(int argc, char* argv[]) {
  Series *series;

  series = new Queue();
  LoadSeries(series);
  cout << *series << endl;
  delete series;

  series = new Stack();
  LoadSeries(series);
  cout << *series << endl;
  delete series;

  return 0;
}
