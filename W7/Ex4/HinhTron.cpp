#include "HinhTron.h"

HinhTron::HinhTron()
{
    r = 0;
}

HinhTron::HinhTron(float r)
{
    this->r = r;
}

double HinhTron::DienTich()
{
    return 3.14 * r * r;
}

double HinhTron::ChuVi()
{
    return 2 * 3.14 * r;
}