#pragma once
#include "Character.h"
#include "Game.h"
class roomba :
	public Character
{
public:
	string roombaCommentary[5] = {"funny quote 1", "funny quote two", "funny quote three", "funny Quote 4", "funny quote 5"};
	string SaySomething();
	int locationRandom();
	Location Sweeping(int atLocationCoord);
	roomba();
	~roomba();
};

