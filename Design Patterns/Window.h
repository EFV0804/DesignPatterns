#pragma once
#include <SDL.h>

class Window
{
public:
	Window();
	//Window(const Window&) = delete;
	//Window& operator = (const Window&) = delete;

	bool initialize();
	void close();

	SDL_Window* toSDLWindow() const { return SDLWindow; }

private:
	SDL_Window* SDLWindow;
};
