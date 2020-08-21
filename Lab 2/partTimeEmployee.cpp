#include <iostream>
#include "inherit2.h"
#include "partTimeEmployee.h"
using namespace std;

void partTimeEmployee::print()
{
	///print the name of the employee
	personType::print();		
	cout << "wages are : " << calculatePay() << endl;
}
double partTimeEmployee::calculatePay()
{
	return (payRate * hoursWorked);
}

void partTimeEmployee::setNameRateHours(string first,
				string last, double rate, double hours)
{
	personType::setName(first,last);
	payRate = rate;
	hoursWorked = hours;
}

///constructor with parameters
partTimeEmployee::partTimeEmployee(string first, string last,
					double rate, double hours)
		: personType(first,last) 
{
	payRate = rate;
	hoursWorked = hours;
}

partTimeEmployee::partTimeEmployee()
{
	payRate = 0;
	hoursWorked = 0;
}
