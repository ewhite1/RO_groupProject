#pragma once
#include "Item.h"
class Container :
	public Item
{
public:
	//array of items
	//description
	// auto immovable
	Item items[];
	Container();
	~Container();
};

