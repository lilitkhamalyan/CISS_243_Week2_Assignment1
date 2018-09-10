#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H
#include "PersonData.h" 
#include <string>
#include <iostream> 
using namespace std; 
// CustomerData class declaration 
class CustomerData : public PersonData
{
private:
	int customerNumber;
	bool mailingList;
public:
	// Default constructor 
	CustomerData():PersonData()
	{
		customerNumber = 0;
		mailingList = false;
	}
	// Constructor
	CustomerData(string l, string f, string a, string c, string s, string z, string p, int cus, bool m) :PersonData(l, f, a, c, s, z, p)
	{
		customerNumber = cus;
		mailingList = m;
	}
	// Mutator function 
	void setCustomerNumber(int cus)
	{
		customerNumber = cus;
	}
	// Accessor functions
	int getCustomerNumber() const;
	bool getMailingList() const;
};
#endif