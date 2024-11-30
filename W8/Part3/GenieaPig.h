#pragma once

#include "../Part2/Mamal.h"

class GenieaPig : public Mamal
{
    public:
        GenieaPig();
        ~GenieaPig();
        void move() const override;
        void speak() const override;
};

#include "GenieaPig.cpp"