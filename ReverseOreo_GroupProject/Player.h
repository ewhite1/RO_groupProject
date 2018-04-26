#pragma once
#include "Character.h"
class Player :
	public Character
{
public:
	Item items[99];
	bool EquipedSpaceSuit();
	Player();
	~Player();
};

