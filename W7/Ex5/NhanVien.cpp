#include "NhanVien.h"

NhanVien::NhanVien()
{
    name = "";
    address = "";
}

NhanVien::NhanVien(string name, string address)
{
    this->name = name;
    this->address = address;
}

#include "NhanVienThuKy.h"
#include "NhanVienKyThuat.h"