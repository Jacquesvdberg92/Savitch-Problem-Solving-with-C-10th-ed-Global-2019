// Programing Projects 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
Write a program that accepts a year written as a four-digit Arabic (ordinary) numeral and outputs the year written in Roman numerals. 
Important Roman numerals are V for 5, X for 10, L for 50, C for 100, D for 500, and M for 1,000. 
Recall that some numbers are formed by using a kind of subtraction of one Roman “digit”; 
for example, IV is 4 produced as V minus I, XL is 40, CM is 900, and so on. 
A few sample years: MCM is 1900, MCML is 1950, MCMLX is 1960, MCMXL is 1940, MCMLXXXIX is 1989. 
Assume the year is between 1000 and 3000. 
Your program should include a loop that lets the user repeat this calculation until the user says she or he is done.
*/

#include <iostream>
#include <string>

int main()
{
    bool try_again();
    int year = 0, temp = 0;
    std::string melenium, centuary, decade, yea;

    std::cout << "Welcome" << std::endl;
    do
    {
        std::cout << "Please enter the number to be converted" << std::endl;
        do
        {
            while (!(std::cin >> year))
            {
                std::cout << "ERROR: Please enter only numbers!" << std::endl;
                std::cin.clear();
                std::cin.ignore(123, '\n');
            }
            if (year < 999)
            {
                std::cout << "Please enter a number bigger than 1000" << std::endl;
            }
            if (year > 3000)
            {
                std::cout << "The year cannot be bigger than 3000" << std::endl;
            }
        } while (year < 999 || year > 3000);

        // For Milenium
        temp = year / 1000;
        std::cout << temp << std::endl;
        switch (temp)
        {
        case 1:
            melenium = "M";
            break;
        case 2 :
            melenium = "M";
            break;
        case 3:
            melenium = "MMM";
            break;
        default:
            melenium = "";
        }

        // for centuary
        temp = year % 1000;
        temp = temp / 100;
        std::cout << temp << std::endl;
        switch (temp)
        {
        case 1:
            centuary = "C";
            break;
        case 2:
            centuary = "CC";
            break;
        case 3:
            centuary = "CCC";
            break;
        case 4:
            centuary = "CD";
            break;
        case 5:
            centuary = "D";
            break;
        case 6:
            centuary = "DC";
            break;
        case 7:
            centuary = "DCC";
            break;
        case 8:
            centuary = "DCCC";
            break;
        case 9:
            centuary = "CM";
            break;
        default :
            centuary = "";
        }

        // For Decade
        temp = year % 100;
        temp = temp / 10;
        std::cout << temp << std::endl;
        switch (temp)
        {
        case 1:
            decade = "X";
            break;
        case 2:
            decade = "XX";
            break;
        case 3:
            decade = "XXX";
            break;
        case 4:
            decade = "XL";
            break;
        case 5:
            decade = "L";
            break;
        case 6:
            decade = "LX";
            break;
        case 7:
            decade = "LXX";
            break;
        case 8:
            decade = "LXXX";
            break;
        case 9:
            decade = "XC";
            break;
        default:
            decade = "";
        }

        // For Year
        temp = year % 10;
        temp = temp / 1;
        std::cout << temp << std::endl;
        switch (temp)
        {
        case 1:
            yea = "I";
            break;
        case 2:
            yea = "II";
            break;
        case 3:
            yea = "III";
            break;
        case 4:
            yea = "IV";
            break;
        case 5:
            yea = "V";
            break;
        case 6:
            yea = "VI";
            break;
        case 7:
            yea = "VII";
            break;
        case 8:
            yea = "VIII";
            break;
        case 9:
            yea = "IX";
            break;
        default:
            yea = "";
        }

        std::cout << "The Roman translation for the year: " << year << " is:" << std::endl;
        std::cout << melenium << centuary << decade << yea << std::endl;


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