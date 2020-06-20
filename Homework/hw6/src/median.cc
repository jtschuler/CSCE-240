// Copyright 2020 Jadon T Schuler


#include <inc/median.h>
#include <algorithm>

namespace csce240 {

Median::Median() { /* empty */ }

Median::Median(const Median& other) {
  for (size_t i = 0; i < other.data_.size(); ++i)
    data_.push_back(other.data_[i]);
}

const Median& Median::operator=(const Median& other) {
  if (this == &other)
    return *this;

  if (data_.size() > 0)
    data_.clear();

  for (size_t i = 0; i < other.data_.size(); ++i)
    data_.push_back(other.data_[i]);

  return *this;
}

void Median::Collect(double datum) {
  data_.push_back(datum);
  std::sort(data_.begin(), data_.end());
}

double Median::Calculate() const {
  if (data_.size() == 0)
    return 0;

  int median_loc = data_.size() / 2;
  if (data_.size() % 2 == 1)
    return data_[median_loc];
  else
    return (data_[median_loc] + data_[median_loc - 1]) / 2;
}

}  // namespace csce240
