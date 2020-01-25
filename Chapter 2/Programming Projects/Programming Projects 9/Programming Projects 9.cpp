// Programming Projects 9.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
Write a program that reads in three int values. 
The numbers should then be output in ascending order from smallest to largest. 
Can you do this with only if statements and three int variables? 
(Hint: try nesting if statements or using the && operator) 
What happens if you input three identical numbers?
*/

#include <iostream>
using namespace std;

// variables for loop
char test;
bool loop = true;

//variables for the project
int num1, num2, num3;

int main()
{

    cout << "Welcome to this place!!" << endl;

    do
    {
        cout << "Please enter 3 numbers seperatred by pressing return/enter" << endl;
        cin >> num1;
        cin >> num2;
        cin >> num3;
        cout << "Thank you, I will now sort them in ascending order" << endl;
        
        //checks that the 3rd number is bigger than the 2nd
        if (num3 < num2)
        {
            num2 = num2 + num3;
            num3 = num2 - num3;
            num2 = num2 - num3;
        }
        
        ////checks that the 2nd number is bigger than the 1st
        if (num2 < num1)
        {
            num1 = num1 + num2;
            num2 = num1 - num2;
            num1 = num1 - num2;
        }

        //double checks that the 2nd number is smaller than the 3rd
        if (num2 > num3)
        {
            num2 = num2 + num3;
            num3 = num2 - num3;
            num2 = num2 - num3;
        }

        //Prints result
        cout << "Here is the resaults:" << endl;
        cout << num1 << endl;
        cout << num2 << endl;
        cout << num3 << endl;
        cout << endl;


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
    return 0;
}

