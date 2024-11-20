#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class ThoiGian
{
    private:
        int hour, minute, second;
    public:
        ThoiGian();
        ThoiGian(int h, int m, int s);
        ThoiGian(int m, int s);
        ThoiGian(int s);
        void Xuat();
};