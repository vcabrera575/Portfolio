/*
Vicente Cabrera
CS 462
Project: Addressbook
Description: Saves a contact form
*/

#include <iostream>
using namespace std;

void printMenu();

int main() 
{
	cout << "Hello world!" << endl;

	int MenuOption = 0;


	do
	{
		printMenu();
		cout << endl << endl << "Select an option: ";
		cin >> MenuOption;
	} while (MenuOption != 5);
	   	  

	cout << "\n\n";
	system("pause");
	return 0;
}

void printMenu() 
{
	cout << "1. Add a new Contact\n";
	cout << "2. Find out how many Contacts are in the AddressBook\n";
	cout << "3. Print out all Contacts\n";
	cout << "4. Delete a Contact\n";
	cout << "5. Exit\n\n";
}
