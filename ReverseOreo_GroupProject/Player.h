#pragma once
#include "Character.h"
class Player :
	public Character
{
public:
	//inventory
	//actions
	void help();
	void move();
	void pickupItem();
	void DropItem();
	void UseItem();

	Player();
	~Player();
};

