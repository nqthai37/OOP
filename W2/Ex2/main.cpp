#include "SoNguyenLon.h"

SoNguyenLon* SoNguyenLon::MAX = nullptr;

int main() {
    SoNguyenLon snl1;
    SoNguyenLon snl2(1234567);
    SoNguyenLon snl3(3, 14);
    SoNguyenLon snl4(9, 20);
    SoNguyenLon snl5 = snl3 - snl2;
    SoNguyenLon snl6 = 45678910 - snl2;
    SoNguyenLon snl7 = snl4 - snl3 + 123456789;
    cout << snl1 << endl << snl2 << endl << snl3 << endl;
    cout << snl4 << endl << snl5 << endl << snl6 << endl;
    cout << snl7 << endl << endl;
    cout << "SoNguyenLon Max:" << endl;
    cout << SoNguyenLon::SNLMax() << endl;
    return 0;
}