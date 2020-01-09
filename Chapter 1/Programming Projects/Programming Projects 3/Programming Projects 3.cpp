// Programming Projects 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
Write a program that allows the user to enter a number of quarters, dimes,
and nickels and then outputs the monetary value of the coins in cents. 
For example, if the user enters 2 for the number of quarters, 3 for the number of dimes,
and 1 for the number of nickels, then the program should output that the coins are worth 85 cents
*/

#include <iostream>
using namespace std;

int main()
{
	int quaters, dimes, nickels, total;

	cout << "please enter the amount of Quaters you have" << endl; //displays message in console
	cin >> quaters; //recieves input from user and saves it in the vairable
	quaters = quaters * 25; //takes the value of the vairable and multiply it, then saves the new total in the same vairable
	cout << "please enter the amount of Dimes you have" << endl; //displays message in console
	cin >> dimes; //recieves input from user and saves it in the vairable
	dimes = dimes * 10; //takes the value of the vairable and multiply it, then saves the new total in the same vairable
	cout << "please enter the amount of Nickels you have" << endl; //displays message in console
	cin >> nickels; //recieves input from user and saves it in the vairable
	nickels = nickels * 5; //takes the value of the vairable and multiply it, then saves the new total in the same vairable
	cout << "thank you for your input... I will now calculate the total amount on cents" << endl; //displays message in console

	total = quaters + dimes + nickels; //adds nickels, dimes and quaters and stores the value in total
	cout << "you have a total of " << total << " cents, have a nice day" << endl; //displays message in console


	
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
