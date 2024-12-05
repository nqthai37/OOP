#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Shape.h"


int main()
{
    string color;
    double radius;
    cout << "Enter color of circle: ";
    cin >> color;
    cout << "Enter radius: ";
    cin >> radius;
    Circle c1(color, radius);

    double width, height;
    cout << "Enter color of rectangle: ";
    cin >> color;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;
    Rectangle r1(color, width, height);

    cout << "Color of circle: " << c1.getColor() << endl;
    cout << "Area of circle: " << c1.calculateArea() << endl;
    cout << "Perimeter of circle: " << c1.calculatePerimeter() << endl;

    cout << "Color of rectangle: " << r1.getColor() << endl;
    cout << "Area of rectangle: " << r1.calculateArea() << endl;
    cout << "Perimeter of rectangle: " << r1.calculatePerimeter() << endl;

    return 0;
}
