#include <phonebook.hpp>

// NOT WORKING
// CTRL-D
std::string	get_line(std::string type)
{
	std::string line;

	while (1)
	{
		std::cout << type;
		std::getline(std::cin, line);
		if (!line[0])
		{
			std::cout << "A contact cannot have empty field, fill in please" << std::endl;
			continue ;
		}
		break ;
	}
	return (line);
}
