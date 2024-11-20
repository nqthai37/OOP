#include "HocSinh.h"

int HocSinh::ID = 1363001;
HocSinh* HocSinh::TBmax = nullptr;
int main()
{
    HocSinh hs1;
    hs1.DatHoTen("Nguyen Van A");
    hs1.GanDiem(7, 8, 10);
    HocSinh hs2("Tran Thi B", 5, 8, 4.5);
    HocSinh hs3("Hoang Thi C", -9.5, 8.5, 4.5);
    HocSinh hs4("Le Van D", 7.5, 9, -10);

    cout << hs1 << endl << hs2 << endl << hs3 << endl << hs4 << endl << endl;

    cout << "Hoc sinh co diem trung binh cao nhat: " << endl;
    cout << HocSinh::HSDiemTBCaoNhat() << endl;
    return 0;
}