#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <csignal>
#include <contact.hpp>

# define LIST_SIZE 8

// FUNCTIONS
std::string make_max_ten_characters(std::string in);

class Phonebook {
	public:

		Phonebook();
		~Phonebook();

		void	addContact() {
			Contact newContact;
			std::string line;

			newContact.setFirstName();
			newContact.setLastName();
			newContact.setNickName();
			newContact.setPhoneNumber();
			newContact.setDarkestSecret();

			if (i == LIST_SIZE)
				i = 0;
			list[i++] = newContact;
		}

		bool	printContact();

	private:
		Contact	list[LIST_SIZE];
		int32_t	i;
};

#endif
