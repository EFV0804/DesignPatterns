#include "Window.h"

Window::Window() : SDLWindow(nullptr)
{

}
bool Window::initialize()
{
	SDL_Init(SDL_INIT_VIDEO);
	SDLWindow = SDL_CreateWindow("Dungeon", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1024, 768, SDL_WINDOW_SHOWN);
	return true;
}
void Window::close()
{
	SDL_DestroyWindow(SDLWindow);
}