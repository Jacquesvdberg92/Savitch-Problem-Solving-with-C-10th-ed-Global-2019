// Practice Program 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg
/* 
Using your text editor, enter(that is, type in) the C++ program shown in Display 1.8.
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
Be certain to type the first line exactly as shown in Display 1.8.In particular, be sure that the first line begins at the left - hand end of the line with no space before or after the # symbol.
Compile and run the program.If the compiler gives you an error message, correct the programand recompile the program.
Do this until the compiler gives no error messages.Then run your program.
*/

#include <iostream>
using namespace std;

int main()
{
	//in this is; - in is an invalid type and the word this is reserved by the system and should not contain spaces...
	int thisIs; // this would be the correct way to add it in the program, it decrairs thisIs as type integer

	int numberOfPods, peasPerPod, totalPeas;
	cout << "Press return after entering a number.\n";
	cout << "Enter the number of pods:\n";
	cin >> numberOfPods;
	cout << "Enter the number of peas in a pod:\n";
	cin >> peasPerPod;
    totalPeas = numberOfPods * peasPerPod;
	cout << "If you have ";
	cout << numberOfPods;
	cout << " pea pods\n";
	cout << "and ";
	cout << peasPerPod;
	cout << " peas in each pod, then\n";
	cout << "you have ";
	cout << totalPeas;
	cout << " peas in all the pods.\n";
	return  0;
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
