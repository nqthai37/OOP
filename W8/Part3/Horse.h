#pragma once

#include "../Part2/Mamal.h"

class Horse : public Mamal
{
    public:
        Horse();
        ~Horse();
        void move() const override;
        void speak() const override;
};

#include "Horse.cpp"