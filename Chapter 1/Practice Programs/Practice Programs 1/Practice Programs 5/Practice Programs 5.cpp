// Practice Programs 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
Modify the C++ program you wrote in Practice Problem 3. 

Practice Program 3
#include <iostream>
using namespace std;

int main()
{
	int num1, num2, total; //declairs the 3 integers that we wll be using
	cout << "Please enter the first number" << endl; //displays the message in the console
	cin >> num1; //recieves aand stores the first value the user enters
	cout << "Please enter the second number" << endl; //displays the message in the console
	cin >> num2; //recieves and stores the second value from the user
	total = num1 + num2; //adds the two values together and stores it total
	cout << "the sum of " << num1 << " and " << num2 << " is " << total << endl; //displays the message in the console
}

Change the addition sign 1 in your C++ program to the division sign /. 
What happens if the second number is larger than the first number? 
What happens when you enter a 0 as the second number?
*/

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, total; //declairs the 3 integers that we wll be using
	cout << "Please enter the first number" << endl; //displays the message in the console
	cin >> num1; //recieves aand stores the first value the user enters
	cout << "Please enter the second number" << endl; //displays the message in the console
	cin >> num2; //recieves and stores the second value from the user
	total = num1 / num2; //adds the two values together and stores it total
	cout << "the sum of " << num1 << " and " << num2 << " is " << total << endl; //displays the message in the console

	// a small numer / a big number will return 0 as int cant handle decimal points
	// and deviding with 0 gives the following error: "Unhandled exception at 0x0034264A in Practice Programs 5.exe: 0xC0000094: Integer division by zero."
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
