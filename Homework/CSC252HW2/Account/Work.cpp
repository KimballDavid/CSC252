#include"Account.h"
using CSC252HW1::Account;

void do_work()
{

	using std::cout;
	using std::cin;
	using std::string;
	const size_t size = 10;

	Account* pTenAccts = new Account[size];

	string firstName[size] = { "Catherine", "Jessica", "Hyde", "James", "Anthony", "Chris", "Jerold", "Richard", "Jill", "Kate" };
	string lastName[size] = { "Johnson", "Jones", "Smith", "Hicks", "Bond", "King", "Walker", "Forrest", "Barnes", "Adler" };


	for (int i = 0; i < size; i++)
	{
		pTenAccts[i].setFName(firstName[i]);
		pTenAccts[i].setLName(lastName[i]);
		pTenAccts[i].setAccountId(i);
		pTenAccts[i].creditTo(100.0);
	}

	int terminateID = 0;
	int terminate = 0;
	int option = 0;
	int ID = 0;
	double amount = 0.0;

	while (terminateID != 1)
	{
			
		// make a loop to ask for ID
		cout << "Enter your ID: \n";
		cin >> ID;

		while (terminate != 1)
		{
			cout << "Please Enter option number: \n";
			cout << "1. View Balance: \n";
			cout << "2. Withdraw: \n";
			cout << "3. Deposit: \n";
			cout << "4. Exit Menu: \n";
			cin >> option;

			if (option == 4)
			{
				exit;
			}
			else
			{
				switch (option)
				{
				case 1:
					cout << "Balancce is " << pTenAccts[ID].getBalance() << "\n";
					break;
				case 2:
					cout << "Enter amount to deposit: \n";
					cin >> amount;
					pTenAccts[ID].creditTo(amount);
					break;
				case 3:
					cout << "Enter amount to deposit: \n";
					cin >> amount;
					pTenAccts[ID].debitFrom(amount);
					break;
				}
			}
			cout << "Enter 1 to exit: \n";
			cin >> terminateID;
			if (terminateID == 1)
			{
				terminate = 1;
				exit;
			}
			else
				terminateID = 0;
		}
	}
	delete[] pTenAccts;


}