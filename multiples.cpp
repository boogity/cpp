#include <iostream>

/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000. */

int main()
{
	int sum = 0;
	int counter = 0;
	for (int n = 0; n <1000; n++) {
		
		if (n % 3 == 0 || n % 5 == 0) {
			sum = n + sum;
			std::cout << "Number to add: " << n << std::endl;
			std::cout << "Total sum is: " << sum << std::endl;
		}
		
	}
}