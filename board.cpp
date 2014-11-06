#include "board.h"

Board::Board(){
	for(int j=0;j<BOARDSIZE;j++)
		for(int i=0;i<BOARDSIZE;i++)
			Fields[j][i] = empty;
};

bool Board::isFull(){
	
	bool AllFull = true;

	for (int i=0;i<BOARDSIZE;i++) {
		for (int j=0;j<BOARDSIZE;j++) {
			if(Fields[i][j]==empty) AllFull = false;
		}
	}

	return AllFull;
};

bool Board::isColumnFilledWith(short int c, Symbol s){
	bool check = true;

	for (int i=0;i<BOARDSIZE;i++) {
		if(Fields[i][c]!=s) check = false;
	}

	return check;
};
bool Board::isRowFilledWith(short int r, Symbol s){
	bool check = true;

	for (int i=0;i<BOARDSIZE;i++) {
		if(Fields[r][i]!=s) check = false;
	}

	return check;
};
bool Board::isMainDiagonalFilledWith(Symbol s){
	bool check = true;

	for (int i=0;i<BOARDSIZE;i++) {
		if(Fields[i][i]!=s) check = false;
	}

	return check;
};
bool Board::isAntiDiagonalFilledWith(Symbol s){
	bool check = true;

	for (int i=0;i<BOARDSIZE;i++) {
		if(Fields[i][i]!=s) check = false;
	}

	return check;
};

bool Board::Put(Symbol s, short int r, short int c){
	if (Fields[r-1][c-1]==empty){
		Fields[r-1][c-1]=s;
		return true;
	}
	else{
		cout << "Podales bledne pole!\n";
		return false;
	}
};

void Board::Print(){
	
	
			cout << "    ";
			for(int i=0;i<BOARDSIZE;i++)cout<<" "<<i+1<<"  ";
			cout << "\n";
			
				
			cout << "   +";
			for(int i=0;i<BOARDSIZE;i++)cout<<"---+";
			cout << "\n";
			
			for(int j=0;j<BOARDSIZE;j++){
				cout << " "<< j+1 << " | ";
				for(int i=0;i<BOARDSIZE;i++)cout<< Symbolize(Fields[j][i])  <<" | ";
				cout << "\n   +";
				for(int i=0;i<BOARDSIZE;i++)cout<<"---+";
				cout << "\n";
			}
			
		}
