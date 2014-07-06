#include "directionalmap.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

DirectionalMap::DirectionalMap(int width, int height, int length, int roughness, int windyness):Map(width, height)
{
	//Map::Map(width, height);
	srand(time(NULL));
	_length = length;
	_roughness = roughness;
	_windyness = windyness;
}

void DirectionalMap::generate()
{
	//Method from:
	//http://www.roguebasin.com/index.php?title=Basic_directional_dungeon_generation
	//we start with all walls:
	reset(1);
	//Pick a starting x,y:
	int currentX = _width / 2;
	int currentY = 1;
	_data[currentX][currentY] = 0;
	
}
