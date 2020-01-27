// Programming Projects 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
Many private water wells produce only 1 or 2 gallons of water per minute. 
One way to avoid running out of water with these low-yield wells is to use a holding tank. 
A family of four will use about 250 gallons of water per day. However, there is a “natural” water holding tank in the casing (that is, the hole) of the well itself. 
A deeper well stores more water that can be pumped out for household use. But how much water will be available?
Write a program that allows the user to input the radius of the well casing in inches (a typical well will have a 3-inch radius) and the depth of the well in feet (assume water will fill this entire depth, 
although in practice that will not be true since the static water level will generally be 50 feet or more below the ground surface). 
The program should output the number of gallons stored in the well casing. 
For your reference, the volume of a cylinder is πr2h, where r is the radius and h is the height, and 1 cubic foot = 7.48 gallons of water.
For example, a 300-foot-well full of water with a radius of 3 inches for the casing holds about 441 gallons of water—plenty for a family of four and no need to install a separate holding tank. 
*/

#include <iostream>
using namespace std;

bool loop = true, loopMain = true;
char test;
double pi = 3.14159265358979323846, radius = 3.0, depth, gallons, cubicfoot = 7.48;

int main()
{
	// Welcome Message
	cout << "Welcome" << endl;
	cout << endl;
	// Sets floting point to decimal places only
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	do
	{
		// gathers user input
		cout << "Please enter the Radius of you well in Inches" << endl;
		cin >> radius;
		cout << "Please enter the Depth of you well in feet" << endl;
		cin >> depth;

		// converts inches to feet
		radius /= 12;
		// radius to the power of 2
		radius *= radius;
		// volume calculation
		gallons = pi * radius * depth;
		// gallons per cubic foot calculation
		gallons *= cubicfoot;

		// prints result
		cout << "Your water well stores a total of " << gallons << " gallons of water" << endl;
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
