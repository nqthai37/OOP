#pragma once

#include "Mamal.h"

class Dog : public Mamal
{
    public:
        Dog();
        ~Dog();
        void move() const;
        void speak() const;
};

#include "Dog.cpp"


