#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H

#include "common.h"
#include "board.h"

class InputManager {
	public:
		InputManager();
		void AskForInput();
		short int get_r();
		short int get_c();
	private:
		short int r,c;

};



#endif
