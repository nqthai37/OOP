#include "GenieaPig.h"

GenieaPig::GenieaPig()
{
    cout << "GenieaPig constructor..." << endl;
}

GenieaPig::~GenieaPig()
{
    cout << "GenieaPig destructor..." << endl;
}


void GenieaPig::move() const
{
    cout << "GenieaPig moves a step!" << endl;
}


void GenieaPig::speak() const
{
    cout << "What does the Geniea Pig speak? Wheep WHEEP!" << endl;
}
