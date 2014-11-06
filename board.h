#ifndef BOARD_H
#define BOARD_H

#include "common.h"

class Board {
	private:
		Symbol Fields[BOARDSIZE][BOARDSIZE];
	public:
		Board();
		void Print();
		bool Put(Symbol s, short int r, short int c);
		bool isFull();
		bool isColumnFilledWith(short int c, Symbol s);
		bool isRowFilledWith(short int r, Symbol s);
		bool isMainDiagonalFilledWith(Symbol s);
		bool isAntiDiagonalFilledWith(Symbol s);
	
	
};







#endif
