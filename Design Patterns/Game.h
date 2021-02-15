#pragma once
#include<SDL_ttf.h>
#include<SDL_mixer.h>
#include"Renderer.h"
#include"Window.h"
//#include"World.h"
#include"Player.h"
#include<vector>

using std::vector;

class Game
{
public:

	Game() : isRunning(true)
	{}

	bool initialize();
	void load();
	void update();
	bool inputs();
	void loop();
	void close();
	void unload();

private:
	Player player;
	World world;
	bool isRunning;
	Renderer renderer;
	Window window;
};