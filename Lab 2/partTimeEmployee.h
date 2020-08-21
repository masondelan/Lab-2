#include "inherit2.h"

/*! * \class partimeEmployee * \class inheritance personType * member functions and constructors for employee data */ 
class partTimeEmployee: public personType
{
public:
	///Function to output the first name, last name, and
	///the wages in the form:
	///firstName lastName wages are $$$$.$$
	void print();
			

	///Function to calculate and return the wages
	double calculatePay();
			
	///Function to set the first name, last name, payRate,
	///and hoursWorked according to the parameters.
	///The parameters first and last are passed to the
	///base class. payRate = pay; hoursWorked = hours;
	void setNameRateHours(string first, string last,
				double rate, double hours);

	///Constructor with parameters
	///Set the first name, last name, payRate, and
	///hoursWorked according to the parameters.
	///Parameters first and last are passed to the
	///base class. payRate = pay; hoursWorked = hours;		

	partTimeEmployee(string first, string last,
						double rate, double hours);
	///Default constructor
	///Set the first name, last name, payRate, and
	///hoursWorked to the default values.
	///The first name and last name are initialized to an empty
	///string by the default constructor of the base class.
	///payRate = 0; hoursWorked = 0;	

	partTimeEmployee();
	

private:
	double payRate;	   ///store the pay rate
	double hoursWorked;///store the hours worked
};
