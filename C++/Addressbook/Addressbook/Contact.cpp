#include "Contact.h"


namespace ContactInfo
{
	// Constructors
	Contact::Contact()
	{
		setCategory("Friend");
		setName("Jane", "Doe");
		setAddress("555 fake lane", "City", "St", "55555");
		setEmail("jane.doe@fakedomain.com");
		setBirthday("Jan 1");
		setImage("picture.jpg");
	}

	Contact::Contact(string categoryIn, string firstName, string lastName, string address, string city, string state, string zip, string email, string birthday, string image)
	{
		setCategory(categoryIn);
		setName(firstName, lastName);
		setAddress(address, city, state, zip);
		setEmail(email);
		setBirthday(birthday);
		setImage(image);
	}

	// Access
	string Contact::getCategory()
	{
		return category;
	}

	string Contact::getFullName()
	{
		return(firstName + " " + lastName);
	}
	
	string Contact::getFullAddress()
	{
		return(address);
	}

	string Contact::getEmail()
	{
		return(email);
	}

	string Contact::getBirthday()
	{
		return(birthday);
	}

	string Contact::getImage()
	{
		return(picture);
	}

	// Set functions
	void Contact::setCategory(string categoryIn)
	{
		category = categoryIn;
	}

	void Contact::setName(string first, string last)
	{
		firstName = first;
		lastName = last;
	}

	void Contact::setAddress(string fullAddress, string city, string state, string zip)
	{
		address = fullAddress + "\n" + city + ", " + state + " " + zip;
	}

	void Contact::setEmail(string emailIn)
	{
		email = emailIn;
	}

	void Contact::setBirthday(string birthdayIn)
	{
		birthday = birthdayIn;
	}

	void Contact::setImage(string image)
	{
		picture = image;
	}

	// Other functions
	string Contact::toString() const
	{
		return (category + "\n" + firstName + " " + lastName + "\n" + address + "\n" + phoneNum + "\n" +
			email + "\n" + birthday + "\n" + picture + "\n");
	}

	string Contact::toStringFile() const
	{
		return (category + "," + firstName + "," + lastName + "," + address + "," + phoneNum + "," +
			email + "," + birthday + "," + picture + "\n");
	}
}