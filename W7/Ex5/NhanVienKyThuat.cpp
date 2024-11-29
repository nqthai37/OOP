#include "NhanVienKyThuat.h"

NhanVienKyThuat::NhanVienKyThuat()
{
    name = "";
    address = "";
    CCNganh = "";
    SangTao = 0;
}

NhanVienKyThuat::NhanVienKyThuat(string name, string address, string Nganh, int SoNamKinhNghiem)
{
    this->name = name;
    this->address = address;
    this->CCNganh = Nganh;
    this->SangTao = SoNamKinhNghiem;
}

bool NhanVienKyThuat::LaNhanVienXuatSac() const
{
    return SangTao > 5;
}

    