/*In this second programming assignment you will implement a simple bank 
application. Your bank application will support the following features:
� Open a new account, i.e. register a new user. The information stored is: first name, 
last name, address, phone number, and birth date. The account is also assigned a 
unique account number. 
� Close an account. All the information stored about the particular customer is 
deleted. 
� Deposit a given amount to an account. The user has to provide the account 
number.
� Withdraw a given amount from an account. The user has to provide the account 
number and at no time can the balance of the account be less than zero.
� Display account information when given the account number.
� Print all the accounts sorted on customer account number, or the amount in the 
account.
� Search and display the accounts based on customer last name, or phone number.
� Save all the accounts to a file and also allow to read in from a file
REQUIREMENTS
a) Your code has to be:
- well-structured (indention, etc)
- well-commented(at the top of the file, before each function, and for
�important� parts of the code)
- define variables, constants, etc following the programming style suggested
by the book
b) No global variables
c) Each operation of the application has to be handled by a separate function
d) All functions have to appear after main
e) Your program should be able to handle any user input. In case the user input is
wrong you should print an error message before displaying the menu again.
f) To store the customer information you can choose to use either a struct or a class.
To store all the accounts you can choose to use an array or a Vector. For the strings
you can use either a c-string or the string class. You are also free to use exception
handling.*/
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

//Global Constant
const int MAXACCT= 500;
//Function Prototypes
bool ValidOperation(char);


//The structure or Class to hold all relevant values for an account
struct Date
{
	int day;
	int month;
	int year;
};
struct AccountInfo
{
	char firstName[150];
	char lastName[150];
	char address[300];
	char phoneNo[30];
	Date birthDay;
	int acctNo;//If less than 18 years, unable to open account
};


//The main function
int main()
{
	char op;
	cout << "\nMENU";
	cout << "\no:OPEN ACCOUNT";
	cout << "\nc:CLOSE ACCOUNT";
	cout << "\nd:DEPOSIT MONEY";
	cout << "\nw:WITHDRAW MONEY";
	cout << "\na:ACCOUNT INFO";
	cout << "\np:PRINT ALL ACCOUNTS(*must have admistrator key)";
	cout << "\ns:SEARCH FOR ACCOUNT";
	cout << "\nq:QUIT";
	cout << "\nEnter an operation:";
	cin >> op;
	while (op != 'q' && op != 'Q')
	{
		while (!ValidOperation(op))
		{
			cout << "Invalid Operation. Please enter a valid operation:";
			cin >> op;
		}
	}
	return 0;
}

//The function to print the menu
bool ValidOperation(char operation)
{
		if(operation == 'o'||operation == 'O')
			return true;
		else if (operation == 'c' || operation == 'C')
			return true;
		else if (operation == 'd' || operation == 'D')
			return true;
		else if (operation == 'w' || operation == 'W')
			return true;
		else if (operation == 'a' || operation == 'A')
			return true;
		else if (operation == 'p' || operation == 'P')
			return true;
		else if (operation == 's' || operation == 'S')
			return true;
		else
			return false;
}