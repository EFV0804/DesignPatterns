#include "Window.h"

Window::Window() : SDLWindow(nullptr)
{

}
bool Window::initialize()
{
	SDL_Init(SDL_INIT_VIDEO);
	SDLWindow = SDL_CreateWindow("Dungeon", 100, 100, 1024, 768, SDL_WINDOW_SHOWN);
	return true;
}
void Window::close()
{
	SDL_DestroyWindow(SDLWindow);
}