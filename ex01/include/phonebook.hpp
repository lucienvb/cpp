#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>

class Contact {
	private:
		std::string		first_name;
		std::string		last_name;
		std::string		nick_name;
		std::uint64_t	phone_number;
		std::string		darkest_secret;

	public:
		Contact(const std::string& f, const std::string& l, const std::string& n,
				std::uint32_t p, std::string d);
		void sayHello();
};

//class Phonebook {
//	private:
//		Contact	list[8];
//
//	public:
//
//
//};

#endif
