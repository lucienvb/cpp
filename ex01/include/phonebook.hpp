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
		Phonebook () {
			list = new Contact[LIST_SIZE];
			i = 0;
		}

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

			list[i++] = newContact;
		}

		void	printContact() {
			std::string line;
			uint32_t	index;

			for (uint32_t j = 0; j < LIST_SIZE; j++)
			{
				std::cout << "\n" << j << "\t|\t" << list[j].getFirstName() << "\t|\t" <<
				list[j].getLastName() << "\t|\t" << list[j].getNickName() << "\n\n";
			}
			std::cout << "Index of choice: ";
			std::getline(std::cin, line);
			index = std::stoi(line);
			std::cout << "\n-- Contact " << index << " --" << std::endl;
			std::cout << "First name: " << list[index].getFirstName() << std::endl;
			std::cout << "Last name: " << list[index].getLastName() << std::endl;
			std::cout << "Nick name: " << list[index].getNickName() << std::endl;
			std::cout << "Phone number: " << list[index].getPhoneNumber() << std::endl;
			std::cout << "Darkest secret: " << list[index].getDarkestSecret() << std::endl << std::endl;
		}

//		void	sayName() {
//			std::cout << "The first name of the first contact is: " << newContact.firstName << std::endl;
//		}

	private:
		Contact	*list;
		int32_t	i;
};

#endif
