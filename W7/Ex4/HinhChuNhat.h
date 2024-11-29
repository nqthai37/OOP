#pragma once
#include "QuanLyHinhHocPhang.h"

class HinhChuNhat : public HinhHocPhang
{
private:
    float a, b;
public:
    HinhChuNhat();
    HinhChuNhat(float a, float b);
    double DienTich() override;
    double ChuVi() override;
};
