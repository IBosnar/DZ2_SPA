#include "game_of_life.h"
#include <vector>
#include <cstdlib>

bool game_of_life::slucajna_vrijednost()
{
	if (rand() % (100 - 0 + 1) + 0 <= 25) {
		return true;
	}
	if (rand() % (100 - 0 + 1) + 0 > 25) {
		return false;
	}

}


void game_of_life::celija_zauzeta()
{
	for (int i = 0; i < REDAKA; i++) {
		for (int j = 0; j < STUPACA; j++) {
			if (slucajna_vrijednost()) {
				_generacija[i][j] = true;
		   }
		}
	}
	return;
}

game_of_life::game_of_life()
{
}

void game_of_life::sljedeca_generacija()
{
	int brojac = 0;
	for (unsigned i = 0; i < REDAKA; i++) {
		for (unsigned j = 0; j < STUPACA; j++) {
			if (_generacija[i][j] == true) {
				if (_generacija[i - 1][j - 1] == true) {
					brojac++;
				}
				if (_generacija[i - 1][j] == true) {
					brojac++;
				}
				if (_generacija[i - 1][j + 1] == true) {
					brojac++;
				}
				if (_generacija[i][j - 1] == true) {
					brojac++;
				}
				if (_generacija[i][j + 1] == true) {
					brojac++;
				}
				if (_generacija[i + 1][j - 1] == true) {
					brojac++;
				}
				if (_generacija[i + 1][j] == true) {
					brojac++;
				}
				if (_generacija[i + 1][j + 1] == true) {
					brojac++;
				}
				if (brojac < 2 || brojac > 3) {
					promjenaClanI.push_back(i);
					promjenaClanJ.push_back(j);
					promjena.push_back(0);
				}
				brojac = 0;
			}
			else {
				if (_generacija[i - 1][j - 1] == true) {
					brojac++;
				}
				if (_generacija[i - 1][j] == true) {
					brojac++;
				}
				if (_generacija[i - 1][j + 1] == true) {
					brojac++;
				}
				if (_generacija[i][j - 1] == true) {
					brojac++;
				}
				if (_generacija[i][j + 1] == true) {
					brojac++;
				}
				if (_generacija[i + 1][j - 1] == true) {
					brojac++;
				}
				if (_generacija[i + 1][j] == true) {
					brojac++;
				}
				if (_generacija[i + 1][j + 1] == true) {
					brojac++;
				}
				if (brojac == 3) {
					promjenaClanI.push_back(i);
					promjenaClanJ.push_back(j);
					promjena.push_back(1);
				}
				brojac = 0;
			}
		}
	}

	for (int i = 0; i < promjenaClanI.size(); i++)
	{
				_generacija[promjenaClanI[i]][promjenaClanJ[i]] = promjena[i];
	}



	promjenaClanI.clear();
	promjenaClanJ.clear();
	promjena.clear();
}

void game_of_life::iscrtaj()
{
	for (unsigned i = 0; i != REDAKA; i++) {
		for (unsigned j = 0; j != STUPACA; j++) {
			if (_generacija[i][j] == true) {
				cout << "*" << " ";
			 }
			else{
				cout << "." << " ";
			}
		}
		cout << endl;
	}
	
}
	
