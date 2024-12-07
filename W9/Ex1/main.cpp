#include "Mang.h"
#include "Hocsinh.h"


int main()
{
    int a1[] = {10, 2, 13, 24};
    string s1[] = {"Kim  Tan", "Bi  Rain", "Le  Roi", "Tran  Trang"};
    int n1 = 4;
    // Mang<int> mi;
    // Mang<string> ms;
    Mang<Hocsinh> mhs;
    mhs.nhap();
    // mi.nhap();
    // ms.nhap();
    mhs.ghifile("hocsinh.txt");
    mhs.sort();
    // ms.sort();
    // mi.sort();
    // ms.xuat();
    // mi.xuat();
    mhs.xuat();
    // int kq = ms.timkiem(string("Teo"));
    // if (kq >= 0)
    //     cout << "Tim  thay  Teo  o  vi  tri  " << kq << endl;
    // else
    //     cout << "Khong tim thay Teo" << endl;
    return 0;
}