#include "PersonData.h"
#include "CustomerData.h"
#include <string>
#include <iostream>
using namespace std;
// // getCustomerNumber returns the value in the member variable customerNumber.
int CustomerData::getCustomerNumber() const
{
	return customerNumber;
}
// getMailingList returns the value in the member variable mailingList.
bool CustomerData::getMailingList() const
{
	return mailingList;
}
