#include "Game.h"



using namespace std;





Game::Game()
{
	//may swap this to pointers
	/*Location *testA = new Location;
	testA->Description = "test";
	testA->AltDescription = "test2";
	testA->coords = "3,4";*/


	map->Map[0][19] = { '~','~','~','~','~','~','~','=','-','M','a','p','-','=','~','~','~','~','~' };
	map->Map[1][19] = { '<',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' };
	map->Map[2][19] = { '>',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' };
	map->Map[3][19] = { '<',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' };
	map->Map[4][19] = { '>',' ',(char)201,(char)205,(char)254,(char)254,(char)254,(char)205,(char)203,(char)205,(char)205,(char)205,(char)203,(char)205,(char)205,(char)205,(char)205,(char)205,(char)187 };
	map->Map[5][19] = { '<',' ',(char)186,' ',' ','A',' ',' ',(char)186,' ',' ',' ',(char)219,' ',' ','D',' ',' ',(char)186 };
	map->Map[6][19] = { '>',' ',(char)186,(char)205,(char)254,(char)205,(char)203,(char)205,(char)188,' ',' ',' ',(char)200,(char)205,(char)203,(char)205,(char)254,(char)205,(char)186 };
	map->Map[7][19] = { '<',' ',(char)186,' ',' ',' ',(char)186,' ',' ',' ','E',' ',' ',' ',(char)186,' ',' ',' ',(char)186 };
	map->Map[8][19] = { '>',' ',(char)186,' ',' ',' ',(char)200,(char)205,(char)254,(char)205,(char)203,(char)205,(char)205,(char)205,(char)188,' ',' ',' ',(char)186 };
	map->Map[9][19] = { '<',' ',(char)186,' ','B',' ',' ',' ',' ',' ',(char)186,' ',' ',' ',' ',' ','C',' ',(char)186 };
	map->Map[10][19] = { '>',' ',(char)200,(char)205,(char)205,(char)205,(char)205,(char)205,(char)205,(char)205,(char)202,(char)205,(char)205,(char)205,(char)205,(char)205,(char)205,(char)205,(char)188 };
	map->Map[11][19] = { '~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~' };

	A->Description = "Oh hey. The Spacewalk group has returned. Hard to tell who all was out there but lets get back to work. J.A.F.A.R. needed a job done. Better do it before it tells the captain im being lazy.";
	A->AltDescription = "Its hard to look around in here. Just moments ago part of the crew was just here.....";
	A->items[5] = {};
	A->coords[0] = 3;
	A->coords[1] = 4;
	B->Description = "Sonsory room. Always fun to watch Jensens attempt at hitting on Laura fail, Captain getting hounded by Chef Dahm about needing new supplies before he starts feeding us grease and the occasional soap opera this ships crew plays out for me.";
	B->AltDescription = "I cant see a thing on these monitors anymore. No audio, no visuals. Not even the heat sensors are working. That AI.... ill delete it once i get to it.";
	B->items[5] = {};
	B->coords[0] = 3;
	B->coords[1] = 8;
	C->Description = "My usual workspace. Working with the new AI system makes my job so much easier. Thank god the Captain got this for us. He said he got it fairly cheap but for a cheap AI it is well worth its cost.";
	C->AltDescription = "My workspace..... Time to shut this AI down before it makes things worse.";
	C->items[5] = {};
	C->coords[0] = 13;
	C->coords[1] = 8;
	D->Description = "Captains not in his room? Must be in the kitchen with Florence. They usually stay there telling stories for hours. They have way to many adventures together. I wonder how old they are....";
	D->AltDescription = "Captains room. Less of a mess than one would think. Hopeully the captain wasnt jetisoned with that group....";
	D->items[5] = {};
	D->coords[0] = 13;
	D->coords[1] = 4;
	E->Description = "Empty as always. I can just faintly hear the chatter over comms from the members out on a spacewalk. I guess thats one good thing about working maintenece: Less distractions by the more....... outgoing of the crew";
	E->AltDescription = "Radio Silence. Nothing but the comms randomly hitting objects out in space. The room is still empty. No alarm. No issues. The ship doesnt even know its crew is gone. Just that blasted J.A.F.A.R. and me left.";
	E->items[5] = {};
	E->coords[0] = 8;
	E->coords[1] = 6;
	S->Description = "Vast and mostly empty. space is quite a sight to see.";
	S->AltDescription = "Vast and mostly empty. space is quite a sight to see..... without all of these dead bodies...";
	S->items[5] = {};
	S->coords[0] = 8;
	S->coords[1] = 1;

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

	player1.atlocale = C;
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
		
		map->Display();

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
		//cout << A.Description << endl;
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
		GoTo(call.substr(5, call.length() - 5));
	else if (call.substr(0, 3) == "USE")
		Use(call.substr(4, call.length() - 4));
	else if (call.substr(0, 8) == "DESCRIBE")
		Describe(call.substr(9, call.length() - 9));
	else if (call.substr(0, 4) == "LOOK")
		Look(call.substr(5, call.length() - 5));
	else if (call.substr(0, 4) == "HELP")
		Help();
	else if (call.substr(0, 6) == "PICKUP")
		Pickup(call.substr(7, call.length() - 7));
	else if (call.substr(0, 4) == "DROP")
		Drop(call.substr(5, call.length() - 5));
	else if (call.substr(0, 6) == "SEARCH")
		Search(call.substr(7, call.length() - 7));
	else {
		cout << "Unknown command.";
		cin.ignore();
	}
}

void Game::GoTo(string where)
{
	if (where == "A" || where == "ROOM A")
	{
		player1.atlocale = A;
		map->ChangeLocation(A->coords[0], A->coords[1]);
		
	}
	else if (where == "B" || where == "ROOM B")
	{
		player1.atlocale = B;
	}
	else if (where == "C" || where == "ROOM C")
	{
		player1.atlocale = C;
	}
	else if (where == "D" || where == "ROOM D")
	{
		player1.atlocale = D;
	}
	else if (where == "E" || where == "ROOM E")
	{
		player1.atlocale = E;
	}
	else if (where == "Space")
	{
		player1.atlocale = S;
	}
}

void Game::Use(string what)
{
	//check to see if item is in player inventory First
	//some array search thing goes here
	//room D
	if (what == "note")
	{
		//uhhhh since this can be a lot,
		//we might have to separate them based upon 
		//what room they are in
	}

	if (what == "Captain belongings")
	{
		//this would just generate an description
	}
	//room e
	if (what == "Captain Cane")
	{

	}
	if (what == "Captain perch")
	{

	}
	// room b
	if (what == "Headlamp")
	{

	}
	//room a
	if (what == "Space Suit")
	{

	}
	//space
	if (what == "keycard")
	{

	}
}

void Game::Describe(string what)
{
}

void Game::Look(string where)
{

}

void Game::Help()
{
	//just cout all the commands
}

void Game::Pickup(string itemName)
{
}

void Game::Drop(string itemDrop)
{
}

void Game::Search(string what)
{
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
