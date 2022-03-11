#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <iostream>

class Contact{

	public :

	Contact(void);
	~Contact(void);
	void	setContact(void);
	void	getContact(void) const;

	private :

	static int		_index;
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		phone_number;
	std::string		darkest_secret;
};

#endif