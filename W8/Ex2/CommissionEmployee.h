#pragma once

#include <iostream>
#include <string>

using namespace std;

class CommissionEmployee
{
private:
    string firstName, lastName;
    double grossSales, commissionRate;
public:
    CommissionEmployee();
    CommissionEmployee(string firstName, string lastName, double grossSales, double commissionRate);
    string getFirstName();
    void setFirstName(string firstName);
    string getLastName();
    void setLastName(string lastName);
    double getGrossSales();
    void setGrossSales(double grossSales);
    double getCommissionRate();
    void setCommissionRate(double commissionRate);


    virtual double earnings();
    virtual string toString();
};

#include "CommissionEmployee.cpp"
