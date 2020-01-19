/*
Vicente Cabrera
CS 462
Project: Addressbook
Description: Saves a contact form
*/

#include <iostream>
#include <string>
using namespace std;
#include "Contact.h"
using namespace ContactInfo;

void printMenu();
int validateInput(string input);


int main() 
{
	string strInput;
	int MenuOption = 0;

	Contact test;

	cout << "CONTACT: \n" << test.toString() << endl << endl;


	do
	{
		printMenu();
		cout << endl << "Select an option: ";
		cin >> strInput;
		MenuOption = validateInput(strInput);

		cout << endl;
	} while (MenuOption != 5);
	   	  

	cout << "\n\n";
	system("pause");
	return 0;
}

int validateInput(string input)
{
	int ans = 0;

	try
	{
		ans = stoi(input);
	}
	catch (const std::invalid_argument& ia)
	{
		ans = -1;
	}

	return ans;
}


void doOption(int option)
{
	switch (option) {
		case 1:
		{
			cout << "Add Contact\n\n";
			//addContact();// Book);
			break;
		}
		case 2:
		{

			break;
		}
		case 3:
		{

			break;
		}
		case 4:
		{

			break;
		}
		case 5: 
		{

			break;
		}
		default:
		{
			cout << "ERROR: Non-valid input value" << endl;
		}
	}

}

void printMenu() 
{
	cout << "1. Add a new Contact\n";
	cout << "2. Find out how many Contacts are in the AddressBook\n";
	cout << "3. Print out all Contacts\n";
	cout << "4. Delete a Contact\n";
	cout << "5. Exit\n\n";
}
