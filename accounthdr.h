/*******************************************************/
/* This program is created by Damilare Ezekiel Adewale, /
/* Masters in Computer System Engineering student at the/
/* University of South Wales                            /
/ (Formerly University of Glamorgan)                    /
/  Pontypridd. UK                                       /
/*******************************************************/

//This program simulates the an ATM Machine/

#include <iostream>
#include <string>
using namespace std;

class Account
{
public:
	Account(double);                //Constructor
	void setInitialBalance(double); //Minimum Account Balance
	double getBalance();            //Supply current Balance
	void debitAmt(double);          //Withdraw from Account
	void creditAmt(double);         //Deposit into Account
	void setCustomerName(string);  //Get and store the customer's name
	string getCustomerName();      //Retrieve the customer's name
	void greetings();              //Greet the customer
private:
	double InitialBalance;
	string CustomerName;
};
