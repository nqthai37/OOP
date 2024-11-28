#ifndef EX1_H
#define EX1_H

#include <iostream>
#include <cmath>

using namespace std;
class PS1 {
private:
    int tu, mau;
public:
    PS1();
    PS1(int tu, int mau);
    int getTu() const;
    int getMau() const;
    void setTu(int tu);
    void setMau(int mau);
    PS1 operator+(PS1 b);
    void toiGian();
    friend istream& operator>>(istream& is, PS1& a);
    friend ostream& operator<<(ostream& os, const PS1& a);
};

// #include "PS1.cpp"

#endif // EX1_H