#pragma once
#include <iostream>
#include <iomanip>

using namespace std;
class Terminal
{
public:
	//terminal commands
	enum TermType {monitor, jafar, sensor};
	Terminal(TermType term);
	~Terminal();
};

