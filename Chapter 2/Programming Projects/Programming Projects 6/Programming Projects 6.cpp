// Programming Projects 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
An employee is paid at a rate of $16.78 per hour for the first 40 hours worked in a week. 
Any hours over that are paid at the overtime rate of oneand-one-half times that. 
From the worker’s gross pay, 6% is withheld for Social Security tax, 14% is withheld for federal income tax, 5% is withheld for state income tax, and $10 per week is withheld for union dues. 
If the worker has three or more dependents, then an additional $35 is withheld to cover the extra cost of health insurance beyond what the employer pays. 
Write a program that will read in the number of hours worked in a week and the number of dependents as input and will then output the worker’s gross pay, 
each withholding amount, and the net take-home pay for the week. 
For a harder version, write your program so that it allows the calculation to be repeated as often as the user wishes. 
If this is a class exercise, ask your instructor whether you should do this harder version.
*/

#include <iostream>

using namespace std;

bool loop = true;
char test;
const double stdRate = 16.78, overTimeRate = (stdRate * 1.5), socialSecurityTax = 0.06, federalIncomTax = 0.14, stateIncomTax = 0.05, unionDues = 10.0, healthInsurance = 35.0, stdHours = 40;
double hoursWorked, overTimeHour, dependents, totalTax, netSalary, grossSalary, totalHealthInsurance = 0.0;

int main()
{
    cout << "welcome" << endl;
    cout << endl;

    do //Loop that allowes the user to try as many times as they like
    {
     
        do // Loop that check that the user doesnt enter an imposible amount of hours
        {
            cout << "Please enter the amount of hours worked this week:" << endl;
            cin >> hoursWorked;
            if (hoursWorked >= 120)
            {
                cout << "it is not possible to sustain the mandatory 8 hours rest per day if you worked more than 120 hours in a week.." << endl;
                cout << "please try again" << endl;
            }
        } while (hoursWorked >= 120); // end of Loop that check that the user doesnt enter an imposible amount of hours

        cout << "Please enter the amount of dependents the employee has" << endl;
        cin >> dependents;
        if (dependents >= 3) // this will simply add the health insurance expense to the total if the employee has 3 or more dependents
            totalHealthInsurance = healthInsurance;

        if (hoursWorked > 40) // this will make sure that the overtime calculation runs correctly.. 0 when no overtime and resets after every use
        {
            overTimeHour = hoursWorked - stdHours; // calculate overtime
        }
        else
        {
            overTimeHour = 0;
        }

        hoursWorked = hoursWorked - overTimeHour; // sets hours worked to the max hours for standard rate
        grossSalary = (hoursWorked * stdRate) + (overTimeHour * overTimeRate); // calculates gross salary
        totalTax = grossSalary * (socialSecurityTax + federalIncomTax + stateIncomTax); // calculates the amount of tax to pay
        netSalary = grossSalary - (totalTax + unionDues + healthInsurance); // calculates net salary

        // Dislays all info
        cout << endl;
        cout << "_______________________________________" << endl;
        cout << "Standart Rate Total: $" << (hoursWorked * stdRate) << endl;
        cout << "Over Time Rate Total: $" << (overTimeHour * overTimeRate) << endl;
        cout << "Gross Salary: $" << grossSalary << endl;
        cout << endl;
        cout << "Social Security Tax: $" << (grossSalary * socialSecurityTax) << endl;
        cout << "Federal Income Tax: $" << (grossSalary * federalIncomTax) << endl;
        cout << "State Income Tax: $" << (grossSalary * stateIncomTax) << endl;
        cout << "Total Tax: $" << totalTax << endl;
        cout << endl;
        cout << "Union Dues: $" << unionDues << endl;
        cout << "Health Insurance Dues: $" << totalHealthInsurance << endl;
        cout << endl;
        cout << "Net Salary: $" << netSalary << endl;
        cout << "_______________________________________" << endl;
        cout << endl;

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
