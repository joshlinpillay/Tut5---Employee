#include "Employee.h"
#include<iostream>
#include <string>


using namespace std;


Employee::Employee()
{
	numberofemployees = 1;
}


Employee::~Employee()
{
	numberofemployees = 0;
}

void Employee::name(string)
{
	string temp;
	cout << "name of employee is " << temp << endl;


}

void Employee::staffnumber(int)

{
	int number;
	cout << "the staff number of the employee is " << number << endl;
}

void salaryemployee::setsalary(float)
{

	float figure;
	cout << "salary is R" << figure << endl;
}

void hourlyemployee::sethoursworked(int)

{
	int hrs;
	cout << "number of hours worked =" << hrs << endl;
}


void hourlyemployee::sethourlyrate(int, float)
{
	float pay;
	float hrs;
	float x;
	pay = hrs * x;
	cout << "the hourly employee earns " << pay << endl;
}

void commissionemployee::setsalarybase(float)
{
	float base;
	cout << "the fixed salary base is " << base << endl;

}
void commissionemployee::setrate(float)
{
	float comm;
	float commission;
	float base;
	commission = comm* base;
	cout << "the commsion earened is " << commission << endl;

}

void commissionemployee::setrevenue(float)
{
	float revenue;
	cout << "the revenue amount is" << revenue << endl;
}



