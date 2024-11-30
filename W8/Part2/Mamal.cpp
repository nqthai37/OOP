#include "Mamal.h"

Mamal::Mamal() : itsAge(1)
{
    cout << "Mamal constructor..." << endl;
}

Mamal::~Mamal()
{
    cout << "Mamal destructor..." << endl;
}

void Mamal::move() const
{
    cout << "Mamal moves a step!" << endl;
}

void Mamal::speak() const
{
    cout << "What does a mamal speak? Mamalian!" << endl;
    
}
