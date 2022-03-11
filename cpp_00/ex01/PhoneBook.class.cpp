#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->NOfContacts = 0;
	std::cout << "constructror PhoneBook has been called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "destructor PhoneBook has been called" << std::endl;
	return ;
}

void	PhoneBook::setContact(void)
{
	static int	_index = 0;
	std::string	UserEntry;

	++this->NOfContacts;
	if (this->NOfContacts > 8)
		this->NOfContacts = 8;
	if (_index > 7)
		_index = 0;
	std::cout << "Enter your first name please :" << std::endl;
	while (this->Contacts[_index].setFirstName(UserEntry) == 0)
		std::getline(std::cin, UserEntry);
	UserEntry = "";
	std::cout << "Enter your last name please :" << std::endl;
	while (this->Contacts[_index].setLastName(UserEntry) == 0)
		std::getline(std::cin, UserEntry);
	UserEntry = "";
	std::cout << "Enter your nickname please :" << std::endl;
	while (this->Contacts[_index].setNickname(UserEntry) == 0)
		std::getline(std::cin, UserEntry);
	UserEntry = "";
	std::cout << "Enter your phone number please :" << std::endl;
	while (this->Contacts[_index].setPhoneNumber(UserEntry) == 0)
		std::getline(std::cin, UserEntry);
	UserEntry = "";
	std::cout << "Enter your darkest secret please :" << std::endl;
	while (this->Contacts[_index].setDarkestSecret(UserEntry) == 0)
		std::getline(std::cin, UserEntry);
	this->Contacts[_index].setIndex(_index + 1);
	++_index;
	return ;
}

void	PhoneBook::getContact(void) const{
	std::string	UserEntry;
	int index;

	std::cout << "Enter the index of the contact you want to see :" << std::endl;
	std::getline(std::cin, UserEntry);
	std::stringstream(UserEntry) >> index;
	if (index < 1 || index > 8)
	{
		std::cout << "Error, wrong index" << std::endl;
		return ;
	}
	std::cout << this->Contacts[index - 1].getFirstName() << std::endl;
	std::cout << this->Contacts[index - 1].getLastName() << std::endl;
	std::cout << this->Contacts[index - 1].getNickname() << std::endl;
	std::cout << this->Contacts[index - 1].getPhoneNumber() << std::endl;
	std::cout << this->Contacts[index - 1].getDarkestSecret() << std::endl;
	return ;
}

void	PhoneBook::getAllContacts(void) const{
	int i;

	i = -1;
	while (++i < this->NOfContacts)
	{
		if (Contacts[i].getFirstName().length() > 10)
			std::cout << Contacts[i].getFirstName().substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << std::right << Contacts[i].getFirstName();
		std::cout << "|";
		if (Contacts[i].getLastName().length() > 10)
			std::cout << Contacts[i].getLastName().substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << std::right << Contacts[i].getLastName();
		std::cout << "|";
		if (Contacts[i].getNickname().length() > 10)
			std::cout << Contacts[i].getNickname().substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << std::right << Contacts[i].getNickname();
		std::cout << "|";
		std::cout << std::setw(10) << std::right << Contacts[i].getIndex();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	getContact();
	return ;
}

