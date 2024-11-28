#include "SP2.h"

SP2 SP2::operator - (SP2 sp)
{
    SP2 result;
    result.setReal(this->getReal() - sp.getReal());
    result.setImg(this->getImg() - sp.getImg());
    return result;
}
SP2 SP2::operator * (SP2 sp)
{
    SP2 result;
    int r = getReal() * sp.getReal() - getImg() * sp.getImg();
    int i = getReal() * sp.getImg() + getImg() * sp.getReal();
    result.setReal(r);
    result.setImg(i);
    return result;
}

SP2 SP2::operator / (SP2 sp)
{
    SP2 result;
    int r = (getReal() * sp.getReal() + getImg() * sp.getImg()) / (sp.getReal() * sp.getReal() + sp.getImg() * sp.getImg());
    int i = (getImg() * sp.getReal() - getReal() * sp.getImg()) / (sp.getReal() * sp.getReal() + sp.getImg() * sp.getImg());
    result.setReal(r);
    result.setImg(i);
    return result;
}

bool SP2::operator == (SP2 sp)
{
    return getReal() == sp.getReal() && getImg() == sp.getImg();
}
bool SP2::operator != (SP2 sp)
{
    return getReal() != sp.getReal() || getImg() != sp.getImg();
}
bool SP2::operator > (SP2 sp)
{
    return getReal() > sp.getReal() || (getReal() == sp.getReal() && getImg() > sp.getImg());
}
bool SP2::operator >= (SP2 sp)
{
    return getReal() > sp.getReal() || (getReal() == sp.getReal() && getImg() >= sp.getImg());
}
bool SP2::operator < (SP2 sp)
{
    return getReal() < sp.getReal() || (getReal() == sp.getReal() && getImg() < sp.getImg());
}
bool SP2::operator <= (SP2 sp)
{
    return getReal() < sp.getReal() || (getReal() == sp.getReal() && getImg() <= sp.getImg());
}

SP2 SP2::operator ++ ()
{
    SP2 result;
    result.setReal(getReal() + 1);
    result.setImg(getImg());
    return result;
}
SP2 SP2::operator -- ()
{
    SP2 result;
    result.setReal(getReal() - 1);
    result.setImg(getImg());
    return result;
}
SP2 SP2::operator ++ (int)
{
    SP2 tmp = *this;
    setReal(getReal() + 1);
    return tmp;
}
SP2 SP2::operator -- (int)
{
    SP2 tmp = *this;
    setReal(getReal() - 1);
    return tmp;
}

istream& operator >> (istream& is, SP2& sp)
{
    is >> (SP1&)sp;
    return is;
}
ostream& operator << (ostream& os, SP2 sp)
{
    os << (SP1&)sp;
    return os;
}

SP2 SP2::operator = (SP2 sp)
{
    setReal(sp.getReal());
    setImg(sp.getImg());
    return *this;
}