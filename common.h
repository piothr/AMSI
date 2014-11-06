#ifndef COMMON_H
#define COMMON_H

#include <iostream>

using namespace std;

const char BOARDSIZE = 3;

enum Symbol{
	empty=0,
	O=1,
	X=2
};

inline char Symbolize(Symbol s){
	if(s==X)return 'X';
	if(s==O)return 'O';
	if(s==empty)return ' ';
}



#endif

