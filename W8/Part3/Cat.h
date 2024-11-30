#pragma once

#include "../Part2/Mamal.h"

class Cat : public Mamal
{
    public:
        Cat();
        ~Cat();
        void move() const override;
        void speak() const override;
};

#include "Cat.cpp"