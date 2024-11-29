#include "NhanVienThuKy.h"

NhanVienThuKy::NhanVienThuKy()
{
    name = "";
    address = "";
    CC = "";
    BaoCao = 0;
}

NhanVienThuKy::NhanVienThuKy(string name, string address, string ChungChi, int BaoCao)
{
    this->name = name;
    this->address = address;
    this->CC = ChungChi;
    this->BaoCao = BaoCao;
}

bool NhanVienThuKy::LaNhanVienXuatSac() const
{
    return BaoCao > 11;
}



