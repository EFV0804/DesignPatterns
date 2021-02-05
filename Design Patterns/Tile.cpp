#include "Tile.h"
void Tile::draw(Renderer* renderer)
{
	SDL_Rect rect{ worldX * SIZE, worldY * SIZE, SIZE, SIZE };
	SDL_RenderCopy(renderer->toSDLRenderer(), data->getTexture(), NULL, &rect);
}