// Practice Programs 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
Modify the C++ program you entered in Practice Program 1. 
Change the program so that it asks a user for their favourite number, writes it to the screen and then goes on to do the same things that the program in Display 1.8 does.

Display 1.8
1    #include <iostream> 
2    using namespace std; 
3    int main( ) 
4    { 
5        int numberOfPods, peasPerPod, totalPeas; 
6        cout << "Press return after entering a number.\n"; 
7        cout << "Enter the number of pods:\n"; 
8        cin >> numberOfPods; 
9        cout << "Enter the number of peas in a pod:\n"; 
10        cin >> peasPerPod; 
11        totalPeas = numberOfPods * peasPerPod; 
12        cout << "If you have "; 
13        cout << numberOfPods; 
14        cout << " pea pods\n"; 
15        cout << "and "; 
16        cout << peasPerPod; 
17        cout << " peas in each pod, then\n"; 
18        cout << "you have "; 
19        cout << totalPeas; 
20        cout << " peas in all the pods.\n"; 
21        return  0; 
22    }

Create an int variable to store the number and read a value from the user using cin.
Print out the text “Your favourite number is:” and the number that the user has entered. 
Be certain to add the symbols \n to your output statement. 
If the user entered 42, you should print out “Your favourite number is 42”. 
Recompile the changed program and run it.
*/

#include <iostream>
using namespace std;
int main()
    {
	int favNum; //This will store the users favourite number
	cout << "Please enter your favourite number" << endl; //THis line will desplai the message in the console
	cin >> favNum; // recievce input from the user
	cout << "Your favourite number is " << favNum << endl; //Displays the message and the users favourite number in the console
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
