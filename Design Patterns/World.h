#pragma once
#include<array>
#include"Terrain.h"
#include"Renderer.h"

using std::array;

class World
{
public:
	World() : grassTerrain(1, false, { 44, 115, 30 }),
		hillTerrain(3,false, { 112, 68, 18 }),
		riverTerrain(2, true, { 13, 51, 87 }) {}
	void generate();
	void draw(Renderer* renderer);

private:
	Terrain grassTerrain;
	Terrain hillTerrain;
	Terrain riverTerrain;
	array<array<Terrain*, 100>, 100 > terrainTiles;
};