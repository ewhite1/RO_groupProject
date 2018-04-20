#pragma once
#include "Item.h"
//Each location has a description, objects, actions and containers
class Location
{
public:
	string Description;
	string AltDescription;
	string coords;
	string name;
	Item *items[20];
	Location();
	~Location();
};

