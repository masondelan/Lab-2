#ifndef H_PersonType
#define H_PersonType

#include <string>

using namespace std;


/*! * \class person type * \class that prints and writes with last name and first name for a person. */
class personType
{
public:
	///Function to output the first name and last name
	///in the form firstName lastName
	void print() const;
		
	///Function to set firstName and lastName according to
	///the parameters
	///Post: firstName = firstName; lastName = last;

	void setName(string first, string last);
	
	///Function to return firstName and lastName via the parameters
	///Post: first = firstName; last = lastName;

	void getName(string& first, string& last);
	///Function to return firstName and lastName via the parameters
	///Post: first = firstName; last = lastName;

	///Constructor with parameters
	///Set firstName and lastName according to the parameters
	///Post: firstName = first; lastName = last;

	personType(string first, string last);

	///Default constructor;
	///Intialize firstName and lastName to empty string
	///Post: firstName = ""; lastName = "";		

	personType();
    	

private:
	string firstName;	///store the first name
	string lastName;	///store the last name
};
#endif
