#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H
#include "PersonData.h" 
#include <string>
#include <iostream> 
using namespace std;

class CustomerData : public PersonData;
{
private:
	int customerNumber;
	bool mailingList;
public:
	CustomerData()::PersonData()
	{
		customerNumber = 0;
		mailingList = false;
	}
	CustomerData(string l, string f, string a, string c, string s, string z, string p, int cus, bool m) ::PersonData(l, f, a, c, s, z, p)
	{
		customerNumber = cus;
		mailingList = false;
	}


}
#endif