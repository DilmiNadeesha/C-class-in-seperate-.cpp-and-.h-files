

#include "Customer.h"
#include <iostream>
#include <string>

using namespace std;

void Customer::setCustomerDetails(int id, string name, string Email)
{
	customerId = id;
	customerName = name;
	email = Email;
};
void Customer:: DisplayCustomerDetails()
{
	cout << "Customer Id   : " << customerId << endl;
	cout << "Customer Name : " << customerName << endl;
	cout << "Email         : " << email << endl;
	cout << "Contact No    : " << contactNo << endl;
};
void Customer:: setContactNo(string ConNo)
{
	contactNo = ConNo;
};