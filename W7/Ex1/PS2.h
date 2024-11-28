#pragma once

#include "PS1.h"


class PS2 : public PS1 {
private:
    int sign;
public:
    PS2();
    PS2(int tu, int mau, int sign);
    int getSign() const;
    void setSign(int sign);
    PS2 operator-(PS2 b);
    PS2 operator*(PS2 b);
    PS2 operator/(PS2 b);
    bool operator==(PS2 b);
    bool operator!=(PS2 b);
    bool operator>(PS2 b);
    bool operator<(PS2 b);
    bool operator>=(PS2 b);
    bool operator<=(PS2 b);
    PS2 operator++();
    PS2 operator--();
    PS2 operator++(int);
    PS2 operator--(int);
    friend istream& operator>>(istream& is, PS2& a);
    friend ostream& operator<<(ostream& os, const PS2& a);

};
// #include "PS2.h"