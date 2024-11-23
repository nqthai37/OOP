#include "Ex1.h"

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

PS2::PS2()
{
    sign = 1;
}

PS2::PS2(int tu, int mau, int sign) : PS1(tu, mau)
{
    this->sign = sign;
}

int PS2::getSign() const
{
    return sign;
}

void PS2::setSign(int sign)
{
    this->sign = sign;
}

PS2 PS2::operator-(PS2 b)
{
    int tu = this->getTu(), mau = this->getMau();
    PS2 c;
    int tmp = sign * tu * b.getMau() - b.getTu() * mau * b.getSign();
    c.setTu(abs(tmp));
    c.setMau(mau * b.getMau());
    c.setSign(1 ? tmp >= 0 : -1);
    c.toiGian();
    return c;
}
PS2 PS2::operator*(PS2 b)
{
    int tu = this->getTu(), mau = this->getMau();
    PS2 c;
    c.setTu(tu * b.getTu());
    c.setMau(mau * b.getMau());
    c.setSign(sign * b.getSign());
    c.toiGian();
    return c;
}
PS2 PS2::operator/(PS2 b)
{
    int tu = this->getTu(), mau = this->getMau();
    PS2 c;
    c.setTu(tu * b.getMau());
    c.setMau(mau * b.getTu());
    c.setSign(sign * b.getSign());
    c.toiGian();
    return c;
}

istream& operator>>(istream& is, PS2& a)
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

    a.setTu(abs(tu));
    a.setMau(abs(mau));
    a.setSign(tu * mau > 0 ? 1 : -1);
    return is;
}

ostream& operator<<(ostream& os, const PS2& a)
{
    if (a.getTu() == 0)
        os << 0;
    else
        if (a.getMau() == 1)
            os << (a.getSign() == 1 ? "" : "-") << a.getTu();
        else
            os << (a.getSign() == 1 ? "" : "-") << a.getTu() << "/" << a.getMau();
    return os;
}

bool PS2::operator==(PS2 b)
{
    int tu = this->getTu(), mau = this->getMau();
    return sign * tu * b.getMau() == b.getSign() * b.getTu() * mau;
}

bool PS2::operator!=(PS2 b)
{
    return !(*this == b);
}

bool PS2::operator>(PS2 b)
{
    int tu = this->getTu(), mau = this->getMau();
    return sign * tu * b.getMau() > b.getSign() * b.getTu() * mau;
}

bool PS2::operator<(PS2 b)
{
    int tu = this->getTu(), mau = this->getMau();
    return sign * tu * b.getMau() < b.getSign() * b.getTu() * mau;
}

bool PS2::operator>=(PS2 b)
{
    int tu = this->getTu(), mau = this->getMau();
    return sign * tu * b.getMau() >= b.getSign() * b.getTu() * mau;
}

bool PS2::operator<=(PS2 b)
{
    int tu = this->getTu(), mau = this->getMau();
    return sign * tu * b.getMau() <= b.getSign() * b.getTu() * mau;
}

