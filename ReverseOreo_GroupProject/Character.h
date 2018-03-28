#pragma once
#include <string>
#include item.h
using namespace std;

class Character {
	string charName;
	Item *inventoryArray = new Item[6];
	int locationX;
	int locationY;
	int health;


	{
	public:
		Character();
		~Character();
	};
	//actions
	//drop item and subtract from inventoryArray
	//pickup item and add to inventoryArray
	//
};