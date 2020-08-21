#include <iostream>
using namespace std;
#include <string>
#include "inherit2.h"

using namespace std;

///< personType print function prints first name and last name

void personType::print() const
{
	cout << firstName << " " << lastName;
}

///< personType setName assigns firstaName into first and lastName into last

void personType::setName(string first, string last)
{
	firstName = first;
	lastName = last;
}

///< personType getName is a constructer with reference parameters

//constructor with parameters
void personType::getName(string& first, string& last)
{
	firstName = first;
	lastName = last;
}

///< default constructor for the class 

personType::personType()	///default constructor
{
	firstName = "";
	lastName = "";
}
