#include "Horse.h"

Horse::Horse()
{
    cout << "Horse constructor..." << endl;
}

Horse::~Horse()
{
    cout << "Horse destructor..." << endl;
}


void Horse::move() const
{
    cout << "Horse moves a step!" << endl;
}


void Horse::speak() const
{
    cout << "What does the Horse speak? Ney!" << endl;
}
