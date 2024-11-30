#include "Cat.h"

Cat::Cat()
{
    cout << "Cat constructor..." << endl;
}

Cat::~Cat()
{
    cout << "Cat destructor..." << endl;
}


void Cat::move() const
{
    cout << "Cat moves a step!" << endl;
}


void Cat::speak() const
{
    cout << "What does the Cat speak? Meow!" << endl;
}
