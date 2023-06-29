#include <iostream>

int	main(int argc, char **argv)
{
	std::string	message;

	if (argc == 1)
		message = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (std::uint32_t i = 1; argv[i]; i++)
			message.append(argv[i]);
		for (std::uint32_t i = 0; message[i]; i++)
			message[i] = toupper(message[i]);
	}
	std::cout << message << std::endl;
	return (0);
}
