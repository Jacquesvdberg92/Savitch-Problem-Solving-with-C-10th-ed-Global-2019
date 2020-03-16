// Practice Programs 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Jacques van den Berg

/*
Write an astrology program.
The user types in a birthday, and the program responds with the sign and horoscope for that birthday.
The month may be entered as a number from 1 to 12.
Then enhance your program so that if the birthday is only one or two days away from an adjacent sign, 
the program announces that the birthday is on a “cusp” and also outputs the horoscope for that nearest adjacent sign. 
This program will have a long multiway branch. Make up a horoscope for each sign. 
Your program should include a loop that lets the user repeat this calculation until the user says she or he is done.
*/

#include <iostream>
#include <string>

class birthday
{
private:
    int day = 0, month = 0, year = 0;
    bool leap = false;

public:
    // Function to set and validate the date from user
    void set_date()
    {
        // Displays a message to the user
        std::cout << "Please only use numrical values for input." << std::endl;

        // Function variables
        bool loop = true;
        int yyyy = 0, mm = 0, dd = 0;

        // Askes for input
        std::cout << "Please enter the year you where born: " << std::endl;

        // Checks that year is a Numrical value
        while (!(std::cin >> yyyy))
        {
            // Error code (if its not a number entered)
            std::cout << "INVALID INPUT: Please enter numrical value" << std::endl;
            // Clears the input
            std::cin.clear();
            // disrecards previous input
            std::cin.ignore(123, '\n');
        }
        // sets year to yyyy after validation
        year = yyyy;

        // checks if the year is a leap year
        if ((yyyy % 4 == 0) && (yyyy % 100 != 0))
        {
            leap = true;
        }
        else if ((yyyy % 100 == 0) && (yyyy % 400 == 0))
        {
            leap = true;
        }
        else if (yyyy % 400 == 0)
        {
            leap = true;
        }
        else
        {
            leap = false;
        }

        //loop to ask for months as well as validat input (between 1 and 12 as well as numrical value)
        do
        {
            loop = true;
            // askes for input
            std::cout << "Please enter the month you where born (1 - 12): " << std::endl;
            // Checks that month is a Numrical value
            while (!(std::cin >> mm))
            {
                // Error code (if its not a number entered)
                std::cout << "INVALID INPUT: Please enter numrical value" << std::endl;
                // Clears the input
                std::cin.clear();
                // disrecards previous input
                std::cin.ignore(123, '\n');
            }
            // checks that the month isn't less that 1 or more than 12
            if (mm > 12 || mm < 1)
            {
                std::cout << "INVALID INPUT" << std::endl;
                std::cout << "Value cannot be less that 1 or more than 12" << std::endl;
                loop = true;
            }
            else {
                loop = false;
            }
            
        } while (loop == true);
        // sets month to the value of mm
        month = mm;

        do
        {
            loop = true;
            // Askes for input
            std::cout << "Please enter the day you where born: " << std::endl;

            // Checks that day is a Numrical value
            while (!(std::cin >> dd))
            {
                // Error code (if its not a number entered)
                std::cout << "INVALID INPUT: Please enter numrical value" << std::endl;
                // Clears the input
                std::cin.clear();
                // disrecards previous input
                std::cin.ignore(123, '\n');
            }

            // validates the days in a month
            switch (month)
            {
            // All of the following cases checks for months with 31 days
            case 1:
                while (dd > 31 || dd < 1)
                {
                    std::cout << "Please check your input" << std::endl;
                    std::cout << "Day can not be less that 1 or more than 31" << std::endl;

                    // Askes for input
                    std::cout << "Please enter the day you where born: " << std::endl;
                    // Checks that day is a Numrical value
                    while (!(std::cin >> dd))
                    {
                        // Error code (if its not a number entered)
                        std::cout << "INVALID INPUT: Please enter numrical value" << std::endl;
                        // Clears the input
                        std::cin.clear();
                        // disrecards previous input
                        std::cin.ignore(123, '\n');
                    }
                }
                loop = false;
                break;
            case 3:
                while (dd > 31 || dd < 1)
                {
                    std::cout << "Please check your input" << std::endl;
                    std::cout << "Day can not be less that 1 or more than 31" << std::endl;

                    // Askes for input
                    std::cout << "Please enter the day you where born: " << std::endl;
                    // Checks that day is a Numrical value
                    while (!(std::cin >> dd))
                    {
                        // Error code (if its not a number entered)
                        std::cout << "INVALID INPUT: Please enter numrical value" << std::endl;
                        // Clears the input
                        std::cin.clear();
                        // disrecards previous input
                        std::cin.ignore(123, '\n');
                    }
                }
                loop = false;
                break;
            case 5:
                while (dd > 31 || dd < 1)
                {
                    std::cout << "Please check your input" << std::endl;
                    std::cout << "Day can not be less that 1 or more than 31" << std::endl;

                    // Askes for input
                    std::cout << "Please enter the day you where born: " << std::endl;
                    // Checks that day is a Numrical value
                    while (!(std::cin >> dd))
                    {
                        // Error code (if its not a number entered)
                        std::cout << "INVALID INPUT: Please enter numrical value" << std::endl;
                        // Clears the input
                        std::cin.clear();
                        // disrecards previous input
                        std::cin.ignore(123, '\n');
                    }
                }
                loop = false;
                break;
            case 7:
                while (dd > 31 || dd < 1)
                {
                    std::cout << "Please check your input" << std::endl;
                    std::cout << "Day can not be less that 1 or more than 31" << std::endl;

                    // Askes for input
                    std::cout << "Please enter the day you where born: " << std::endl;
                    // Checks that day is a Numrical value
                    while (!(std::cin >> dd))
                    {
                        // Error code (if its not a number entered)
                        std::cout << "INVALID INPUT: Please enter numrical value" << std::endl;
                        // Clears the input
                        std::cin.clear();
                        // disrecards previous input
                        std::cin.ignore(123, '\n');
                    }
                }
                loop = false;
                break;
            case 8:
                while (dd > 31 || dd < 1)
                {
                    std::cout << "Please check your input" << std::endl;
                    std::cout << "Day can not be less that 1 or more than 31" << std::endl;

                    // Askes for input
                    std::cout << "Please enter the day you where born: " << std::endl;
                    // Checks that day is a Numrical value
                    while (!(std::cin >> dd))
                    {
                        // Error code (if its not a number entered)
                        std::cout << "INVALID INPUT: Please enter numrical value" << std::endl;
                        // Clears the input
                        std::cin.clear();
                        // disrecards previous input
                        std::cin.ignore(123, '\n');
                    }
                }
                loop = false;
                break;
            case 10:
                while (dd > 31 || dd < 1)
                {
                    std::cout << "Please check your input" << std::endl;
                    std::cout << "Day can not be less that 1 or more than 31" << std::endl;

                    // Askes for input
                    std::cout << "Please enter the day you where born: " << std::endl;
                    // Checks that day is a Numrical value
                    while (!(std::cin >> dd))
                    {
                        // Error code (if its not a number entered)
                        std::cout << "INVALID INPUT: Please enter numrical value" << std::endl;
                        // Clears the input
                        std::cin.clear();
                        // disrecards previous input
                        std::cin.ignore(123, '\n');
                    }
                }
                loop = false;
                break;
            case 12:
                while (dd > 31 || dd < 1)
                {
                    std::cout << "Please check your input" << std::endl;
                    std::cout << "Day can not be less that 1 or more than 31" << std::endl;

                    // Askes for input
                    std::cout << "Please enter the day you where born: " << std::endl;
                    // Checks that day is a Numrical value
                    while (!(std::cin >> dd))
                    {
                        // Error code (if its not a number entered)
                        std::cout << "INVALID INPUT: Please enter numrical value" << std::endl;
                        // Clears the input
                        std::cin.clear();
                        // disrecards previous input
                        std::cin.ignore(123, '\n');
                    }
                }
                loop = false;
                break;

            //this case checks foe Feb with and without leap year
            case 2:
                if (leap == false)
                {
                    while (dd > 28 || dd < 1)
                    {
                        std::cout << "Please check your input" << std::endl;
                        std::cout << "Day can not be less that 1 or more than 28" << std::endl;

                        // Askes for input
                        std::cout << "Please enter the day you where born: " << std::endl;
                        // Checks that day is a Numrical value
                        while (!(std::cin >> dd))
                        {
                            // Error code (if its not a number entered)
                            std::cout << "INVALID INPUT: Please enter numrical value" << std::endl;
                            // Clears the input
                            std::cin.clear();
                            // disrecards previous input
                            std::cin.ignore(123, '\n');
                        }
                    }
                }
                else {
                    while (dd > 29 || dd < 1)
                    {
                        std::cout << "Please check your input" << std::endl;
                        std::cout << "Day can not be less that 1 or more than 29" << std::endl;

                        // Askes for input
                        std::cout << "Please enter the day you where born: " << std::endl;
                        // Checks that day is a Numrical value
                        while (!(std::cin >> dd))
                        {
                            // Error code (if its not a number entered)
                            std::cout << "INVALID INPUT: Please enter numrical value" << std::endl;
                            // Clears the input
                            std::cin.clear();
                            // disrecards previous input
                            std::cin.ignore(123, '\n');
                        }
                    }
                }
                loop = false;
                break;
            // here i use the default as every month with 30 days
            default:
                while (dd > 30 || dd < 1)
                {
                    std::cout << "Please check your input" << std::endl;
                    std::cout << "Day can not be less that 1 or more than 30" << std::endl;

                    // Askes for input
                    std::cout << "Please enter the day you where born: " << std::endl;
                    // Checks that day is a Numrical value
                    while (!(std::cin >> dd))
                    {
                        // Error code (if its not a number entered)
                        std::cout << "INVALID INPUT: Please enter numrical value" << std::endl;
                        // Clears the input
                        std::cin.clear();
                        // disrecards previous input
                        std::cin.ignore(123, '\n');
                    }
                }
                loop = false;
                break;
            }
            day = dd;
        } while (loop == true);
    }

