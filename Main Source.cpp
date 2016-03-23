#include<iostream>
#include "Employee.h"
#include <string>

using namespace std;
Employee input()
{
	Employee identity;
	string temp;
	cout << "Enter name of the employee" << endl;
	cin >> temp;
	identity.name(temp);


	Employee staffno;
	int number;
	cout << "Enter the staff number of employee" << endl;
	cin >> number;
	staffno.staffnumber(number);

	salaryemployee salaryfig;
	float figure;
	cout << "Enter the fixed monthly salary" << endl;
	cin >> figure;
	salaryfig.setsalary(figure);

	hourlyemployee hours;
	int hrs;
	float rate;
	cout << "Enter the number of hours worked" << endl;
	cin >> hrs;
	cout << "Enter the salary rate per hour" << endl;
	cin >> rate;
	hours.sethourlyrate(hrs, rate);
	hours.sethoursworked(hrs);


	commissionemployee salarybase;
	float base;
	cout << "Enter the salary base" << endl;
	cin >> base;
	salarybase.setsalarybase(base);

	commissionemployee set_rate;
	float comm;
	cout << "Enter the rate of commission" << endl;
	cin >> comm;
	set_rate.setrate(comm);


	commissionemployee set_revenue;
	float revenue;
	cout << "Enter revenue amount" << endl;
	cin >> revenue;
	set_revenue.setrevenue(revenue);

};



