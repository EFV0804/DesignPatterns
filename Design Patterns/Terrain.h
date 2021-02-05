#pragma once
#include<tuple>

using std::tuple;


class Terrain
{
public:
	Terrain(int pMoveCost, bool pIsWater, tuple<int, int, int> pColor) : moveCost(pMoveCost), isWater(pIsWater), color(pColor) {}
	int getMovementCost() const { return moveCost; }
	bool fIsWater() const { return isWater; }
	tuple<int, int, int> getColor() const { return color; }
private:
	int moveCost;
	bool isWater;
	tuple<int, int, int> color;
};