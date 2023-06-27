#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>

# define LIST_SIZE 8

class Contact {
	public:
		Contact() {
			firstName = "";
			lastName = "";
			nickName = "";
			phoneNumber = "";
			darkestSecret = "";
		}

		void	sayHello() {
			std::cout << "Hello, my name is " << firstName << " " << lastName << ", some people call me "
					  << nickName << ". You can reach me on: " << phoneNumber << ". My darkest secret is: "
					  << darkestSecret << "." << std::endl;
		};

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

		void	setFirstName(const std::string& fName) {
			firstName = fName;
		}
		void	setLastName(const std::string& lName) {
			lastName = lName;
		}
		void	setNickName(const std::string& nName) {
			nickName = nName;
		}
		void	setPhoneNumber(const std::string& phone) {
			phoneNumber = phone;
		}
		void	setDarkestSecret(const std::string& secret) {
			darkestSecret = secret;
		}

	private:
		std::string		firstName;
		std::string		lastName;
		std::string		nickName;
		std::string 	phoneNumber;
		std::string		darkestSecret;
};

class Phonebook {
	public:
//	Phonebook () {
//		list = new Contact[LIST_SIZE];
//	}

		void	addContact() {
			Contact newContact;
			std::string line;

			std::cout << "First name: ";
			std::getline(std::cin, line);
			newContact.setFirstName(line);

			std::cout << "Last name: ";
			std::getline(std::cin, line);
			newContact.setLastName(line);

			std::cout << "Nick name: ";
			std::getline(std::cin, line);
			newContact.setNickName(line);

			std::cout << "Phone number: ";
			std::getline(std::cin, line);
			newContact.setPhoneNumber(line);

			std::cout << "Darkest secret: ";
			std::getline(std::cin, line);
			newContact.setDarkestSecret(line);

			std::cout << "\n-- Contact 1 --" << std::endl;
			std::cout << "First name: " << newContact.getFirstName() << std::endl;
			std::cout << "Last name: " << newContact.getLastName() << std::endl;
			std::cout << "Nick name: " << newContact.getNickName() << std::endl;
			std::cout << "Phone number: " << newContact.getPhoneNumber() << std::endl;
			std::cout << "Darkest secret: " << newContact.getDarkestSecret() << std::endl << std::endl;
//			list[0] = newContact;
		}
//		void	printContact() {
//			std::cout << "\n-- Contact 1 --" << std::endl;
//			std::cout << "First name: " << list[0].getFirstName() << std::endl;
//			std::cout << "Last name: " << newContact.getLastName() << std::endl;
//			std::cout << "Nick name: " << newContact.getNickName() << std::endl;
//			std::cout << "Phone number: " << newContact.getPhoneNumber() << std::endl;
//			std::cout << "Darkest secret: " << newContact.getDarkestSecret() << std::endl << std::endl;
//		}

//		void	sayName() {
//			std::cout << "The first name of the first contact is: " << newContact.firstName << std::endl;
//		}


};

#endif
