#include "roomba.h"
#include "Player.h"


string roomba::SaySomething()
{
	// randomize function 
	int saying = rand() % 5;
	return roombaCommentary[saying];
}

int roomba::locationRandom()
{
	return 0;
}

Location roomba::Sweeping(int atLocationCoord)
{
	// call locationRandom to move 
	Location().coords = atLocationCoord;
	return Location();
}

roomba::roomba()
{
	
	//always run
	Sweeping(locationRandom());
	/*if (Sweeping(locationRandom() == Player.atlocale)
	{
		SaySomething();
	}*/
}


roomba::~roomba()
{
}
