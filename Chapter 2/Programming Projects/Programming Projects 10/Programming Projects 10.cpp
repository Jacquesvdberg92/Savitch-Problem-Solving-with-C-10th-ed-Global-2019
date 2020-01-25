// Programming Projects 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
Write a program that reads in int values from the user until they enter a negative number like -1. 
Once the user has finished entering numbers, print out the highest value they’ve entered, the lowest value they’ve entered, and the total number of numbers they’ve entered. 
The negative number they entered should not be taken as one of the values entered.
*/
#include <iostream>
using namespace std;

// variables for loop
char test;
bool loop = true;

//variables for the project
int input, high, low, numEntered = 0;

int main()
{
    //Welcome message
    cout << "Welcome to this place!!" << endl;

    do
    {
        //Some info
        cout << "This program will record the following:" << endl;
        cout << "The highest number entered:" << endl;
        cout << "The lowest number enterd:" << endl;
        cout << "The total amount of numbers entered:" << endl;
        cout << "and will stop if you enter a negative number" << endl;
        cout << endl;

        cout << "You may start entering numbers now!" << endl;
        cin >> input;
        //sets the initial value of high and low to the first number entered
        high = input;
        low = input;
        numEntered++;

        //allowes for only positive numbers to be recorded
        while (input > 0)
        {
            cout << "Fast enter another number" << endl;
            cin >> input;
            if (input > high)
            {
                high = input;
            }
            if ((input < low) && (input >= 0))
            {
                low = input;
            }
            numEntered++;
        }

        cout << "The highest number entered: " << high << endl;
        cout << "The lowest number enterd: " << low << endl;
        cout << "The total amount of numbers entered: "<< (numEntered - 1) << endl;

        //checks if the user would like to try again
        cout << "Want to try again? (Y/N)" << endl;
        cin >> test;
        if (test == 'Y' || test == 'y' || test == 'N' || test == 'n')
        {
            if (test == 'N' || test == 'n')
            {
                loop = false;
            }
        }
        else
        {
            cout << "!!! Invalid Input !!! Please try again!!!" << endl;
            cout << endl;
            loop = true;
        }
    } while (loop == true);
}
