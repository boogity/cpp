# include <iostream>

int x, y, sum, i;

int main()
{
	x = 0;
	y = 0;
	sum = 0;
	for (i = 1; i <= 4000000;)
	{
		y = x;
		x = i;
		i = x + y;
		if (x % 2 == 0) {
			sum = sum + x;
			std::cout << sum << std::endl;
		}
	}
}