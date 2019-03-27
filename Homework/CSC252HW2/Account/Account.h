#pragma once
#include<string>
#include<iostream>

namespace CSC252HW1
{
	using std::string;
	
	
	class Account
	{

	public:
		Account();
		Account(string, string);
		~Account();

		// behaviors of object
		void creditTo(double);
		bool debitFrom(double);

		double getBalance() const;
		// mutator - setter
		void setAccountId(long);
		
		// functions to set name of Account object
		void setFName(const std::string& s);
		void setLName(const std::string& s);
	private:

		// attribute of object
		long m_accountId = 0;
		string m_fname = "";
		string m_lname = "";
		double m_balance = 0.0;
		size_t size = 10;
	};
}