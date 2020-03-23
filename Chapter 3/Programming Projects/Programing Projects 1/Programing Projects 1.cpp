// Programing Projects 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
 Write a program that computes the cost of a long-distance call. 

 The cost of the call is determined according to the following rate schedule: 
 a. Any call started between 8:00 am and 6:00 pm, Monday through Friday, is billed at a rate of $0.40 per minute. 
 b. Any call starting before 8:00 am or after 6:00 pm, Monday through Friday, is charged at a rate of $0.25 per minute.
 c. Any call started on a Saturday or Sunday is charged at a rate of $0.15 per minute.

The input will consist of the day of the week, the time the call started, and the length of the call in minutes.
The output will be the cost of the call. The time is to be input in 24-hour notation, so the time 1:30 pm is input as 13:30
The day of the week will be read as one of the following pairs of character values, which are stored in two variables of type char:
Mo Tu We Th Fr Sa Su
Be sure to allow the user to use either uppercase or lowercase letters or a combination of the two.
The number of minutes will be input as a value of type int.
(You can assume that the user rounds the input to a whole number of minutes.)
Your program should include a loop that lets the user repeat this calculation until the user says she or he is done.
*/

#include <iostream>

int main()
{
    // Function Decleration
    bool try_again();
    char get_char();
    int get_int();
    char to_lower(char input);
    bool check_day_of_week(char c_in_1, char c_in_2);
    std::string day_of_week(char c_in_1, char c_in_2);
    double charge(int i_time, int i_length, std::string day_of_week);
    void print_info(int i_time, int i_length, std::string day_of_week, double charge);

    // Variables
    char c_in_1, c_in_2;
    int i_time = 0, i_length = 0;

    std::cout << "Welcom" << std::endl;
    do
    {
        do
        {
            std::cout << "Please enter the day of the week as follows: " << std::endl;
            std::cout << "Mo Tu We Th Fr Sa Su" << std::endl;
            c_in_1 = to_lower(get_char());
            c_in_2 = to_lower(get_char());
        } while (check_day_of_week(c_in_1,c_in_2));

        std::cout << "Please enter the time the call started in 24h notation:" << std::endl;
        i_time = get_int();

        do
        {
            std::cout << "Please enter the length of the call in minutes:" << std::endl;
            i_length = get_int();
            if (i_length < 1)
            {
                std::cout << "Length should be greater than 1 min" << std::endl;
            }
        } while (i_length < 1);

        print_info(i_time, i_length, day_of_week(c_in_1, c_in_2), charge(i_time, i_length,day_of_week(c_in_1, c_in_2)));

    } while (try_again());
}
// Function to check day of the week
bool check_day_of_week(char c_in_1, char c_in_2)
{
    bool loop = false;
    if (c_in_1 != 'm' && c_in_1 != 't' && c_in_1 != 'w' && c_in_1 != 'f' && c_in_1 != 's')
    {
        std::cout << "ERROR: Day of the week cannot start with "<< c_in_1 << std::endl;
        std::cout << "TRY AGAIN" << std::endl;
        loop = true;
    }
    else {
        if (c_in_2 != 'o' && c_in_2 != 'u' && c_in_2 != 'e' && c_in_2 != 'h' && c_in_2 != 'r' && c_in_2 != 'a')
        {
            std::cout << "ERROR: second character cannot be " << c_in_2 << std::endl;
            std::cout << "TRY AGAIN" << std::endl;
            loop = true;
        }
    }
    return loop;
}
// Function to get character input
char get_char()
{
    // Variable
    char input;
    // Validates that input is of char
    while (!(std::cin >> input))
    {
        std::cout << "ERROR: Single character input only" << std::endl;
        std::cin.clear();
        std::cin.ignore(123, '\n');
    }

    return input;
}
// Function to Lower case (Only the letters that can be used)
char to_lower(char input)
{
    // Converts Char to lower case *Please note it will not do the whole alphabet.... only the needed characters
    switch (input)
    {
    case 'M':
        input = 'm';
        break;
    case 'O':
        input = 'o';
        break;
    case 'T':
        input = 't';
        break;
    case 'U':
        input = 'u';
        break;
    case 'W':
        input = 'w';
        break;
    case 'E':
        input = 'e';
        break;
    case 'H':
        input = 'h';
        break;
    case 'F':
        input = 'f';
        break;
    case 'R':
        input = 'r';
        break;
    case 'S':
        input = 's';
        break;
    case 'A':
        input = 'a';
        break;
    default :
        break;
    }
    return input;
}
// Function to get Integer input
int get_int()
{
    // Variable
    int input = 0;
    // Checks that input is of int
    while (!(std::cin >> input))
    {
        std::cout << "ERROR: only numrical values allowed" << std::endl;
        std::cin.clear();
        std::cin.ignore(123, '\n');
    }
    return input;
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
//Function to return day of the week as a string
std::string day_of_week(char c_in_1, char c_in_2)
{
    // Returns day of the week as string sothat its easier to work with in charge function
    std::string resualt;
    if (c_in_1 == 'm' && c_in_2 == 'o')
    {
        resualt = "Mo";
    }
    if (c_in_1 == 't' && c_in_2 == 'u')
    {
        resualt = "Tu";
    }
    if (c_in_1 == 'w' && c_in_2 == 'e')
    {
        resualt = "We";
    }
    if (c_in_1 == 't' && c_in_2 == 'h')
    {
        resualt = "Th";
    }
    if (c_in_1 == 'f' && c_in_2 == 'r')
    {
        resualt = "Fr";
    }
    if (c_in_1 == 's' && c_in_2 == 'a')
    {
        resualt = "Sa";
    }
    if (c_in_1 == 's' && c_in_2 == 'u')
    {
        resualt = "Su";
    }
    return resualt;
}
// Function to calculate the cost of the call
double charge(int i_time, int i_length, std::string day_of_week)
{
    // variables
    int hour = i_time / 100;
    double charge = 0;

    //Checks the day of the call and calculates the cost accordingly
    if (day_of_week != "Sa" && day_of_week != "Su")
    {
        // Checks time of call and calculates cost accordingly
        if (hour >= 8 && hour <= 18)
        {
            charge = i_length * 0.40;
        }
        else {
            charge = i_length * 0.25;
        }
    }
    else {
        charge = i_length * 0.15;
    }
    return charge;
}
// Function to print Info
void print_info(int i_time, int i_length, std::string day_of_week, double charge)
{
    int hour = i_time / 100, min = i_time % 100;
    // Sets float to only print 2 decimal points
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);
    // Prints information
    std::cout << std::endl;
    std::cout << "____________________" << std::endl;
    std::cout << "Day of Call: " << day_of_week << std::endl;
    std::cout << "Time of Call: " << hour << ":" << min << std::endl;
    std::cout << "Length of Call: " << i_length << " Minutes" << std::endl;
    std::cout << "Cost of Call: " << charge << "$" << std::endl;
    std::cout << "____________________" << std::endl;
    std::cout << std::endl;
}