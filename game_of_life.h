#ifndef _GAME_OF_LIFE_H_
#define _GAME_OF_LIFE_H_

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class game_of_life {
private:
	static const unsigned int STUPACA = 40;
	static const unsigned int REDAKA = 20;
	bool _generacija[REDAKA][STUPACA];
	bool _sljedeca_generacija[REDAKA][STUPACA];
	bool slucajna_vrijednost();
	vector<unsigned int> promjenaClanI;
	vector<unsigned int> promjenaClanJ;
	vector<bool> promjena;

public:
	game_of_life();
	void sljedeca_generacija();
	void iscrtaj();
	void celija_zauzeta();
};

#endif
