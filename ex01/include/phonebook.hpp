#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <csignal>
#include <contact.hpp>

# define LIST_SIZE 8

class Phonebook {
public:

	Phonebook();
	~Phonebook();

	void	addContact();
	bool	printContact();

private:
    Contact	list[LIST_SIZE];
	int32_t	i;
};

#endif
