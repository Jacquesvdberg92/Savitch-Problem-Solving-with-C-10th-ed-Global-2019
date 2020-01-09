// Programming Projects 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques an den Berg

/*
Write a C++ program that reads in two integers and then outputs both their sum and their product.
One way to proceed is to start with the program in Display 1.8 and to then modify that program to produce the program for this project. 

Display 1.8
1    #include <iostream>
2    using namespace std;
3    int main()
4    {
5        int numberOfPods, peasPerPod, totalPeas;
6        cout << "Press return after entering a number.\n";
7        cout << "Enter the number of pods:\n";
8        cin >> numberOfPods;
9        cout << "Enter the number of peas in a pod:\n";
10       cin >> peasPerPod;
11       totalPeas = numberOfPods * peasPerPod;
12       cout << "If you have ";
13       cout << numberOfPods;
14       cout << " pea pods\n";
15       cout << "and ";
16       cout << peasPerPod;
17       cout << " peas in each pod, then\n";
18       cout << "you have ";
19       cout << totalPeas;
20       cout << " peas in all the pods.\n";
21       return  0;
22    }

Be certain to type the first line of your program exactly the same as the first line in Display 1.8. 
In particular, be sure that the first line begins at the left-hand end of the line with no space before or after the # symbol.
Also, be certain to add the symbols \n to the last output statement in your program. For example, the last output statement might be the following:
cout << "This is the end of the program.\n";
(Some systems require that final \n, and your system may be one of these.) 
*/


#include <iostream>
using namespace std;

int main()
{
	int num1, num2, total; // declare three integer vairables 

	cout << "Please enter two numbers seperated by pressing return" << endl; // display message in console
	cin >> num1; // recieves and stores user input
	cin >> num2; // recieves and stores user input

	cout << "the sum of " << num1 << " and " << num2 << " is " << (total = num1 + num2) << endl; //display message in console and calculate the sum of num1 and num2 as total
	cout << "the product of " << num1 << " and " << num2 << " is " << (total = num1 * num2) << endl; //display message in console and calculate the product of num1 and num2 as total
	cout << "this is the end of the program" << endl; //display the end message

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
