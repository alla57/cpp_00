#ifndef PHONE_BOOK_CLASS_HPP
# define PHONE_BOOK_CLASS_HPP
# include "Contact.class.hpp"

class PhoneBook{

	public :

	Contact contacts[8]; //mettre dans private pour tester si les constructors se lancent au demarrage de main()

	PhoneBook(void);
	~PhoneBook(void);

	void	getAllContacts(void) const;

	private :
};

#endif