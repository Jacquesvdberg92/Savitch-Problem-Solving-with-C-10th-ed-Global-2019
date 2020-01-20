// Practice Programs 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*
 Write a very simple conversational dialog program. 
 Your program should do the following: 
 ■■ Say “Hello” to the user. 
 ■■ Ask them if they are having a good day, and record their input. 
 ■■ If their response is anything other than a ‘y’ for yes or an ‘n’ for no, repeat the question. 
 ■■ If they respond with a ‘y’, output “I’m glad to hear that”, and if they answer with an ‘n’, then output “I hope your day gets better soon.”
You may need to use a do-while loop to repeat the questions to the user.
*/

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
    char input1; // varaible
    bool test = false; // varaible

    
    cout << "Hello User!!" << endl; // displays msg in console
    cout << "How are you today? having a Nice day? (y/n)" << endl; // displays msg in console
    cin >> input1; 
    
    do // loop that will keep executing while the condition is false
    {
        if (input1 == 'y' || input1 == 'n' || input1 == 'Y' || input1 == 'N') // tests user input
        {
            test = true; // changes condition to true
        }
        else //repeats question as input was invalid and starts the loop again
        {
            cout << "your input is invalid... Please enter Y for yes or N for no" << endl;
            cout << "How are you today? having a Nice day? (y/n)" << endl;
            cin >> input1;
        }
    } while (test == false); // end of loop

    switch (input1) // displays a message depending on the user input.. you could use an if statement here i guess
    {
    case 'Y' : cout << "I'm glad to hear that" << endl;
        break;
    case 'y' : cout << "I'm glad to hear that" << endl;
        break;
    case 'N' : cout << "I hope your day gets better soon." << endl;
        break;
    case 'n': cout << "I hope your day gets better soon." << endl;
        break;
    }


    /////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout << endl;
    cout << endl;
    cout << endl;

    void sleep(float seconds);
    sleep(10.0);

    /*
    Dear Instructor [Instructor Name],

    I am sorry that I am unable to turn in my homework at this time.
    First, I ate a rotten [Food], which made me turn [Color] and extremely ill.
    I came down with a fever of [Number 100-120].
    Next, my [Adjective] pet [Animal] must have smelled the remains of the [Food] on my homework, because he ate it.
    I am currently rewriting my homework and hope you will accept it late.

    Sincerely, [Your Name]
    */

    test = false;
    string instructorName, food, color, adjective, animal, name;
    int fever;

    cout << "Hello User!! lets create that letter" << endl;
    cout << "What is your name?" << endl; 
    cin >> name;

    cout << "What is your istructors name?" << endl;
    cin >> instructorName;

    cout << "What food would you like to blame? Please select one of the following" << endl;
    cout << "Chinese, Pizza, Pasta, Burgers" << endl;
    cin >> food;
    do 
    {
        test = false;
        if (food == "chinese" || food == "pizza" || food == "pasta" || food == "burgers")
        {
            test = true; 
        }
        else 
        {
            cout << "your input is invalid..." << endl;
            cout << "What food would you like to blame? Please select one of the following" << endl;
            cout << "Chinese, Pizza, Pasta, Burgers" << endl;
            cin >> food;
        }
    } while (test == false);

    cout << "What color did you trun? Please select one of the following" << endl;
    cout << "Red, Green, Blue, Purple" << endl;
    cin >> color;
    do
    {
        test = false;
        if (color == "red" || color == "green" || color == "blue" || color == "purple")
        {
            test = true;
        }
        else
        {
            cout << "your input is invalid..." << endl;
            cout << "What color did you trun? Please select one of the following" << endl;
            cout << "Red, Green, Blue, Purple" << endl;
            cin >> color;
        }
    } while (test == false);

    cout << "How high was your fever? " << endl;
    cout << "enter a value between 100 - 120" << endl;
    cin >> fever;
    do
    {
        test = false;
        if (fever >= 100 && fever <= 120)
        {
            test = true;
        }
        else
        {
            cout << "your input is invalid..." << endl;
            cout << "How high was your fever? " << endl;
            cout << "enter a value between 100 - 120" << endl;
            cin >> fever;
        }
    } while (test == false);

    cout << "Enter an Adjective. Please select one of the following" << endl;
    cout << "Black, Awesome, Stupid, Naugthy" << endl;
    cin >> adjective;
    do
    {
        test = false;
        if (adjective == "black" || adjective == "awesome" || adjective == "stupid" || adjective == "naugthy")
        {
            test = true;
        }
        else
        {
            cout << "your input is invalid..." << endl;
            cout << "Enter an Adjective. Please select one of the following" << endl;
            cout << "Black, Awesome, Stupid, Naugthy" << endl;
            cin >> adjective;
        }
    } while (test == false);

    cout << "Enter an Animal. Please select one of the following" << endl;
    cout << "Dog, Cat, Racoon, Ferrit" << endl;
    cin >> animal;
    do
    {
        test = false;
        if (animal == "dog" || animal == "cat" || animal == "racoon" || animal == "ferrit")
        {
            test = true;
        }
        else
        {
            cout << "your input is invalid..." << endl;
            cout << "Enter an Animal. Please select one of the following" << endl;
            cout << "Dog, Cat, Racoon, Ferrit" << endl;
            cin >> animal;
        }
    } while (test == false);

    cout << "Dear Instructor " << instructorName << endl;
    cout << endl;
    cout << "I am sorry that I am unable to turn in my homework at this time." << endl;
    cout << "First, I ate a rotten " << food << ", which made me turn " << color << " and extremely ill." << endl;
    cout << "I came down with a fever of " << fever << "." << endl;
    cout << "Next, my " << adjective << " pet " << animal << " must have smelled the remains of the " << food << " on my homework, because he ate it." << endl;
    cout << "I am currently rewriting my homeworkand hope you will accept it late." << endl;
    cout << endl;
    cout << "Sincerely, " << name << endl;

    return 0;
}

void sleep(float seconds)
{
    clock_t startClock = clock();
    float secondsAhead = seconds * CLOCKS_PER_SEC;
    // do nothing until the elapsed time has passed.
    while (clock() < startClock + secondsAhead);
    return;
}


