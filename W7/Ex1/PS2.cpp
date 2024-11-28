#include "PS2.h"


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

PS2 PS2::operator++()
{
    PS2 c;
    c.setTu(getTu() + getMau());
    c.setMau(getMau());
    c.setSign(getSign());
    c.toiGian();
    return c;
}
PS2 PS2::operator--()
{
    PS2 c;
    c.setTu(getTu() - getMau());
    c.setMau(getMau());
    c.setSign(getSign());
    c.toiGian();
    return c;
}
PS2 PS2::operator++(int)
{
    PS2 c;
    c.setTu(getTu() + getMau());
    c.setMau(getMau());
    c.setSign(getSign());
    c.toiGian();
    setTu(getTu() + getMau());
    toiGian();
    return c;
}
PS2 PS2::operator--(int)
{
    PS2 c;
    c.setTu(getTu() - getMau());
    c.setMau(getMau());
    c.setSign(getSign());
    c.toiGian();
    setTu(getTu() - getMau());
    toiGian();
    return c;
}