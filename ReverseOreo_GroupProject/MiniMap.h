#pragma once
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <string>
#include <thread>


using namespace std;

class MiniMap
{
public:
	char Map[10][17];
	string legend[6];
	MiniMap();
	~MiniMap();
};

