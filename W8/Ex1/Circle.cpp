#include "Circle.h"

Circle::Circle() : Shape() {
    radius = 1.0;
}

Circle::Circle(string color, double radius) : Shape(color) {
    this->radius = radius;
}

double Circle::getRadius() {
    return radius;
}

void Circle::setRadius(double radius) {
    this->radius = radius;
}

double Circle::calculateArea() {
    return 3.14159 * radius * radius;
}

double Circle::calculatePerimeter() {
    return 2 * 3.14159 * radius;
}