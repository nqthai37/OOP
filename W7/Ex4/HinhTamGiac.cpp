#include "HinhTamGiac.h"

HinhTamGiac::HinhTamGiac()
{
    a = 0;
    b = 0;
    c = 0;
}

HinhTamGiac::HinhTamGiac(float a, float b, float c)
{
    this->a = abs(a);
    this->b = abs(b);
    this->c = abs(c);
}

double HinhTamGiac::DienTich()
{
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double HinhTamGiac::ChuVi()
{
    return a + b + c;
}