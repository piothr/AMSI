#ifndef GAME_H
#define GAME_H

#include "common.h"
#include "board.h"
#include "inputManager.h"


class Game {
	public:
		Game();
		void Start();
	private:
		Symbol CurrentPlayer;
		Board board;
		InputManager inputManager;		
		bool EOG;
		bool Xwon;
		bool Owon;
		void SwitchPlayer();
		void CheckGameState();
		bool CheckIfwon(Symbol s);
};



#endif
