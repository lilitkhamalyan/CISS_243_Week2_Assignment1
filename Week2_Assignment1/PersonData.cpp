#include "PersonData.h"
#include <string>
using namespace std;

void PersonData::setLastName(string l)
{
	lastName = l;
}
void PersonData::setFirstName(string f)
{
	firstName = f;
}
void PersonData::setAddress(string a)
{
	address = a;
}
void PersonData::setCity(string c)
{
	city = c;
}
void PersonData::setState(string s)
{
	state = s;
}
void PersonData::setZip(string z)
{
	zip = z;
}
void PersonData::setPhoneNumber(string p)
{
	phoneNumber = p;
}
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
