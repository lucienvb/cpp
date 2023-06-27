#include <phonebook.hpp>

std::string make_max_ten_characters(std::string in)
{
	std::string out;
	for (uint32_t i = 0; i < 10; i++)
	{
		if (std::isalnum(in[i]) && i < 9)
			out += in[i];
		else if (i < 9)
			out += ' ';
		else if (std::isalnum(in[i]))
			out += '.';
		else
			out += ' ';
	}
	return (out);
}
