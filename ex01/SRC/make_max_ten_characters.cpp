#include <info.hpp>

// This function receives a string and returns the same string
// with up to 10 characters.
// When a string is less than 10 characters, the rest of
// the string is filled with spaces.
// When a string contains of more than 10 characters the tenth
// character is replaced by a dot.
std::string make_max_ten_characters(std::string in)
{
	std::string out;
	uint32_t	len;

	len = in.length();
	if (len > 10)
	{
		for (uint32_t i = 0; i < 10; i++) {
			if (std::isalnum(in[i]) && i < 9)
				out += in[i];
			else
				out += '.';
		}
	}
	else
	{
		for (uint32_t i = 0; i < 10; i++)
		{
			if (std::isalnum(in[i]) && i < len)
				out += in[i];
			else
				out += ' ';
		}
	}
	return (out);
}
