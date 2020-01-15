// Programming Project 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
Write a program that inputs a character from the keyboard and then outputs a large block letter “C” composed of that character. 
For example, if the user inputs the character “X,” then the output should look as follows:
	   X X X 
	  X     X
	 X    
	 X    
	 X     
	  X     X
	   X X X
*/

#include <iostream>
using namespace std;

int main()
{
	char user;
	cout << "Please enter any letter of your liking" << endl;
	cin >> user;
	cout << "  " << user << user << user <<  endl;
	cout << " " << user << "   " << user << endl;
	cout << user << endl;
	cout << user << endl;
	cout << user << endl;
	cout << " " << user << "   " << user << endl;
	cout << "  " << user << user << user << endl;
	return 0;

	// Im not explaining anything here.. i mean its just playing around with output...

}