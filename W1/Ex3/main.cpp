#include "SinhVien.h"

int main()
{
    SinhVien sv1;
    sv1.Xuat();
    SinhVien sv2("123456");
    sv2.Xuat();
    SinhVien sv3("123456", "Nguyen Van A", 7.5, 8.5);
    sv3.Xuat();
    SinhVien sv4("1234567", "Nguyen Van B", 7.5, 8.5, 1, 1, 2000);
    sv4.Xuat();
    NgayThang ns(1, 1, 2010);
    SinhVien sv5("12345267", "Nguyen Van C", 7.5, 8.5, ns);

}