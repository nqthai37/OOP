// n Cài đặt lớp NV kế thừa NGUOI và bổ sung: 
// q Dữ liệu: phòng ban, hệ số lương, phụ cấp 
// q Phương thức: định nghĩa lại pt nhập, in để có đầy đủ thông tin
#pragma once
#include "NGUOI.h"

class NV : public NGUOI
{
private:
    string department;
    int salaryCoefficient, allowance;
public:
    NV();
    NV(string name, string birth, string address, string department, int salaryCoefficient, int allowance);
    friend ostream& operator<<(ostream& os, NV employee);
    friend istream& operator >>(istream& is, NV& employee);
};