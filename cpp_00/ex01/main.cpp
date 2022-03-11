#include "./PhoneBook.hpp"

int	main()
{
	PhoneBook	repertory;
	std::string command;
	std::string	asked_info;

	while (1)
	{
		std::cout << "Enter a command :" << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			repertory.setContact();
		}
		else if (command == "SEARCH")
		{
			repertory.getAllContacts(); //créer une méthode get_a_contact
		}
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Unknown command, please try again !";
		std::cout << std::endl;
	}
	return (0);
}