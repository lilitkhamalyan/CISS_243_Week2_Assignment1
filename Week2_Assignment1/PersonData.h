#ifndef PERSONDATA_H
#define PERSONDATA_H
#include <string>
using namespace std;
// PersonData class declaration 
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
	// Default constructor 
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
	// Constructor
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
	// Mutator functions. All of them are defined in PersonData.cpp
	void setLastName(string);
	void setFirstName(string);
	void setAddress(string);
	void setCity(string);
	void setState(string);
	void setZip(string);
	void setPhoneNumber(string);
	//Accessor functions
	string getLastName() const;
	string getFirstName() const;
	string getAddress() const;
	string getCity() const;
	string getState() const;
	string getZip() const;
	string getPhoneNumber() const;
};

#endif

