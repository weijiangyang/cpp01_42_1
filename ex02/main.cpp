#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strPTR = &str;
	std::string &strREF = str;

	std::cout << "Memory address of str: " << &str << std::endl;
	std::cout << "Memory address held by stringPTR: " << strPTR << std::endl;
	std::cout << "Memory address held by stringREF: " << &strREF << std::endl;
	std::cout << std::endl;

	std::cout << "Value of str: " << str << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *strPTR << std::endl;
	std::cout << "Value pointed to by stringREF: "<< strREF << std::endl;

	return (0);

}
