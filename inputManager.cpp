#include "inputManager.h"

InputManager::InputManager(){};

void InputManager::AskForInput(){
	do{
		cout << "Podaj numer wiersza: ";
		cin>>r;
		if(r<1 || r>BOARDSIZE) cout << "Podaj liczbe z zakresu 1 - " << int(BOARDSIZE) << endl;
	}while (r<1 || r>BOARDSIZE);

	do{
		cout << "Podaj numer kolumny: ";
		cin>>c;
		if(c<1 || r>BOARDSIZE) cout << "Podaj liczbe z zakresu 1 - " << int(BOARDSIZE) << endl;
	}while (c<1 || r>BOARDSIZE);
};


short int InputManager::get_r() { return r; };
short int InputManager::get_c() { return c; };
