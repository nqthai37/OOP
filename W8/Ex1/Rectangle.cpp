#include "Rectangle.h"

Rectangle::Rectangle() : Shape() {
    width = 1.0;
    height = 1.0;
}

Rectangle::Rectangle(string color, double width, double height) : Shape(color) {
    this->width = width;
    this->height = height;
}

double Rectangle::getWidth() {
    return width;
}

void Rectangle::setWidth(double width) {
    this->width = width;
}

double Rectangle::getHeight() {
    return height;
}

void Rectangle::setHeight(double height) {
    this->height = height;
}

double Rectangle::calculateArea() {
    return width * height;
}

double Rectangle::calculatePerimeter() {
    return 2 * (width + height);
}
