# include <iostream>
# include <stdio.h>
using namespace std;
/*"Write a program that prints the numbers from 1 to 100. But for multiples of three print 
“Fizz” instead of the number and for the multiples of five print “Bang”. For numbers which 
are multiples of both three and five print “FizzBang" */
int main()
{
	int counter = 1; /*iteration counter for fizzbang loop */

	for (;counter <= 100; counter = counter + 1) {
		if ( counter % 3 == 0) {
			if (counter % 5 == 0) {
				cout << "fizzbang" << endl;
			}
			else {
				cout << "fizz" << endl;
			}
		}
		else if (counter % 5 == 0) {
			cout << "bang" << endl;
		}
		else {
		cout << counter << endl;
		}
	}	
} 