#include <iostream>
#include <math.h>

/*write a program that prints ALL prime numbers */

int main()
{
	for (int i = 1; i < 100; i++) {
		for (int j = 1; j*j <= i; j++) {
			if (i % j == 0)
				break;
			else if (j + 1 > sqrt(i)) {
				std::cout << i << " ";
			}
		}
	}
	return 0;
}