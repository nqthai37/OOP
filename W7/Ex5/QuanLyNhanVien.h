#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "NhanVien.h"
using namespace std;

class CongTy
{
private:
    vector<NhanVien*> danhSachNV;
public:
    CongTy();
    ~CongTy();
    void ThemNhanVien(NhanVien* nv);
    void DanhSachNV(ostream& os) const;
    void DanhSachNVXuatSac(ostream& os) const;
};

#include "QuanLyNhanVien.cpp"