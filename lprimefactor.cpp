# include <iostream>

int main()
{
	int x = 1024;
	int j = 0;
	int n = 1;
	for (int i = 1; i <x; i++)
	{
		if (i % n == 0)	
		{	
			std::cout << n << std::endl;
			n++;
		}
	}

}