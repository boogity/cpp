# include <iostream>
/*Write a program that asks the user for a number n and prints the sum of the numbers 1 to n
Modify the previous program such that only multiples of three or five are considered in the 
sum, e.g. 3, 5, 6, 9, 10, 12, 15 for n=17
*/
int main()
{
	int num; /*Iteration number, output will count from 1 to num */
	std::cout << "Input a number:" << std::endl;
	std::cin >> num;
	if (num < 0) {
		for (int n = 1; n >= num; n = n-1) {
			while (n % 3 == 0 || n % 5 == 0) {
				std::cout << n << std::endl;
				n--;
			}
		}
	}
	else {
		for (int n = 1; n <= num; n = n+1) {
			while (n % 3 == 0 || n % 5 == 0) {
				std::cout << n << std::endl;
				n++;
			}
		}
	}
}