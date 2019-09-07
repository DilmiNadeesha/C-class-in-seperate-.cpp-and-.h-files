#include <iostream>
#include <string>
#include "Customer.h"

using namespace std;

int main()
{
	Customer c1, c2, c3;

	c1.setCustomerDetails(1,"John","john@gmail.com");
	c2.setCustomerDetails(2, "Ann", "ann@gmail.com");
	c3.setCustomerDetails(3, "Leema", "leema@gmail.com");

	c1.setContactNo("777447658");
	c2.setContactNo("774829502");
	c3.setContactNo("772347289");

	c1.DisplayCustomerDetails();
	cout << endl << endl;
	c2.DisplayCustomerDetails();
	cout << endl << endl;
	c3.DisplayCustomerDetails();
	cout << endl << endl;

	return 0;
}