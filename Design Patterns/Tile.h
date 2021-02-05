#pragma once
#include"TileData.h"
class Tile
{
public:
	Tile(TileData* dataP, int worldXP, int worldYP) : data(dataP), worldX(worldXP), worldY(worldYP){}
	void draw(Renderer* renderer);

private:
	TileData* data;
	int worldX;
	int worldY;
	int SIZE = 32;
};

