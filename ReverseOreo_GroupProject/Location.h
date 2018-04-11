#pragma once
#include "Item.h"
//Each location has a description, objects, actions and containers
class Location
{
public:
	string Description;
	string AltDescription;
	string coords;
	Item *items[];
	Location();
	~Location();
};

