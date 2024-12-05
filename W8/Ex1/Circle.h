#pragma once
#include "Shape.h"

class Circle : public Shape {
private:
    double radius;
public:
    Circle();
    Circle(string color, double radius);
    double getRadius();
    void setRadius(double radius);

    double calculateArea();
    double calculatePerimeter();
};

#include "Circle.cpp"