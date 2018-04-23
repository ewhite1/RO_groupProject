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

using namespace std;
class Game
{
public:
	Player player1;
	void Input();
	void GoTo(string where);
	void Use(string what);
	void Describe(string what);
	void Look(string where);
	void Help();
	void Pickup(string itemName);
	void Drop(string itemDrop);
	//dont know if the container should be spesific for Search - Edward
	void Search();
	bool leaveGame(bool exitGame);
	Game();
	~Game();
};

