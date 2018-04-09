#pragma once
#include "Item.h"
class Location
{
public:
	// each location has  a description, objects, and actions
	//has containers
	string Description;
	string AltDescription;
	Item items[];
	Location();
	~Location();
};

