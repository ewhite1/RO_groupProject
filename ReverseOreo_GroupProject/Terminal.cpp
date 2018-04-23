#include "Terminal.h"


using namespace std;

Terminal::Terminal(TermType term)
{
	switch (term)
	{
	case monitor:
		//commands for the terminal type monitor
		cout << "\nMonitor output:" << endl << endl;
		//while loop for interactivity
		break;
	case jafar:
		cout << "\nJ.A.F.A.R: the second best AI in the galaxy!" << endl;
		//while loop for interactivity
		break;
	case sensor:
		cout << "\nsensor menu:" << endl;
		// while loop for interactivity

		break;
	}
}


Terminal::~Terminal()
{
}
