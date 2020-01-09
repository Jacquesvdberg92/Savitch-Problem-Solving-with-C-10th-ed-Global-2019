// Programming Projects 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
Write a program that allows the user to enter a time in seconds and then outputs how far an object would drop if it is in freefall for that length of time. 
Assume that the object starts at rest, there is no friction or resistance from air, and there is a constant acceleration of 32 feet per second due to gravity. 
Use the equation: distance = (acceleration × (time * time)) / 2
*/

#include <iostream>
using namespace std;

int main()
{
	int time, distance; //vairables
	
	cout << "Please enter an amount of time in seconds" << endl; //display message in console
	cin >> time; //recieves user input and stores the value in time
	cout << "thank you for your input... I will now calculate the distance" << endl; //display message in console

	distance = (32 * (time * time)) / 2; //calculates the distance

	cout << "The object taveled a total distance of " << distance << "feet" << endl; //display message in console
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
