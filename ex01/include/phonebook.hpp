#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>

# define LIST_SIZE 8

// FUNCTIONS
std::string make_max_ten_characters(std::string in);
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

// FIX CTRL-D !
class Phonebook {
	public:
		Phonebook () {
			list = new Contact[LIST_SIZE];
			i = 0;
		}

		void	addContact() {
			Contact newContact;
			std::string line;

			newContact.setFirstName();
			newContact.setLastName();
			newContact.setNickName();
			newContact.setPhoneNumber();
			newContact.setDarkestSecret();

			list[i++] = newContact;
		}

		void	printContact() {
			std::string line;
			uint32_t	index;

			for (uint32_t j = 0; j < LIST_SIZE; j++)
			{
				std::cout << "\n" << make_max_ten_characters(std::to_string(j)) << "|"
				<< make_max_ten_characters(list[j].getFirstName()) << "|" <<
				make_max_ten_characters(list[j].getLastName()) << "|" <<
				make_max_ten_characters(list[j].getNickName());
			}
			std::cout << "\n\nIndex of choice: ";
			std::getline(std::cin, line);
			index = std::stoi(line);
			std::cout << "\n-- Contact " << index << " --" << std::endl;
			std::cout << "First name: " << list[index].getFirstName() << std::endl;
			std::cout << "Last name: " << list[index].getLastName() << std::endl;
			std::cout << "Nickname: " << list[index].getNickName() << std::endl;
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
