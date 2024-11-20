#pragma once

#include "LinkedList.h"


class SoNguyenLon
{
private:
    LinkedList ll;
    bool isNegative;
public:
    SoNguyenLon();
    SoNguyenLon(const int& n);
    SoNguyenLon(const int& n, const int& m);
    SoNguyenLon(const SoNguyenLon& snl);
    ~SoNguyenLon();
    bool isNegativeNumber() const;
    const LinkedList& getLinkedList() const;
    void setLinkedList(const LinkedList& ll);
    void setNegativeNumber(const bool& isNegative);
    SoNguyenLon operator+(const SoNguyenLon& snl) const;
    SoNguyenLon operator-(const SoNguyenLon& snl) const;
    SoNguyenLon operator*(const SoNguyenLon& snl) const;
    SoNguyenLon operator+(const int& n) const;
    SoNguyenLon operator-(const int& n) const;
    SoNguyenLon operator*(const int& n) const;
    friend SoNguyenLon operator+(const int& n, const SoNguyenLon& snl);
    friend SoNguyenLon operator-(const int& n, const SoNguyenLon& snl);
    friend SoNguyenLon operator*(const int& n, const SoNguyenLon& snl);
    friend ostream& operator<<(ostream& os, const SoNguyenLon& snl);
};