/* calc_wind_chill Copyright 2020 CSCE
 *
 * Wind chill is defined as
 * w = 33 - [(10(v)^0.5 - v + 10.5)(33 - t)]/23.1
 * Where v is wind speed in m/sec,
 * t is temp in Celsius, s.t. t <= 10.0.
 *
 * Write a function with id CalcWindChill. It should accept two double
 * parameters vel and temp and return a double value representing the wind
 * chill. When temp is greater than 10.0, return temp.
 */


#include <cmath>
// using pow
#include <iostream>
using std::cout;
using std::endl;


double CalcWindChill(double velocity, double temperature) {
  if (temperature > 10.0) {
    return temperature;
  }
  return 33 - ((10 * pow(velocity, 0.5) - velocity + 10.5) * (33 - temperature))
    / 23.1;
}

int main(int argc, char* argv[]) {
  cout << "Wind chill is " << CalcWindChill(2.0, 4.7) << endl;
  return 0;
}
