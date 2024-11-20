#include "HocSinh.h"

HocSinh::HocSinh()
{
    Name = "";
    ID++;
    MS = ID;
    x = y = z = 0;
    TB = 0;

}
HocSinh::HocSinh(const string& str, const float& x, const float& y, const float& z)
{
    ID++;
    MS = ID;
    Name = str;
    if (x >= 0 && x <= 10) this->x = x;
    else if (x < 0 && x >= -10) this->x = -x;
    else  this->x = 10;

    if (y >= 0 && y <= 10) this->y = y;
    else if (y < 0 && y >= -10) this->y = -y;
    else  this->y = 10;

    if (z >= 0 && z <= 10) this->z = z;
    else if (z < 0 && z >= -10) this->z = -z;
    else  this->z = 10;

    TB = (this->x + this->y + this->z) / 3.0;
    if (this->TBmax == nullptr || TB > this->TBmax->TB)
        TBmax = this;

}

void HocSinh::DatHoTen(const string& str)
{
    this->Name = str;
}
void HocSinh::GanDiem(const float& x, const float& y, const float& z)
{
    if (x >= 0 && x <= 10) this->x = x;
    else if (x<0 && x>-10) this->x = -x;
    else this->x = 10;

    if (y >= 0 && y <= 10) this->y = y;
    else if (y<0 && y>-10) this->y = -y;
    else  this->y = 10;

    if (z >= 0 && z <= 10) this->z = z;
    else if (z<0 && z>-10) this->z = -z;
    else  this->z = 10;

    TB = (this->x + this->y + this->z) / 3.0;
    if (this->TBmax == nullptr || TB > this->TBmax->TB)

        TBmax = this;

}
ostream& operator <<(ostream& os, const HocSinh& hs)
{
    os << "HS: " << hs.Name << ", MS: " << hs.MS << ", DTB: " << hs.TB;
}

HocSinh HocSinh::HSDiemTBCaoNhat()
{
    return *TBmax;
}
