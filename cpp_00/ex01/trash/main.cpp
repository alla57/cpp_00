#include "./PhoneBook.hpp"

int	main()
{
	PhoneBook	repertory;
	std::string command;
	std::string	asked_info;
	int			i;

	i = 0;
	while (1)
	{
		std::cout << "Enter a command :" << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			repertory.contacts[i].setContact();
		}
		else if (command == "SEARCH")
		{
			repertory.getAllContacts();
		}
		else if (command == "EXIT")
			break ;
		std::cout << std::endl;
	}
	return (0);
}