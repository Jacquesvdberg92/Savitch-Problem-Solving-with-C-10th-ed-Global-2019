// Programming Projects 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
Sound travels through air as a result of collisions between the molecules in the air. 
The temperature of the air affects the speed of the molecules, which in turn affects the speed of sound. 
The velocity of sound in dry air can be approximated by the formula: velocity ≈ 331.3 + 0.61 × Tc
where Tc is the temperature of the air in degrees Celsius and the velocity is in meters/second.
Write a program that allows the user to input a starting and an ending temperature. 
Within this temperature range, the program should output the temperature and the corresponding velocity in 1° increments. 
For example, if the user entered 0 as the start temperature and 2 as the end temperature, then the program should output
At 0 degrees Celsius the velocity of sound is 331.3 m/s 
At 1 degrees Celsius the velocity of sound is 331.9 m/s 
At 2 degrees Celsius the velocity of sound is 332.5 m/s
*/

#include <iostream>
using namespace std;

bool loop = true, loopMain = true;
char test;
int  startTemp = 0, endTemp = 0;
double velocity;

int main()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Welcome" << endl;
    cout << endl;
    do
    {
        cout << "This program will calculate the velocity of sound according to tempreture" << endl;
        cout << "Please enter a starting and an ending tempreture seperated by pressing return/enter" << endl;
        cin >> startTemp;
        cin >> endTemp;

        while (endTemp < startTemp)
        {
            cout << "The ending tempreture cannot be lower that the starting tempreture... Please try again" << endl;
            cout << endl;
            cout << "Please enter a starting and an ending tempreture seperated by pressing return/enter" << endl;
            cin >> startTemp;
            cin >> endTemp;
        }

        cout << "Thank you. Calculation in process" << endl;

        while (startTemp <= endTemp)
        {
            velocity = 331.3 + 0.61 * startTemp;
            cout << "At " << startTemp << " degrees Celcius the velocity of sound is " << velocity << "m/s" << endl;
            startTemp++;
        }


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