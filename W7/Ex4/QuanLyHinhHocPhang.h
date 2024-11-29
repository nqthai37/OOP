#pragma once
#include <vector>
#include <iostream>
#include <cmath>
#include "HinhHocPhang.h"
using namespace std;
class QuanLyHinhHocPhang {
private:
    vector<HinhHocPhang*> danhSachHinh;
public:

    QuanLyHinhHocPhang();
    virtual ~QuanLyHinhHocPhang();
    virtual void AddHinh(HinhHocPhang* hinh);
    double TongDienTich() const;
    double TongChuVi() const;

};
