// Name: Lilit Khamalyan
// Class: CISS 243
// Date: 09/09/2018
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
	CustomerData second("David", "Smith", "218 Hanson Ct", "Moberly", "NC", "28323", "5738256984", 9, true);
	// Call displayCustomer function 
	displayCustomer(second);
	return 0;
}
void displayCustomer(CustomerData c)
{
	cout << "  Customer's Informaion" << endl;
	cout << "-------------------------" << endl;
	cout << "Last Name: " << c.getLastName() << endl;
	cout << "First Name: " << c.getFirstName() << endl;
	cout << "Address: " << c.getAddress() << endl;
	cout << "City: " << c.getCity() << endl;
	cout << "State: " << c.getState() << endl;
	cout << "Zip:" << c.getZip() << endl;
	cout << "Phone Number: " << c.getPhoneNumber() << endl;
	cout << "Customer Number: " << c.getCustomerNumber() << endl;
	cout << "Miling List: " << c.getMailingList() << endl;
}
