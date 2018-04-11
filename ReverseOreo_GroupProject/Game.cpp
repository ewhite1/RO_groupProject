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
	Location A, B, C, D, E, S;
	A.Description = "Oh hey. The Spacewalk group has returned. Hard to tell who all was out there but lets get back to work. J.A.F.A.R. needed a job done. Better do it before it tells the captain im being lazy.";
	A.AltDescription = "Its hard to look around in here. Just moments ago part of the crew was just here.....";
	A.items[5] = {};
	A.coords = "3,4";
	B.Description = "Sonsory room. Always fun to watch Jensens attempt at hitting on Laura fail, Captain getting hounded by Chef Dahm about needing new supplies before he starts feeding us grease and the occasional soap opera this ships crew plays out for me.";
	B.AltDescription = "I cant see a thing on these monitors anymore. No audio, no visuals. Not even the heat sensors are working. That AI.... ill delete it once i get to it.";
	B.items[5] = {};
	B.coords = "3,8";
	C.Description = "My usual workspace. Working with the new AI system makes my job so much easier. Thank god the Captain got this for us. He said he got it fairly cheap but for a cheap AI it is well worth its cost.";
	C.AltDescription = "My workspace..... Time to shut this AI down before it makes things worse.";
	C.items[5] = {};
	C.coords = "13,8";
	D.Description = "Captains not in his room? Must be in the kitchen with Florence. They usually stay there telling stories for hours. They have way to many adventures together. I wonder how old they are....";
	D.AltDescription = "Captains room. Less of a mess than one would think. Hopeully the captain wasnt jetisoned with that group....";
	D.items[5] = {};
	D.coords = "13,4";
	E.Description = "Empty as always. I can just faintly hear the chatter over comms from the members out on a spacewalk. I guess thats one good thing about working maintenece: Less distractions by the more....... outgoing of the crew";
	E.AltDescription = "Radio Silence. Nothing but the comms randomly hitting objects out in space. The room is still empty. No alarm. No issues. The ship doesnt even know its crew is gone. Just that blasted J.A.F.A.R. and me left.";
	E.items[5] = {};
	E.coords = "8,6";
	S.Description = "Vast and mostly empty. space is quite a sight to see.";
	S.AltDescription = "Vast and mostly empty. space is quite a sight to see..... without all of these dead bodies...";
	S.items[5] = {};
	S.coords = "8,1";

	Item SpaceSuit, Tivs, Cane, Keycard, Terminal, BridgeMonitors, SensorMonitors, CaptainsLog;
	SpaceSuit.name = "My Space Suit";
	SpaceSuit.description = "Custom, for the Maintenance personel of the crew. Luckily it has holsters for the and items I have.";
	SpaceSuit.isVisable = true;
	SpaceSuit.isMovable = true;

	Tivs.name = "T.I.V.S.";
	Tivs.description = "This little guy is as random as ever. The captain finds it adorable but the rust of us think its logic processors need a complete overhaul.";
	Tivs.isVisable = true;
	Tivs.isMovable = true;

	Cane.name = "Captain Corvin's Cane";
	Cane.description = "The Captains cane..... its extremely fancy, completely made of titanium or so he says. Surprizingly light, maybe he wasn't lying.";
	Cane.isVisable = true;
	Cane.isMovable = true;

	Keycard.name = "Keycard";
	Keycard.description = "Chief Officer Turk was still holding onto it when I went out...... *Shudders*";
	Keycard.isVisable = false;
	Keycard.isMovable = true;

	/*.name = "";
	.description = "";
	.isVisable = ;
	.isMovable = ;*/
	

	//control the game is running
	bool gameActive;
	while (gameActive = true)
	{
		string input;
		system("cls");
		MiniMap();
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
			system("pause");
		}
		
	}
}


Game::~Game()
{
}
