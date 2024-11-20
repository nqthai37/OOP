#include "SoNguyenLon.h"

SoNguyenLon::SoNguyenLon()
{
    ll = LinkedList();
    isNegative = false;
}

SoNguyenLon::SoNguyenLon(const int& n)
{
    int idx = n;
    if (n < 0)
    {
        isNegative = true;
        idx = -n;
        while (idx > 0)
        {
            ll.AddHead(idx % 10);
            idx /= 10;
        }
    }
    else
    {
        isNegative = false;
        while (idx > 0)
        {
            ll.AddHead(idx % 10);
            idx /= 10;
        }
    }
}

SoNguyenLon::SoNguyenLon(const int& n, const int& m)
{
    if (n < 0)
    {
        isNegative = true;
    }
    else
    {
        isNegative = false;
    }
    for (int i = 0; i < m; i++)
    {
        ll.AddHead(n);
    }
}

SoNguyenLon::SoNguyenLon(const SoNguyenLon& snl)
{
    ll = snl.getLinkedList();
    isNegative = snl.isNegativeNumber();
}

SoNguyenLon::~SoNguyenLon()
{
    // cout << "Destructor called" << &ll << endl;
    ll.~LinkedList();
}

bool SoNguyenLon::isNegativeNumber() const
{
    return isNegative;
}

const LinkedList& SoNguyenLon::getLinkedList() const
{
    return ll;
}

void SoNguyenLon::setLinkedList(const LinkedList& ll)
{
    this->ll = ll;
}

void SoNguyenLon::setNegativeNumber(const bool& isNegative)
{
    this->isNegative = isNegative;
}

SoNguyenLon SoNguyenLon::operator+(const SoNguyenLon& snl) const
{
    SoNguyenLon result;
    LinkedList ll1 = this->getLinkedList();
    LinkedList ll2 = snl.getLinkedList();
    LinkedList resultll = result.getLinkedList();
    int carry = 0;
    int sum = 0;
    int n1 = ll1.getCurN() - 1;
    int n2 = ll2.getCurN() - 1;
    while (n1 >= 0 && n2 >= 0)
    {
        sum = ll1[n1] + ll2[n2] + carry;
        carry = sum / 10;
        resultll.AddHead(sum % 10);
        n1--;
        n2--;
    }
    while (n1 >= 0)
    {
        sum = ll1[n1] + carry;
        carry = sum / 10;
        resultll.AddHead(sum % 10);
        n1--;
    }
    while (n2 >= 0)
    {
        sum = ll2[n2] + carry;
        carry = sum / 10;
        resultll.AddHead(sum % 10);
        n2--;
    }
    if (carry > 0)
    {
        resultll.AddTail(carry);
    }
    result.setLinkedList(resultll);
    return result;
}

SoNguyenLon SoNguyenLon::operator-(const SoNguyenLon& snl) const
{
    SoNguyenLon result;
    LinkedList ll1 = this->getLinkedList();
    LinkedList ll2 = snl.getLinkedList();
    LinkedList resultll = result.getLinkedList();
    int borrow = 0;
    int sub = 0;
    int n1 = ll1.getCurN() - 1;
    int n2 = ll2.getCurN() - 1;
    if (n2 > n1) {
        result.setNegativeNumber(true);
        LinkedList tmp = ll1;
        ll1 = ll2;
        ll2 = tmp;
        n1 = ll1.getCurN() - 1;
        n2 = ll2.getCurN() - 1;
    }
    while (n1 >= 0 && n2 >= 0)
    {
        sub = ll1[n1] - ll2[n2] - borrow;
        if (sub < 0)
        {
            sub += 10;
            borrow = 1;
        }
        else
        {
            borrow = 0;
        }
        resultll.AddHead(sub);
        n1--;
        n2--;
    }
    while (n1 >= 0)
    {
        sub = ll1[n1] - borrow;
        if (sub < 0)
        {
            sub += 10;
            borrow = 1;
        }
        else
        {
            borrow = 0;
        }
        resultll.AddHead(sub);
        n1--;
    }
    result.setLinkedList(resultll);
    return result;
}

SoNguyenLon SoNguyenLon::operator*(const SoNguyenLon& snl) const
{
    SoNguyenLon result;
    LinkedList ll1 = this->getLinkedList();
    LinkedList ll2 = snl.getLinkedList();
    int idx = 0, n1 = ll1.getCurN(), n2 = ll2.getCurN();
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            SoNguyenLon tmp;
            LinkedList tmpLL = tmp.getLinkedList();
            idx = ll1[i] * ll2[j];
            for (int k = 0; k < n1 + n2 - i - j - 2; k++)
            {
                tmpLL.AddTail(0);
            }
            tmpLL.AddHead(idx % 10);
            tmpLL.AddHead(idx / 10);
            tmp.setLinkedList(tmpLL);
            result = result + tmp;
        }
    }

    return result;
}

SoNguyenLon SoNguyenLon::operator+(const int& n) const
{
    SoNguyenLon snl(n);
    return *this + snl;
}

SoNguyenLon SoNguyenLon::operator-(const int& n) const
{
    SoNguyenLon snl(n);
    return *this - snl;
}

SoNguyenLon SoNguyenLon::operator*(const int& n) const
{
    SoNguyenLon snl(n);
    return *this * snl;
}

SoNguyenLon operator+(const int& n, const SoNguyenLon& snl)
{
    SoNguyenLon result(n);
    return result + snl;
}

SoNguyenLon operator-(const int& n, const SoNguyenLon& snl)
{
    SoNguyenLon result(n);
    return result - snl;
}

SoNguyenLon operator*(const int& n, const SoNguyenLon& snl)
{
    SoNguyenLon result(n);
    return result * snl;
}

ostream& operator<<(ostream& os, const SoNguyenLon& snl)
{
    if (snl.isNegativeNumber())
    {
        os << "-";
    }

    for (int i = 0; i < snl.ll.getCurN(); i++) {
        os << snl.ll[i];
    }
    return os;
}

