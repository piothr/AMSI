#include "game.h"

Game::Game(){
	EOG = false;
	Xwon = false;
	Owon = false;
};

void Game::SwitchPlayer() { if (CurrentPlayer==X) { CurrentPlayer = O; cout << "Teraz gracz O\n";} else {CurrentPlayer = X; cout << "Teraz gracz X\n";} };


void Game::Start() {
	cout << "Gra rozpoczeta!\n";

	board.Print();

	while(!EOG){
		
		SwitchPlayer();
		do{inputManager.AskForInput();}while(!board.Put(CurrentPlayer,inputManager.get_r(),inputManager.get_c()));
		board.Print();
		CheckGameState();
	}
	
};


bool Game::CheckIfwon(Symbol s) {

	for (int i=0;i<BOARDSIZE;i++) {
		if (board.isColumnFilledWith(i,s)) { return true; }
		if (board.isRowFilledWith(i,s)) { return true; }
	};

	if (board.isMainDiagonalFilledWith(s)) { return true; }
	if (board.isAntiDiagonalFilledWith(s)) { return true; } else return false;
}


void Game::CheckGameState() {

	Xwon = CheckIfwon(X);
	Owon = CheckIfwon(O);

	if (Xwon || Owon){
		EOG = true;
		cout << "Koniec gry! Wygrał gracz "<<Symbolize(CurrentPlayer)<<"!\n";
	}
	else{ 
		if( board.isFull() ) {
			EOG = true;
			cout << "Koniec gry! Remis!\n";
		};
	};	
	
	

};

