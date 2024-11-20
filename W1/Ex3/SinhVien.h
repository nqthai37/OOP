#pragma once
#include <iostream>

using namespace std;

class NgayThang
{
public:
    int  ngay, thang, nam;
    NgayThang(int, int, int);
};

class SinhVien
{
private:
    string MSSV;
    string hoTen;
    string ngaySinh;
    float diemLT, diemTH;
public:
    SinhVien();
    SinhVien(string);
    SinhVien(string, string, float, float);
    SinhVien(string, string, float, float, int, int, int);
    SinhVien(string, string, float, float, NgayThang);
    SinhVien(SinhVien&);
    void Xuat();
};