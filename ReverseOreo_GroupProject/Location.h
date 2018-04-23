#pragma once
#include "Item.h"
//Each location has a description, objects, actions and containers
class Location
{
public:
	string Description;
	string AltDescription;
	int coords[2];
	Item *items[10];
	Location();
	~Location();
};

