// Programming Projects 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
Write a program that determines whether a meeting room is in violation of fire law regulations regarding the maximum room capacity. 
The program will read in the maximum room capacity and the number of people attending the meeting. 
If the number of people is less than or equal to the maximum room capacity, 
the program announces that it is legal to hold the meeting and tells how many additional people may legally attend. 
If the number of people exceeds the maximum room capacity, 
the program announces that the meeting cannot be held as planned due to fire regulations and tells how many people must be excluded in order to meet the fire regulations. 
For a harder version, write your program so that it allows the calculation to be repeated as often as the user wishes. 
If this is a class exercise, ask your instructor whether you should do this harder version
*/

#include <iostream>

using namespace std;

// Global variables
int maxCapacity = 0, numOfAttendance, alt;
bool loop = true;
char test;

int main()
{
    cout << "Welcome" << endl;
    do // Loop that allowes the user to try as many times as they like
    {
        do // loop that checks that the user doesnt set the capacity to a negitave number
        {
            cout << "Please enter the Maximum room capacity:" << endl;
            cin >> maxCapacity;
            if (maxCapacity <= 0)
                cout << "The room capacity cannot be less than 1... Please try again" << endl;
        } while (maxCapacity <= 0); // end of loop that checks that the user doesnt set the capacity to a negitave number

        do // loop that checks that the user doesnt enter a negitave number
        {
            cout << "please enter the amount of people attending:" << endl;
            cin >> numOfAttendance;
            if (numOfAttendance <= 0)
                cout << "The number of people attending cannot be 0 or a negative number" << endl;
        } while (numOfAttendance <= 0); // end of loop that checks that the user doesnt enter a negitave number

        if (maxCapacity >= numOfAttendance) // checks if the capacity is bigger than the attendance
        {
            cout << "Good news!! You can have your meeting here =)" << endl;
            alt = maxCapacity - numOfAttendance;
            cout << "There is even room for " << alt << " more people" << endl;
        }
        else // if the attendance is bigger then this code will execute
        {
            alt = numOfAttendance - maxCapacity;
            cout << "it seems like there are " << alt << " too many people attending to have your meeting here" << endl;
        }
        
        cout << "would you like to run another calculation? (y/n)" << endl;
        cin >> test;
        if (test == 'Y' || test == 'y' || test == 'N' || test == 'n') // tests user input
        {
            loop = true;
            if (test == 'N' || test == 'n')
            {
                loop = false;
            }
        }
        else // displays msg if user inputs invalid char
        {
            cout << endl;
            cout << "!!!!! Invalid input... Please try again. !!!!!" << endl;
            cout << endl;
        }
    } while (loop == true); // end of Loop that allowes the user to try as many times as they like
    
}