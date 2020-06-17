/* This child of the Statistic class should be a concrete class---that is, it
 * should implement both Collect and Calculate methods from the parent class
 * Statistic. I will let you decide how to implement those methods.
 *
 * The Calculate method should return the mean of data gathered by the Collect
 * method. You are free to implement both methods by any means (pun not
 * intended) you choose.
 */


class Mean {
 public:
  /* Default constructor (you may delete if not required).
   */
  Mean();


  /* Destructor (you may delete if not required).
   */
  ~Mean();


  /* Stores data (datum) such than an average may be calculated.
   * - NOTE: You do not necessarily need to store each datum.
   */
  void Collect(double datum);


  /* Returns the mean of the data from the Collect method.
   */
  double Calculate() const;
};
