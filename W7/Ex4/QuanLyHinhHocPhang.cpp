#include "QuanLyHinhHocPhang.h"

QuanLyHinhHocPhang::QuanLyHinhHocPhang() {}

QuanLyHinhHocPhang::~QuanLyHinhHocPhang() {
    for (HinhHocPhang* hinh : danhSachHinh) {
        delete hinh;
    }
}

void QuanLyHinhHocPhang::AddHinh(HinhHocPhang* hinh) {
    danhSachHinh.push_back(hinh);
}

double QuanLyHinhHocPhang::TongDienTich() const {
    double tongDienTich = 0;
    for (HinhHocPhang* hinh : danhSachHinh) {
        tongDienTich += hinh->DienTich();
    }
    return tongDienTich;
}

double QuanLyHinhHocPhang::TongChuVi() const {
    double tongChuVi = 0;
    for (HinhHocPhang* hinh : danhSachHinh) {
        tongChuVi += hinh->ChuVi();
    }
    return tongChuVi;
}