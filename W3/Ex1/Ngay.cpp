#include "Ngay.h"

Ngay::Ngay()
{
    dd = mm = yy = 1;
}

bool Ngay::isLeap()
{
    if (yy % 400 == 0) return true;
    if (yy % 100 == 0) return false;
    if (yy % 4 == 0) return true;
    return false;
}
int MaxDay[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

Ngay::Ngay(int dd, int mm, int yy)
{
    if (dd < 1) dd = -dd;
    if (mm > 12) { mm -= 12;yy++; }
    else if (mm < 1) mm = 1;
    if (yy < 1) yy = 1;
    this->dd = dd;
    this->mm = mm;
    this->yy = yy;
}

Ngay::Ngay(int dd)
{
    // this->mm = this->yy = 1;
    // if (dd < 1) dd = 1;

    // while (dd >= 366)
    // {
    //     if (isLeap())
    //         dd -= 366;
    //     else dd -= 365;
    //     yy++;
    // }
    // while (dd >= MaxDay[mm - 1])
    // {
    //     if (isLeap() && mm == 2) dd -= (MaxDay[mm - 1] + 1);
    //     else
    //         dd -= MaxDay[mm - 1];
    //     mm++;
    // }
    // this->dd = dd;
    this->yy = 1;
    this->mm = 1;

    while (dd > (isLeap() ? 366 : 365))
    {
        dd -= (isLeap()) ? 366 : 365;
        yy++;
    }

    while (dd > ((mm == 2 && isLeap()) ? 29 : MaxDay[mm - 1]))
    {
        dd -= (mm == 2 && isLeap()) ? 29 : MaxDay[mm - 1];
        mm++;
    }

    this->dd = dd;
}


Ngay Ngay::operator+(Ngay n)
{
    Ngay temp(*this);
    temp.dd += n.dd;
    // cout << temp.dd << endl;
    temp.mm += n.mm;
    temp.yy += n.yy;
    if (temp.mm > 12)
    {
        temp.mm = temp.mm - 12;
        temp.yy++;
    }
    if (temp.dd > MaxDay[temp.mm - 1])
    {
        if (temp.mm == 2 && isLeap()) temp.dd -= MaxDay[temp.mm - 1] + 1;
        else temp.dd -= MaxDay[temp.mm - 1];
        temp.mm++;
    }
    if (temp.mm > 12)
    {
        temp.mm = temp.mm - 12;
        temp.yy++;
    }

    return temp;
}
Ngay Ngay::operator+(int x)
{
    return *this + Ngay(x);
}


Ngay operator+(int x, Ngay n)
{
    n.dd += x;
    while (n.dd > (n.mm == 2 && n.isLeap() ? 29 : MaxDay[n.mm - 1]))
    {
        n.dd -= (n.mm == 2 && n.isLeap() ? 29 : MaxDay[n.mm - 1]);
        n.mm++;
        if (n.mm > 12)
        {
            n.mm = n.mm - 12;
            n.yy++;
        }
    }
    return n;



}

Ngay Ngay::operator-(Ngay n)
{
    Ngay temp(*this);
    temp.dd -= n.dd;
    temp.mm -= n.mm;
    temp.yy -= n.yy;
    if (temp.mm < 1)
    {
        temp.mm += 12;
        temp.yy--;
    }
    while (temp.dd < 1)
    {
        if (temp.mm == 2 && isLeap()) temp.dd += MaxDay[temp.mm - 1] + 1;
        else temp.dd += MaxDay[temp.mm - 1];
        temp.mm--;
        if (temp.mm < 1)
        {
            temp.mm += 12;
            temp.yy--;
        }
    }

    return temp;
}

Ngay Ngay::operator-(int x)
{
    Ngay temp(*this);
    temp.dd -= x;
    while (temp.dd < 1)
    {
        if (temp.mm - 1 == 2 && isLeap()) temp.dd += MaxDay[temp.mm - 2] + 1;
        else temp.dd += MaxDay[temp.mm - 2];
        temp.mm--;
        if (temp.mm < 1)
        {
            temp.mm += 12;
            temp.yy--;
        }
    }
    return temp;

}

Ngay operator-(int x, Ngay n)
{
    return Ngay(x) - n;
}

ostream& operator<<(ostream& os, Ngay n)
{
    os << n.dd << "/" << n.mm << "/" << n.yy;
    return os;
}

bool operator>(Ngay n1, Ngay n2)
{
    if (n1.yy > n2.yy) return true;
    if (n1.yy < n2.yy) return false;
    if (n1.mm > n2.mm) return true;
    if (n1.mm < n2.mm) return false;
    if (n1.dd > n2.dd) return true;
    return false;
}


Ngay::~Ngay()
{
}
