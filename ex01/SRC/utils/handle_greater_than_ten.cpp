#include <info.hpp>

// This function receives a string and returns the same string
// with up to 10 characters.
// When a string is less than 10 characters, the rest of
// the string is filled with spaces.
// When a string contains of more than 10 characters the tenth
// character is replaced by a dot.
std::string handle_greater_than_ten(std::string str)
{
	if (str.length() > 10)
		str = str.substr(0, 9) + ".";
	return (str);
}
