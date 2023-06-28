#include <phonebook.hpp>

void handleSIGTSTP(int signal) {
	(void)signal;
}

int	main(void)
{
    std::string line;
	Phonebook	pb;

	std::signal(SIGTSTP, handleSIGTSTP);
	while (1)
	{
		std::cout << "Choose one of the following commands: ADD / SEARCH / EXIT" << std::endl;
		std::getline(std::cin, line);
		if (std::cin.eof())
			break ;
		if (line.compare("ADD") == 0)
			pb.addContact();
		else if (line.compare("SEARCH") == 0)
		{
			if (pb.printContact() == false)
				return (0);
		}
		else if (line.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Invalid command. ";
	}
	return (0);
}
