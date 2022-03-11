#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <iostream>

class Contact{

	public :

	Contact(void);
	~Contact(void);

	int	setFirstName(std::string FirstName);
	int	setLastName(std::string LastName);
	int	setNickname(std::string Nickname);
	int	setPhoneNumber(std::string PhoneNumber);
	int	setDarkestSecret(std::string DarkestSecret);
	int	setIndex(int Index);

	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickname(void) const;
	std::string	getPhoneNumber(void) const;
	std::string	getDarkestSecret(void) const;
	int			getIndex(void) const;

	private :

	int				Index;
	std::string		FirstName;
	std::string		LastName;
	std::string		Nickname;
	std::string		PhoneNumber;
	std::string		DarkestSecret;
};

#endif