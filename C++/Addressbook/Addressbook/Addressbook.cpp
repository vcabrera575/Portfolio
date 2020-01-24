/*
Vicente Cabrera
Project: Addressbook
Description: Saves a contact form
*/

#include <iostream>
#include <string>
using namespace std;

#include "Contact.h"
using namespace ContactInfo;

#include "Node.h"

void doOption(int option);
int validateInput(string input);
void printMenu();


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
		doOption(MenuOption);

		cout << endl;
	} while (MenuOption != 5);
	   	  

	cout << "\n\n";
	system("pause");
	return 0;
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
			cout << "Count contacts\n\n";
			//countContacts();
			break;
		}
		case 3:
		{
			cout << "Print all Contacts\n\n";
			//printAllContacts();
			break;
		}
		case 4:
		{
			cout << "Delete a contact\n\n";
			//deleteContact();
			break;
		}
		case 5: 
		{
			cout << "Exit\n";
			break;
		}
		default:
		{
			cout << "ERROR: Non-valid input value" << endl;
		}
	}

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

void printMenu() 
{
	cout << "1. Add a new Contact\n";
	cout << "2. Find out how many Contacts are in the AddressBook\n";
	cout << "3. Print out all Contacts\n";
	cout << "4. Delete a Contact\n";
	cout << "5. Exit\n\n";
}
