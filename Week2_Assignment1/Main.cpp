#include <iostream>
#include "PersonData.h"
#include "CustomerData.h"
using namespace std;
// Declaring  displayCustomer function
void displayCustomer(CustomerData);
int main()
{
	// Define two instances of the CustomerData class 
	CustomerData first;
	CustomerData second("David", "Smith", "218 Hanson Ct", "Moberly", "NC", "28323", "5738254884", 9, true);
	// Call displayCustomer function 
	displayCustomer(second);
	return 0;
}
void displayCustomer(CustomerData c)
{
	cout << c.getLastName() << endl;
	cout << c.getFirstName() << endl;
	cout << c.getAddress() << endl;
	cout << c.getCity() << endl;
	cout << c.getState() << endl;
	cout << c.getZip() << endl;
	cout << c.getPhoneNumber() << endl;
	cout << c.getCustomerNumber() << endl;
	cout << c.getMailingList() << endl;
}
