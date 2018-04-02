#pragma once
#include "Character.h"
class roomba :
	public Character
{
public:
	void SaySomething();
	void move();

	roomba();
	~roomba();
};

