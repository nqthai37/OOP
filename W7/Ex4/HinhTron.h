#pragma once
#include "QuanLyHinhHocPhang.h"

class HinhTron : public HinhHocPhang
{
private:
    float r;
public:
    HinhTron();
    HinhTron(float r);
    double DienTich() override;
    double ChuVi() override;
};
