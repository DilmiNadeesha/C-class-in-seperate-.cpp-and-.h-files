
#include <string>


using std::string;


class Customer
{
	private: 
		int customerId;
		string customerName,email,contactNo;

	public: 
		void setCustomerDetails(int id, string name, string Email);
		void DisplayCustomerDetails();
		void setContactNo(string ConNo);
};

