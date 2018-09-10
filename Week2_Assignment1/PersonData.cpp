#include "PersonData.h"
#include <string>
using namespace std;
// setLastName sets the value of the member variable lastName.
void PersonData::setLastName(string l)
{
	lastName = l;
}
// setFirstName sets the value of the member variable firstName.
void PersonData::setFirstName(string f)
{
	firstName = f;
}
// setAddress sets the value of the member variable address.
void PersonData::setAddress(string a)
{
	address = a;
}
// setCity sets the value of the member variable city.
void PersonData::setCity(string c)
{
	city = c;
}
// setState sets the value of the member variable state.
void PersonData::setState(string s)
{
	state = s;
}
// setZip sets the value of the member variable zip.
void PersonData::setZip(string z)
{
	zip = z;
}
// setPhoneNumber sets the value of the member variable phoneNumber.
void PersonData::setPhoneNumber(string p)
{
	phoneNumber = p;
}
// getLastame returns the value in the member variable lastName
string PersonData::getLastName() const
{
	return lastName;
}
// getFirstName returns the value in the member variable firstName
string PersonData::getFirstName() const
{
	return firstName;
}
// getAddress returns the value in the member variable address
string PersonData::getAddress() const
{
	return address;
}
// getCity returns the value in the member variable city
string PersonData::getCity() const
{
	return city;
}
// getState returns the value in the member variable state
string PersonData::getState() const
{
	return state;
}
// getZip returns the value in the member variable zip
string PersonData::getZip() const
{
	return zip;
}
// getPhoneNumber returns the value in the member variable phoneNumber
string PersonData::getPhoneNumber() const
{
	return phoneNumber;
}
