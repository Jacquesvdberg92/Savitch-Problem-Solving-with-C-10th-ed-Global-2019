// Practice Programs 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
Many treadmills output the speed of the treadmill in miles per hour (mph) on the console, but most runners think of speed in terms of a pace. 
A common pace is the number of minutes and seconds per mile instead of mph.
Write a program that starts with a quantity in mph and converts the quantity into minutes and seconds per mile. 
As an example, the proper output for an input of 6.5 mph should be 9 minutes and 13.8 seconds per mile. 
If you need to convert a double to an int, which will discard any value after the decimal point, then you may use
intValue = static_cast<int>(dblVal)
*/

#include <iostream>
using namespace std;

int main()
{
    double mph, seconds;
    int minutes, temp;

    cout << " This program will convert MPH to pace (minutes and seconds per mile)" << endl;
    cout << "please enter your mph:" << endl;
    cin >> mph;
    cout << "Thank you, I will now calculate your pace" << endl;

    seconds = (mph / 60) / 60; // calculates how many miles per second
    seconds = 1 / seconds; // calculates how many seconds per mile
    minutes = seconds / 60; // gets the amount of minutes
    temp = minutes * 60; // calculates how many seconds in the whole amount of minutes
    seconds = seconds - temp; // calculates how many seconds remaining after minutes aas been subtracted
   
    // this next bit is just a stupid way of making the double a one decimal point value by multiplying with 10 into an int value and the dividing back to a double from the int with 10
    temp = (seconds * 10);
    seconds = temp;
    seconds = (seconds / 10);


    cout << "Your Pace is " << minutes << " Minutes and "  << seconds << " Seconds to a mile" << endl;
    return 0;
}

