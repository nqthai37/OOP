#include "SP1.h"

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
