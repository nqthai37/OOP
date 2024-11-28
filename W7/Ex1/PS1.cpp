#include "PS1.h"

PS1::PS1()
{
    tu = 0;
    mau = 1;
}

PS1::PS1(int tu, int mau)
{
    this->tu = tu;
    while (mau == 0)
    {
        cout << "Nhap mau so khac 0: ";
        cin >> mau;
    }
    this->mau = mau;
}

int PS1::getTu() const
{
    return tu;
}

int PS1::getMau() const
{
    return mau;
}

void PS1::setTu(int tu)
{
    this->tu = tu;
}

void PS1::setMau(int mau)
{
    while (mau == 0)
    {
        cout << "Nhap mau so khac 0: ";
        cin >> mau;
    }
    this->mau = mau;
}

PS1 PS1::operator+(PS1 b)
{
    PS1 c;
    c.tu = tu * b.mau + b.tu * mau;
    c.mau = mau * b.mau;
    c.toiGian();
    return c;
}
int GDC(int a, int b)
{
    if (a == 0 || b == 0)
        return a + b;
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}
void PS1::toiGian()
{
    int ucln = GDC(tu, mau);
    tu /= ucln;
    mau /= ucln;
}

istream& operator>>(istream& is, PS1& a)
{
    int tu, mau;
    cout << "Nhap tu so: ";
    is >> tu;
    cout << "Nhap mau so: ";
    is >> mau;
    while (mau == 0)
    {
        cout << "Nhap mau so khac 0: ";
        is >> mau;
    }
    a.setTu(tu);
    a.setMau(mau);
    return is;
}

ostream& operator<<(ostream& os, const PS1& a)
{
    if (a.mau == 1)
        os << a.tu;
    else
        os << a.tu << "/" << a.mau;
    return os;
}
