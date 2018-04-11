#pragma once
#include <string>
#include "item.h"
#include "Location.h"
#include "Game.h"

using namespace std;

class Character {	
	public:
	
		string charName;
		int health;
		//where am I? That is what atLocale is
		Location * atlocale;
		Character();
		~Character();

	//actions
	//help action
	//drop item and subtract from inventoryArray
	//pickup item and add to inventoryArray
	//
};