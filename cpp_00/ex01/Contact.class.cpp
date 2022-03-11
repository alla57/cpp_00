#include <iostream>
#include "./Contact.class.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

int	Contact::setFirstName(std::string FirstName){
	if (FirstName.length() == 0)
		return (0);
	this->FirstName = FirstName;
	return (1);
}

int	Contact::setLastName(std::string LastName){
	if (LastName.length() == 0)
		return (0);
	this->LastName = LastName;
	return (1);
}

int	Contact::setNickname(std::string Nickname){
	if (Nickname.length() == 0)
		return (0);
	this->Nickname = Nickname;
	return (1);
}

int	Contact::setPhoneNumber(std::string PhoneNumber){
	if (PhoneNumber.length() == 0)
		return (0);
	this->PhoneNumber = PhoneNumber;
	return (1);
}

int	Contact::setDarkestSecret(std::string DarkestSecret){
	if (DarkestSecret.length() == 0)
		return (0);
	this->DarkestSecret = DarkestSecret;
	return (1);
}

int	Contact::setIndex(int Index){
	if (Index < 1)
		return (0);
	this->Index = Index;
	return (1);
}

std::string		Contact::getFirstName(void) const{
	return (this->FirstName);
}

std::string		Contact::getLastName(void) const{
	return (this->LastName);
}

std::string		Contact::getNickname(void) const{
	return (this->Nickname);
}

std::string		Contact::getPhoneNumber(void) const{
	return (this->PhoneNumber);
}

std::string		Contact::getDarkestSecret(void) const{
	return (this->DarkestSecret);
}

int	Contact::getIndex(void) const{
	return (this->Index);
}
