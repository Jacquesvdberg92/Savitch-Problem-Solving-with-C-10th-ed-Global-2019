// Programing Projects 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques vd Berg

/* 
 Write a program that scores a blackjack hand. 
 In blackjack, a player receives from two to five cards. 
 The cards 2 through 10 are scored as 2 through 10 points each. 
 The face cards—jack, queen, and king—are scored as 10 points. 
 The goal is to come as close to a score of 21 as possible without going over 21. 
 Hence, any score over 21 is called “busted.” 
 The ace can count as either 1 or 11, whichever is better for the user. 
 For example, an ace and a 10 can be scored as either 11 or 21. 
 Since 21 is a better score, this hand is scored as 21. 
 An ace and two 8s can be scored as either 17 or 27. 
 Since 27 is a “busted” score, this hand is scored as 17.

 The user is asked how many cards she or he has, and the user responds with one of the integers 2, 3, 4, or 5. 
 The user is then asked for the card values. 
 Card values are 2 through 10, jack, queen, king, and ace. 
 A good way to handle input is to use the type char so that the card input 2, for example, is read as the character '2', rather than as the number 2. 
 Input the values 2 through 9 as the characters '2' through '9'. 
 Input the values 10, jack, queen, king, and ace as the characters 't', 'j', 'q', 'k', and 'a'. (Of course, the user does not type in the single quotes.) 
 Be sure to allow upper- as well as lowercase letters as input.

 After reading in the values, the program should convert them from character values to numeric card scores, taking special care for aces. 
 The output is either a number between 2 and 21 (inclusive) or the word Busted. 
 You are likely to have one or more long multiway branches that use a switch statement or nested if-else statement. 
 Your program should include a loop that lets the user repeat this calculation until the user says she or he is done.
*/

#include <iostream>
// Functions
bool TryAgain();
int checkValue();

// Variables
int numOfCards = 0, score = 0, aces = 0;
int cardValue[4];

int main()
{
    std::cout << "Welcome to BlackJack Score O'Matic v0.1!!.\n";
    do
    {
        // Askes for User Input
        std::cout << "Please enter the amount of cards you have (1 - 5). \n";

        // Loop that checks that the player doest have less than 1 card or more than 5 cards
        do
        {
            // Tests for Numrical input
            while (!(std::cin >> numOfCards))
            {
                std::cout << "ERROR: Numrical Values Only!!.\n";
                std::cin.clear();
                std::cin.ignore(123, '\n');
                std::cout << "Please Try Again!!!.\n";
            }

            // Displays Error msg if the player has to little or to many cards
            if ((numOfCards > 5) || (numOfCards < 1))
            {
                std::cout << "mmmmm... are you sure about your input?. \n";
                std::cout << "Normally a player has 1 - 5 cards.\n";
                std::cout << "Lets try that again, shall we!!.\n";
            }
        } while ((numOfCards > 5) || (numOfCards < 1));


        // Gets the card values, checks the input and returns it numrical value
        std::cout << "I will now collect the value of your " << numOfCards << " cards.\n";
        std::cout << "Values include numbers 2 - 9 or t for 10, j for Jack, q for Queen, k for King, and a for Ace.\n";
        for (int i = 0; i <= (numOfCards - 1); i++)
        {
            std::cout << "Please enter the value of card num " << (i + 1) << std::endl;
            cardValue[i] = checkValue();
        }

        // Calculates the score
        for (int i = 0; i <= (numOfCards - 1); i++)
        {
            // Checks for Ace and assign the value accordingly
            if (cardValue[i] == 1)
            {
                aces += cardValue[i];
            }
            else {
                score += cardValue[i];
            } 
        }
        // Checks that aces doesnt cause a bust
        if (score + (aces + 10) <= 21)
        {
            score += (aces + 10);
        }
        else {
            score += aces;
        }

        // Prints Score
        if (score <= 21)
        {
            std::cout << "You scored: " << score << std::endl;
        }
        else
        {
            std::cout << "BUSTED!!! You scored: " << score << std::endl;
        }
        
    } while (TryAgain());
}

bool TryAgain()
{
    bool loop = true, mainLoop = true;
    char test;
    do
    {
        std::cout << "Would you like to try again? (Y/N).\n";
        std::cin >> test;
        switch (test)
        {
        case 'Y':
            loop = false;
            mainLoop = true;
            break;
        case 'y':
            loop = false;
            mainLoop = true;
            break;
        case 'N':
            loop = false;
            mainLoop = false;
            break;
        case 'n':
            loop = false;
            mainLoop = false;
            break;
        default:
            std::cout << "Invalid Input!!! \n";
            std::cout << "Please enter only Y for yes or N for no.\n";
            loop = true;
            mainLoop = true;
        }
    } while (loop);
    return mainLoop;
}
int checkValue()
{
    char input;
    bool loop = true;
    int value = 0;
    do
    {
        std::cin >> input;
        switch (input)
        {
        case '2':
            loop = false;
            value = 2;
            break;
        case '3':
            loop = false;
            value = 3;
            break;
        case '4':
            loop = false;
            value = 4;
            break;
        case '5':
            loop = false;
            value = 5;
            break;
        case '6':
            loop = false;
            value = 6;
            break;
        case '7':
            loop = false;
            value = 7;
            break;
        case '8':
            loop = false;
            value = 8;
            break;
        case '9':
            loop = false;
            value = 9;
            break;
        case 't':
            loop = false;
            value = 10;
            break;
        case 'j':
            loop = false;
            value = 10;
            break;
        case 'q':
            loop = false;
            value = 10;
            break;
        case 'k':
            loop = false;
            value = 10;
            break;
        case 'a':
            loop = false;
            value = 1;
            break;
            // This checks for capital letter and returns lower case letters instead
        case 'T':
            loop = false;
            value = 10;
            break;
        case 'J':
            loop = false;
            value = 10;
            break;
        case 'Q':
            loop = false;
            value = 10;
            break;
        case 'K':
            loop = false;
            value = 10;
            break;
        case 'A':
            loop = false;
            value = 1;
            break;
        default:
            std::cout << "Invalid Input!! \n";
            std::cout << "Please try again!!\n";
            loop = true;
        }
    } while (loop);

    return value;
}
