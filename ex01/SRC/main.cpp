#include <phonebook.hpp>

Contact::Contact(const std::string& f, const std::string& l, const std::string& n,
					std::uint32_t p, std::string d) : first_name(f), last_name(l),
					nick_name(n), phone_number(p), darkest_secret(d) {}

void	Contact::sayHello() {
	std::cout << "Hello, my name is " << first_name << " " << last_name << ", some people call me "
	<< nick_name << ". You can reach me on: " << phone_number << ". My darkest secret is: "
	<< darkest_secret << "." << std::endl;
}

int	main(void)
{
	Contact	contact("Han", "van Camps", "Lulhan", 6123978, "pruukske");
	contact.sayHello();
	return (0);
}
