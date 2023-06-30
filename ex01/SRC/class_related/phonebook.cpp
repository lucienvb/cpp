#include <info.hpp>

Phonebook::Phonebook(): i(0) {}

Phonebook::~Phonebook() {}

void    Phonebook::addContact() {
    Contact newContact;
    std::string line;

	std::cout << "\n";
    newContact.setFirstName();
    newContact.setLastName();
    newContact.setNickName();
    newContact.setPhoneNumber();
    newContact.setDarkestSecret();
	std::cout << "\n";
    if (i == LIST_SIZE)
        i = 0;
    list[i++] = newContact;
}

bool	Phonebook::printContact() {
	std::string line;
	uint32_t	index;

	for (uint32_t j = 0; j < LIST_SIZE; j++)
	{
		std::cout << "\n" << make_max_ten_characters(std::to_string(j)) << "|"
				  << make_max_ten_characters(list[j].getFirstName()) << "|" <<
				  make_max_ten_characters(list[j].getLastName()) << "|" <<
				  make_max_ten_characters(list[j].getNickName());
	}
	while (1)
	{
		std::cout << "\n\nIndex of choice: ";
		std::getline(std::cin, line);
		if (std::cin.eof())
		{
			std::cout << "\n";
			return (false);
		}
		if (line.length() > 2 || !std::isdigit(line[0]))
		{
			std::cout << "Invalid input. ";
			continue ;
		}
		index = std::stoi(line);
		if (index > 7)
			std::cout << "Invalid index. ";
		else
			break ;
	}
	std::cout << "\n-- Contact " << index << " --" << std::endl;
	std::cout << "First name: " << list[index].getFirstName() << std::endl;
	std::cout << "Last name: " << list[index].getLastName() << std::endl;
	std::cout << "Nickname: " << list[index].getNickName() << std::endl;
	std::cout << "Phone number: " << list[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << list[index].getDarkestSecret() << std::endl << std::endl;
	return (true);
}
