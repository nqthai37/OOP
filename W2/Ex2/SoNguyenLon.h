#pragma once
#include "iostream"

using namespace std;

class SoNguyenLon
{
private:
    string data;
    int number;
    int length;
    static SoNguyenLon* MAX;
public:

    SoNguyenLon();

    SoNguyenLon(int n);

    SoNguyenLon(int n, int length);

    SoNguyenLon operator+(const SoNguyenLon& other) const;

    SoNguyenLon operator-(const SoNguyenLon& other) const;

    SoNguyenLon operator=(const SoNguyenLon& other);

    bool operator>(const SoNguyenLon& other) const;

    friend ostream& operator<<(ostream& os, const SoNguyenLon& obj);

    static SoNguyenLon SNLMax();

    friend SoNguyenLon operator+(const SoNguyenLon& left, int right);

    friend SoNguyenLon operator-(int left, const SoNguyenLon& other);
};