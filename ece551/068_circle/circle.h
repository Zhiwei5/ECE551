#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include "point.h"

class Circle
{
  Point center;
  const double radius;

 public:
  Circle(const Point & p, double r);
  void move(double dx, double dy);
  double intersectionArea(const Circle & otherCircle);
  ~Circle() {}
};

#endif
