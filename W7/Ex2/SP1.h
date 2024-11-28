
#pragma once
#include <iostream>
using namespace std;

class SP1
{
private:
    float real, img;
public:
    SP1(float r = 0, float i = 0) : real(r), img(i) {}
    float getReal();
    float getImg();
    void setReal(float real);
    void setImg(float img);
    friend istream& operator >> (istream& is, SP1& sp);
    friend ostream& operator << (ostream& os, SP1 sp);
};

class SP2 : public SP1
{
public:
    SP2(float r = 0, float i = 0) : SP1(r, i) {}
    SP2 operator =(SP2 sp);
    SP2 operator - (SP2 sp);
    SP2 operator * (SP2 sp);
    SP2 operator / (SP2 sp);
    bool operator == (SP2 sp);
    bool operator != (SP2 sp);
    bool operator > (SP2 sp);
    bool operator >= (SP2 sp);
    bool operator < (SP2 sp);
    bool operator <= (SP2 sp);
    SP2 operator ++ ();
    SP2 operator -- ();
    SP2 operator ++ (int);
    SP2 operator -- (int);
    friend istream& operator >> (istream& is, SP2& sp);
    friend ostream& operator << (ostream& os, SP2 sp);
};