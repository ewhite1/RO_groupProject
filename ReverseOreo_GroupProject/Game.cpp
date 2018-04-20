#include "Game.h"

using namespace std;

Game::Game()
{
	
	A.name = "A";
	A.Description = "The Airlock Bay.\nOh hey, the Spacewalk group has returned. Hard to tell who all was out there but lets get back to work. J.A.F.A.R. needed a job done. Better do it before it tells the captain im being lazy.";
	A.AltDescription = "Its hard to look around in here. Just moments ago part of the crew was just here.....";
	A.items[5] = {};
	A.coords = "3,4";
	B.name = "B";
	B.Description = "The Sensory room.\nAlways fun to watch Jensens attempt at hitting on Laura fail, Captain getting hounded by Chef Dahm about needing new supplies before he starts feeding us grease and the occasional soap opera this ships crew plays out for me.";
	B.AltDescription = "I cant see a thing on these monitors anymore. No audio, no visuals. Not even the heat sensors are working. That AI.... ill delete it once i get to it.";
	B.items[5] = {};
	C.name = "C";
	B.coords = "3,8";
	C.Description = "The Computer Room.\nMy usual workspace. Working with the new AI system makes my job so much easier. Thank god the Captain got this for us. He said he got it fairly cheap but for a cheap AI it is well worth its cost.";
	C.AltDescription = "My workspace..... Time to shut this AI down before it makes things worse.";
	C.items[5] = {};
	C.coords = "13,8";
	D.name = "D";
	D.Description = "The Captain's Quarters.\nCaptains not in his room? Must be in the kitchen with Florence. They usually stay there telling stories for hours. They have way to many adventures together. I wonder how old they are....";
	D.AltDescription = "Captains room. Less of a mess than one would think. Hopeully the captain wasnt jetisoned with that group....";
	D.items[5] = {};
	D.coords = "13,4";
	E.name = "E";
	E.Description = "The Commons' Room.\nEmpty as always. I can just faintly hear the chatter over comms from the members out on a spacewalk. I guess thats one good thing about working maintenece: Less distractions by the more....... outgoing of the crew";
	E.AltDescription = "Radio Silence. Nothing but the comms randomly hitting objects out in space. The room is still empty. No alarm. No issues. The ship doesnt even know its crew is gone. Just that blasted J.A.F.A.R. and me left.";
	E.items[5] = {};
	E.coords = "8,6";
	S.name = "S";
	S.Description = "Space.\nVast and mostly empty. space is quite a sight to see.";
	S.AltDescription = "Vast and mostly empty. space is quite a sight to see..... without all of these dead bodies...";
	S.items[5] = {};
	S.coords = "8,1";

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



	player.atlocale = &C;


	//control the game is running
	bool gameActive;
	while (gameActive = true)
	{
		string input;
		system("cls");
		MiniMap();
		//cout << "\nYour Action? : ";
		//getline(cin, input);
		//if (input == "exit" || input == "EXIT"){
		//	//run leaveGame function
		//	leaveGame(gameActive);
		//	
		//}
		//else {
		//	cout << "\nInvalid Command. Type Help for valid commands" << endl;
		//	//just to be safe
		//	gameActive = true;
		//	system("pause");
		//}
		Input();
	}
}


void Game::Input()
{
	string call = "", type;
	char dummySpace = ' ';
	int callNum = 0;

	cout << "What would you like to do?\n(use the following commands followed by what item from inventory or room youre wanting)\nEX: MoveTo A\nCommands:\nMoveTo\nUseItem\nReadItem\nLookAround" << endl;
	getline(cin, call);
	//call.substr();
	//cout << call.substr(0,6);
	//cout << type << call;

	if (call.substr(0, 4) == "GOTO")
		callNum = 0;
	else if (call.substr(0, 3) == "USE") 
		callNum = 1;
	else if (call.substr(0, 8) == "DESCRIBE")
		callNum = 2;
	else if (call.substr(0, 4) == "LOOK")
		callNum = 3;
	else if (call.substr(0, 4) == "HELP") 
		callNum = 4;
	else if (call.substr(0, 6) == "PICKUP") 
		callNum = 5;
	else if (call.substr(0, 4) == "DROP") 
		callNum = 6;
	else if (call.substr(0, 6) == "SEARCH") 
		callNum = 7;
	else {
		cout << "Unknown command.";
		cin.ignore;
	}

	switch (callNum)
	{
	case 0:
		GoTo(call.substr(4, call.length - 4));
		break;
	case 1:
		Use(call.substr(4, call.length - 4));
		break;
	case 2:
		Describe(call.substr(4, call.length - 4));
		break;
	case 3:
		Look(call.substr(4, call.length - 4));
		break;
	case 4:
		Help(call.substr(4, call.length - 4));
		break;
	case 5:
		Pickup(call.substr(4, call.length - 4));
		break;
	case 6:
		Drop(call.substr(4, call.length - 4));
		break;
	case 7:
		Search(call.substr(4, call.length - 4));
		break;
	default:
		cout << "Invalid Input.";
		cin.ignore;
		break;
	}
	system("pause");


}

void Game::GoTo(string where) {
	if (where == "A" || where == "ROOM A")
	{
		player.atlocale = &A;
	}
	else if (where == "B" || where == "ROOM B")
	{
		player.atlocale = &B;
	}
	else if (where == "C" || where == "ROOM C")
	{
		player.atlocale = &B;
	}
	else if (where == "D" || where == "ROOM D")
	{
		player.atlocale = &B;
	}
	else if (where == "E" || where == "ROOM E")
	{
		player.atlocale = &B;
	}
	else if (where == "Space")
	{
		player.atlocale = &B;
	}
}

void Game::Use(string what) {
	if (what == "")
	{

	}
}


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


Game::~Game()
{
}
