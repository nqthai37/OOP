#pragma once
#include <iostream>

using namespace std;

class MangSoNguyen
{
private:
    int* a;
    int n;
public:
    MangSoNguyen();
    MangSoNguyen(int);
    MangSoNguyen(int*, int);
    MangSoNguyen(MangSoNguyen&);
    void Xuat();
    ~MangSoNguyen();
};