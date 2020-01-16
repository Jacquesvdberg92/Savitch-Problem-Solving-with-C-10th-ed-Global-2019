// Practice Programs 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
A metric ton is 35,273.92 ounces. 
Write a program that will read the weight of a package of breakfast cereal in ounces and output the weight in metric tons as well as the number of boxes needed to yield 1 metric ton of cereal. 
Your program should allow the user to repeat this calculation as often as the user wishes.
*/

#include <iostream>
using namespace std;

int main()
{
    bool done = false; // a variable used to test if the user is done or not
    char test; // a variable used to test if the user is done or not
    float cerealWeight, weightInTons, boxesNeeded; // vaiaibles used to calculate what the program requires
    const float metricTon = 35273.92; // constant variable that makes calculations easier
    do // Part of the loop that will keep excecuting until the user says  different
    {
        cout << "Please enter the weight of the cereal in ounces" << endl; // displays a message in the console
        cin >> cerealWeight; // recieves user input
        cout << "Thank you, i will now calculate the weight in metric tons and show how many boxes you need to make one metric ton" << endl; // displays a message in the console
        weightInTons = cerealWeight / metricTon; // calculate the weight in tons
        cout << "One box of cereal is equil to " << weightInTons << " Metric Tons" << endl; // displays a message in the console
        boxesNeeded = metricTon / weightInTons; // calculates how many boxes is required to make one metric ton
        cout << "You'll need " << boxesNeeded << " To achive the goal weight of one metric ton" << endl; // displays a message in the console

        cout << "Would you like to try again? Y/N" << endl; // displays a message in the console
        cin >> test; // recieves user input
        if (test == 'N' || test == 'n') // this if satement tests if the user wants to try again
        {
            done = true; // if the statement is true in the if statement then the value will change to true thus ending the loop
        }
    } while (done != true); // end of the while loop
    return 0;
}