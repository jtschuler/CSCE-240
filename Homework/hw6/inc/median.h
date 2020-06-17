/* This child of the Statistic class should be a concrete class---that is, it
 * should implement both Collect and Calculate methods from the parent class
 * Statistic. I will let you decide how to implement those methods.
 * 
 * The Calculate method should return the median of data gathered by the Collect
 * method. You are free to implement both methods by any means you choose.
 */


class Median {
 public:
  /* Default constructor (you may delete if unused).
   */
  Median();


  /* Destructor (you may delete if unused).
   */
  ~Median();


  /* Collects a datum into some collection (decided by you).
   */
  void Collect(double datum);


  /* Calculates and returns the median of the data collected by the Collect
   * method.
   */
  double Calculate() const;
};
