#include <iostream>

using namespace std;

int main()
{
    float NetSalary, BasicSalary, PercentageAllowance, PercentDeductions;

    cout << "Starting to Help Calculate your NetSalary: "
         << "\n";
    cout << "Provide your Basic Salary: "
         << "\n";
    cin >> BasicSalary;

    cout << "Provide your Percentage of Allowances: ";
    cin >> PercentageAllowance;

    cout << "Provide your Percentage of Deductions: ";
    cin >> PercentDeductions;

    //  Equation for NetSalary:
    NetSalary = BasicSalary + (BasicSalary * PercentageAllowance) / 100 - (BasicSalary * PercentDeductions) / 100;

    cout << "Your Net Salary is: " << NetSalary;
}
