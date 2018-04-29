#include <iostream>
#include <string>
#include <fstream>
#include "game_of_life.h"
using namespace std;

int main() {
	game_of_life the_game;
	the_game.celija_zauzeta();
	
	bool dalje;
	do {
		the_game.iscrtaj();
		the_game.sljedeca_generacija();
		cout << endl;
		cout << "Dalje (1/0): ";
		cin >> dalje;
	} while (dalje);

	the_game.iscrtaj();


	return 0;
}