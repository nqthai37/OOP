#include "SinhVien.h"

NgayThang::NgayThang(int d, int m, int y)
{
    ngay = d;
    thang = m;
    nam = y;
}

SinhVien::SinhVien()
{
    MSSV = "";
    hoTen = "";
    ngaySinh = "";
    diemLT = 0;
    diemTH = 0;
}
SinhVien::SinhVien(string m)
{
    MSSV = m;
    hoTen = "";
    ngaySinh = "";
    diemLT = 0;
    diemTH = 0;
}

SinhVien::SinhVien(string m, string h, float lt, float th)
{
    MSSV = m;
    hoTen = h;
    ngaySinh = "";
    diemLT = lt;
    diemTH = th;
}

SinhVien::SinhVien(string m, string h, float lt, float th, int dd, int mm, int yy)
{
    MSSV = m;
    hoTen = h;
    ngaySinh = to_string(dd) + "/" + to_string(mm) + "/" + to_string(yy);
    diemLT = lt;
    diemTH = th;
}

SinhVien::SinhVien(string m, string h, float lt, float th, NgayThang ns)
{
    MSSV = m;
    hoTen = h;
    ngaySinh = to_string(ns.ngay) + "/" + to_string(ns.thang) + "/" + to_string(ns.nam);
    diemLT = lt;
    diemTH = th;
}

SinhVien::SinhVien(SinhVien& sv)
{
    MSSV = sv.MSSV;
    hoTen = sv.hoTen;
    ngaySinh = sv.ngaySinh;
    diemLT = sv.diemLT;
    diemTH = sv.diemTH;
}

void SinhVien::Xuat()
{
    cout << "MSSV: " << MSSV << endl;
    cout << "Ho Ten: " << hoTen << endl;
    cout << "Ngay sinh: " << ngaySinh << endl;
    cout << "Diem LT: " << diemLT << endl;
    cout << "Diem TH: " << diemTH << endl;
}