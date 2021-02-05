#pragma once
#include<array>
#include <time.h>
#include"Tile.h"

using std::array;

class World
{
public:
	World();
	void load(Renderer* renderer);
	void draw(Renderer* renderer);

private:
	TileData grass;
	TileData hill;
	TileData river;
	array<array<Tile*, 32>, 24 > grid;
	array<array<Tile*, 32>, 24 > generate();
	TileData* chooseTile();
};