    // Function to get the day
    int get_day()
    {
        int dd = day;
        return dd;
    }

    // Function to get the month
    int get_month()
    {
        int mm = month;
        return month;
    }

    // Function to get the year
    int get_year()
    {
        int yyyy = year;
        return year;
    }

    // Function to get leap
    bool get_leap()
    {
        bool lp = leap;
        return lp;
    }

    // Function used only for testing of the program
    void test_print()
    {
        std::cout << "Year: " << year << std::endl;
        std::cout << "Month: " << month << std::endl;
        std::cout << "Day: " << day << std::endl;
        
    }

};


int main()
{
    // decleration of function
    bool try_again();
    std::string horoscope(int dd, int mm);
    void prnt_info(std::string horoscope, int dd, int mm, int yyyy, bool leap);

    // welcome message
    std::cout << "Welcome to Astrology" << std::endl;

    // Main variables
    bool loopMain = true;
    std::string result;

    // Loop that allows the user to try as many times as they like. (Uses the try_again function)
    do
    {
        // Class dlecleration
        birthday user;

        // Use of class functions
        user.set_date();

        // Function to get Horoscope
        result = horoscope(user.get_day(), user.get_month());

        // Function to print all relevant data
        prnt_info(result, user.get_day(), user.get_month(), user.get_year(), user.get_leap());
        
        // sets loopMain to the return value of  try_again
        loopMain = try_again();

    } while (loopMain == true);
}

