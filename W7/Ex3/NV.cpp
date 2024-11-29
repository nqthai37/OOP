#include "NV.h"
NV::NV() : NGUOI()
{
    department = "";
    salaryCoefficient = 0;
    allowance = 0;
}

NV::NV(string name, string birth, string address, string department, int salaryCoefficient, int allowance) : NGUOI(name, birth, address)
{
    this->department = department;
    this->salaryCoefficient = salaryCoefficient;
    this->allowance = allowance;
}
ostream& operator<<(ostream& os, NV employee)
{
    os << (NGUOI)employee;
    os << "Department: " << employee.department << endl;
    os << "Salary coefficient: " << employee.salaryCoefficient << endl;
    os << "Allowance: " << employee.allowance << endl;
    return os;
}

istream& operator >>(istream& is, NV& employee)
{
    is >> (NGUOI&)employee;
    is.ignore();
    cout << "Department: ";
    getline(is, employee.department);
    cout << "Salary coefficient: ";
    is >> employee.salaryCoefficient;
    cout << "Allowance: ";
    is >> employee.allowance;
    return is;
}