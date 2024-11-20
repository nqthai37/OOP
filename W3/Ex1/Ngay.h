#pragma once
#include <iostream>
using namespace std;

class Ngay
{
private:
    int dd, mm, yy;
    bool isLeap();
public:
    Ngay();
    Ngay(int dd, int mm, int yy);
    Ngay(int dd);
    ~Ngay();
    Ngay operator+(int x);
    Ngay operator+(Ngay n);
    Ngay operator-(Ngay n);
    Ngay operator-(int x);
    friend Ngay operator+(int x, Ngay n);
    friend Ngay operator-(int x, Ngay n);
    friend ostream& operator<<(ostream& os, Ngay n);
    friend bool operator>(Ngay n1, Ngay n2);
};
