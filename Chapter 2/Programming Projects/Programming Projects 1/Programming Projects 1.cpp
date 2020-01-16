// Programming Projects 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
A government research lab has concluded that an artificial sweetener commonly used in diet soda pop will cause death in laboratory mice. 
A friend of yours is desperate to lose weight but cannot give up soda pop. 
Your friend wants to know how much diet soda pop it is possible to drink without dying as a result. 
Write a program to supply the answer. 
The input to the program is the amount of artificial sweetener needed to kill a mouse (use 5 grams), 
the mass of the mouse (use 35 grams), and the weight of the dieter (use 45400 grams for a 100 pound person). 
Assume that the lethal dose for a mouse is proportional to the lethal dose for the human. A single can of soda pop has a mass of 350 grams. 
To ensure the safety of your friend, be sure the program requests the weight at which the dieter will stop dieting, rather than the dieter’s current weight. 
Assume that diet soda contains 1/10th of 1% artificial sweetener. 
Use a variable declaration with the modifier const to give a name to this fraction. 
You may want to express the percent as the double value 0.001. Your program should allow the calculation to be repeated as often as the user wishes. 
*/

#include <iostream>
using namespace std;

int main()
{
    char test; // variable used for the loop
    bool done = false; // variable used for the loop
    do // loop that will execute as manytimes as the user desires
    {
        const double sweetenerInSoda = 0.001; // variable that cannot be changed
        int dietSodaCans; // variable used for the calculation
        double sweetenerPerMouse, mouseWeight, sweetenerPerDieter, dieterWeight; // variable used for the calculation

        cout << "This program calculates how many cans of soda it will take to kill you !" << endl; // Displays message in the console
        cout << "Each can contains 0.001 (0.1%) of artificial sweetener" << endl; // Displays message in the console

        cout << "Enter the amount of Artificial Sweetner needed to kill a mouse" << endl; // Displays message in the console
        cin >> sweetenerPerMouse; // recieves user input

        cout << "Enter the weight of the mouse in grams" << endl; // Displays message in the console
        cin >> mouseWeight; // recieves user input

        cout << "Enter the weight of the dieter in grams at which dieting activity will be stopped" << endl; // Displays message in the console
        cin >> dieterWeight; // recieves user input

        sweetenerPerDieter = (sweetenerPerMouse / mouseWeight) * dieterWeight;
        dietSodaCans = (sweetenerPerDieter / sweetenerInSoda);

        cout << "The amount of Diet Soda Pop Can's that would kill the dieter is: " << dietSodaCans << endl; // Displays message in the console
        
        cout << "would you like to try again? Y/N" << endl; // Displays message in the console
        cin >> test; // recieves user input
        if (test == 'n' || test == 'N') //checks the user input
        {
            done = true;
        }
    } while (done != true); // end of the loop
    return 0;
}
