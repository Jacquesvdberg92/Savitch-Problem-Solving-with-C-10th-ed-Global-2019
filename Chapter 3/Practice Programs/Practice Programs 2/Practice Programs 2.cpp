// Practice Programs 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
 Write a program to compute the interest due, total amount due, 
 and the minimum payment for a revolving credit account. 
 The program accepts the account balance as input, then adds on the interest to get the total amount due. 
 The rate schedules are the following: 
 The interest is 1.5 percent on the first $1,000 and 1 percent on any amount over that. 
 The minimum payment is the total amount due if that is $10 or less; 
 otherwise, it is $10 or 10 percent of the total amount owed, whichever is larger. 
 Your program should include a loop that lets the user repeat this calculation until the user says she or he is done.
*/

#include <iostream>

// Decleration of function
bool tryAgain();
float intrestDue(float accountBalance);
float amountDue(float accountBalance);
float minPayment(float accountBalance);
void displayInfo(float accountBalance, float totalIntrest, float paymentDue, float totalAmount);

int main()
{
	char test;
	float accountBalance = 0, totalIntrest = 0, paymentDue = 0, totalAmount = 0;
	std::cout << "Welcome" << std::endl;
    do
    {
		std::cout << "PLease enter the account balance" << std::endl;
		std::cin >> accountBalance;

		// calculates intrest due
		totalIntrest = intrestDue(accountBalance);

		// calculates amount due
		totalAmount = amountDue(accountBalance);

		//calculates minimum payment
		paymentDue = minPayment(accountBalance);

		// calls print function
		displayInfo(accountBalance, totalIntrest, paymentDue, totalAmount);

		// this calls the function to check if the user wants to try again
		 test = tryAgain();

    } while (test != false);
}

//This is the function used to test if the user wants to try again
bool tryAgain()
{
	char test;
	bool loop = false, loopMain = false;
	do
	{
		std::cout << "would you like to try again? (Y/N)" << std::endl;
		std::cin >> test;
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
			std::cout << "!!! Invalid Input !!! Please try again!!!" << std::endl;
			std::cout << std::endl;
			loop = true;
		}
	} while (loop == true);

	return loopMain;
}

// Function that will calculate the total amount due
float amountDue(float accountBalance)
{
	float result = 0;

	result = ((intrestDue(accountBalance)) + accountBalance);

	return result;
};

// Function that will calculate the minimum payment
float minPayment(float accountBalance)
{
	float result = 0, temp = 0;
	result = amountDue(accountBalance);

	if (result > 10)
	{
		result = result * 0.1;
		if (result < 10)
		{
			result = 10;
		}
	}

	return result;
};


// Function to calculate the intrest due
float intrestDue(float accountBalance)
{
	// variable is used localy to return the value
	float result = 0;

	if (accountBalance > 1000)
	{
		result = (1000 * 0.015);
		result += ((accountBalance - 1000) * 0.01);
	}
	else
	{
		result = (accountBalance * 0.015);
	}
	return result;
};

// Function to display nessasery info
void displayInfo(float accountBalance, float totalIntrest, float paymentDue, float totalAmount)
{
	std::cout.setf(std::ios::fixed);
	std::cout.setf(std::ios::showpoint);
	std::cout.precision(2);

	std::cout << std::endl;
	std::cout << "You have enterd an amount of: " << accountBalance << std::endl;
	std::cout << "Your Total Intrest is: " << totalIntrest << std::endl;
	std::cout << "Your amount due is: " << totalAmount << std::endl;
	std::cout << "Your minimum payment is: " << paymentDue << std::endl;
	std::cout << std::endl;
};