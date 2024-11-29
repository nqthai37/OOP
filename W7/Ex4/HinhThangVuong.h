#pragma once
#include "QuanLyHinhHocPhang.h"

class HinhThangVuong : public HinhHocPhang
{
private:
    float a, b, h;
public:
    HinhThangVuong();
    HinhThangVuong(float a, float b, float h);
    double DienTich() override;
    double ChuVi() override;
};
