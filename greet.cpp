# include <iostream>
# include <string>

/* Greets by name Bob and Alice, generic greeting for all others. */

int main()
{
	std::string name;
	std::cout << "What is your name?" << std::endl;
	std::cin >> name;
	if (name == "Alice" || name == "Bob") {
	std::cout << "Hello, " << name <<"."<<std::endl;
	}
	else {
		std::cout << "Sup bitch." << std::endl;
	}
}