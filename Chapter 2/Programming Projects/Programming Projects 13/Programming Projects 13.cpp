// Programming Projects 13.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
Write a program to calculate the slope between two points x1, y1 and x2, y2. The points should be entered as four double values in the order x1, y1, x2, and y2.
The formula to calculate the slope, m, between two points is
m = (y2 - y1) / (x2 - x1)
Output the calculated slope value.
Use this value to output the equation of the line in the form
y = mx + c
You can calculate the value of c from one of the pair of points entered as input
*/

#include <iostream>
using namespace std;

bool loop = true, loopMain = true;
char test;

double x, y, xTwo, yTwo, m;

int main()
{
	cout << "Welcome" << endl;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	do
	{
		// gathers input form user
		cout << "Plese enter the 4 points in order x, y, x2, y2" << endl;
		cin >> x;
		cin >> y;
		cin >> xTwo;
		cin >> yTwo;
		// calculates the slope
		m = (yTwo - y) / (xTwo - x);
		// *SIDE NOTE* - i didnt really understand this so i checked online here: https://www.geeksforgeeks.org/program-find-slope-line/
		// I noticed that they use a function to calculate the slope.. as creating functions hasnt been covered yet by chapter two i decided not to use one

		cout << "The slope between the two points is: " << m << endl;

		do // you should know what this does by now...
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
