#pragma once

#include <iostream>

using namespace std;

class Shape {
private:
    string color;
public:
    Shape();
    Shape(string color);
    string getColor();
    void setColor(string color);

    virtual double calculateArea() = 0;
    virtual double calculatePerimeter() = 0;
};

#include "Shape.cpp"