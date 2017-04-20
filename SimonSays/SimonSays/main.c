/*This source code copyrighted by Lazy Foo' Productions (2004-2015)
and may not be redistributed without written permission.*/

//Using SDL and standard IO

#include "events.h";
#include "graphics.h"
#include "state_handler.h"
#include "game_state.h"
#include "audio.h"

int main(int argc, char* args[])
{
	initWindow();
	initEventHandler();
	//initNormal();
	//spaceShipSetup();
	//initSky();

	// Audio
	initAudio();
	SDL_Delay(50);
	playMusic("audio/music/SPACE.mp3", -1);
	SDL_Delay(50);
	bool run = true;

	setNextState(STATE_GAME_RUNNING);
	
	while (run)	// k�rs tills anv�ndaren trycker p� X uppe i f�nstret
	{
		refreshEventHandler();		// mappar anv�ndarinput
		if (getNextState() == STATE_EXIT) {
			run = false;
		}
		else {
			executeNextState();
		}
		SDL_Delay(20);
	}

	//clearPointers();		//Tar bort pekarna ur minnet f�r s�kerhets skull

	return 0;

}
