// Programming Projects 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
A store sells carpets for $2.75 per meter. 
If a customer buys more than 10 m of carpet, they get a discount of 15% on every additional meter of carpet they purchase. 
Write a program that inputs the carpet length that a user wishes to buy, stores the value in a double variable, and then calculates and outputs the total cost of the carpet.
*/

#include <iostream>

using namespace std;

int main()
{
    // all the variables that I need for the program *all are initialized to a value*
    double carpetLenth = 0.0, ppm = 2.75, discount = ppm * 0.15, totalDiscount = 0, totalPrice = 0, grandTotal = 0;
    int additionalLenth = 0;
    bool done = false, loop = true;
    char test;

    do // Strat of a loop that allowes the user to execute as many times as they wish
    {
        cout << "Please enter the lenth of carpet the client wants to buy" << endl;
        cin >> carpetLenth;

        if (carpetLenth > 10.0) //tests if the carpet is longer than 10 meters, and if it is it will calculate the amount of discount
        {
            totalPrice = ppm * carpetLenth; // price * lenth
            additionalLenth = carpetLenth - 10.0; // note that additionalLenth is a integer value to discard any decimal points
            totalDiscount = discount * additionalLenth; // calculates the total amount of discount
            grandTotal = totalPrice - totalDiscount; // calculates the grand total

            cout << "The Total due is " << grandTotal << " including a discount of " << totalDiscount << endl;
        }
        else
        {
            totalPrice = ppm * carpetLenth; // price * lenth
            grandTotal = totalPrice; // calculates the grand total

            cout << "The Total due is " << grandTotal << endl;
        }
        do // loop that tests user input
        {
            cout << "Would you like to try again? (y/n)" << endl;
            cin >> test;
            if ((test == 'N') || (test == 'n') || (test == 'Y') || (test == 'y'))
            {
                if (test == 'N' || test == 'n')
                {
                    done = true;
                }
                loop = false;
            }
            else
            {
                cout << endl;
                cout << "input is invalid... Please enter Y or N" << endl;
                cout << endl;
                loop = true;
            }
        } while (loop == true);

    } while (done == false);
    return 0;
}