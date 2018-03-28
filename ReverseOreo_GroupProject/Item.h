#pragma once
#include <string>
using namespace std;
class Item
{
	string name;
	string properties;
	int strength;
	int itemID; //optional

public:
	Item();
	~Item();
};

