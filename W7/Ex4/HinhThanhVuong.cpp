#include "HinhThangVuong.h"

HinhThangVuong::HinhThangVuong()
{
    a = 0;
    b = 0;
    h = 0;
}

HinhThangVuong::HinhThangVuong(float a, float b, float h)
{
    this->a = a;
    this->b = b;
    this->h = h;
}

double HinhThangVuong::DienTich()
{
    return h * (a + b) / 2;
}

double HinhThangVuong::ChuVi()
{
    return a + b + h + sqrt((a - b) * (a - b) + h * h);
}