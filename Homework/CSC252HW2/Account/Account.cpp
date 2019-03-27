#include"account.h"

namespace CSC252HW1
{
	Account::Account()
	{
	}
	Account::Account(string fn, string ln)
	{
		m_fname = fn;
		m_lname = ln;
	}

	Account::~Account()
	{
	}

	void Account::creditTo(double c)
	{
		using std::cout;
		if (c > 0)
		{
			m_balance += c;
		}
		else
			cout << "Cannot credit negative amount \n";
	}
	
	bool Account::debitFrom(double d)
	{
		bool retval = false;
		if (m_balance >= d)
		{
			m_balance -= d;
			retval = true;
		}
		return retval;
	}
	// display balance of Account object
	double Account::getBalance() const
	{
		return m_balance;
	}
	// set Account object ID
	void Account::setAccountId(long l1)
	{
		if (m_accountId == 0)
		{
			m_accountId = l1;
		}
	}

	// functions for setting name in Account objects
	void Account::setFName(const std::string& s)
	{
		this->m_fname = s;
	}

	void Account::setLName(const std::string& s)
	{
		this->m_lname = s;
	}
};