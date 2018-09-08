#include "PersonData.h"
#include <string>
using namespace std;

string PersonData::getLastName() const
{
	return lastName;
}
string PersonData::getFirstName() const
{
	return firstName;
}
string PersonData::getAddress() const
{
	return address;
}
string PersonData::getCity() const
{
	return city;
}
string PersonData::getState() const
{
	return state;
}
string PersonData::getZip() const
{
	return zip;
}
string PersonData::getPhoneNumber() const
{
	return phoneNumber;
}
