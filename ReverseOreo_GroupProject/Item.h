#pragma once
#include <string>
using namespace std;
class Item
{
	

public:
	string name;
	string description;
	int itemID; //optional
	//if the item is visable with a look command
	bool isVisble;	
	// immovable means the item is stuck, large, or is a container such as a cabinet
	bool immovable;
	// is it a container type, which can hold more items inside of it. 
	Item();
	~Item();
};

