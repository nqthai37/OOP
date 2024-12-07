#include "Hocsinh.h"

Hocsinh::Hocsinh()
{
    strcpy(hoten, "");
    tuoi = 0;
    dtb = 0;
}

Hocsinh::Hocsinh(char hoten1[], int tuoi, float dtb)
{
    strcpy(hoten, hoten1);
    this->tuoi = tuoi;
    this->dtb = dtb;
}

ostream &operator<<(ostream &os, Hocsinh &r)
{
    os << r.hoten << " " << r.tuoi << " " << r.dtb << endl;
    return os;
}

istream &operator>>(istream &is, Hocsinh &r)
{ is.ignore();
    cout << "Nhap ho ten: ";
    is.getline(r.hoten, 55);
    cout << "Nhap tuoi: ";
    is >> r.tuoi;
    cout << "Nhap diem trung binh: ";
    is >> r.dtb;
   
    return is;
}

bool Hocsinh::operator>(Hocsinh &r)
{
    return dtb > r.dtb;
}

bool Hocsinh::operator<(const Hocsinh &r)
{
    return dtb < r.dtb;
}



