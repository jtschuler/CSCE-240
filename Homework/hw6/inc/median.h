// Copyright 2020 Jadon T Schuler

/* This child of the Statistic class should be a concrete class---that is, it
 * should implement both Collect and Calculate methods from the parent class
 * Statistic. I will let you decide how to implement those methods.
 *
 * The Calculate method should return the median of data gathered by the Collect
 * method. You are free to implement both methods by any means you choose.
 */

#ifndef INC_MEDIAN_H_
#define INC_MEDIAN_H_


#include <inc/statistic.h>
#include <vector>


namespace csce240 {


class Median : public Statistic {
 public:
  Median();

  // Copy constructor
  Median(const Median& other);

  // Assignment operator
  const Median& operator=(const Median& other);

  // Grows the array
  void Grow();


  /* Collects a datum into some collection (decided by you).
   */
  void Collect(double datum);


  /* Calculates and returns the median of the data collected by the Collect
   * method.
   */
  double Calculate() const;

 private:
  std::vector<double> data_;
};

}  // namespace csce240


#endif  // INC_MEDIAN_H_
