ATM--Cash-Machine--Simulation-Program
=====================================

Simulation of an Automated Teller Machine (ATM) with 500pounds minimum balance

This is a simulation of a Cash Machine used to carry out day to day banking transactions.

This is a simulation of a Cash Machine used to carry out day to day banking transactions.

To use it, just instantiate an object of the Class 'Account' and call on the member functions

to carry out the desired operation. A sample execution is provided in the file Main.

The currency is in Great Britain Pounds, generated using "(static_cast(156))" to use another currency,

just set the value of the number from ASCII - 156 to whichever currency is needed.

The following public member functions can be called:

Account(double); //Constructor void setInitialBalance(double); //Minimum Account Balance double getBalance(); //Supply current Balance void debitAmt(double); //Withdraw from Account void creditAmt(double); //Deposit into Account void setCustomerName(string); //Get and store the customer's name string getCustomerName(); //Retrieve the customer's name void greetings(); //Greet the customer void setResponse(char replied); //Get Answers from User char getResponse(); //Retrieve answers to execute void setAction(char chosen); //Set the transactions that the user wants to perform char getAction(); //Retrieve the supplied Transactions
void execute(double creditAmount, double debitAmount); //Set the

Feel free to correct and edit as needed.

Kindly let me know if there is any bug detected. Thanks
