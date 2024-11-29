#pragma once
#include "NhanVien.h"

class NhanVienThuKy : public NhanVien
{
private:
    string CC;
    int BaoCao;
public:
    NhanVienThuKy();
    NhanVienThuKy(string name, string address, string ChungChi, int BaoCao);
    bool LaNhanVienXuatSac() const;
};

#include "NhanVienThuKy.cpp"