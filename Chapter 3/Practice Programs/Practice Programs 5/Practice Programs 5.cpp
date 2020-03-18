// Practice Programs 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
Write a program that finds and prints all of the prime numbers between 3 and 100. 
A prime number is a number such that 1 and itself are the only numbers that evenly divide it (for example, 3, 5, 7, 11, 13, 17, …).
One way to solve this problem is to use a doubly nested loop. 
The outer loop can iterate from 3 to 100 while the inner loop checks to see if the counter value for the outer loop is prime.
One way to see if number n is prime is to loop from 2 to n 21 and if any of these numbers evenly divides n, then n cannot be prime. 
If none of the values from 2 to n 21 evenly divides n, then n must be prime. 
(Note that there are several easy ways to make this algorithm more efficient.)
*/

#include <iostream>

int main()
{
    // Variables
    int i_start = 0, i_end = 0;

    // Function Decliration
    bool try_again();
    void is_it_prime(int i_start, int i_end);

    // Welcome message
    std::cout << "Welcome to prime checker 3000" << std::endl;

    // Loop used to let the user run the software multiple times
    do
    {
        //use if you want user defined start and end
        /*
        // Loop to validate start  and end point
        do
        {
            // validateds numrical entry
            std::cout << "Please enter the number to start at" << std::endl;
            while (!(std::cin >> i_start))
            {
                // Error code (if its not a number entered)
                std::cout << "INVALID INPUT: Please enter numrical value" << std::endl;
                // Clears the input
                std::cin.clear();
                // disrecards previous input
                std::cin.ignore(123, '\n');
            }
            // validateds numrical entry
            std::cout << "Please enter the number to end at" << std::endl;
            while (!(std::cin >> i_end))
            {
                // Error code (if its not a number entered)
                std::cout << "INVALID INPUT: Please enter numrical value" << std::endl;
                // Clears the input
                std::cin.clear();
                // disrecards previous input
                std::cin.ignore(123, '\n');
            }
            // displays error message
            if (i_start > i_end)
            {
                std::cout << "ERROR: Start number cannot be bigger than end number" << std::endl;
            }

        } while (i_start > i_end);
        is_it_prime(i_start, i_end);
        */
        is_it_prime(3, 100); // comment out if user defined is enabled
    } while (try_again() == true);
}
// Function that allowes the program to runm as many times as the user wants
bool try_again()
{
    // Function variables
    bool loop = true, loopMain = true;
    char input;

    // Loop to validate user input
    do
    {
        // Displays message
        std::cout << "Would you like to try again? Y/N" << std::endl;

        // gets  user input
        std::cin >> input;

        //validates user input 
        switch (input)
        {
        case 'Y':
            loopMain = true;
            loop = false;
            break;
        case 'y':
            loopMain = true;
            loop = false;
            break;
        case 'N':
            loopMain = false;
            loop = false;
            break;
        case 'n':
            loopMain = false;
            loop = false;
            break;
        default:
            std::cout << "!!! Invalid input !!!" << std::endl;
            std::cout << "Please try again" << std::endl;
            loop = true;
        }
    } while (loop == true);
    return loopMain;
}

// Function to check for prime numbers
void is_it_prime(int i_start, int i_end)
{
    bool prime = true;
    for (int x = i_start; x <= i_end; x++)
    {
        prime = true;
        for (int y = 2; y <= (x - 1); y++)
        {
            if ((x % y) == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime == true)
        {
            std::cout << "Number: " << x << " is Prime" << std::endl;
        }
    }
}
