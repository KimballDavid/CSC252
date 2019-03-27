#include"Account.h"


int main()
{
	CSC252HW1::Account david("David", "Kimball");
	david.creditTo(10000.0);
	david.debitFrom(500.0);
	
	// using our custom namespace
	using CSC252HW1::Account;

	Account myAcct("John", "Doe");
	myAcct.creditTo(100.0);
	myAcct.debitFrom(50.0);

	using std::cout;
	// exercising acccessor
	cout << "Balancce is " << myAcct.getBalance() << "\n";
	
	// exercising mutator
	myAcct.setAccountId(786786786);

	// dynamically allocate account object on heap
	Account *pAct = nullptr;
	pAct = new Account("Heap", "Man");
	pAct ->creditTo(10000.0);
	pAct ->debitFrom(500.0);

	// deallocate Heap object
	delete pAct;

	Account *pTenAccts = new Account[10];
	delete[] pTenAccts;
	return 0;
}