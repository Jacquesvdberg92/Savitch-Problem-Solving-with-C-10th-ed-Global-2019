// Practice Programs 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
A taxicab company calculates charges using a fixed $3.20 hire charge,
a $2.05-per-kilometer charge for the distance covered,
and an additional $0.95-per-minute charge based on the duration of the journey, in minutes.
If the journey starts between 2300 and 0600 hours, a 15% surcharge is applied.
Write a program that asks the user to input the duration of the journey (rounded up to the nearest minute),
the distance traveled (in kilometers), and the journey start time (as a 24-hour single int value).
The program should then output the fare that should be charged.
*/


#include <iostream>

int main()
{
    // Function decliration
    bool try_again();
    int get_num_in();
    float get_fare(int i_duration, int i_distance, int i_time_started);
    void print_info(int i_duration, int i_distance, int i_time_started, double total_charge);

    // Variables
    int i_time_started = 0, i_duration = 0, i_distance = 0;

    std::cout << "Welcome" << std::endl;
    do
    {
        // Gets Duration and validates input
        std::cout << "Please enter duration of trip in minuts: " << std::endl;
        i_duration = get_num_in();
        // Gets Distance and validates input
        std::cout << "Please enter distance of trip in kilometers: " << std::endl;
        i_distance = get_num_in();
        // Gets Time and validates input ** THIS STILL NEEDS REFINING!! **
        std::cout << "Please enter the time the trip started: (24h format)" << std::endl;
        i_time_started = get_num_in();
        // Prints info
        print_info(i_duration, i_distance, i_time_started, get_fare(i_duration, i_distance, i_time_started));

    } while (try_again());
}
// Try again function
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
// Gets numrical input from user
int get_num_in()
{
    // Variable
    int input;
    // Will check if input is numrical
    while (!(std::cin >> input))
    {
        std::cout << "ERROR: input should be numrical" << std::endl;
        std::cin.clear();
        std::cin.ignore(123, '\n');
    }
    return input;
}
// Calculates Fare
float get_fare(int i_duration, int i_distance, int i_time_started)
{
    // Constant Vairables
    const double surplus_charge = 1.15, hire_charge = 3.20, per_kilometer_charge = 2.05, per_minut_charge = 0.95;
    double total_charge = 0;
    // Checks time
    if (i_time_started < 2300 && i_time_started > 0600)
    {
        total_charge = ((i_distance * per_kilometer_charge) + (i_duration * per_minut_charge) + hire_charge);
    }
    else {
        total_charge = (((i_distance * per_kilometer_charge) + (i_duration * per_minut_charge) + hire_charge) * surplus_charge);
    }
    return total_charge;
}
// Prints info
void print_info(int i_duration, int i_distance, int i_time_started, double total_charge)
{
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);

    std::cout << std::endl;
    std::cout << "Time Started: "<< i_time_started << std::endl;
    std::cout << "Duration: " << i_duration << std::endl;
    std::cout << "Distance: " << i_distance << std::endl;
    std::cout << "Total Charge: " << total_charge << std::endl;
}