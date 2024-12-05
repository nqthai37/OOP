#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

int main()
{
    string firstName, lastName;
    double grossSales, commissionRate;
    double baseSalary;
    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;
    cout << "Enter gross sales: ";
    cin >> grossSales;
    cout << "Enter commission rate: ";
    cin >> commissionRate;
    cout << "Enter base salary: ";
    cin >> baseSalary;
    BasePlusCommissionEmployee bce(firstName, lastName, grossSales, commissionRate, baseSalary);
    cout << "Employee Details (BasePlusCommissionEmployee): " << endl;
    cout << bce.toString() << endl;
    cout << "Earnings: " << bce.earnings() << endl;
    return 0;
}   