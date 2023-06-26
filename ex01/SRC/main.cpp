#include <phonebook.hpp>

Phonebook::Phonebook(const std::string& n, std::uint32_t a) : name(n), age(a) {}

void	Phonebook::sayHello() {
	std::cout << "Hello, my name is " << name << " and I am " << age << " years old" << std::endl;
}

int	main(void)
{
	Phonebook	phonebook("Lucien", 26);
	phonebook.sayHello();
	return (0);
}
