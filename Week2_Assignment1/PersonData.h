#ifndef PERSONDATA_H
#define PERSONDATA_H
#include <string>
using namespace std;

class PersonData
{
private:
	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	string zip;
	string phoneNumber;
public:
	PersonData ()
	{
		lastName = "";
		 firstName = "";
		 address = "";
		 city = "";
		 state = "";
		 zip = "";
		 phoneNumber = "";
	}
	PersonData(string l, string f, string a, string c, string s, string z, string p)
	{
		lastName = l;
		firstName = f;
		address = a;
		city = c;
		state = s;
		zip = z;
		phoneNumber = p; 
	}
	void setLastName(string);
	void setFirstName(string);
	void setAddress(string);
	void setCity(string);
	void setState(string);
	void setZip(string);
	void setPhoneNumber(string);
	string getLastName() const;
	string getFirstName() const;
	string getAddress() const;
	string getCity() const;
	string getState() const;
	string getZip() const;
	string getPhoneNumber() const;
};

#endif

