// Copyright 2025 Alexey Gromov
#ifndef INCLUDE_CIRCLE_H_
#define INCLUDE_CIRCLE_H_
#include <cstdint>

class Circle {
 private:
    double radius;
    double ference;
    double area;
    const double PI = 3.14159265359;

 public:
    explicit Circle(double r = 0.0);

    void setRadius(double r);
    void setFerence(double f);
    void setArea(double a);

    double getRadius() const;
    double getFerence() const;
    double getArea() const;
};

#endif  // INCLUDE_CIRCLE_H_
