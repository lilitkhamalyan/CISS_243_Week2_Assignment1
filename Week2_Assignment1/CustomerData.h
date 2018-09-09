#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H
#include "PersonData.h" 
#include <string>
using namespace std;

class CustomerData : public PersonData
{
private:
	int customerNumber;
	bool mailingList;
public:
	CustomerData():PersonData()
	{
		customerNumber = 0;
		mailingList = false;
	}
	CustomerData(string l, string f, string a, string c, string s, string z, string p, int cus, bool m) :PersonData(l, f, a, c, s, z, p)
	{
		customerNumber = cus;
		mailingList = m;
	}
	void setCustomerNumber(int cus)
	{
		customerNumber = cus;
	}
	//void setMailingList()
	//{
	//	string list;
	//	cout << "Do you want to be in a mailing list?" << endl;
	//	cin >> list;
	//	if (list == "yes")
	//		mailingList = true;
	//}
	int getCustomerNumber() const
	{
		return customerNumber;
	}
	bool getMailingList() const
	{
		return mailingList;
	}
	void displayCustomer(CustomerData); 
};
#endif