#include "Game.h"
#include <cstdlib>



using namespace std;

bool Game::leaveGame()
{
	char choice;
	//if the command exit is called, this will terminate the game
	cout << "\nAre you sure you wish to exit the game? Y/N:";
	cin >> choice;
	if (choice = 'Y') {
		exit(0);
	}
	else {
		// ingore
	}
}

Game::Game()
{
	//control the game is running
	bool gameActive = true;
	while (gameActive = true)
	{
		string input;
		cout << "put in a command: ";
		cin >> input;
		if (input == "exit"){
			leaveGame();
			
		}
	}
}


Game::~Game()
{
}
