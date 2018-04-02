#pragma once
#include <string>
using namespace std;
class Item
{
	

public:
	string name;
	string description;
	int itemID; //optional
	bool isVisble;
	bool pickup;
	Item();
	~Item();
};

