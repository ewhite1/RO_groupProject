#pragma once
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <string>
#include <thread>
#include "character.h"
#include "player.h"

using namespace std;

class MiniMap
{
public:
	char Map[12][19];
	string legend[6];
	MiniMap();
	void MiniMap::Display();
	void ChangeLocation(int x, int y);
	~MiniMap();
};

