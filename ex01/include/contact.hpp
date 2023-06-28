#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <csignal>

class Contact {
public:

	Contact();
	~Contact();

	std::string	getFirstName() const;
	std::string	getLastName() const;
	std::string	getNickName() const;
	std::string	getPhoneNumber() const;
	std::string	getDarkestSecret() const;

	void	setFirstName();
	void	setLastName();
	void	setNickName();
	void	setPhoneNumber();
	void	setDarkestSecret();

private:
	std::string		firstName;
	std::string		lastName;
	std::string		nickName;
	std::string 	phoneNumber;
	std::string		darkestSecret;
};

#endif
