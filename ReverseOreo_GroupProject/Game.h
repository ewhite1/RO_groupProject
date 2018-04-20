#pragma once
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include "MiniMap.h"
#include "Location.h"
#include "Player.h"

using namespace std;
class Game
{
public:
	Player player;
	Location A, B, C, D, E, S;
	Item SpaceSuit, Tivs, Cane, Keycard, Terminal, BridgeMonitors, SensorMonitors, CaptainsLog;
	

	bool leaveGame(bool exitGame);
	Game();
	void Input();
	void GoTo(string);
	void Use(string);
	void Describe(string);
	void Look(string);
	void Help(string);
	void Pickup(string);
	void Drop(string);
	void Search(string);
	~Game();
};

