// Practice Programs 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
Powers of numbers can be calculated by multiplying the number by itself for as many times as the value of the exponent. 
For example, 2 raised to the power 4 can be calculated by multiplying 2 by itself 4 times to get 16. 
Write a program that:
1. inputs a double as the base number and an int as the exponent;
2. multiplies the base number by itself using a loop that repeats for the number of times in the int;
3. outputs the exponential value calculated.
Use an if statement for the special case where the output is 1 if the int value is 0. 
For a more challenging version, deal with the case where the exponent is negative.
*/

#include <iostream>
#include <cmath> // this line is needed to use the math function POW
using namespace std;

int main()
{

	double base, ans = 1; 
	int exponent;

	cout << "This program will calculate the power of any number that you enter.." << endl; // displays message in console
	cout << "Please enter your base number" << endl; // displays message in console
	cin >> base;
	cout << "Thank you" << endl; // displays message in console
	cout << "Please enter the Exponent" << endl; // displays message in console
	cin >> exponent;

	if (exponent == 0) // runs if the user enters an exponent of 0
	{
		cout << "The answer is " << 1 << " because the exponent value entered was 0" << endl; // displays message in console
	}
	else if (exponent < 0) // runs if the user enters an exponent smaller than 0 (a negative number)
	{
		ans = pow(base, exponent); // This a a little bit of a cheat as i didint inted on using the POW function o_O
	}
	else // runs if non of the above has been triggered
	{
		for (int i = 0; i < exponent; ++i) // a loop that will execute until i is bigger than the exponent entered by the user
		{
			ans *= base; // takes ans and multiplys it by base and then setting its value to the answer of the equation
		}
		cout << "The answer is " << ans << endl; // displays message in console
	}
	return 0;
}


