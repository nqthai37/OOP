#include "BasePlusCommissionEmployee.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee() : CommissionEmployee()
{
    baseSalary = 0;
}

BasePlusCommissionEmployee::BasePlusCommissionEmployee(string firstName, string lastName, double grossSales, double commissionRate, double baseSalary) : CommissionEmployee(firstName, lastName, grossSales, commissionRate)
{
    while (baseSalary <= 500)
    {
        cout << "Base salary must be greater than 500. Please enter again: ";
        cin >> baseSalary;
    }
    this->baseSalary = baseSalary;
}

double BasePlusCommissionEmployee::earnings()
{
    return CommissionEmployee::earnings() * baseSalary;
}

string BasePlusCommissionEmployee::toString()
{
    return CommissionEmployee::toString() + "\nBase Salary: " + to_string(baseSalary);
}


double BasePlusCommissionEmployee::getBaseSalary()
{
    return baseSalary;
}

void BasePlusCommissionEmployee::setBaseSalary(double baseSalary)
{
    this->baseSalary = baseSalary;
}

