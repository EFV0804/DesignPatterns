#include"World.h"
World::World()
{

}
void World::load(Renderer* renderer)
{
	grass = TileData(1, "grass.bmp", renderer);
	hill = TileData(3, "hill.bmp", renderer);
	river = TileData(2, "river.bmp", renderer);
	end = TileData(1, "end.bmp", renderer);
	start = TileData(1,"end.bmp", renderer);
	grid = generate();
}
vector <Tile*> World::generate()
{
	srand((unsigned int)time(0));
	vector <Tile*> grid;
	int x = 0;
	int y = 0;
	Tile* tile = nullptr;

	for (int i = 0; i < 32; i++)
	{
		for (int j = 0; j < 24; j++)
		{
			if (j == 0 && i == 0)
			{
				tile = new Tile(&start, i, j);
				grid.push_back(tile);
				currentTile = grid.back();
			}
			if (j == 23 && i == 31)
			{
				tile = new Tile(&end, i, j);
				grid.push_back(tile);
			}
			else
			{
				tile = new Tile(chooseTile(), i, j);
				grid.push_back(tile);
			}
		}
	}
	return grid;
}
TileData* World::chooseTile()
{
	int i = rand() % 3;
	switch(i)
	{
	case 0:
		return &grass;
	case 1:
		return &hill;
	case 2:
		return &river;
	default:
		return &grass;
	}
}
void World::draw(Renderer* renderer)
{

	for (int i = 0; i < grid.size(); i++)
	{
		grid.at(i)->draw(renderer);
	}
}
void World::clean()
{
	for (auto tile : grid)
	{
			delete tile;
	}
}