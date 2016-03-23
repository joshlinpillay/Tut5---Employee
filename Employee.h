#pragma once
class Employee
{
public:
	static int numberofemployees;

	Employee();
	~Employee();


	virtual void name(string); // Pure virtual function makes

	virtual void staffnumber(int); // Virtual function.

	void salary(float);
};

class salaryemployee
{
public:

	salaryemployee();
	~salaryemployee();
	void setsalary(float);


};

class hourlyemployee
{
public:

	hourlyemployee();
	~hourlyemployee();
	void sethourlyrate(int, float);
	void sethoursworked(int);


};
class commissionemployee
{
public:

	commissionemployee();
	~commissionemployee();
	void setsalarybase(float);
	void setrate(float);
	void setrevenue(float);




}

