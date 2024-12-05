#include "Shape.h"


Shape::Shape() {
    color = "black";
}

Shape::Shape(string color) {
    this->color = color;
}

string Shape::getColor() {
    return color;
}

void Shape::setColor(string color) {
    this->color = color;
}



