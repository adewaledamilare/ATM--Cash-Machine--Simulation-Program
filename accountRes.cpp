/*******************************************************/
/* This program is created by Damilare Ezekiel Adewale, /
/* Masters in Computer System Engineering student at the/
/* University of South Wales                            /
/ (Formerly University of Glamorgan)                    /
/  Pontypridd. UK                                       /
/*******************************************************/

#include <iostream>
#include "accounthdr.h"
#include <string>
#include <iomanip>
using namespace std;

//First Initialize A Constructor
Account::Account(double initial)
{
	setInitialBalance(initial);
}

//Store the present customer's name
void Account::setCustomerName(string customer)
{
	if(customer.length()<=30)
	CustomerName = customer;

	while(customer=="")
	{
	cout <<"Sorry, you have not typed any name, please enter your name : ";
	getline(cin,customer);
	}
		
	if(customer.length()>30)
	{
		CustomerName = customer.substr(0,30);
		cout <<"Sorry "<< getCustomerName() <<"\n\nThe maximum length permitted for your name is 30 \n\n";
		cout <<"Therefore I have truncated it to the maximum Dammy permits me to store \n\n";
	}
}

//Retrieve the present customer's name
string Account::getCustomerName()
{
	return CustomerName;
}

//Welcome and greet the Customer
void Account::greetings()
{
	cout << "\nWelcome "<< getCustomerName() << ",...trying to check your present account balance for you......\n\n";
	cout <<"\n........................................................................";
}

//Next Set The Minimum Account Balance
void Account::setInitialBalance(double initial)
{
	
	if(initial>=0)
	InitialBalance = initial;
	
	if(initial<0)
	{
		InitialBalance = 0.00;
		cout<<"\n\nAccount Balance is Less than the minimum required\n"; 
		cout <<"\n\nTherefore I have set it to the minimum account balance";
	}

}

//Allow access for the minimum balance to get displayed when called
double Account::getBalance()
{
	return InitialBalance;
}

//Use this to add money into the account
void Account::creditAmt(double credit)
{
	while((credit<=0.00)||(credit>50000000.00)||(credit==NULL))
	{
		cout<<"Sorry, this amount of money cannot be added, please try again ";
		cin >> credit;
	}
	
	if(credit>0)
	{
	 InitialBalance = credit + getBalance();
	 cout <<"\n\nThank you for your transaction\n \nYour Account has just been credited with : "<<(static_cast<char>(156))<<fixed<<setprecision(2) <<credit;
	 cout <<"\n\nAnd your new Account Balance is : "<<(static_cast<char>(156))<<fixed<<setprecision(2) <<InitialBalance;
	}
		
}

//Use this to withdraw from the account
void Account::debitAmt(double debit)
{
	while(debit>getBalance())
	{
		InitialBalance = getBalance();
		cout<<"\n\nSorry, The amount you requested cannot be withdrawn, please try again ";
		cin >> debit;
	}

	if(debit<getBalance())
	{
		InitialBalance = InitialBalance - debit;
		cout<<"\n\nYour Account has just been debited with : "<<(static_cast<char>(156))<<fixed<<setprecision(2)<<debit;
		cout<<"\n\nYour New Account Balance is : "<<(static_cast<char>(156))<<fixed<<setprecision(2)<<InitialBalance;
	}
}