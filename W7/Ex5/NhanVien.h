#pragma once

#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
protected:
    string name, address;
public:
    NhanVien();
    NhanVien(string name, string address);
    virtual bool LaNhanVienXuatSac() const = 0;
    string GetName() const { return name; }
    string GetAddress() const { return address; }
};
#include "NhanVien.cpp"