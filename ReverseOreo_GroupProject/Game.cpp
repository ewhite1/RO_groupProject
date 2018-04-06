#include "Game.h"
#include <cstdlib>
#include <iomanip>



using namespace std;

bool Game::leaveGame(bool exitGame)
{
	char choice;
	bool validChoice = false;
	while (!validChoice)
	{
		//if the command exit is called, this will terminate the game
		cout << "\nAre you sure you wish to exit the game? Y/N:";
		cin >> choice;
		if (choice == 'Y' || choice == 'y') {
			
			cout << "\nThanks for playing, Please try again!" << endl << "Exiting.."<< endl << endl;
			//just immediatly quit the program.
			exit(0);
			//validChoice = true;
		}
		else if (choice == 'N' || choice == 'n') {
			//do nothing, go back to input
			cout << "\nBack to the game....";
			exitGame = false;
			validChoice = true;
			//to prevent an issue with getline from showing double
			cin.ignore();
		}
		else
		{
			cout << "\nError in input. Try again.";
			validChoice = false;
		}
	
	}
	return exitGame;
	
	
}

Game::Game()
{
	//control the game is running
	bool gameActive;
	while (gameActive = true)
	{
		string input;
		cout << "\nYour Action? : ";
		getline(cin, input);
		if (input == "exit" || input == "EXIT"){
			//run leaveGame function
			leaveGame(gameActive);
			
		}
		else {
			cout << "\nInvalid Command. Type Help for valid commands" << endl;
			//just to be safe
			gameActive = true;
		}
		
	}
}


Game::~Game()
{
}
