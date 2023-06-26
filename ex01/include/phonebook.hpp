#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>

class Phonebook {
	private:
		std::string		name;
		std::uint32_t	age;

	public:
		Phonebook(const std::string& n, std::uint32_t a);
		void sayHello();
};

#endif
