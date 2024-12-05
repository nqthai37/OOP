#pragma once
#include "Shape.h"

class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle();
    Rectangle(string color, double width, double height);
    double getWidth();
    void setWidth(double width);
    double getHeight();
    void setHeight(double height);

    double calculateArea();
    double calculatePerimeter();
};

#include "Rectangle.cpp"