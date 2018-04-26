#include<iostream>
#include "Game.h"
#include "miniMap.h"
#include "SplashScreen.h"
using namespace std;

int main() 
{
	system("cls");
	SplashScreen splash;
	splash.show();
	Game gamestate;
	splash.showEnd();
	return 0;
}