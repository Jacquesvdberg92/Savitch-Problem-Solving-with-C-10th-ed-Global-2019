// Programming Projects 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
Negotiating a consumer loan is not always straightforward. 
One form of loan is the discount installment loan, which works as follows. 
Suppose a loan has a face value of $1,000, the interest rate is 15%, and the duration is 18 months. 
The interest is computed by multiplying the face value of $1,000 by 0.15, to yield $150. 
That figure is then multiplied by the loan period of 1.5 years to yield $225 as the total interest owed. 
That amount is immediately deducted from the face value, leaving the consumer with only $775. 
Repayment is made in equal monthly installments based on the face value. So the monthly loan payment will be $1,000 divided by 18, which is $55.56. 
This method of calculation may not be too bad if the consumer needs $775 dollars, but the calculation is a bit more complicated if the consumer needs $1,000. 
Write a program that will take three inputs: the amount the consumer needs to receive, the interest rate, and the duration of the loan in months. 
The program should then calculate the face value required in order for the consumer to receive the amount needed. 
It should also calculate the monthly payment. 
Your program should allow the calculations to be repeated as often as the user wishes
*/

#include <iostream>

using namespace std;

//Global Variables
double loanAmount, intrestRate, loanDuration, faceValue, installments;

// function to set default values
void setDefaults()
{
    loanAmount = 775;
    intrestRate = 15;
    loanDuration = 18;
}

// main function
int main()
{
    bool loop = true;
    char test;
    // calls function to set defaults
    setDefaults();
  
        // Welcome message
        cout << "///////////////////////////////////////////////////////////" << endl;
        cout << "Welcome!!... Here are your default Values" << endl;
        cout << "Loan amount $" << loanAmount << endl;
        cout << "Intrest Rate " << intrestRate << "%" << endl;
        cout << "Loan Duration " << loanDuration << " months" << endl;
        cout << "///////////////////////////////////////////////////////////" << endl;
        cout << endl;
     do
     {
         // calles function to set values to default
         setDefaults();

        
         do // askes user to use custom values and tests input
         {
            cout << "do you want to enter your own terms and values? (y/n)" << endl;
            cin >> test;
            if (test == 'Y' || test == 'y')
            {
                cout << "Please enter Loan amount:" << endl;
                cin >> loanAmount;
                cout << "Please enter Intrest percentage:" << endl;
                cin >> intrestRate;
                cout << "Please enter Loan duration:" << endl;
                cin >> loanDuration;
                loop = false;

                // Displays current values
                cout << endl;
                cout << "///////////////////////////////////////////////////////////" << endl;
                cout << "Terms & Values have been changed to:" << endl;
                cout << "Loan amount $" << loanAmount << endl;
                cout << "Intrest Rate " << intrestRate << "%" << endl;
                cout << "Loan Duration " << loanDuration << " months" << endl;
                cout << "///////////////////////////////////////////////////////////" << endl;
                cout << endl;
            }
            else
            {
                if (test == 'N' || test == 'n')
                {
                    loop = false;
                }
                else
                {
                    loop = true;
                    cout << endl;
                    cout << "!!!!! INVALID INPUT... PLEASE TRY AGAIN !!!!!" << endl;
                    cout << endl;
                }
            }
        } while (loop == true);

        // calculates the face value of the loan
        intrestRate = intrestRate / 100;
        faceValue = loanAmount / (1 - ((loanDuration / 12) * intrestRate));
        installments = faceValue / loanDuration;

        cout << "You need to ask for a loan amount of $" << faceValue << endl;
        cout << "Your monthly installments is " << installments << endl;
        cout << endl;
        cout << endl;

       
            cout << "Would you like to do another calculation? (y/n)" << endl;
            cin >> test;
            if (test == 'Y' || test == 'y')
            {
                loop = true;
            }
            else
            {
                if (test == 'N' || test == 'n')
                {
                    loop = false;
                }
            }

     } while (loop == true);


    return 0;
}
