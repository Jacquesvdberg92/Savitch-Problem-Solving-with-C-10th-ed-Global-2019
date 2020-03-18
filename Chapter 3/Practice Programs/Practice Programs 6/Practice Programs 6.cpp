// Practice Programs 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
Buoyancy is the ability of an object to float.
Archimedes’ principle states that the buoyant force is equal to the weight of the fluid that is displaced by the submerged object.
The buoyant force can be computed by Fb = V * y where Fb is the buoyant force, V is the volume of the submerged object, and y is the specific weight of the fluid.
If Fb is greater than or equal to the weight of the object, then it will float, otherwise it will sink.
Write a program that inputs the weight (in pounds) and radius (in feet) of a sphere and outputs whether the sphere will sink or float in water.
Use y = 62.4 lb/ft3 as the specific weight of water.
The volume of a sphere is computed by (4/3)πr3.
*/

#include <iostream>

int main()
{
    // Decliration of Functions
    void buoyancy_test(double d_weight, double d_radius);
    double get_numrical_input();
    bool try_again();
    // Variables
    double d_weight = 0, d_radius = 0;
    // loop that runs once before promting to run again
    do
    {
        // gets input
        std::cout << "Please enter the weight in pounds" << std::endl;
        d_weight = get_numrical_input();
        // gets input
        std::cout << "Please enter the radius in feet" << std::endl;
        d_radius = get_numrical_input();
        // Calls Function
        buoyancy_test(d_weight, d_radius);
    } while (try_again());
    return 0;
}

// Function to check if object is buoyant
void buoyancy_test(double d_weight, double d_radius)
{
    // Function variables
    double d_Fb = 0, d_v = 0;
    const double d_y = 62.4, d_pie = 3.142;
    
    // raduis to the power of 3
    d_radius *= d_radius * d_radius;
    // calculates the volume
    d_v = ((4 / 3) * d_pie) * d_radius;
    // Calculates buoyancy
    d_Fb = d_v * d_y;

    if (d_Fb >= d_weight)
    {
        std::cout << "The Object weight is: " << d_weight << std::endl;
        std::cout << "The Object volume is: " << d_v << std::endl;
        std::cout << "The Object will float" << std::endl;
    }
    else {
        std::cout << "The Object weight is: " << d_weight << std::endl;
        std::cout << "The Object volume is: " << d_v << std::endl;
        std::cout << "The object will sink" << std::endl;
    }

}
// Function to get numrical input
double get_numrical_input()
{
    double  d_input = 0;
    while (!(std::cin >> d_input))
    {
        // Error code (if its not a number entered)
        std::cout << "INVALID INPUT: Please enter numrical value" << std::endl;
        // Clears the input
        std::cin.clear();
        // disrecards previous input
        std::cin.ignore(123, '\n');
    }
    return d_input;
}
// function to check if the program should run again
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