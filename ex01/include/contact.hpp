#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <csignal>

// FUNCTIONS
// move getters and setters and init to cpp
std::string	get_line(std::string type);

class Contact {
public:
	Contact() {
		firstName = "";
		lastName = "";
		nickName = "";
		phoneNumber = "";
		darkestSecret = "";
	}

	~Contact();

	std::string	getFirstName() const {
		return (firstName);
	}
	std::string	getLastName() const {
		return (lastName);
	}
	std::string	getNickName() const {
		return (nickName);
	}
	std::string	getPhoneNumber() const {
		return (phoneNumber);
	}
	std::string	getDarkestSecret() const {
		return (darkestSecret);
	}

	void	setFirstName() {
		firstName = get_line("First name: ");
	}

	void	setLastName() {
		lastName = get_line("Last name: ");
	}

	void	setNickName() {
		nickName = get_line("Nickname: ");
	}
	void	setPhoneNumber() {
		phoneNumber = get_line("Phone number: ");
	}
	void	setDarkestSecret() {
		darkestSecret = get_line("Darkest secret: ");
	}

private:
	std::string		firstName;
	std::string		lastName;
	std::string		nickName;
	std::string 	phoneNumber;
	std::string		darkestSecret;
};

#endif
