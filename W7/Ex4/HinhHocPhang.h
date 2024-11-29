#pragma once
#include "QuanLyHinhHocPhang.h"

class HinhHocPhang {
public:
    virtual double DienTich() = 0;
    virtual double ChuVi() = 0;
};

#include "HinhChuNhat.h"
#include "HinhTamGiac.h"
#include "HinhTron.h"
#include "HinhThangVuong.h"