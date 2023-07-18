#include <info.hpp>

void handleSIGTSTP(int signal) {
	(void)signal;
}

void handleSIGQUIT(int signal) {
	(void)signal;
}

int	main(void)
{
    std::string line;
	Phonebook	pb;

	std::signal(SIGTSTP, handleSIGTSTP);
	std::signal(SIGQUIT, handleSIGQUIT);
	while (1)
	{
		std::cout << "Choose a command (ADD / SEARCH / EXIT): ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			break ;
		if (line == "ADD")
			pb.addContact();
		else if (line == "SEARCH")
		{
			if (pb.printContact() == false)
				return (0);
		}
		else if (line == "EXIT")
			break ;
		else
			std::cout << "Invalid command. ";
	}
	return (0);
}
