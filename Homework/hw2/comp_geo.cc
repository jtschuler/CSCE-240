/* Copyright 2020 Jadon T Schuler
 */

#include <comp_geo.h>
#include <cmath>
// using pow
#include <iostream>
using std::cout;
using std::endl;


double CalcCircumference(
    double x_center, double y_center, double x_boundary, double y_boundary) {
  double radius =
      CalcDistance(x_center, y_center, x_boundary, y_boundary);

  return radius * 2.0 * k_pi;
}

double CalcCircleArea(
    double x_center, double y_center, double x_boundary, double y_boundary) {
  double radius =
      CalcDistance(x_center, y_center, x_boundary, y_boundary);

  return pow(radius, 2) * k_pi;
}

double CalcPerimeter(double x_ll, double y_ll, double x_ur, double y_ur) {
  double x_dist = x_ur - x_ll;
  double y_dist = y_ur - y_ll;

  return 2 * (x_dist + y_dist);
}

double CalcRectangleArea(double x_ll, double y_ll, double x_ur, double y_ur) {
  double x_dist = x_ur - x_ll;
  double y_dist = y_ur - y_ll;

  return x_dist * y_dist;
}

double CalcDistanceSquared(double x_1, double y_1, double x_2, double y_2) {
  double y_diff = y_2 - y_1;
  double x_diff = x_2 - x_1;

  return pow(y_diff, 2) + pow(x_diff, 2);
}

double CalcDistance(double x_1, double y_1, double x_2, double y_2) {
  double squared_dist = CalcDistanceSquared(x_1, y_1, x_2, y_2);

  return pow(squared_dist, 0.5);
}

bool PointsEqual(double x_1, double y_1, double x_2, double y_2) {
  const double kThreshold = 0.00001;

  double y_diff = y_2 - y_1;
  double x_diff = x_2 - x_1;

  if (y_diff < kThreshold && x_diff < kThreshold)
    return true;
  return false;
}
