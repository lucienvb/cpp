#include <info.hpp>

Contact::Contact() {
    firstName = "";
    lastName = "";
    nickName = "";
    phoneNumber = "";
    darkestSecret = "";
}

Contact::~Contact() {
}

std::string	Contact::getFirstName() const {
	return (firstName);
}

std::string	Contact::getLastName() const {
	return (lastName);
}

std::string	Contact::getNickName() const {
	return (nickName);
}

std::string	Contact::getPhoneNumber() const {
	return (phoneNumber);
}

std::string	Contact::getDarkestSecret() const {
	return (darkestSecret);
}

void	Contact::setFirstName() {
	firstName = get_line("First name: ");
}

void	Contact::setLastName() {
	lastName = get_line("Last name: ");
}

void	Contact::setNickName() {
	nickName = get_line("Nickname: ");
}

void	Contact::setPhoneNumber() {
	phoneNumber = get_line("Phone number: ");
}

void	Contact::setDarkestSecret() {
	darkestSecret = get_line("Darkest secret: ");
}
