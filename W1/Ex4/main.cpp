#include "MangSoNguyen.h"

int main()
{
    int b[] = { 1, 2, 3, 4, 5 };
    MangSoNguyen msn1;
    msn1.Xuat();
    MangSoNguyen msn2(5);
    msn2.Xuat();
    MangSoNguyen msn3(b, 5);
    msn3.Xuat();
    MangSoNguyen msn4(msn3);
    msn4.Xuat();
    return 0;
}