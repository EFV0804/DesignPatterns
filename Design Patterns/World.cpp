#include"World.h"

void World::generate()
{
	for (int i = 0; i < terrainTiles.size(); i++)
	{
		for (int j = 0; j < terrainTiles.size(); j++)
		{
			terrainTiles[i][j] = &grassTerrain;
		}
	}
}
void World::draw(Renderer* renderer)
{
	//loop through array terraintiles to draw
	//create rectangles based on grid coordinate array
}