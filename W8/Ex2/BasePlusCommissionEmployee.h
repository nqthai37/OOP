#pragma once

#include "CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee
{
private:
    double baseSalary;

public:
    BasePlusCommissionEmployee();
    BasePlusCommissionEmployee(string firstName, string lastName, double grossSales, double commissionRate, double baseSalary);
    double getBaseSalary();
    void setBaseSalary(double baseSalary);

    double earnings();
    string toString();
};

#include "BasePlusCommissionEmployee.cpp"