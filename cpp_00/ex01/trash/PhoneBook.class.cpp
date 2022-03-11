#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "constructror PhoneBook has been called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "destructor PhoneBook has been called" << std::endl;
	return ;
}

void	PhoneBook::getAllContacts(void) const {

	int	index;

	index = 0;
	while (++index < 9)
		this->contacts[index].getContact;
}
