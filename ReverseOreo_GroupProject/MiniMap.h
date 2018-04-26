#pragma once
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <string>
#include <cstring>
#include <thread>
#include "character.h"
#include "player.h"

using namespace std;

class MiniMap
{
public:
	char Map[12][19] = {
		{ '~','~','~','~','~','~','~','=','-','M','a','p','-','=','~','~','~','~','~' },
	{ '<',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' },
	{ '>',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' },
	{ '<',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' },
	{ '>',' ',(char)201,(char)205,(char)254,(char)254,(char)254,(char)205,(char)203,(char)205,(char)205,(char)205,(char)203,(char)205,(char)205,(char)205,(char)205,(char)205,(char)187 },
	{ '<',' ',(char)186,' ',' ','A',' ',' ',(char)186,' ',' ',' ',(char)219,' ',' ','D',' ',' ',(char)186 },
	{ '>',' ',(char)186,(char)205,(char)254,(char)205,(char)203,(char)205,(char)188,' ',' ',' ',(char)200,(char)205,(char)203,(char)205,(char)254,(char)205,(char)186 },
	{ '<',' ',(char)186,' ',' ',' ',(char)186,' ',' ',' ','E',' ',' ',' ',(char)186,' ',' ',' ',(char)186 },
	{ '>',' ',(char)186,' ',' ',' ',(char)200,(char)205,(char)254,(char)205,(char)203,(char)205,(char)205,(char)205,(char)188,' ',' ',' ',(char)186 },
	{ '<',' ',(char)186,' ','B',' ',' ',' ',' ',' ',(char)186,' ',' ',' ',' ',' ','C',' ',(char)186 },
	{ '>',' ',(char)200,(char)205,(char)205,(char)205,(char)205,(char)205,(char)205,(char)205,(char)202,(char)205,(char)205,(char)205,(char)205,(char)205,(char)205,(char)205,(char)188 },
	{ '~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~' } };
	
	/* End Map */
	//string legend[6];
	string legend[12] = { "<~~~~=-Legend-=~~~~~",">", "< Room A: Airlock",">","< Room B: Sensor",">        Controls","< Room C: Computer",">","< Room D: Captain's",">        Quarters","< Room E: Bridge","<~~~~~~~~~~~~~~~~~~~" };
	MiniMap();
	void MiniMap::Display();
	void ChangeLocation(int x, int y);
	~MiniMap();
};

