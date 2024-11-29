#pragma once
#include "QuanLyHinhHocPhang.h"

class HinhTamGiac : public HinhHocPhang
{
private:
    float a, b, c;
public:
    HinhTamGiac();
    HinhTamGiac(float a, float b, float c);
    double DienTich() override;
    double ChuVi() override;
};
