#pragma once
#include <iostream>
#include<string>
#include "MiniMap.h"
#include "Location.h"
#include "Item.h"
#include "Character.h"
#include "Player.h"
#include "Terminal.h"
#include "roomba.h"
#include <cstdlib>
#include <iomanip>
#include <algorithm>


using namespace std;
class Game
{
public:
	int countMoves = 0;
	bool spacesuitEquipped = false;
	MiniMap * map = new MiniMap;
	Location * A = new Location, *B = new Location, *C = new Location, *D = new Location, *E = new Location, *S = new Location;
	Player player1;
	void Input();
	void GoTo(string where);
	void Use(string what);
	void Describe(string what);
	void Look(string where);
	void Help();
	bool InstaDeath(int kind);
	void Pickup(string itemName);
	void Drop(string itemDrop);
	void Search(string what);
	bool leaveGame(bool exitGame);
	void ShowLocation(Location &atlocation);
	Game();
	~Game();
};

