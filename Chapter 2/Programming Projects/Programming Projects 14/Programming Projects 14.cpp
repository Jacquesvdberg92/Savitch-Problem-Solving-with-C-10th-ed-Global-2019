// Programming Projects 14.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
Computers normally treat time as the number of seconds from an arbitrary starting point called an epoch. 
Write a C++ program that asks the user for the current hour of the day (from 0 to 23), 
the current minute of the hour (from 0 to 59) and the current second of the minute (from 0 to 59). 
Use the user’s input to calculate the number of seconds since midnight that their time represents. 
If the user enters an invalid input, like 67 minutes for the current minutes in the hour, then ask them for that value again until they enter a correct value. 
Sample input and output is shown below.

Enter the hour of the day: 3
Enter the minutes of the hour: 45
Enter the seconds passed in the current minute: -5
Enter the seconds passed in the current minute: 90
Enter the seconds passed in the current minute: 3
The time in seconds since midnight is: 45903
*/

#include <iostream>
using namespace std;

bool loop = true, loopMain = true;
char test;

int hours = 0, minutes = 0, seconds = 0;

int main()
{
	cout << "Welcome" << endl;
	cout << "This program wil calculate the thime is seconds" << endl;
	do
	{
		do // checks user input
		{
			cout << "Enter the hour of the day: " << endl;
			cin >> hours;
		} while (hours < 0 || hours > 23);

		do // checks user input
		{
			cout << "Enter the minutes of the hour: " << endl;
			cin >> minutes;
		} while (minutes < 0 || minutes > 59);

		do // checks user input
		{
			cout << "Enter the seconds passed in the current minute: " << endl;
			cin >> seconds;
		} while (seconds < 0 || seconds > 59);

		cout << "The time in seconds since midnight is: " << (seconds + (minutes * 60) + (hours * 3600)) << endl;

		// all of the following is a sanity chech as i think the calculation in the example is incorrect!!
		cout << "The time in seconds to midnight is: " << ((60 - seconds) + ((59 - minutes)*60) + ((23 - hours)*3600)) << endl;
		cout << "Total amount of seconds in a day is " << (24 * 3600) << endl;
		cout << "in our calculation (they should match)" << ((seconds + (minutes * 60) + (hours * 3600)) + ((60 - seconds) + ((59 - minutes) * 60) + ((23 - hours) * 3600))) << endl;
		cout << endl;

		do
		{
			cout << "would you like to try again? (Y/N)" << endl;
			cin >> test;
			if (test == 'Y' || test == 'y' || test == 'N' || test == 'n')
			{
				if (test == 'N' || test == 'n')
				{
					loop = false;
					loopMain = false;
				}
				else
				{
					loop = false;
					loopMain = true;
				}
			}
			else
			{
				cout << "!!! Invalid Input !!! Please try again!!!" << endl;
				cout << endl;
				loop = true;
			}
		} while (loop == true);

	} while (loopMain == true);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
