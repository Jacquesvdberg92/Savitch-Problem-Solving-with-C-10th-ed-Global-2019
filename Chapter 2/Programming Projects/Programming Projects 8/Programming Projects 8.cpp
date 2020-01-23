// Programming Projects 8.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
You have just purchased a stereo system that cost $1,000 on the following credit plan: 
no down payment, an interest rate of 18% per year (and hence 1.5% per month), and monthly payments of $50. 
The monthly payment of $50 is used to pay the interest and whatever is left is used to pay part of the remaining debt. 
Hence, the first month you pay 1.5% of $1,000 in interest. 
That is $15 in interest. So, the remaining $35 is deducted from your debt, which leaves you with a debt of $965.00. 
The next month you pay interest of 1.5% of $965.00, which is $14.48. 
Hence, you can deduct $35.52 (which is $50 – $14.48) from the amount you owe. 
Write a program that will tell you how many months it will take you to pay off the loan, 
as well as the total amount of interest paid over the life of the loan. 
Use a loop to calculate the amount of interest and the size of the debt after each month. 
(Your final program need not output the monthly amount of interest paid and remaining debt, but you may want to write a preliminary version of the program that does output these values.) 
Use a variable to count the number of loop iterations and hence the number of months until the debt is zero. 
You may want to use other variables as well. The last payment may be less than $50. Do not forget the interest on the last payment. 
If you owe $50, then your monthly payment of $50 will not pay off your debt, although it will come close. One month’s interest on $50 is only 75 cents.
*/

#include <iostream>
using namespace std;
bool loop = true;
char test;
const double intrestRate = 0.015, monthlyPayment = 50.00, loanAmount = 1000.00;
double monthlyIntrest, totalIntrest, pendingLoan, paymentAmount;
int months = 0;

void setDefaults()
{
    monthlyIntrest = 0;
    totalIntrest = 0;
    months = 0;
    pendingLoan = loanAmount;
    paymentAmount = monthlyPayment;
}

int main()
{
    do
    {
        setDefaults(); // sets variables to default values
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);

        while (pendingLoan > 0) // loop runs as long as the loan isnt 0
        {
            monthlyIntrest = pendingLoan * intrestRate; // calculates the amount of intrest payed every month
            totalIntrest = totalIntrest + monthlyIntrest; // calculates the total amount of intrest payed for the duration
            if (paymentAmount <= (pendingLoan + monthlyIntrest)) // chacks if the pending amount is bigger than the payment amount
            {
                paymentAmount = monthlyPayment - monthlyIntrest; // executes if the payment is smaller than the pending amount
            }
            else
            {
                paymentAmount = pendingLoan; // executes if the pending amount is smaller than the payment amount
            }
            pendingLoan = pendingLoan - paymentAmount; // calculates the pending amount
            months++; // increases the month count

            // Displays output for every run of the loop
            cout << "Month: " << months << endl;
            cout << "Intrest: $" << monthlyIntrest << endl;
            cout << "Payment: $" << paymentAmount << endl;
            cout << "Amount Pending $" << pendingLoan << endl;
            cout << endl;
        } 
        //displays final output
        cout << endl;
        cout << "_________________________________________" << endl;
        cout << "The total amount of intrest paid is: $" << totalIntrest << endl;
        cout << "Duration in Months is: " << months << endl;
        cout << "Total amount payed: $" << (loanAmount + totalIntrest) << endl;

        //checks if the user wants to try again
        cout << "would you like to try again? (Y/N)" << endl;
        cin >> test;
        if (test == 'Y' || test == 'y' || test == 'N' || test == 'n')
        {
            loop = true;
            if (test == 'N' || test == 'n')
            {
                loop = false;
            }
        }
        else
        {
            cout << "!!! Invalid Input !!!... Please try again" << endl;
            loop = true;
        }
    } while (loop == true);
    return 0;
}

