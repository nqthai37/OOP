#pragma once
#include <iostream>
#include <string>
using namespace std;

class Mamal
{
    public:
        Mamal();
        ~Mamal();
        virtual void move() const;
        virtual void speak() const;

    protected:
        int itsAge;
};

#include "Mamal.cpp"
