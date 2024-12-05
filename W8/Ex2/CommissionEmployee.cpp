#include "CommissionEmployee.h"


CommissionEmployee::CommissionEmployee()
{
    firstName = lastName = "";
    grossSales = commissionRate = 0;
}
CommissionEmployee::CommissionEmployee(string firstName, string lastName, double grossSales, double commissionRate)
{
    this->firstName = firstName;
    this->lastName = lastName;
    while (grossSales <= 0)
    {
        cout << "Gross sales must be greater than 0. Please enter again: ";
        cin >> grossSales;
    }
    this->grossSales = grossSales;
    while (commissionRate <= 0 || commissionRate >= 1)
    {
        cout << "Commission rate must be greater than 0 and less than or equal to 1. Please enter again: ";
        cin >> commissionRate;
    }
    this->commissionRate = commissionRate;
}

double CommissionEmployee::earnings()
{
    return grossSales * commissionRate;
}

string CommissionEmployee::toString()
{
    return "Commission Employee: " + firstName + " " + lastName + "\nGross Sales: " + to_string(grossSales) + "\nCommission Rate: " + to_string(commissionRate);
}

string CommissionEmployee::getFirstName()
{
    return firstName;
}

void CommissionEmployee::setFirstName(string firstName)
{
    this->firstName = firstName;
}

string CommissionEmployee::getLastName()
{
    return lastName;
}

void CommissionEmployee::setLastName(string lastName)
{
    this->lastName = lastName;
}

double CommissionEmployee::getGrossSales()
{
    return grossSales;
}

void CommissionEmployee::setGrossSales(double grossSales)
{
    while (grossSales <= 0)
    {
        cout << "Gross sales must be greater than 0. Please enter again: ";
        cin >> grossSales;
    }
    this->grossSales = grossSales;
}


double CommissionEmployee::getCommissionRate()
{
    return commissionRate;
}

void CommissionEmployee::setCommissionRate(double commissionRate)
{
    while (commissionRate <= 0 || commissionRate >= 1)
    {
        cout << "Commission rate must be greater than 0 and less than or equal to 1. Please enter again: ";
        cin >> commissionRate;
    }
    this->commissionRate = commissionRate;
}

