#pragma once
#include<array>
#include<vector>
#include <time.h>
#include"Tile.h"

using std::array;
using std::vector;

class World
{
public:
	World();
	void load(Renderer* renderer);
	void draw(Renderer* renderer);
	Tile* getCurrentTile() { return currentTile; }
	void clean();
private:
	TileData grass;
	TileData hill;
	TileData river;
	TileData end;
	TileData start;
	vector <Tile*> grid;
	vector <Tile*> generate();
	TileData* chooseTile();
	Tile* currentTile;
};