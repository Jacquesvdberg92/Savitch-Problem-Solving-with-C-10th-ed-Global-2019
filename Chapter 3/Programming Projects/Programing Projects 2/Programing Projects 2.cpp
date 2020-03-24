// Programing Projects 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
(This Project requires that you know some basic facts about complex numbers, 
so it is only appropriate if you have studied complex numbers in some mathematics class.)
Write a C++ program that solves a quadratic equation to find its roots. The roots of a quadratic equation ax2  + bx + c = 0
(where a is not zero) are given by the formula (−b ± sqrt(b2 − 4ac)) / 2a

The value of the discriminant (b2 − 4ac) determines the nature of roots. 
If the value of the discriminant is zero, then the equation has a single real root. 
If the value of the discriminant is positive then the equation has two real roots. 
If the value of the discriminant is negative, then the equation has two complex roots.
The program takes values of a, b, and c as input and outputs the roots.
Be creative in how you output complex roots. 
Include a loop that allows the user to repeat this calculation for new input values until the user says she or he wants to end the program.
*/

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstring>
using namespace std;
int main()
{
    double a, b, c, x1, x2;
    char x;
    cout << "enter the value of a: ";
    cin >> a;
    cout << "enter the value of b: ";
    cin >> b;
    cout << "enter the value of c: ";
    cin >> c;
    cout << "the quadratic equation is" << a;
    cout << "*x*x+" << b;
    cout << "*x+" << c << endl;
    if

        (a == 0 && b == 0)
        cout << "not a valid equation";
    if

        (a == 0 && b != 0)
    {
        x1 = -(c / b);


        cout << endl;
        cout << "root=" << x1;
        cout << endl;
    }
    if ((b * b - 4 * a * c) > 0)
    {
        x2 = (b * b) - (4 * a * c);
        x1 = -b + sqrt(x2);
        cout << "root=" << x1 << endl;
    }
    if ((b * b - 4 * a * c) < 0)
    {
        cout << "not a real root" << endl;
    }
    return 0;
}


