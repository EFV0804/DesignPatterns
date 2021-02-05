#include"World.h"
World::World()
{

}
void World::load(Renderer* renderer)
{
	grass = TileData(1, "grass.bmp", renderer);
	hill = TileData(3, "hill.bmp", renderer);
	river = TileData(2, "river.bmp", renderer);
	grid = generate();
}
array<array<Tile*, 32>, 24 > World::generate()
{
	srand((unsigned int)time(0));
	array<array<Tile*, 32>, 24 > grid;

	for (int i = 0; i < 24; i++)
	{
		for (int j = 0; j < 32; j++)
		{
			grid[i][j] = new Tile(chooseTile(), i, j);
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

	for (int i = 0;i < 24; ++i)
	{
		for (int j = 0; j < 32; ++j)
		{
			grid[i][j]->draw(renderer);
		}
	}
}