#include "TileData.h"
TileData::TileData(int moveCostP, string filenameP, Renderer* renderer): moveCost(moveCostP)
{
	SDL_Surface* surface = IMG_Load(filenameP.c_str());
	texture = SDL_CreateTextureFromSurface(renderer->toSDLRenderer(), surface);
	SDL_FreeSurface(surface);
}
TileData::TileData() : texture(nullptr), moveCost(1)
{

}