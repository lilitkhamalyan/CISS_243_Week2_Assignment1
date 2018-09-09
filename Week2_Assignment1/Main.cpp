#include <iostream>
#include "PersonData.h"
#include "CustomerData.h"
using namespace std;

int main()
{
	CustomerData first;
	CustomerData second("lilit", "khamalyan", "27 Hanson ct", "Bunnlevel", "NC", "28323", "5738254884", 9, true);
	//cout << second.getAddress() << endl;
	//cout << second.getMailingList() << endl;
	second.displayCustomer(second);

	return 0;
}