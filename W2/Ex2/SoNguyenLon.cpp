#include "SoNguyenLon.h"    


SoNguyenLon::SoNguyenLon()
{
    data = "0";
    number = 0;
    length = 1;
    if (MAX == NULL || *this > *MAX)
    {
        MAX = this;
    }
}

SoNguyenLon::SoNguyenLon(int n)
{
    data = to_string(n);
    number = n;
    length = data.length();
    if (MAX == NULL || *this > *MAX)
    {
        MAX = this;
    }
}

SoNguyenLon::SoNguyenLon(int n, int length)
{
    // data = to_string(n);
    number = n;
    this->length = length;
    for (int i = 0; i < length; i++)
    {
        data += to_string(n % 10);
    }
    if (MAX == NULL || *this > *MAX)
    {
        MAX = this;
    }
}


bool SoNguyenLon::operator>(const SoNguyenLon& other) const
{
    if (length > other.length)
    {
        return true;
    }
    else if (length < other.length)
    {
        return false;
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            if (data[i] > other.data[i])
            {
                return true;
            }
            else if (data[i] < other.data[i])
            {
                return false;
            }
        }
        return false;
    }
}


SoNguyenLon SoNguyenLon::operator+(const SoNguyenLon& other)const
{
    SoNguyenLon result;
    int carry = 0;
    int i = length - 1;
    int j = other.length - 1;
    while (i >= 0 || j >= 0 || carry)
    {
        int sum = carry;
        if (i >= 0)
        {
            sum += data[i] - '0';
            i--;
        }
        if (j >= 0)
        {
            sum += other.data[j] - '0';
            j--;
        }
        result.data = to_string(sum % 10) + result.data;
        carry = sum / 10;
    }
    result.length = result.data.length();
    return result;
}

SoNguyenLon SoNguyenLon::operator-(const SoNguyenLon& other) const
{
    SoNguyenLon result;
    if (other > *this)
    {
        return 0;
    }
    int borrow = 0;
    int i = length - 1;
    int j = other.length - 1;
    while (i >= 0 || j >= 0)
    {
        int diff = borrow;
        if (i >= 0)
        {
            diff += data[i] - '0';
            i--;
        }
        if (j >= 0)
        {
            diff -= other.data[j] - '0';
            j--;
        }
        if (diff < 0)
        {
            diff += 10;
            borrow = -1;
        }
        else
        {
            borrow = 0;
        }
        result.data = to_string(diff) + result.data;
    }
    return result;
}


SoNguyenLon SoNguyenLon::operator=(const SoNguyenLon& other)
{
    data = other.data;
    number = other.number;
    length = other.length;
    return *this;
}
ostream& operator<<(ostream& os, const SoNguyenLon& obj)
{
    os << obj.data;
    return os;
}

SoNguyenLon SoNguyenLon::SNLMax()
{
    return *MAX;
}

SoNguyenLon operator-(int left, const SoNguyenLon& right)
{

    SoNguyenLon l(left);
    return l - right;

}
SoNguyenLon operator+(const SoNguyenLon& left, int right)
{
    SoNguyenLon r(right);
    return left + r;
}