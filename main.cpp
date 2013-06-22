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

int main()
{
    //First Declare and Initialize the needed variables
	double quids, crdAmt, dbAmt;
	char response;
	char choice;
	string custName;
	Account NewAcc(500.00);
	quids = 500.00;

	//Set the Initial Balance to the initialized amount and verify it
	NewAcc.setInitialBalance(quids);
	cout <<"\n\nThis program is developed by Damilare Ezekiel Adewale \n\n";
	cout <<"It is developed using C++ Programming Language \n\n";
	cout <<"It simulates a general day-to-day banking transactions performed by customers \n\n";
	cout <<"It assumes that your initial balance is "<<(static_cast<char>(156))<<"500.00 \n\n";
	cout <<"Feel free to play with it as you like \n\n";
	cout <<"To prevent money laundering, the maximum amount I permit you to add is \n\nFifty Million Pounds, ";
	cout <<"Deposit as much money as you want into your account, \n\n You can also Withdraw as much as you want";
	cout <<"\n\n...then sit, relax, eat chicken and grab a bottle of beer while you feel like a Millionaire!\n\n\n";
	cout << endl;

	cout <<"What is your name please? : ";
	getline(cin, custName);

	NewAcc.setCustomerName(custName);

	NewAcc.greetings();
	cout <<"\n\nOk, I have gotten your account details "<<fixed<<setprecision(2) <<NewAcc.getCustomerName();
	cout<<"\n\nYour Present Balance is "<<(static_cast<char>(156))<<fixed<<setprecision(2) << NewAcc.getBalance();

	//Query Whether the user would like to continue
	cout <<"\n\nWould you like to carry out a transaction? Enter 'Y' or 'N' :";
	cin >> response;
		
	//If the user says No, exit from the program
	if((response =='N')||(response =='n'))
	{
		cout<<"\n\nThank you for using Dammy's Cash Machine\n\n";
		exit(1);
       }
	else
	{
	//If the user says yes, request for the operation the user wants to perform 
	while((response =='Y')||(response =='y'))
	{
	cout <<"\n\nWhich transaction would you like to carry out on your account? ";
	cout <<"\n\nPress A to check your Account Balance \n\n";
	cout <<"Press C to credit your Account \n\n";
	cout <<"Press D to withdraw from your Account \n\n";
	cin >> choice;

	//Perform the requested user's operations
	if((choice=='A')||(choice=='a'))
	{
	cout <<"\n\nYour Present Account Balance is : "<<(static_cast<char>(156))<<fixed<<setprecision(2) << NewAcc.getBalance();
	cout <<endl;
	}
	else
	{
	if((choice=='C')||(choice=='c'))
	{
			cout<<"\n\nEnter the Amount you want to credit your account with : "<<(static_cast<char>(156));
			cin >> crdAmt;
			NewAcc.creditAmt(crdAmt);
			cout <<endl;
	}
	else
	{
	if((choice=='D')||(choice=='d'))
	{
			cout<<"\n\nEnter the Amount you would like to withdraw from your Account : "<<(static_cast<char>(156));
			cin >> dbAmt;
			NewAcc.debitAmt(dbAmt);
			cout <<endl;
		}
	}
	}
	cout << "\n\nWould you like to perform another transaction? :";
	cin >> response;
	    }
	}
}