#include "Ex2.h"

float SP1::getReal()
{
    return real;
}
float SP1::getImg()
{
    return img;
}
void SP1::setReal(float real)
{
    this->real = real;
}
void SP1::setImg(float img)
{
    this->img = img;
}
istream& operator >> (istream& is, SP1& sp)
{
    float real, img;
    cout << "Nhap phan thuc: ";
    is >> real;
    cout << "Nhap phan ao: ";
    is >> img;
    sp.setReal(real);
    sp.setImg(img);
    return is;
}
ostream& operator << (ostream& os, SP1 sp)
{
    if (sp.getReal() == 0)
    {
        os << sp.getImg() << "i";
        return os;
    }
    else if (sp.getImg() == 0)
    {
        os << sp.getReal();
        return os;
    }
    os << sp.getReal() << " + " << sp.getImg() << "i";
    return os;
}

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