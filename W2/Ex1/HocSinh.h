#pragma once
#include <iostream>
using namespace std;

class HocSinh
{
private:
    string Name;
    static int ID;
    int MS;
    float x, y, z, TB;
    static HocSinh* TBmax;
public:
    HocSinh();
    HocSinh(const string&, const float&, const float&, const float&);
    void DatHoTen(const string&);
    void GanDiem(const float&, const float&, const float&);
    static HocSinh HSDiemTBCaoNhat();
    friend ostream& operator <<(ostream& os, const HocSinh& hs);
};
