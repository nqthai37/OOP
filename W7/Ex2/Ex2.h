// Cài đặt lớp SP1 gồm có :
// q Dữ liệu : phần thực, phần ảo
// q Phương thức : nhập, in
// q Chương trình chính : nhập 2 sp ab, in ra a, b
// n Cài đặt lớp SP2 kế thừa SP1 và bổ sung :
// q Dữ liệu :
// q Phương thức : toán tử >> , << , phép - , *, / , phép so sánh : == , != , > , >= , < , <= ,
//     ++, --
#pragma once
#include <iostream>
using namespace std;

class SP1
{
private:
    float real, img;
public:
    SP1(float r = 0, float i = 0) : real(r), img(i) {}
    float getReal();
    float getImg();
    void setReal(float real);
    void setImg(float img);
    friend istream& operator >> (istream& is, SP1& sp);
    friend ostream& operator << (ostream& os, SP1 sp);
};

class SP2 : public SP1
{
public:
    SP2(float r = 0, float i = 0) : SP1(r, i) {}
    SP2 operator =(SP2 sp);
    SP2 operator - (SP2 sp);
    SP2 operator * (SP2 sp);
    SP2 operator / (SP2 sp);
    bool operator == (SP2 sp);
    bool operator != (SP2 sp);
    bool operator > (SP2 sp);
    bool operator >= (SP2 sp);
    bool operator < (SP2 sp);
    bool operator <= (SP2 sp);
    SP2 operator ++ ();
    SP2 operator -- ();
    SP2 operator ++ (int);
    SP2 operator -- (int);
    friend istream& operator >> (istream& is, SP2& sp);
    friend ostream& operator << (ostream& os, SP2 sp);
};