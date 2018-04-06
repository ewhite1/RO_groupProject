#pragma once
#include "Character.h"
class Player :
	public Character
{
public:
	//inventory
	//actions
	void help();
	//pickup a item, add to inventory
	void pickupItem();
	//drop an item
	void DropItem();
	// use item on another item, or room object
	void UseItem();
	//look at room location
	void Look();
	//search cabinets, or other searchable containers in a room, that has a container value
	void Search();
	void showInventory();


	Player();
	~Player();
};

