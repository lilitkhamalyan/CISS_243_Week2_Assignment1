#include "PersonData.h"
#include "CustomerData.h"
#include <string>
#include <iostream>
using namespace std;
void CustomerData::displayCustomer(CustomerData c)
{
	cout << c.getFirstName() << endl;
	cout << c.getLastName() << endl;
	cout << c.getAddress()<< endl; 
	cout << c.getCity() << endl;
	cout << c.getState() << endl;
	cout << c.getZip() << endl;
	cout << c.getPhoneNumber() << endl;
	cout << c.getCustomerNumber() << endl;
	cout << c.getMailingList() << endl;
}
