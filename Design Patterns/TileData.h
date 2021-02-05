#pragma once
#include<SDL_image.h>
#include<string>
#include"Renderer.h"
using::std::string;

class TileData
{
public:
	TileData();
	TileData(int moveCostP, string filenameP, Renderer* renderer);
	SDL_Texture* getTexture() { return texture; }

private:
	int moveCost;
	string filename;
	SDL_Texture* texture;
};