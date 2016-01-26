# include <iostream>
# include <stdio.h>
using namespace std;

/*In this challenge, write a program that takes in three arguments, a start temperature (in Celsius), 
an end temperature (in Celsius) and a step size. Print out a table that goes from the start temperature 
to the end temperature, in steps of the step size; you do not actually need to print the final end 
temperature if the step size does not exactly match. You should perform input validation: do not accept 
start temperatures less than a lower limit (which your code should specify as a constant) or higher 
than an upper limit (which your code should also specify). You should not allow a step size greater than 
the difference in temperatures.*/

int main()
{
	float low_temp = 0;
	float max_temp = 0;
	float step = 0;
	cout << "Please provide a lower temperature limit in degrees celsius(min:0)" << endl;
	cin >> low_temp; /*low start temp */
	if (low_temp > 0 && low_temp < 1000) {
		cout << "Please provide a high temp limit, (max:1000)" << endl;
		cin >> max_temp; /*high end temp does not have to be printed it step doesn't evenly match */
		if (max_temp > low_temp && max_temp <= 1000) {
			cout << "Please provide the degree stepping you'd like in degrees C (IE 1, 2, etc)" << endl;
			cin >> step; /*degree stepping will be increase value from min temp to max temp */
			if (step < max_temp - low_temp) {
				for (float a = low_temp; a <= max_temp; a = a + step) {
					cout << a << " degrees celsius." << endl;
				}
			}
			else {
				cout << "Your step value is too high, must be lower than max - min." << endl;
			}
		}
		else {
			cout << "That was an incorrect input. GOOD DAY SIR." << endl;

		}
	}
	else {
		cout << "That was an incorrect input. GOOD DAY SIR." << endl;
	}
}