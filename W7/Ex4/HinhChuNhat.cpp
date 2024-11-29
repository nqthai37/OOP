#include "HinhChuNhat.h"

HinhChuNhat::HinhChuNhat()
{
    a = 0;
    b = 0;
}

HinhChuNhat::HinhChuNhat(float a, float b)
{
    this->a = a;
    this->b = b;
}

double HinhChuNhat::DienTich()
{
    return a * b;
}

double HinhChuNhat::ChuVi()
{
    return 2 * (a + b);
}