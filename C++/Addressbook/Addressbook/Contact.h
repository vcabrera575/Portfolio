/*
Vicente Cabrera
Project:Contact.h
Description: Contains information on specific contact
*/

#ifndef CONTACT_H
#define CONTACT_H

#include <string>
using namespace std;

namespace ContactInfo
{
	class Contact
	{
	public:
		// Constructors
		Contact();
		Contact(string firstName, string lastName, string fullAddress, string city, string state, string zip, string email, string birthday, string image);

		// Access
		string getFullName();

		string getFullAddress();
		string getEmail();
		string getBirthday();
		string getImage();

		// Set functions
		void setName(string first, string last);
		void setAddress(string fullAddress, string city, string state, string zip);
		void setEmail(string emailIn);
		void setBirthday(string birthdayIn);
		void setImage(string image);

		// Other functions
		string toString() const;

	protected:
		// TODO: maybe make NAME class
		string firstName;
		string lastName;

		// TODO: maybe make ADDRESS class
		string address;
		string phoneNum;
		string email;
		string birthday;
		string picture;



	};
} // end of namespace






#endif