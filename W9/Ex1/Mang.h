#pragma once
#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm>
using namespace std;
template <typename T>
class Mang
{
public:
    Mang();
    Mang(T *data, int n);
    ~Mang();
    void sort();
    int timkiem(const T &key) const;
    void ghifile(const char *tenfile);
    void docfile(const char *tenfile);
    int timmax() const;
    int timmin() const;
    void xuat() const;
    void nhap();
    bool ktRong() const;

private:
    T *data;
    int n;
};

#include "Mang.cpp"