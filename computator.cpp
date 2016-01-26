# include <iostream>
# include <string>

/*Write a program that asks the user for a number n and gives him the possibility to choose 
between computing the sum and computing the product of 1,…,n. */

int main()
{
	int n;
	int input;
	std::string action;
	std::cout << "Input an integer, must be greater than 0:" << std::endl;
	std::cin >> input;
	std::cout << "Would you like the sum or the product of 1..n" << std::endl;
	std::cin >> action;
	if (action == "multiply") {
		while (n <= input) {
			std::cout << n * input << std::endl;
			n++;
		}
	}
	if (action == "add") {
		while (n<=input) {
			std::cout << n + input << std::endl;
			n++;
		}
	}
}