#include<SDL.h>
#include<SDL_ttf.h>
#include<SDL_mixer.h>

#include"Renderer.h"
#include"Window.h"
#include"Game.h"

int main(int argc, char** argv)
{

	//LOAD
	Game game;
	bool isGameInit = game.initialize();


	//LOOP
	if (isGameInit)
	{
		game.load();
		game.loop();
	}


	return 0;
}