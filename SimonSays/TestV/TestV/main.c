#include "SDL.h"
#include "SDL_net.h"

#include "TCP.h"
#include "UDP.h"


int main()
{
	SDL_Init(SDL_INIT_EVERYTHING);
	SDLNet_Init();	

	//UDP();
	player_id = 1;
//	messageRec = False;
		TCP();

	SDLNet_Quit();
	SDL_Quit();
	return 0;
}