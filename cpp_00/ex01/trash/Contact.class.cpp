#include <iostream>
#include "./Contact.class.hpp"

Contact::Contact(void)
{
	std::cout << "constructor Contact has been called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "constructor Contact has been called" << std::endl;
	return ;
}

void	Contact::setContact(void)
{
	std::cout << "setContact has been called" << std::endl;
	this->_index += 1;
	if (this->_index == 9)
		this->_index = 0;
	std::cout << "Enter your first name please." << std::endl;
	while (this->first_name.length == 0)
		std::getline(std::cin, this->first_name);
	std::cout << "Enter your last name please." << std::endl;
	while (this->last_name.length == 0)
		std::getline(std::cin, this->last_name);
	std::cout << "Enter your nickname please." << std::endl;
	while (this->nickname.length == 0)
		std::getline(std::cin, this->nickname);
	std::cout << "Enter your phone number please." << std::endl;
	while (this->phone_number.length == 0)
		std::getline(std::cin, this->phone_number);
	std::cout << "Enter your darkest secret please." << std::endl;
	while (this->darkest_secret.length == 0)
		std::getline(std::cin, this->darkest_secret);
	return ;
}

void	Contact::getContact(void)
{
	std::cout << "getContact has been called" << std::endl << std::endl;
	std::cout << setw(10) << right << this.index << "|";
	if (this->first_name.length() > 10)
		std::cout << this->first_name.substr(0, 9) << ".";
	else
		std::cout << setw(10) << right << this->first_name;
	std::cout << "|";
	if (this->last_name.length() > 10)
		std::cout << this->last_name.substr(0, 9) << ".";
	else
		std::cout << setw(10) << right << this->last_name;
	std::cout << "|";
	if (this->nickname.length() > 10)
		std::cout << this->nickname.substr(0, 9) << ".";
	else
		std::cout << setw(10) << right << this->nickname;
	std::cout << std::end;
	return ;
}

Contact::_index = 0;
