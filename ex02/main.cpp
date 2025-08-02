#include <string>
#include <iostream>

int main(void)
{
	std::string var = "HI THIS IS BRAIN";
	std::string *ptr = &var;
	std::string &ref = var;

	std::cout << "Testing memory adresses:" << std::endl;
	std::cout << "[variable]  \'" << &var << '\'' << std::endl;
	std::cout << "[pointer]   \'" << ptr << '\'' << std::endl;
	std::cout << "[reference] \'" << &ref << '\'' << std::endl;

	std::cout << std::endl;

	std::cout << "Testing values:" << std::endl;
	std::cout << "[variable]  \'" << var << '\'' << std::endl;
	std::cout << "[pointer]   \'" << *ptr << '\'' << std::endl;
	std::cout << "[reference] \'" << ref << '\'' << std::endl;

	return 0;
}
