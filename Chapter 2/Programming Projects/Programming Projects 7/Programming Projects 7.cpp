// Programming Projects 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
It is difficult to make a budget that spans several years, because prices are not stable. 
If your company needs 200 pencils per year, you cannot simply use this year’s price as the cost of pencils 2 years from now. 
Because of inflation the cost is likely to be higher than it is today. 
Write a program to gauge the expected cost of an item in a specified number of years. 
The program asks for the cost of the item, the number of years from now that the item will be purchased, and the rate of inflation. 
The program then outputs the estimated cost of the item after the specified period. 
Have the user enter the inflation rate as a percentage, like 5.6 (percent). 
Your program should then convert the percent to a fraction, like 0.056, and should use a loop to estimate the price adjusted for inflation. 

(Hint: This is similar to computing interest on a charge card account, which was discussed in this chapter.)

1    #include <iostream> 
2    using namespace std; 
3    int main( ) 
4    { 
5        double  balance = 50.00; 
6        int  count = 0; 
7        cout << "This program tells you how long it takes\n" 
8             << "to accumulate a debt of $100, starting with\n" 
9             << "an initial balance of $50 owed.\n" 
10             << "The interest rate is 2% per month.\n";
11        while (balance < 100.00) 
12        { 
13            balance = balance + 0.02 * balance; 
14            count++; 
15        }
16        cout << "After " << count << " months,\n"; 
17        cout.setf(ios::fixed); 
18        cout.setf(ios::showpoint); 
19        cout.precision(2); 
20        cout << "your balance due will be $" << balance << endl; 
21        return 0; 
22    }

*/

#include <iostream>
using namespace std;
 
// Global variables
bool loop = true;
char test;
double itemCost, infationRate;
int duration;

int main()
{
    cout << "welcome" << endl;
    cout << endl;

    do //Loop that allowes the user to try as many times as they like
    {
        cout << "Please enter the cost of the item:" << endl;
        cin >> itemCost;

        cout << "Please enter the amount of years that the item will be purchased:" << endl;
        cin >> duration;

        do // loop to insure that the inflation rate isnt more than 100% or less than 0%
        {
            cout << "Please enter the inflation rate:" << endl;
            cin >> infationRate;
            if (infationRate > 100 || infationRate < 0)
                cout << "Inflation Rate cannot be less than 0% or more than 100%... Please try again" << endl;
        } while (infationRate > 100 ||   infationRate < 0);
        infationRate = infationRate / 100;

        for (int i = 0; i != duration; ++i) // loop that will calculate the total amount of inflation
        {
            itemCost =  itemCost + (itemCost * infationRate);
        }

        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);

        cout << "The cost of the item after " << duration << " years will be $" << itemCost << endl;

        cout << "would you like to run another calculation? (y/n)" << endl;
        cin >> test;
        if (test == 'Y' || test == 'y' || test == 'N' || test == 'n') // tests user input    
        {
            loop = true;
            if (test == 'N' || test == 'n') // if the user enter N the loop will stop
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