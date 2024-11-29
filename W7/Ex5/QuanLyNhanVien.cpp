#include "QuanLyNhanVien.h"

CongTy::CongTy() {}
CongTy::~CongTy() {
    for (NhanVien* nv : danhSachNV) {
        delete nv;
    }
}

void CongTy::ThemNhanVien(NhanVien* nv) {
    danhSachNV.push_back(nv);
}

void CongTy::DanhSachNV(ostream& os) const {
    for (NhanVien* nv : danhSachNV) {
        os << nv->GetName() << " - " << nv->GetAddress() << endl;
    }
}

void CongTy::DanhSachNVXuatSac(ostream& os) const {
    for (NhanVien* nv : danhSachNV) {
        if (nv->LaNhanVienXuatSac()) {
            os << nv->GetName() << " - " << nv->GetAddress() << endl;
        }
    }
}