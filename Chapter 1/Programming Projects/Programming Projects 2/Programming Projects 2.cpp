// Programming Projects 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den berg

/*
Write a program that prints out “C S !” in large block letters inside a border of *s followed by two blank lines then the message Computer Science is Cool Stuff. The output should look as follows:
*************************************************
        C C C          S S S S     !!
       C     C        S       S    !!
      C              S             !!
     C                S            !!
     C                 S S S S     !!
     C                        S    !!
      C                        S   !!
       C     C        S       S
        C C C          S S S S     OO
*************************************************
	Computer Science is Cool Stuff!!!
*/

#include <iostream>
using namespace std;

int main()
{
	cout << "*************************************************" << endl;
	cout << "        C C C          S S S S     !!" << endl;
	cout << "       C     C        S       S    !!" << endl;
	cout << "      C              S             !!" << endl;
	cout << "     C                S            !!" << endl;
	cout << "     C                 S S S S     !!" << endl;
	cout << "     C                        S    !!" << endl;
	cout << "      C                        S   !!" << endl;
	cout << "       C     C        S       S" << endl;
	cout << "        C C C          S S S S     OO" << endl;
	cout << "*************************************************" << endl;
	cout << "	Computer Science is Cool Stuff!!!" << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
