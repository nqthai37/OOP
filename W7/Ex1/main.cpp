#include "Ex1.h"

int main()
{
    PS1 a, b;
    cout << "Nhap phan so 1: ";
    cin >> a;
    cout << "Nhap phan so 2: ";
    cin >> b;
    cout << "Phan so 1: " << a << endl;
    cout << "Phan so 2: " << b << endl;
    cout << "Tong 2 phan so: " << a + b << endl;
    PS2 c, d;
    cout << "Nhap phan so 3: ";
    cin >> c;
    cout << "Nhap phan so 4: ";
    cin >> d;
    cout << "Phan so 3: " << c << endl;
    cout << "Phan so 4: " << d << endl;
    cout << "Hieu 2 phan so: " << c - d << endl;
    cout << "Tich 2 phan so: " << c * d << endl;
    cout << "Thuong 2 phan so: " << c / d << endl;
    if (c == d)
        cout << "c==d" << endl;
    if (c != d)
        cout << "c!=d" << endl;
    if (c > d)
        cout << "c>d" << endl;
    if (c < d)
        cout << "c<d" << endl;
    if (c >= d)
        cout << "c>=d" << endl;
    if (c <= d)
        cout << "c<=d" << endl;

    return 0;
}