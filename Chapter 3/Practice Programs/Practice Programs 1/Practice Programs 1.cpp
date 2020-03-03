// Practice Programs 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Jacques van den Berg

/*

*/

#include <iostream>
using namespace std;

bool loop = true, loopMain = true;
char test, userOne, userTwo;
int uOneScore = 0, uTwoScore = 0, gamesPlayed = 0;

int main()
{
	cout << "Welcome to Rock, Paper, Scissors!!!" << endl;
	cout << "Standard Rules: Rock beats Scissors, Scissors cuts Paper and Paper covers Rock!!" << endl;
	cout << "You may only enter 'R' for Rock, 'P' for Paper or 'S' for scissors!!" << endl;
	do
	{
		cout << endl;
		cout << "Lets Begin" << endl;
		cout << "Player 1... Please enter R, P or S!" << endl;
		cin >> userOne; // takes input form the user
		if (userOne != 'r' && userOne != 'p' && userOne != 's' && userOne != 'R' && userOne != 'P' && userOne != 'S') // chacks for valid input - tests like: userOne is NOT r AND its not p etc....
		{
			cout << "!!! YOUR INPUT IS INVALID !!!" << endl;
			cout << "Please try again" << endl;
			cin >> userOne;
		}

		cout << "Player 2... Please enter R, P or S!" << endl;
		cin >> userTwo; // takes input form the user
		if (userTwo != 'r' && userTwo != 'p' && userTwo != 's' && userTwo != 'R' && userTwo != 'P' && userTwo != 'S') // chacks for valid input
		{
			cout << "!!! YOUR INPUT IS INVALID !!!" << endl;
			cout << "Please try again" << endl;
			cin >> userOne;
		}

		if ((userOne == 'R' || userOne == 'r') && (userTwo == 'R' || userTwo == 'r')) // tie
		{
			gamesPlayed++;
			cout << "Player 1 chose " << userOne << " and Player 2 chose " << userTwo << endl;
			cout << "Its a tie!!" << endl;
			cout << "Total games played: " << gamesPlayed << endl;
			cout << "Score - Player 1: " << uOneScore << " Player 2: " << uTwoScore << endl;
		}
		else
			if ((userOne == 'P' || userOne == 'p') && (userTwo == 'P' || userTwo == 'p')) //tie
			{
				gamesPlayed++;
				cout << "Player 1 chose " << userOne << " and Player 2 chose " << userTwo << endl;
				cout << "Its a tie!!" << endl;
				cout << "Total games played: " << gamesPlayed << endl;
				cout << "Score - Player 1: " << uOneScore << " Player 2: " << uTwoScore << endl;
			}
			else
				if ((userOne == 'S' || userOne == 's') && (userTwo == 'S' || userTwo == 's')) //tie
				{
					gamesPlayed++;
					cout << "Player 1 chose " << userOne << " and Player 2 chose " << userTwo << endl;
					cout << "Its a tie!!" << endl;
					cout << "Total games played: " << gamesPlayed << endl;
					cout << "Score - Player 1: " << uOneScore << " Player 2: " << uTwoScore << endl;
				}
				else
					if ((userOne == 'R' || userOne == 'r') && (userTwo == 'P' || userTwo == 'p'))
					{
						gamesPlayed++;
						cout << "Player 1 chose " << userOne << " and Player 2 chose " << userTwo << endl;
						cout << "Player 2 WINS!!" << endl;
						uTwoScore++;
						cout << "Total games played: " << gamesPlayed << endl;
						cout << "Score - Player 1: " << uOneScore << " Player 2: " << uTwoScore << endl;
					}
					else
						if ((userOne == 'R' || userOne == 'r') && (userTwo == 'S' || userTwo == 's'))
						{
							gamesPlayed++;
							cout << "Player 1 chose " << userOne << " and Player 2 chose " << userTwo << endl;
							cout << "Player 1 Wins!!" << endl;
							uOneScore++;
							cout << "Total games played: " << gamesPlayed << endl;
							cout << "Score - Player 1: " << uOneScore << " Player 2: " << uTwoScore << endl;
						}
						else
							if ((userOne == 'P' || userOne == 'p') && (userTwo == 'R' || userTwo == 'r'))
							{
								gamesPlayed++;
								cout << "Player 1 chose " << userOne << " and Player 2 chose " << userTwo << endl;
								cout << "Player 1 WINS!!" << endl;
								uOneScore++;
								cout << "Total games played: " << gamesPlayed << endl;
								cout << "Score - Player 1: " << uOneScore << " Player 2: " << uTwoScore << endl;
							}
							else
								if ((userOne == 'P' || userOne == 'p') && (userTwo == 'S' || userTwo == 's'))
								{
									gamesPlayed++;
									cout << "Player 1 chose " << userOne << " and Player 2 chose " << userTwo << endl;
									cout << "Player 2 Wins!!" << endl;
									uTwoScore++;
									cout << "Total games played: " << gamesPlayed << endl;
									cout << "Score - Player 1: " << uOneScore << " Player 2: " << uTwoScore << endl;
								}
								else
									if ((userOne == 'S' || userOne == 's') && (userTwo == 'R' || userTwo == 'r'))
									{
										gamesPlayed++;
										cout << "Player 1 chose " << userOne << " and Player 2 chose " << userTwo << endl;
										cout << "Player 2 WINS!!" << endl;
										uTwoScore++;
										cout << "Total games played: " << gamesPlayed << endl;
										cout << "Score - Player 1: " << uOneScore << " Player 2: " << uTwoScore << endl;
									}
									else
										if ((userOne == 'S' || userOne == 's') && (userTwo == 'P' || userTwo == 'p'))
										{
											gamesPlayed++;
											cout << "Player 1 chose " << userOne << " and Player 2 chose " << userTwo << endl;
											cout << "Player 1 Wins!!" << endl;
											uOneScore++;
											cout << "Total games played: " << gamesPlayed << endl;
											cout << "Score - Player 1: " << uOneScore << " Player 2: " << uTwoScore << endl;
										}
	



		do
		{
			cout << "would you like to try again? (Y/N)" << endl;
			cin >> test;
			if (test == 'Y' || test == 'y' || test == 'N' || test == 'n')
			{
				if (test == 'N' || test == 'n')
				{
					loop = false;
					loopMain = false;
				}
				else
				{
					loop = false;
					loopMain = true;
				}
			}
			else
			{
				cout << "!!! Invalid Input !!! Please try again!!!" << endl;
				cout << endl;
				loop = true;
			}
		} while (loop == true);

	} while (loopMain == true);
	return 0;
}
