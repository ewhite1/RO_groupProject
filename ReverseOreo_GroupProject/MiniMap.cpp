#include "MiniMap.h"



MiniMap::MiniMap()
{
	HANDLE Haywire = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(Haywire, 10);

	 Map[12][19] = {
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

	string legend[12] = {"<~~~~=-Legend-=~~~~~",">", "< Room A: Airlock",">","< Room B: Sensor",">        Controls","< Room C: Computer",">","< Room D: Captain's",">        Quarters","< Room E: Bridge","<~~~~~~~~~~~~~~~~~~~"};

}

void MiniMap::Display() {
	for (int i = 0; i < 12; i++) {
		cout << setw(80) << "";
		cout << setw(20) << left << legend[i];
		for (int j = 0; j < 19; j++) {
			cout << Map[i][j];
		}
		cout << endl;
	}
}

void MiniMap::ChangeLocation(int x, int y) {


}

MiniMap::~MiniMap()
{
}
