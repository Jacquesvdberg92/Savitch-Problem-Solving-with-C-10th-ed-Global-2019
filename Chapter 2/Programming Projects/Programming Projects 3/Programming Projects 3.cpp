// Programming Projects 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
Modify your program from Programming Project 2 so that the minimum length of carpet that is applicable for the discount, 
the percent rate of the discount, and the cost per meter can be input by the user.
*/

#include <iostream>

using namespace std;

int main()
{
    // newly added variables with default values
    double discountPercentage = 15, lenghtForDiscount = 10.0;

    // changed this variable from a set value to a custom value
    double ppm = 2.75, discount = ppm * (discountPercentage / 100);

    // all the variables that I need for the program *all are initialized to a value*
    double carpetLenth = 0.0, totalDiscount = 0, totalPrice = 0, grandTotal = 0;
    int additionalLenth = 0;
    bool done = false, loop = true;
    char test;

    do // Strat of a loop that allowes the user to execute as many times as they wish
    {
        do // loop that tests user input
        {
            cout << "Would you like to change the default values? (y/n)" << endl;
            cin >> test;
            if ((test == 'N') || (test == 'n') || (test == 'Y') || (test == 'y'))
            {
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

        if (test == 'y') // allowes the user to change default values
        {
            // newly added so the user can adjust the values to their liking
            cout << "Please enter the length applicable for a discount" << endl;
            cin >> lenghtForDiscount;

            do
            {
                cout << "Please enter a discount percentage" << endl;
                cin >> discountPercentage;
                if (discountPercentage > 100)
                {
                    cout << "The discount Percentage cannot be greater than 100... Plese try again" << endl;
                }
            } while (discountPercentage > 100);

            cout << "Please enter the cost per meter" << endl;
            cin >> ppm;
            test == 'n';
        }

        discount = ppm * (discountPercentage / 100);

        cout << "Please enter the length of carpet the client wants to buy" << endl;
        cin >> carpetLenth;

        if (carpetLenth > lenghtForDiscount) //tests if the carpet is longer than 10 meters, and if it is it will calculate the amount of discount
        {
            totalPrice = ppm * carpetLenth; // price * lenth
            additionalLenth = carpetLenth - lenghtForDiscount; // note that additionalLenth is a integer value to discard any decimal points
            totalDiscount = discount * additionalLenth; // calculates the total amount of discount
            grandTotal = totalPrice - totalDiscount; // calculates the grand total

            cout << "The Total due is " << grandTotal << " including a discount of " << totalDiscount << endl;
            cout << endl;
        }
        else
        {
            totalPrice = ppm * carpetLenth; // price * lenth
            grandTotal = totalPrice; // calculates the grand total

            cout << "The Total due is " << grandTotal << endl;
            cout << endl;
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

        // Sets values back to default
        discountPercentage = 15;
        lenghtForDiscount = 10.0;
        ppm = 2.75, discount = ppm * (discountPercentage / 100);

        cout << "The values of Discount, Applicable Lenth and Price Per Meter has been resetted to default values" << endl;
        cout << endl;

    } while (done == false);
    return 0;
}