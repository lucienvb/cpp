#include <phonebook.hpp>

#include <iostream>
#include <string>

int	main(void)
{
    std::string line;
	Phonebook	pb;

//	Contact	contact("Han", "van Camps", "Lulhan", "0612397813", "pruukske");
	while (1)
	{
		std::cout << "Choose one of the following commands: ADD / SEARCH / EXIT" << std::endl;
		std::getline(std::cin, line);
		if (line.compare("ADD") == 0)
			pb.addContact();
//			contact.sayHello();
		else if (line.compare("SEARCH") == 0)
			pb.printContact();
//			std::cout << "SEARCH";
		else if (line.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Invalid command. ";
	}
	return (0);
}