// Loop that checks for user input as well as validates the input
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
            default :
                std::cout << "!!! Invalid input !!!" << std::endl;
                std::cout << "Please try again" << std::endl;
                loop = true;
            }
    } while (loop == true);
    return loopMain;
}

// Checks for horoscope and returns the correct scope
std::string horoscope(int dd, int mm)
{
    std::string meta;
    
    // Alot of if statements to check the date and add the corrosponding horoscope
    if ((mm == 1 && dd >= 20) || (mm == 2 && dd <= 18))
    {
        meta = "Aquarius";
    }
    if ((mm == 2 && dd >= 19) || (mm == 3 && dd <= 20))
    {
        meta = "Pisces";
    }
    if ((mm == 3 && dd >= 21) || (mm == 4 && dd <= 19))
    {
        meta = "Aries";
    }
    if ((mm == 4 && dd >= 20) || (mm == 5 && dd <= 20))
    {
        meta = "Taurus";
    }
    if ((mm == 5 && dd >= 21) || (mm == 6 && dd <= 21))
    {
        meta = "Gemini";
    }
    if ((mm == 6 && dd >= 22) || (mm == 7 && dd <= 22))
    {
        meta = "Cancer";
    }
    if ((mm == 7 && dd >= 23) || (mm == 8 && dd <= 22))
    {
        meta = "Leo";
    }
    if ((mm == 8 && dd >= 23) || (mm == 9 && dd <= 22))
    {
        meta = "Virgo";
    }
    if ((mm == 9 && dd >= 23) || (mm == 10 && dd <= 22))
    {
        meta = "Libra";
    }
    if ((mm == 10 && dd >= 23) || (mm == 11 && dd <= 21))
    {
        meta = "Scorpio";
    }
    if ((mm == 11 && dd >= 22) || (mm == 12 && dd <= 21))
    {
        meta = "Sagittarius";
    }
    if ((mm == 12 && dd >= 22) || (mm == 1 && dd <= 19))
    {
        meta = "Capricorn";
    }

    return meta;
}

// Prints the relevant information
void prnt_info(std::string horoscope, int dd, int mm, int yyyy, bool leap)
{
    std::cout << std::endl;
    std::cout << "The date entered is: " << dd << "/" << mm << "/" << yyyy << std::endl;
    // Switch statement to print the correct term for Leap year
    switch (leap)
    {
    case true:
        std::cout << "Leap year: Yes" << std::endl;
        break;
    default:
        std::cout << "Leap year: No" << std::endl;
    }
    std::cout << "Horoscope: " << horoscope << std::endl;
    std::cout << std::endl;
}

