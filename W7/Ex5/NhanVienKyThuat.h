#pragma once
#include "NhanVien.h"

class NhanVienKyThuat : public NhanVien
{
private:
    string CCNganh;
    int SangTao;
public:
    NhanVienKyThuat();
    NhanVienKyThuat(string name, string address, string Nganh, int SoNamKinhNghiem);
    bool LaNhanVienXuatSac() const;
};
#include "NhanVienKyThuat.cpp"